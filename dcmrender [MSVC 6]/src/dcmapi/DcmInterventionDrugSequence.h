// DcmInterventionDrugSequence.h: interface for the CDcmInterventionDrugSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMINTERVENTIONDRUGSEQUENCE_H__E3C343BB_476C_43AF_B1B2_D23C5FDB186B__INCLUDED_)
#define AFX_DCMINTERVENTIONDRUGSEQUENCE_H__E3C343BB_476C_43AF_B1B2_D23C5FDB186B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmCodeSequenceMacro.h"
class CDcmInterventionDrugSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmInterventionDrugSequence );
public:
	CDcmInterventionDrugSequence();
	CDcmInterventionDrugSequence(CDcmInterventionDrugSequence& sequence);
	virtual ~CDcmInterventionDrugSequence();
public:
	CDcmInterventionDrugSequence& operator=( CDcmInterventionDrugSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
	CString& DrugName();
	void DrugName( const CString& Tag_0018_0034_3_LO_VM_1 );
public:
	CString& DrugStartTime();
	void DrugStartTime( const CString& Tag_0018_0035_3_TM_VM_1 );
public:
	CString& DrugStopTime();
	void DrugStopTime( const CString& Tag_0018_0027_3_TM_VM_1 );
public:
	CString& DrugDose();
	void DrugDose( const CString& Tag_0018_0028_3_DS_VM_1 );
public:
	CDcmCodeSequenceMacroEx& InterventionDrug();
	CDcmCodeSequenceMacroEx& AdministrationRoute();
private:
	CDcmCodeSequenceMacroEx m_InterventionDrugCode_0018_0029_3,
		m_AdministrationRouteCode_0054_0302_3;
};

#endif // !defined(AFX_DCMINTERVENTIONDRUGSEQUENCE_H__E3C343BB_476C_43AF_B1B2_D23C5FDB186B__INCLUDED_)
