// CRImageIOD.h: interface for the CCRImageIOD class.
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

#if !defined(AFX_CRIMAGEIOD_H__29588DD7_64F7_4E47_AC1E_56E4F4D2B52E__INCLUDED_)
#define AFX_CRIMAGEIOD_H__29588DD7_64F7_4E47_AC1E_56E4F4D2B52E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmDerivedIOD.h"
class AFX_EXT_CLASS CCRImageIOD : public CDcmCompositeIE  
{
public:
	DECLARE_SERIAL( CCRImageIOD );
public:
	CCRImageIOD( );
	CCRImageIOD( CCRImageIOD& iod );
	CCRImageIOD( CDcmCompositeIOD& iod );
// A.2.1 CR Image IOD Description
// The Computed Radiography (CR) Image Information Object Definition specifies an image that
// has been created by a computed radiography imaging device.
	virtual ~CCRImageIOD();
public:
	CCRImageIOD& operator=( CDcmCompositeIOD& iod )
	{
		CDcmCompositeIE::operator =( iod );
		return *this;
	};
	CCRImageIOD& operator=( CCRImageIOD& iod )
	{
		if ( this == &iod ) return *this;
		m_patientIE = iod.m_patientIE;
		m_equipmentIE = iod.m_equipmentIE;
		m_studyIE = iod.m_studyIE;
		m_seriesIE = iod.m_seriesIE;
		m_imageIE = iod.m_imageIE;
		CDcmCompositeIE::operator=( iod );
		return *this;
	};
	bool CCRImageIOD::operator==( CCRImageIOD& iod )
	{
		if ( this == &iod ) return true; 
		return 	m_patientIE == iod.m_patientIE
		&& m_equipmentIE == iod.m_equipmentIE
		&& m_studyIE == iod.m_studyIE
		&&	m_seriesIE == iod.m_seriesIE
		&& m_imageIE == iod.m_imageIE
		&& CDcmCompositeIE::operator==( iod );
	};
	bool CCRImageIOD::operator!=( CCRImageIOD& iod )
	{
		return !operator==( iod );
	};
protected:
	virtual void CCRImageIOD::InitializeIod()
	{
		CDcmCompositeIE::InitializeIod();
		m_patientIE.AttachIE();
		m_studyIE.AttachIE();
		m_equipmentIE.AttachIE();
		m_seriesIE.AttachIE();
		m_imageIE.AttachIE();
	};
public:
	void CCRImageIOD::Serialize( CArchive& ar )
	{
		CDcmCompositeIE::Serialize( ar );
	};
public:
// Patient C.7.1.1 M
// Clinical Trial Subject C.7.1.3 U
	class composite_patient_ie m_patientIE;
// General Equipment C.7.5.1 M
	class composite_equipment_ie m_equipmentIE;
// General Study C.7.2.1 M
// Patient Study C.7.2.2 U
// Clinical Trial Study C.7.2.3 U
	class composite_study_ie m_studyIE;
// General Series C.7.3.1 M
// CR Series C.8.1.1 M
// Clinical Trial Series C.7.3.2 U
	class series_ie_cr m_seriesIE;
// General Image C.7.6.1 M
// Image Pixel C.7.6.3 M
// Contrast/bolus C.7.6.4 C - Required if contrast media was used in this image
// CR Image C.8.1.2 M
// Overlay Plane C.9.2 U
// Curve C.10.2 U
// Modality LUT C.11.1 U
// VOILUT C.11.2 U
// SOP Common C.12.1 M
	class image_ie_cr m_imageIE;
};

#endif // !defined(AFX_CRIMAGEIOD_H__29588DD7_64F7_4E47_AC1E_56E4F4D2B52E__INCLUDED_)
