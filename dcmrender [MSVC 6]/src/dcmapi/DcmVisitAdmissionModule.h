// DcmVisitAdmissionModule.h: interface for the CDcmVisitAdmissionModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMVISITADMISSIONMODULE_H__7693A7EA_97DF_425D_BF66_9D762955C48C__INCLUDED_)
#define AFX_DCMVISITADMISSIONMODULE_H__7693A7EA_97DF_425D_BF66_9D762955C48C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmCodeSequenceMacro.h"
#include "DcmPersonIdentificationMacro.h"

class CDcmVisitAdmissionModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmVisitAdmissionModule );
public:
	CDcmVisitAdmissionModule();
	virtual ~CDcmVisitAdmissionModule();
public:	
	CString& ReferringPhysicianName();
	void ReferringPhysicianName(const CString& Tag_0008_0090_PN_VM_1);
public:	
	CString& ReferringPhysicianAddress();
	void ReferringPhysicianAddress(const CString& Tag_0008_0092_ST_VM_1);
public:	
	CStringArray& ReferringPhysicianTelephoneNumbers();
	void ReferringPhysicianTelephoneNumbers(const CStringArray& Tag_0008_0094_SH_VM_1N);
public:	
	CStringArray& AdmittingDiagnosesDescription();
	void AdmittingDiagnosesDescription(const CStringArray& Tag_0008_1080_LO_VM_1N);
public:	
	CString& RouteOfAdmissions();
	void RouteOfAdmissions(const CString& Tag_0038_0016_LO_VM_1);
public:	
	CString& AdmittingDate();
	void AdmittingDate(const CString& Tag_0038_0020_DA_VM_1);
public:	
	CString& AdmittingTime();
	void AdmittingTime(const CString& Tag_0038_0021_TM_VM_1);
public:	
	CString& DischargeDate();
	void DischargeDate(const CString& Tag_0038_0030_DA_VM_1);
public:	
	CString& DischargeTime();
	void DischargeTime(const CString& Tag_0038_0032_TM_VM_1);
public:	
	CString& DischargeDiagnosisDescription();
	void DischargeDiagnosisDescription(const CString& Tag_0038_0040_LO_VM_1);
public:
	CDcmCodeSequenceMacroEx& AdmittingDiagnoses();
	CDcmCodeSequenceMacroEx& DischargeDiagnosis();
	CDcmPersonIdentificationMacro& ReferringPhysician();
private:
	CDcmCodeSequenceMacroEx  m_AdmittingDiagnoses_0008_1084;
	CDcmCodeSequenceMacroEx  m_DischargeDiagnosis_0038_0044;
	CDcmPersonIdentificationMacro m_ReferringPhysician_0008_0096;
};

#endif // !defined(AFX_DCMVISITADMISSIONMODULE_H__7693A7EA_97DF_425D_BF66_9D762955C48C__INCLUDED_)
