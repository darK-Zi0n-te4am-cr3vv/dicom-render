// DcmVisitIdentificationModule.h: interface for the CDcmVisitIdentificationModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMVISITIDENTIFICATIONMODULE_H__BA3A975A_C553_4438_A43A_9034B4299CDB__INCLUDED_)
#define AFX_DCMVISITIDENTIFICATIONMODULE_H__BA3A975A_C553_4438_A43A_9034B4299CDB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmCodeSequenceMacro.h"
class CDcmVisitIdentificationModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmVisitIdentificationModule );
public:
	CDcmVisitIdentificationModule();
	virtual ~CDcmVisitIdentificationModule();
public:	
	CString& InstitutionName();
	void InstitutionName(const CString& Tag_0008_0080_LO_VM_1);
public:
	CString& InstitutionAddress();
	void InstitutionAddress(const CString& Tag_0008_0081_ST_VM_1);
public:
	CString& AdmissionID();
	void AdmissionID(const CString& Tag_0038_0010_LO_VM_1);
public:
	CString& IssuerOfAdmissionID();
	void IssuerOfAdmissionID(const CString& Tag_0038_0011_LO_VM_1);
public:
	CString& VisitStatusID();
	void VisitStatusID(const CString& Tag_0038_0008_CS_VM_1);
public:
	CString& CurrentPatientLocation();
	void CurrentPatientLocation(const CString& Tag_0038_0300_LO_VM_1);
public:
	CString& PatientInstitutionResidence();
	void PatientInstitutionResidence(const CString& Tag_0038_0400_LO_VM_1);
public:
	CString& VisitComments();
	void VisitComments(const CString& Tag_0038_4000_LT_VM_1);
public:
	CDcmCodeSequenceMacroEx& InstitutionCode();
private:
	CDcmCodeSequenceMacroEx m_InstitutionCodeSequence_0008_0082;
};

/*
Institution Name (0008,0080)
Institution Address (0008,0081)
Admission ID (0038,0010)   (0038,0010) Admission ID LO 1
Issuer of Admission ID (0038,0011)  (0038,0011) Issuer of Admission ID LO 1
Visit Status ID (0038,0008)  (0038,0008) Visit Status ID CS 1
Current Patient Location (0038,0300)  (0038,0300) Current Patient Location LO 1
Patient’s Institution Residence (0038,0400) (0038,0400) Patient’s Institution Residence LO 1
Visit Comments (0038,4000)  (0038,4000) Visit Comments LT 1

Institution Code Sequence (0008,0082)
>Include ‘Code Sequence Macro’ Table 8.8-1

*/
#endif // !defined(AFX_DCMVISITIDENTIFICATIONMODULE_H__BA3A975A_C553_4438_A43A_9034B4299CDB__INCLUDED_)
