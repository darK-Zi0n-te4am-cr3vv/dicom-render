// USMutliFrameImageIOD.h: interface for the CUSMutliFrameImageIOD class.
//
//////////////////////////////////////////////////////////////////////
/* 
 * Permission is given by the author to freely redistribute and include
 * this code in any program.
 *
 * Copyright: (c) 2004, John Fitzgerald <dicomapi@yahoo.com>
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
#if !defined(AFX_USMUTLIFRAMEIMAGEIOD_H__4FD76F58_A0C1_42EA_BE1C_5A188FCF27D6__INCLUDED_)
#define AFX_USMUTLIFRAMEIMAGEIOD_H__4FD76F58_A0C1_42EA_BE1C_5A188FCF27D6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "UltraSoundIOD.h"
// A.7.4 US Multi-Frame Image IOD Module Table
class AFX_EXT_CLASS CUSMultiFrameImageIOD : public CUltraSoundIOD  
{
public:
	DECLARE_SERIAL( CUSMultiFrameImageIOD );
public:
	CUSMultiFrameImageIOD( );
	CUSMultiFrameImageIOD( CUSMultiFrameImageIOD& iod );
	CUSMultiFrameImageIOD( CDcmCompositeIOD& iod );
	virtual ~CUSMultiFrameImageIOD();
public:
	CUSMultiFrameImageIOD& operator=( CDcmCompositeIOD& iod )
	{
		CUltraSoundIOD::operator =( iod );
		return *this;
	};
	CUSMultiFrameImageIOD& operator=( CUSMultiFrameImageIOD& iod )
	{
		if ( this == &iod ) return *this;
		m_imageIE = iod.m_imageIE;
		CUltraSoundIOD::operator=( iod );
		return *this;
	};
	bool operator==( CUSMultiFrameImageIOD& iod )
	{
		if ( this == &iod ) return true; 
		return 	m_imageIE == iod.m_imageIE
		&& CUltraSoundIOD::operator==( iod );
	};
	bool operator!=( CUSMultiFrameImageIOD& iod )
	{
		return !operator==( iod );
	};
	void Serialize( CArchive& ar )
	{
		CUltraSoundIOD::Serialize( ar );
	}
protected:
	virtual void InitializeIod()
	{
		CUltraSoundIOD::InitializeIod();
		m_imageIE.AttachIE();
	};
public:
	class image_ie_us_multi m_imageIE;
};

#endif // !defined(AFX_USMUTLIFRAMEIMAGEIOD_H__4FD76F58_A0C1_42EA_BE1C_5A188FCF27D6__INCLUDED_)
