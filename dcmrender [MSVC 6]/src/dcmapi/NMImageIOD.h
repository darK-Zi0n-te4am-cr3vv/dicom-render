// NMImageIOD.h: interface for the CNMImageIOD class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_NMIMAGEIOD_H__67BA2B89_9EDC_4553_BCF1_7FE2A7BB149F__INCLUDED_)
#define AFX_NMIMAGEIOD_H__67BA2B89_9EDC_4553_BCF1_7FE2A7BB149F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmDerivedIOD.h"

class AFX_EXT_CLASS CNMImageIOD : public CDcmCompositeIE  
{
public:
	DECLARE_SERIAL( CNMImageIOD );
public:
	CNMImageIOD( );
	CNMImageIOD( CNMImageIOD& iod );
	CNMImageIOD( CDcmCompositeIOD& iod );
// A.5.1 NM Image IOD Description
// The Nuclear Medicine (NM) Image Information Object Definition (IOD) specifies an image that
// has been created by a nuclear medicine imaging device. This includes data created by external
// detection devices that create images of the distribution of administered radioactive materials in
// the body. Depending on the specific radio pharmaceutical administered and the particular
// imaging procedure performed, problems involving changes in metabolism, function, or physiology
// can be investigated and various regional pathologies can be studied.
	virtual ~CNMImageIOD();
public:
	CNMImageIOD& operator=( CDcmCompositeIOD& iod )
	{
		CDcmCompositeIE::operator=( iod );
		return *this;
	};
	CNMImageIOD& CNMImageIOD::operator=( CNMImageIOD& iod )
	{
		if ( this == &iod ) return *this;
		m_patientIE = iod.m_patientIE;
		m_studyIE = iod.m_studyIE;
		m_seriesIE = iod.m_seriesIE;
		m_frameIE = iod.m_frameIE;
		m_equipmentIE = iod.m_equipmentIE;
		m_imageIE = iod.m_imageIE;
		CDcmCompositeIE::operator=( iod );
		return *this;
	};
	bool CNMImageIOD::operator==( CNMImageIOD& iod )
	{
		if ( this == &iod ) return true; 
		return 	m_patientIE == iod.m_patientIE
		&& m_studyIE == iod.m_studyIE
		&& m_seriesIE == iod.m_seriesIE
		&& m_frameIE == iod.m_frameIE
		&& m_equipmentIE == iod.m_equipmentIE
		&& m_imageIE == iod.m_imageIE
		&& CDcmCompositeIE::operator==( iod );
	};
	bool CNMImageIOD::operator!=( CNMImageIOD& iod )
	{
		return !operator==( iod );
	};
public:
	void CNMImageIOD::Serialize( CArchive& ar )
	{
		CDcmCompositeIE::Serialize( ar );
	};
protected:
	virtual void CNMImageIOD::InitializeIod()
	{
// Set the parent iod for each module
		CDcmCompositeIE::InitializeIod();
		m_patientIE.AttachIE();
		m_studyIE.AttachIE();
		m_seriesIE.AttachIE();
		m_frameIE.AttachIE();
		m_equipmentIE.AttachIE();
		m_imageIE.AttachIE();
	};
public:
// Patient C.7.1.1 M
// Clinical Trial Subject C.7.1.3 U
	class composite_patient_ie m_patientIE;
// General Study C.7.2.1 M
// Patient Study C.7.2.2 U
// Clinical Trial Study C.7.2.3 U
	class composite_study_ie m_studyIE;
// General Series C.7.3.1 M
// Clinical Trial Series C.7.3.2 U
// NM/PET Patient Orientation C.8.4.6 M
	class series_ie_nm m_seriesIE;
// Frame of Reference C.7.4.1 U
	class composite_frameref_ie m_frameIE;
// General Equipment C.7.5.1 M
	class composite_equipment_ie m_equipmentIE;
// General Image C.7.6.1 M    Image Pixel C.7.6.3 M
// NM Image Pixel C.8.4.7 M   Multi-frame C.7.6.6 M
// NM Multi-frame C.8.4.8 M   NM Image C.8.4.9 M
// NM Isotope C.8.4.10 M      NM Detector C.8.4.11 M
// NM TOMO Acquisition C.8.4.12 C - Required if Image Type
// (0008,0008) Value 3 is TOMO, GATED TOMO, RECON TOMO or RECON GATED TOMO
// NM Multi-gated Acquisition C.8.4.13 C - Required if Image Type
// (0008,0008) Value 3 is GATED, GATED TOMO, or RECON GATED TOMO
// NM Phase C.8.4.14 C - Required if Image Type (0008,0008) Value 3 is DYNAMIC
// NM Reconstruction C.8.4.15 C - Required if Image Type (0008,0008) Value 3 is RECON
// TOMO or RECON GATED TOMO
// Overlay Plane C.9.2 U  Multi-frame Overlay C.9.3 U
// Curve C.10.2 U VOI LUT C.11.2 U
// SOP Common C.12.1 M
	class image_ie_nm m_imageIE;
};

#endif // !defined(AFX_NMIMAGEIOD_H__67BA2B89_9EDC_4553_BCF1_7FE2A7BB149F__INCLUDED_)
