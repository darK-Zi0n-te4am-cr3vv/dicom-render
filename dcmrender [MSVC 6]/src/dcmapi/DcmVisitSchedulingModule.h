// DcmVisitSchedulingModule.h: interface for the CDcmVisitSchedulingModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMVISITSCHEDULINGMODULE_H__1DF0B836_0B8A_4386_8650_C48C43E244BA__INCLUDED_)
#define AFX_DCMVISITSCHEDULINGMODULE_H__1DF0B836_0B8A_4386_8650_C48C43E244BA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class CDcmVisitSchedulingModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmVisitSchedulingModule );
public:
	CDcmVisitSchedulingModule();
	virtual ~CDcmVisitSchedulingModule();
public:	
	CString& ScheduledAdmissionDate();
	void ScheduledAdmissionDate(const CString& Tag_0038_001A_DA_VM_1);
public:	
	CString& ScheduledAdmissionTime();
	void ScheduledAdmissionTime(const CString& Tag_0038_001B_TM_VM_1);
public:	
	CString& ScheduledDischargeDate();
	void ScheduledDischargeDate(const CString& Tag_0038_001C_DA_VM_1);
public:	
	CString& ScheduledDischargeTime();
	void ScheduledDischargeTime(const CString& Tag_0038_001D_DA_VM_1);
public:	
	CString& ScheduledPatientInstitutionResidence();
	void ScheduledPatientInstitutionResidence(const CString& Tag_0038_001E_LO_VM_1);
};

#endif // !defined(AFX_DCMVISITSCHEDULINGMODULE_H__1DF0B836_0B8A_4386_8650_C48C43E244BA__INCLUDED_)
