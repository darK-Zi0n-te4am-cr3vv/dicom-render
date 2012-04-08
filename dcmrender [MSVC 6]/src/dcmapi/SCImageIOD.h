// SCImageIOD.h: interface for the CSCImageIOD class.
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
#if !defined(AFX_SCIMAGEIOD_H__3C532A37_CA7E_4820_9858_1D76FD21CEA4__INCLUDED_)
#define AFX_SCIMAGEIOD_H__3C532A37_CA7E_4820_9858_1D76FD21CEA4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "SecondaryCaptureIOD.h"

class AFX_EXT_CLASS CSCImageIOD : public CSecondaryCaptureIOD  
{
public:
	DECLARE_SERIAL( CSCImageIOD );
public:
	CSCImageIOD();
	CSCImageIOD( CSCImageIOD& iod );
	CSCImageIOD( CDcmCompositeIOD& iod );
	virtual ~CSCImageIOD();
public:
	CSCImageIOD& operator=( CDcmCompositeIOD& iod )
	{
		CSecondaryCaptureIOD::operator =( iod );
		return *this;
	};
	CSCImageIOD& operator=( CSCImageIOD& iod )
	{
		if ( this == &iod ) return *this;
		m_imageIE = iod.m_imageIE;
		CSecondaryCaptureIOD::operator=( iod );
		return *this;
	};
	bool operator==( CSCImageIOD& iod )
	{
		if ( this == &iod ) return true; 
		return 	m_imageIE == iod.m_imageIE
		&& CSecondaryCaptureIOD::operator==( iod );
	};
	bool operator!=( CSCImageIOD& iod )
	{
		return !operator==( iod );
	};
protected:
	void CSCImageIOD::InitializeIod()
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
	class image_ie_sc m_imageIE;
};

#endif // !defined(AFX_SCIMAGEIOD_H__3C532A37_CA7E_4820_9858_1D76FD21CEA4__INCLUDED_)
