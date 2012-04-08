using System;
using System.Runtime.Serialization;

namespace DcmWrapper
{
    [Serializable]
    public class DicomRenderException : Exception
    {
        public DicomRenderException() { }
        public DicomRenderException(string message) : base(message) { }
        public DicomRenderException(string message, Exception inner) : base(message, inner) { }

        protected DicomRenderException(
            SerializationInfo info,
            StreamingContext context)
            : base(info, context) { }
    }
}