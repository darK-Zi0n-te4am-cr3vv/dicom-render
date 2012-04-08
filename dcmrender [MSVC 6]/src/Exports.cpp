#include "StdAfx.h"

#include "DicomRender.h"


#define DLLEXPORT extern "C" __declspec(dllexport)
#define STDCALL __stdcall

#define CTX ((CDicomRender*)ctx)

DLLEXPORT DWORD STDCALL DcmCreateRenderCtxFromFile(const char* fname)
{
	DWORD ctx = (DWORD)(new CDicomRender);

	CTX->Load(fname);

	return ctx;
}


DLLEXPORT DWORD STDCALL DcmCreateRenderCtxFromBuffer(BYTE* buffer, DWORD len)
{
	DWORD ctx = (DWORD)(new CDicomRender);

	CTX->Load(buffer, len);

	return ctx;
}

DLLEXPORT VOID STDCALL DcmFreeContext(DWORD ctx)
{
	delete CTX;
}

DLLEXPORT DWORD STDCALL DcmGetImagesCount(DWORD ctx)
{
	return CTX->GetImagesCount();
}

DLLEXPORT DWORD STDCALL DcmGetImageWidth(DWORD ctx, DWORD imgIndex)
{
	return CTX->GetImageWidth(imgIndex);
}

DLLEXPORT DWORD STDCALL DcmGetImageHeight(DWORD ctx, DWORD imgIndex)
{
	return CTX->GetImageHeight(imgIndex);
}


DLLEXPORT BOOL STDCALL DcmRenderDicom(DWORD ctx, DWORD imgIndex, HDC hdc)
{
	return CTX->RenderToHdc(imgIndex, hdc);
}
