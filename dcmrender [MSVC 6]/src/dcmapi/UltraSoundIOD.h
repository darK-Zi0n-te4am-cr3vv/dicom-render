// UltraSoundIOD.h: interface for the CUltraSoundIOD class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ULTRASOUNDIOD_H__75A71501_ADB8_4EA6_AC39_79B4C58D2AE9__INCLUDED_)
#define AFX_ULTRASOUNDIOD_H__75A71501_ADB8_4EA6_AC39_79B4C58D2AE9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmDerivedIOD.h"
//#define CURVE_IE_SOP_COMMON  1

class AFX_EXT_CLASS CUltraSoundIOD : public CDcmCompositeIE  
{
public:
	DECLARE_SERIAL( CUltraSoundIOD );
public:
	CUltraSoundIOD( );
	CUltraSoundIOD( CUltraSoundIOD& iod );
	CUltraSoundIOD( CDcmCompositeIOD& iod );
	virtual ~CUltraSoundIOD();
public:
	CUltraSoundIOD& operator=( CDcmCompositeIOD& iod )
	{
		CDcmCompositeIE::operator =( iod );
		return *this;
	};
	CUltraSoundIOD& operator=( CUltraSoundIOD& iod )
	{
		if ( this == &iod ) return *this;
		m_patientIE = iod.m_patientIE;
		m_equipmentIE = iod.m_equipmentIE;
		m_studyIE = iod.m_studyIE;
		m_seriesIE = iod.m_seriesIE;
		m_frameIE = iod.m_frameIE;
		m_curveIE = iod.m_curveIE;
		CDcmCompositeIE::operator=( iod );
		return *this;
	};
	bool operator==( CUltraSoundIOD& iod )
	{
		if ( this == &iod ) return true; 
		return 	m_patientIE == iod.m_patientIE
		&& m_equipmentIE == iod.m_equipmentIE
		&& m_studyIE == iod.m_studyIE
		&&	m_seriesIE == iod.m_seriesIE
		&&	m_frameIE == iod.m_frameIE
		&&	m_curveIE == iod.m_curveIE
		&& CDcmCompositeIE::operator==( iod );
	};
	bool operator!=( CUltraSoundIOD& iod )
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
		m_frameIE.AttachIE();
		m_curveIE.AttachIE();
	};
public:
	class composite_patient_ie m_patientIE;
	class composite_study_ie m_studyIE;
	class composite_series_ie m_seriesIE;
	class composite_equipment_ie m_equipmentIE;
	class frame_ie_us m_frameIE;
	class curve_ie_us m_curveIE;
};

#endif // !defined(AFX_ULTRASOUNDIOD_H__75A71501_ADB8_4EA6_AC39_79B4C58D2AE9__INCLUDED_)
