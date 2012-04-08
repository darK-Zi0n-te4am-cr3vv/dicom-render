// DcmCompositeIEIOD.h: interface for the CDcmCompositeIEIOD class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMCOMPOSITEIEIOD_H__86FCE9B3_14CE_4BF4_A83C_1DD2083EB6C1__INCLUDED_)
#define AFX_DCMCOMPOSITEIEIOD_H__86FCE9B3_14CE_4BF4_A83C_1DD2083EB6C1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmDerivedIOD.h"

class AFX_EXT_CLASS CDcmCompositeIEIOD : public CDcmCompositeIE  
{
public:
	DECLARE_SERIAL( CDcmCompositeIEIOD );
public:
	CDcmCompositeIEIOD();
	virtual ~CDcmCompositeIEIOD();
	CDcmCompositeIEIOD( CDcmCompositeIEIOD& iod );
	CDcmCompositeIEIOD( CDcmCompositeIOD& iod );
public:
	CDcmCompositeIEIOD& operator=( CDcmCompositeIOD& iod )
	{
		CDcmCompositeIE::operator=( iod );
		return *this;
	};
	CDcmCompositeIEIOD& operator=( CDcmCompositeIEIOD& iod )
	{
		if ( this == &iod ) return *this;
		m_patientIE = iod.m_patientIE;
		m_studyIE = iod.m_studyIE;
		m_seriesIE = iod.m_seriesIE;
		m_equipmentIE = iod.m_equipmentIE;
		CDcmCompositeIE::operator=( iod );
		return *this;
	};
	bool operator==( CDcmCompositeIEIOD& iod )
	{
		if ( this == &iod ) return true; 
		return 	m_patientIE == iod.m_patientIE
		&& m_studyIE == iod.m_studyIE
		&& m_seriesIE == iod.m_seriesIE
		&& m_equipmentIE == iod.m_equipmentIE
		&& CDcmCompositeIE::operator==( iod );
	};
	bool operator!=( CDcmCompositeIEIOD& iod )
	{
		return !CDcmCompositeIEIOD::operator==( iod );
	};
protected:
	virtual void CDcmCompositeIEIOD::InitializeIod()
	{
		CDcmCompositeIE::InitializeIod();
		m_patientIE.AttachIE();
		m_studyIE.AttachIE();
		m_equipmentIE.AttachIE();
		m_seriesIE.AttachIE();
	};
public:
	void Serialize( CArchive& ar )
	{
		CDcmCompositeIE::Serialize( ar );
	};
public:
// Patient C.7.1.1
// Clinical Trial Subject C.7.1.3
	class composite_patient_ie m_patientIE;
// General Study C.7.2.1
// Patient Study C.7.2.2
// Clinical Trial Study C.7.2.3
	class composite_study_ie m_studyIE;
// General Series C.7.3.1
// Clinical Trial Series C.7.3.2
	class composite_series_ie m_seriesIE;
// General Equipment C.7.5.1
	class composite_equipment_ie m_equipmentIE;
};

#endif // !defined(AFX_DCMCOMPOSITEIEIOD_H__86FCE9B3_14CE_4BF4_A83C_1DD2083EB6C1__INCLUDED_)
