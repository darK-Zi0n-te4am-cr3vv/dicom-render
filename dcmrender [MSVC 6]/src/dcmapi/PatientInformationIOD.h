// PatientInformationIOD.h: interface for the CPatientInformationIOD class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PATIENTINFORMATIONIOD_H__FDE15015_3A84_4338_98B4_355444BAAB6B__INCLUDED_)
#define AFX_PATIENTINFORMATIONIOD_H__FDE15015_3A84_4338_98B4_355444BAAB6B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmNormalizedIOD.h"
#include "DcmPatientRelationshipModule.h"
#include "DcmPatientIdentificationModule.h"
#include "DcmPatientDemographicModule.h"
#include "DcmPatientMedicalModule.h"
class AFX_EXT_CLASS CPatientInformationIOD : public CDcmNormalizedIOD  
{
public:
	DECLARE_SERIAL( CPatientInformationIOD );
public:
	void Serialize( CArchive& ar );
	CPatientInformationIOD& operator>>( CDcmModule& module );
	CPatientInformationIOD& operator<<( CDcmModule& module );
	bool operator==( CPatientInformationIOD& iod );
	bool operator!=( CPatientInformationIOD& iod );
	CPatientInformationIOD& operator=( CPatientInformationIOD& iod );
public:
	CPatientInformationIOD();
	virtual ~CPatientInformationIOD();
	CDcmPatientRelationshipModule m_Relationship;
	CDcmPatientIdentificationModule m_Identification;
	CDcmPatientDemographicModule  m_Demographic;
	CDcmPatientMedicalModule m_Medical;
};

#endif // !defined(AFX_PATIENTINFORMATIONIOD_H__FDE15015_3A84_4338_98B4_355444BAAB6B__INCLUDED_)
