// CTImageIOD.h: interface for the CCTImageIOD class.
//
//////////////////////////////////////////////////////////////////////
/* 
 * Permission is given by the author to freely redistribute and include
 * this code in any program.
 *
 * Copyright: (c) 2005, John Fitzgerald <dicomapi@yahoo.com>
 *
 * COVERED CODE IS PROVIDED UNDER THIS LICENSE ON AN "AS IS" BASIS, WITHOUT WARRANTY
 * OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, WITHOUT LIMITATION, WARRANTIES
 * THAT THE COVERED CODE IS FREE OF DEFECTS, MERCHANTABLE, FIT FOR A PARTICULAR PURPOSE
 * OR NON-INFRINGING. THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE COVERED
 * CODE IS WITH YOU. SHOULD ANY COVERED CODE PROVE DEFECTIVE IN ANY RESPECT, YOU (NOT
 * THE INITIAL DEVELOPER OR ANY OTHER CONTRIBUTOR) ASSUME THE COST OF ANY NECESSARY
 * SERVICING, REPAIR OR CORRECTION. THIS DISCLAIMER OF WARRANTY CONSTITUTES AN ESSENTIAL
 * PART OF THIS LICENSE. NO USE OF ANY COVERED CODE IS AUTHORIZED HEREUNDER EXCEPT UNDER
 * THIS DISCLAIMER.
 *
 * Use at your own risk!
 * ==========================================================
 */

#if !defined(AFX_CTIMAGEIOD_H__31095900_B8E6_4AB3_8D84_1275F5341A0D__INCLUDED_)
#define AFX_CTIMAGEIOD_H__31095900_B8E6_4AB3_8D84_1275F5341A0D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmCompositeIEIOD.h"

class AFX_EXT_CLASS CCTImageIOD : public CDcmCompositeIEIOD  
{
public:
	DECLARE_SERIAL( CCTImageIOD );
public:
	CCTImageIOD();
	CCTImageIOD(CCTImageIOD& iod);
	CCTImageIOD(CDcmCompositeIOD& iod);
// The Computed Tomography (CT) Image Information Object Definition (IOD) specifies an image
// that has been created by a computed tomography imaging device.
	~CCTImageIOD();
public:
	CCTImageIOD& operator=( CDcmCompositeIOD& iod )
	{
		CDcmCompositeIEIOD::operator =( iod );
		return *this;
	};
	CCTImageIOD& operator=( CCTImageIOD& iod )
	{
		if ( this == &iod ) return *this;
		m_frameIE = iod.m_frameIE;
		m_imageIE = iod.m_imageIE;
		CDcmCompositeIEIOD::operator=( iod );
		return *this;
	};
	bool operator==( CCTImageIOD& iod )
	{
		if ( this == &iod ) return true; 
		return m_frameIE == iod.m_frameIE 
		&& m_imageIE == iod.m_imageIE
		&& CDcmCompositeIEIOD::operator==( iod );
	};
	bool operator!=( CCTImageIOD& iod )
	{
		return !operator==( iod );
	};
protected:
	virtual void InitializeIod()
	{
		CDcmCompositeIEIOD::InitializeIod();
		m_frameIE.AttachIE();
		m_imageIE.AttachIE();
	};
public:
	void Serialize( CArchive& ar )
	{
		CDcmCompositeIEIOD::Serialize( ar );
	};
public:
// Frame of Reference C.7.4.1 M
	class composite_frameref_ie m_frameIE;
// General Image C.7.6.1 M
// Image Plane C.7.6.2 M
// Image Pixel C.7.6.3 M
// Contrast/bolus C.7.6.4 C - Required if contrast media was
// used in this image
// CT Image C.8.2.1 M
// Overlay Plane C.9.2 U
// VOI LUT C.11.2 U
// SOP Common C.12.1 M
	class image_ie_ct m_imageIE;
};
#endif // !defined(AFX_CTIMAGEIOD_H__31095900_B8E6_4AB3_8D84_1275F5341A0D__INCLUDED_)
