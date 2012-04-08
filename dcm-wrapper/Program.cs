using System;
using System.Drawing.Imaging;
using System.IO;
using System.Linq;

namespace DcmWrapper
{
    class Program
    {
        static void Main(string[] args)
        {
            foreach (var fname in Directory.GetFiles("./", "*.dic").Select(Path.GetFileName))
            {
                using (var render = DicomRender.FromFile(fname))
                {
                    for (var i = 0; i < render.ImagesCount; i++)
                    {
                        var bmpName = string.Format(@"image_{1}_{0}.png", i, fname);
                        render.RenderImage(i).Save(bmpName, ImageFormat.Png);
                    }
                }
            }
        }
    }
}
