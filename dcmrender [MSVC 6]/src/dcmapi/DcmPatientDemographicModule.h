// DcmPatientDemographicModule.h: interface for the CDcmPatientDemographicModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMPATIENTDEMOGRAPHICMODULE_H__8770BCB6_60E5_4474_9FCB_69CE79A447E8__INCLUDED_)
#define AFX_DCMPATIENTDEMOGRAPHICMODULE_H__8770BCB6_60E5_4474_9FCB_69CE79A447E8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmCodeSequenceMacro.h"
#include "DcmPrimaryLanguageSequence.h"

class AFX_EXT_CLASS CDcmPatientDemographicModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmPatientDemographicModule );
public:
	CDcmPatientDemographicModule();
	virtual ~CDcmPatientDemographicModule();
public:
	CString& PatientAge();
	void PatientAge( const CString& Tag_0010_1010_AS_VM_1 );
public:
	CString& Occupation();
	void Occupation( const CString& Tag_0010_2180_SH_VM_1 );
public:
	CString& ConfidentialityConstraint();
	void ConfidentialityConstraint( const CString& Tag_0040_3001_LO_VM_1 );
public:
	CString& PatientBirthDate();
	void PatientBirthDate( const CString& Tag_0010_0030_DA_VM_1 );
public:
	CString& PatientBirthTime();
	void PatientBirthTime( const CString& Tag_0010_0032_TM_VM_1 );
public:
	CString& PatientSex();
	void PatientSex( const CString& Tag_0010_0040_CS_VM_1 );
public:
	CString& PatientSize();
	void PatientSize( const CString& Tag_0010_1020_DS_VM_1 );
public:
	CString& PatientWeight();
	void PatientWeight( const CString& Tag_0010_1030_DS_VM_1 );
public:
	CString& PatientAddress();
	void PatientAddress( const CString& Tag_0010_1040_LO_1 );
public:
	CString& MilitaryRank();
	void MilitaryRank( const CString& Tag_0010_1080_LO_1 );
public:
	CString& BranchOfService();
	void BranchOfService( const CString& Tag_0010_1081_LO_1 );
public:
	CString& CountryOfResidence();
	void CountryOfResidence( const CString& Tag_0010_2150_LO_1 );
public:
	CString& RegionOfResidence();
	void RegionOfResidence( const CString& Tag_0010_2152_LO_1 );
public:
	CStringArray& PatientTelephoneNumbers();
	void PatientTelephoneNumbers( const CStringArray& Tag_0010_2154_SH_1 );
public:
	CString& EthnicGroup();
	void EthnicGroup( const CString& Tag_0010_2160_SH_1 );
public:
	CString& PatientReligiousPreference();
	void PatientReligiousPreference( const CString& Tag_0010_21F0_LO_1 );
public:
	CString& PatientComments();
	void PatientComments( const CString& Tag_0010_4000_LT_1 );
public:
	CDcmPrimaryLanguageSequence& PrimaryLanguage( );
	CDcmCodeSequenceMacroEx& InsurancePlan();
private:
	CDcmCodeSequenceMacroEx m_InsurancePlan_0010_0050;
	CDcmPrimaryLanguageSequence m_PrimaryLanguage_0010_0101;
};

/*
(0010,1010) Patient's Age AS 1
(0010,2180) Occupation SH 1
(0040,3001) Confidentiality Constraint on Patient Data Description LO 1
(0010,0030) Patient's Birth Date DA 1
(0010,0032) Patient's Birth Time TM 1
(0010,0040) Patient's Sex CS 1
(0010,0050) Patient's Insurance Plan Code Sequence SQ 1
(0010,0101) Patient’s Primary Language Code Sequence SQ 1
(0010,1020) Patient's Size DS 1
(0010,1030) Patient's Weight DS 1
(0010,1040) Patient's Address LO 1
(0010,1080) Military Rank LO 1
(0010,1081) Branch of Service LO 1
(0010,2150) Country of Residence LO 1
(0010,2152) Region of Residence LO 1
(0010,2154) Patient’s Telephone Numbers SH 1-n
(0010,2160) Ethnic Group SH 1
(0010,21F0) Patient's Religious Preference LO 1
(0010,4000) Patient Comments LT 1
*/


#endif // !defined(AFX_DCMPATIENTDEMOGRAPHICMODULE_H__8770BCB6_60E5_4474_9FCB_69CE79A447E8__INCLUDED_)
