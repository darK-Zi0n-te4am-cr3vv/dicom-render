// DcmPhaseInformationSequence.h: interface for the CDcmPhaseInformationSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMPHASEINFORMATIONSEQUENCE_H__E8840F9D_98DF_4A43_BBF1_79CA2F2E239C__INCLUDED_)
#define AFX_DCMPHASEINFORMATIONSEQUENCE_H__E8840F9D_98DF_4A43_BBF1_79CA2F2E239C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmPhaseSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmPhaseSequence );
public:
	CDcmPhaseSequence();
	CDcmPhaseSequence(CDcmPhaseSequence& sequence);
	virtual ~CDcmPhaseSequence();
public:
	CDcmPhaseSequence& operator=( CDcmPhaseSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
	CString& PhaseDelay();
	void PhaseDelay(const CString& Tag_0054_0036_1C_IS_VM_1 );
public:
	CString& ActualFrameDuration();
	void ActualFrameDuration(const CString& Tag_0018_1242_1C_IS_VM_1 );
public:
	CString& PauseBetweenFrames();
	void PauseBetweenFrames(const CString& Tag_0054_0038_1C_IS_VM_1 );
public:
	const unsigned short& NumberFramesInPhase();
	void NumberFramesInPhase(const unsigned short Tag_0054_0033_1C_US_VM_1 );
public:
	CStringArray& TriggerVector();
	void TriggerVector(const CStringArray& Tag_0054_0211_3_IS_VM_1N );
public:
	const unsigned short& NumberTriggersInPhase();
	void NumberTriggersInPhase(const unsigned short Tag_0054_0211_1C_US_VM_1 );
};

#endif // !defined(AFX_DCMPHASEINFORMATIONSEQUENCE_H__E8840F9D_98DF_4A43_BBF1_79CA2F2E239C__INCLUDED_)
