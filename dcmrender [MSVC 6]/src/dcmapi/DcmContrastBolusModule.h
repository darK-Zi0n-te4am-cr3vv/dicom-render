// DcmContrastBolusModule.h: interface for the CDcmContrastBolusModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMCONTRASTBOLUSMODULE_H__C44C31FE_0EAA_41E8_B406_59D9CA125A95__INCLUDED_)
#define AFX_DCMCONTRASTBOLUSMODULE_H__C44C31FE_0EAA_41E8_B406_59D9CA125A95__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmCodeSequenceMacro.h"
#include "DcmContrastAdministrationRoute.h"

class AFX_EXT_CLASS CDcmContrastBolusModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmContrastBolusModule );
public:
	CDcmContrastBolusModule();
	virtual ~CDcmContrastBolusModule();
public:
	CString& ContrastBolusAgent();
	void ContrastBolusAgent(const CString& Tag_0018_0010_2_LO_VM_1 );
public:
	CString& ContrastBolusRoute();
	void ContrastBolusRoute(const CString& Tag_0018_1040_3_LO_VM_1 );
public:
	CString& ContrastBolusVolume ();
	void ContrastBolusVolume(const CString& Tag_0018_1041_3_DS_VM_1 );
public:
	CString& ContrastBolusStartTime ();
	void ContrastBolusStartTime(const CString& Tag_0018_1042_3_TM_VM_1 );
public:
	CString& ContrastBolusStopTime ();
	void ContrastBolusStopTime(const CString& Tag_0018_1043_3_TM_VM_1 );
public:
	CString& ContrastBolusTotalDose ();
	void ContrastBolusTotalDose(const CString& Tag_0018_1044_3_DS_VM_1 );
public:
	CStringArray& ContrastFlowRates ();
	void ContrastFlowRates(const CStringArray& Tag_0018_1046_3_DS_VM_1N );
public:
	CStringArray& ContrastFlowDurations ();
	void ContrastFlowDurations(const CStringArray& Tag_0018_1047_3_DS_VM_1N );
public:
	CString&  ContrastBolusIngredient ();
	void ContrastBolusIngredient(const CString& Tag_0018_1048_3_CS_VM_1 );
public:
	CString& ContrastBolusIngredientConcentration  ();
	void ContrastBolusIngredientConcentration(const CString& Tag_0018_1049_3_DS_VM_1 );
public:
	CDcmCodeSequenceMacroEx& ContrastBolusAgentCode();
	CDcmContrastAdministrationRouteSequence& ContrastAdministrationRoute();
private:
	CDcmCodeSequenceMacroEx m_ContrastBolusAgent_0018_0012_3;
	CDcmContrastAdministrationRouteSequence m_ContrastAdministrationRoute_0018_0014_3;
};
/*
(0018,0012) Contrast/Bolus Agent Sequence SQ 1  3
(0018,0014) Contrast/Bolus Administration Route Sequence SQ 1  3
(0018,002A) Additional Drug Sequence SQ 1 3
*/
#endif // !defined(AFX_DCMCONTRASTBOLUSMODULE_H__C44C31FE_0EAA_41E8_B406_59D9CA125A95__INCLUDED_)
