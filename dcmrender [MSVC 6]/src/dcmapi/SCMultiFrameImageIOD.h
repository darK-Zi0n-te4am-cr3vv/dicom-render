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


// SCMultiFrameImageIOD.h: interface for the CSCMultiFrameImageIOD class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCMULTIFRAMEIMAGEIOD_H__5F45E8D9_DAF4_4B6E_92DD_B0384922AA35__INCLUDED_)
#define AFX_SCMULTIFRAMEIMAGEIOD_H__5F45E8D9_DAF4_4B6E_92DD_B0384922AA35__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "SecondaryCaptureIOD.h"

class AFX_EXT_CLASS CSCMultiFrameImageIOD : public CSecondaryCaptureIOD  
{
public:
	DECLARE_SERIAL( CSCMultiFrameImageIOD );
public:
	CSCMultiFrameImageIOD( );
	CSCMultiFrameImageIOD( CSCMultiFrameImageIOD& iod );
	CSCMultiFrameImageIOD( CDcmCompositeIOD& iod );
	virtual ~CSCMultiFrameImageIOD();
public:
	CSCMultiFrameImageIOD& operator=( CDcmCompositeIOD& iod )
	{
		CSecondaryCaptureIOD::operator =( iod );
		return *this;
	};
	CSCMultiFrameImageIOD& operator=( CSCMultiFrameImageIOD& iod )
	{
		if ( this == &iod ) return *this;
		m_imageIE = iod.m_imageIE;
		CSecondaryCaptureIOD::operator=( iod );
		return *this;
	};
	bool operator==( CSCMultiFrameImageIOD& iod )
	{
		if ( this == &iod ) return true; 
		return m_imageIE == iod.m_imageIE
		&& CSecondaryCaptureIOD::operator==( iod );
	};
	bool operator!=( CSCMultiFrameImageIOD& iod )
	{
		return !operator==( iod );
	};
protected:
	virtual void InitializeIod()
	{
		CSecondaryCaptureIOD::InitializeIod();
		m_imageIE.AttachIE();
	};
public:
	void Serialize( CArchive& ar )
	{
		CSecondaryCaptureIOD::Serialize( ar );
	};
public:
	class image_ie_sc_multi m_imageIE;
};

#endif // !defined(AFX_SCMULTIFRAMEIMAGEIOD_H__5F45E8D9_DAF4_4B6E_92DD_B0384922AA35__INCLUDED_)
