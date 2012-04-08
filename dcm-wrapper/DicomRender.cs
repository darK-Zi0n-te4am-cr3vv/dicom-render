using System;
using System.Drawing;
using System.IO;
using System.Runtime.InteropServices;

namespace DcmWrapper
{
    internal class DicomRender : IDisposable
    {
        #region UnsafeNativeMethods

        private static class UnsafeNativeMethods
        {
            private const string DICOM_DLL = "dcmrender.dll";

            [DllImport(DICOM_DLL)]
            [Obsolete("It's not recomended to use this method, use DcmCreateRenderCtxFromBuffer instead.")]
            [return: MarshalAs(UnmanagedType.U4)]
            // ReSharper disable UnusedMember.Local
            public static extern uint DcmCreateRenderCtxFromFile(string fname);

            // ReSharper restore UnusedMember.Local

            [DllImport(DICOM_DLL)]
            [return: MarshalAs(UnmanagedType.U4)]
            public static extern unsafe uint DcmCreateRenderCtxFromBuffer(byte* buffer,
                                                                          [MarshalAs(UnmanagedType.U4)] uint length);

            [DllImport(DICOM_DLL)]
            public static extern void DcmFreeContext([MarshalAs(UnmanagedType.U4)] uint ctx);

            [DllImport(DICOM_DLL)]
            [return: MarshalAs(UnmanagedType.U4)]
            public static extern uint DcmGetImagesCount([MarshalAs(UnmanagedType.U4)] uint ctx);

            [DllImport(DICOM_DLL)]
            [return: MarshalAs(UnmanagedType.U4)]
            public static extern uint DcmGetImageWidth([MarshalAs(UnmanagedType.U4)] uint ctx,
                                                       [MarshalAs(UnmanagedType.U4)] uint imgIndex);

            [DllImport(DICOM_DLL)]
            [return: MarshalAs(UnmanagedType.U4)]
            public static extern uint DcmGetImageHeight([MarshalAs(UnmanagedType.U4)] uint ctx,
                                                        [MarshalAs(UnmanagedType.U4)] uint imgIndex);

            [DllImport(DICOM_DLL)]
            [return: MarshalAs(UnmanagedType.Bool)]
            public static extern bool DcmRenderDicom([MarshalAs(UnmanagedType.U4)] uint ctx,
                                                     [MarshalAs(UnmanagedType.U4)] uint imgIndex,
                                                     IntPtr hdc);
        }

        #endregion

        private uint _dcmContext;

        private DicomRender() {}

        public static unsafe DicomRender FromBuffer(byte[] buffer)
        {
            if (buffer == null) throw new ArgumentNullException("buffer");
            if (buffer.Length == 0) throw new ArgumentException("buffer is empty");

            uint ctx;
            fixed (byte* buf = buffer)
            {
                ctx = UnsafeNativeMethods.DcmCreateRenderCtxFromBuffer(buf, (uint) buffer.Length);
            }

            if (ctx == 0) throw new DicomRenderException("Context creation error");

            return new DicomRender
                   {
                       _dcmContext = ctx,
                       ImagesCount = (int) UnsafeNativeMethods.DcmGetImagesCount(ctx)
                   };
        }

        public static DicomRender FromFile(string fname)
        {
            return FromBuffer(File.ReadAllBytes(fname));
        }

        public int ImagesCount { get; private set; }

        public Size GetImageSize(int imgIndex)
        {
            if (imgIndex < 0 || imgIndex >= ImagesCount) throw new ArgumentException("Invalid image index");
            return new Size((int) UnsafeNativeMethods.DcmGetImageWidth(_dcmContext, (uint) imgIndex),
                            (int) UnsafeNativeMethods.DcmGetImageHeight(_dcmContext, (uint) imgIndex));
        }

        public Image RenderImage(int imgIndex)
        {
            if (imgIndex < 0 || imgIndex >= ImagesCount) throw new ArgumentException("Invalid image index");

            var imgSize = GetImageSize(imgIndex);
            var image = new Bitmap(imgSize.Width, imgSize.Height);
            using (var graphics = Graphics.FromImage(image))
            {
                if (!UnsafeNativeMethods.DcmRenderDicom(_dcmContext, (uint) imgIndex, graphics.GetHdc()))
                    throw new DicomRenderException("Dicom rendering error");
            }

            return image;
        }

        public void Dispose()
        {
            if (_dcmContext == 0) return;

            UnsafeNativeMethods.DcmFreeContext(_dcmContext);
        }
    }
}