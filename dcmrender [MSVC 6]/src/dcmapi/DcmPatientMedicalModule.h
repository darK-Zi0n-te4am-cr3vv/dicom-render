// DcmPatientMedicalModule.h: interface for the CDcmPatientMedicalModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMPATIENTMEDICALMODULE_H__7785361E_A9F5_45D7_9CFB_97990BB99FDE__INCLUDED_)
#define AFX_DCMPATIENTMEDICALMODULE_H__7785361E_A9F5_45D7_9CFB_97990BB99FDE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmPatientMedicalModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmPatientMedicalModule );
public:
	CDcmPatientMedicalModule();
	virtual ~CDcmPatientMedicalModule();
public:
	CStringArray& MedicalAlerts();
	void MedicalAlerts(const CStringArray& Tag_0010_2000_LO_1N );
public:
	CStringArray& ContrastAllergies();
	void ContrastAllergies(const CStringArray& Tag_0010_2110_LO_1N );
public:
	CString& SmokingStatus();
	void SmokingStatus(const CString& Tag_0010_21A0_CS_1 );
public:
	CString& AdditionalPatientHistory();
	void AdditionalPatientHistory(const CString& Tag_0010_21B0_LT_1 );
public:
	const unsigned short& PregnancyStatus();
	void PregnancyStatus(const unsigned short Tag_0010_21C0_US_1 );
public:
	CString& LastMenstrualDate();
	void LastMenstrualDate(const CString& Tag_0010_21D0_DA_1 );
public:
	CString& SpecialNeeds();
	void SpecialNeeds(const CString& Tag_0010_0050_LO_1 );
public:
	CString& PatientState();
	void PatientState(const CString& Tag_0010_0500_LO_1 );
};


#endif // !defined(AFX_DCMPATIENTMEDICALMODULE_H__7785361E_A9F5_45D7_9CFB_97990BB99FDE__INCLUDED_)
