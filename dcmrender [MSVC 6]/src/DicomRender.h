// DicomRender.h: interface for the CDicomRender class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DICOMRENDER_H__3546C7DD_36C1_4E7D_ABAB_93215721F983__INCLUDED_)
#define AFX_DICOMRENDER_H__3546C7DD_36C1_4E7D_ABAB_93215721F983__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "./dcmapi/DcmCompositeIOD.h"
#include "./dcmapi/DcmImagePixelModule.h"
#include "./dcmapi/DcmMetaFileInformation.h"
#include "./dcmapi/DcmMultiFrameModule.h"
#include "./dcmapi/DcmVioLutModule.h"
#include "./dcmapi/DcmModalityLUTModule.h"

#include "./CxImage/ximage.h"



class CDicomRender  
{
public:
	int GetImageWidth(DWORD imgIndex);
	int GetImageHeight(DWORD imgIndex);

	BOOL RenderToHdc(DWORD imgIndex, HDC dc);
	DWORD GetImagesCount();
	
	void Load(const char *fname);
	void Load(BYTE *buffer, DWORD len);

	CDicomRender();
	virtual ~CDicomRender();

private:
	void Load(CFile *file);
	CDcmCompositeIOD m_iod;
	CPtrArray m_ImagePixelData, m_Images;

	void ProcessImagePixelModule();
	void ApplyTransforms( CDcmImagePixelModule& ipm, CDcmVioLutModule& vlm,
		CDcmModalityLUTModule& mlm, CByteArray& PixelData );

	CByteArray *MakeBitmap(CByteArray* frame, int Width, int Height, int BitsPerPixel);
};

#endif // !defined(AFX_DICOMRENDER_H__3546C7DD_36C1_4E7D_ABAB_93215721F983__INCLUDED_)
