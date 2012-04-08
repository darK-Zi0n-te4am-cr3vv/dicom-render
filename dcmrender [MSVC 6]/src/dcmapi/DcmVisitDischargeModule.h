// DcmVisitDischargeModule.h: interface for the CDcmVisitDischargeModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMVISITDISCHARGEMODULE_H__A64C3A20_8DF8_4309_AF57_B17844E85C77__INCLUDED_)
#define AFX_DCMVISITDISCHARGEMODULE_H__A64C3A20_8DF8_4309_AF57_B17844E85C77__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmCodeSequenceMacro.h"
class CDcmVisitDischargeModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmVisitDischargeModule );
public:
	CDcmVisitDischargeModule();
	virtual ~CDcmVisitDischargeModule();
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
	CDcmCodeSequenceMacroEx& DischargeDiagnosis();
private:
	CDcmCodeSequenceMacroEx m_DischargeDiagnosis_0038_0044;

};


#endif // !defined(AFX_DCMVISITDISCHARGEMODULE_H__A64C3A20_8DF8_4309_AF57_B17844E85C77__INCLUDED_)
