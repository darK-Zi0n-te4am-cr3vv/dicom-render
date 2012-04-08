// MRImageIOD.h: interface for the CMRImageIOD class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MRIMAGEIOD_H__BC520909_2477_4469_930F_7CA8EF1DAE38__INCLUDED_)
#define AFX_MRIMAGEIOD_H__BC520909_2477_4469_930F_7CA8EF1DAE38__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmCompositeIEIOD.h"

class AFX_EXT_CLASS CMRImageIOD : public CDcmCompositeIEIOD  
{
public:
	DECLARE_SERIAL( CMRImageIOD );
public:
	CMRImageIOD();
	CMRImageIOD(CMRImageIOD& iod);
	CMRImageIOD( CDcmCompositeIOD& iod );
// The Magnetic Resonance (MR) Image Information Object Definition (IOD) specifies an image that
// has been created by a magnetic resonance imaging device.
	~CMRImageIOD();
public:
	CMRImageIOD& CMRImageIOD::operator=( CDcmCompositeIOD& iod )
	{
		CDcmCompositeIEIOD::operator =( iod );
		return *this;
	};
	CMRImageIOD& CMRImageIOD::operator=( CMRImageIOD& iod )
	{
		if ( this == &iod ) return *this;
		m_frameIE = iod.m_frameIE;
		m_imageIE = iod.m_imageIE;
		CDcmCompositeIEIOD::operator=( iod );
		return *this;
	};
	bool CMRImageIOD::operator==( CMRImageIOD& iod )
	{
		if ( this == &iod ) return true; 
		return m_frameIE == iod.m_frameIE 
		&& m_imageIE == iod.m_imageIE
		&& CDcmCompositeIEIOD::operator==( iod );
	};
	bool CMRImageIOD::operator!=( CMRImageIOD& iod )
	{
		return !operator==( iod );
	};
protected:
	virtual void CMRImageIOD::InitializeIod()
	{
		CDcmCompositeIEIOD::InitializeIod();
		m_frameIE.AttachIE();
		m_imageIE.AttachIE();
	};
public:
	void CMRImageIOD::Serialize( CArchive& ar )
	{
		CDcmCompositeIEIOD::Serialize( ar );
	};
public:
// Frame of Reference C.7.4.1 M
	class composite_frameref_ie m_frameIE;
// General Image C.7.6.1 M
// Image Plane C.7.6.2 M
// Image Pixel C.7.6.3 M
// Contrast/bolus C.7.6.4 C - Required if contrast media was used in this image
// MR Image C.8.3.1 M
// Overlay Plane C.9.2 U
// VOI LUT C.11.2 U
// SOP Common C.12.1 M
	class image_ie_mr m_imageIE;
};

#endif // !defined(AFX_MRIMAGEIOD_H__BC520909_2477_4469_930F_7CA8EF1DAE38__INCLUDED_)
