
// SCImageIOD.h: interface for the CSCImageIOD class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCIMAGEIOD_H__CAC48818_164B_43CD_B10F_9FB18E352D0A__INCLUDED_)
#define AFX_SCIMAGEIOD_H__CAC48818_164B_43CD_B10F_9FB18E352D0A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmDerivedIOD.h"

class AFX_EXT_CLASS CSecondaryCaptureIOD : public CDcmCompositeIE  
{
public:
	DECLARE_SERIAL( CSecondaryCaptureIOD );
public:
	CSecondaryCaptureIOD( );
	CSecondaryCaptureIOD( CSecondaryCaptureIOD& iod );
	CSecondaryCaptureIOD( CDcmCompositeIOD& iod );
	virtual ~CSecondaryCaptureIOD();
public:
	CSecondaryCaptureIOD& operator=( CDcmCompositeIOD& iod )
	{
		CDcmCompositeIE::operator =( iod );
		return *this;
	};
	CSecondaryCaptureIOD& operator=( CSecondaryCaptureIOD& iod )
	{
		if ( this == &iod ) return *this;
		m_patientIE = iod.m_patientIE;
		m_equipmentIE = iod.m_equipmentIE;
		m_studyIE = iod.m_studyIE;
		m_seriesIE = iod.m_seriesIE;
		CDcmCompositeIE::operator=( iod );
		return *this;
	};
	bool CSecondaryCaptureIOD::operator==( CSecondaryCaptureIOD& iod )
	{
		if ( this == &iod ) return true; 
		return 	m_patientIE == iod.m_patientIE
		&& m_equipmentIE == iod.m_equipmentIE
		&& m_studyIE == iod.m_studyIE
		&&	m_seriesIE == iod.m_seriesIE
		&& CDcmCompositeIE::operator==( iod );
	};
	bool CSecondaryCaptureIOD::operator!=( CSecondaryCaptureIOD& iod )
	{
		return !operator==( iod );
	};
protected:
	virtual void InitializeIod()
	{
		CDcmCompositeIE::InitializeIod();
		m_patientIE.AttachIE();
		m_studyIE.AttachIE();
		m_equipmentIE.AttachIE();
		m_seriesIE.AttachIE();
	};
public:
	class composite_patient_ie m_patientIE;
	class composite_study_ie m_studyIE;
	class composite_series_ie m_seriesIE;
	class equipment_ie_sc m_equipmentIE;
};

#endif // !defined(AFX_SCIMAGEIOD_H__CAC48818_164B_43CD_B10F_9FB18E352D0A__INCLUDED_)
