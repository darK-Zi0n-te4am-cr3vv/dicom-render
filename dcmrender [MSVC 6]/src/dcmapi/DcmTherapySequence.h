// DcmTherapySequence.h: interface for the CDcmTherapySequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMTHERAPYSEQUENCE_H__01849055_9737_43C5_BD36_1C93F498179A__INCLUDED_)
#define AFX_DCMTHERAPYSEQUENCE_H__01849055_9737_43C5_BD36_1C93F498179A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmCodeSequenceMacro.h"

class AFX_EXT_CLASS CDcmTherapySequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmTherapySequence );
public:
	CDcmTherapySequence();
	virtual ~CDcmTherapySequence();
public:
	CString& InterventionalStatus();
	void InterventionalStatus(const CString& Tag_0018_0038_2_CS_VM_1 );
public:
	CString& InterventionDrugStartTime();
	void InterventionDrugStartTime(const CString& Tag_0018_0035_3_TM_VM_1 );
public:
	CString& InterventionDrugStopTime();
	void InterventionDrugStopTime(const CString& Tag_0018_0027_3_TM_VM_1 );
public:
	CString& TherapyDescription();
	void TherapyDescription(const CString& Tag_0018_0039_3_CS_VM_1 );
public:
	CDcmCodeSequenceMacroEx& Code();
	CDcmCodeSequenceMacroEx& InterventionalDrug();
	CDcmCodeSequenceMacroEx& AdministrationRoute();
	 
private:
	CDcmCodeSequenceMacroEx m_CodeSequenceMacro, m_DrugSequence_0018_0029_3,
		m_AdministrationRoute_0054_0302_3;
};

#endif // !defined(AFX_DCMTHERAPYSEQUENCE_H__01849055_9737_43C5_BD36_1C93F498179A__INCLUDED_)
