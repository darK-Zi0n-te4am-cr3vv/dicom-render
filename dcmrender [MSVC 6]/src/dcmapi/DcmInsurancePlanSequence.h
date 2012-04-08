// DcmInsurancePlanSequence.h: interface for the CDcmInsurancePlanSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMINSURANCEPLANSEQUENCE_H__2355BAE1_EA5D_4D01_BF12_DF44FEDE3687__INCLUDED_)
#define AFX_DCMINSURANCEPLANSEQUENCE_H__2355BAE1_EA5D_4D01_BF12_DF44FEDE3687__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmCodeSequenceMacro.h"

class CDcmInsurancePlanSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmInsurancePlanSequence );
public:
	CDcmInsurancePlanSequence();
	virtual ~CDcmInsurancePlanSequence();
public:
	CDcmCodeSequenceMacroEx& InsurancePlan();
private:
	CDcmCodeSequenceMacroEx m_InsurancePlan_0010_0050;
};

#endif // !defined(AFX_DCMINSURANCEPLANSEQUENCE_H__2355BAE1_EA5D_4D01_BF12_DF44FEDE3687__INCLUDED_)
