// DcmDataInfoSequence.h: interface for the CDcmDataSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMDATAINFOSEQUENCE_H__A3B128B2_36B1_4A3E_9E21_0C28F19D2361__INCLUDED_)
#define AFX_DCMDATAINFOSEQUENCE_H__A3B128B2_36B1_4A3E_9E21_0C28F19D2361__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmTimeSlotSequence.h"

class AFX_EXT_CLASS CDcmDataSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmDataSequence );
public:
	CDcmDataSequence();
	CDcmDataSequence(CDcmDataSequence& sequence);

	virtual ~CDcmDataSequence();
public:
	CDcmDataSequence& operator=( CDcmDataSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
	void FrameTime( const CString& Tag_0018_1063_1C_DS_VM_1 );
	CString& FrameTime(  );
public:
	void NominalInterval (const CString& Tag_0018_1062_3_IS_VM_1 );
	CString& NominalInterval(  );
public:
	void LowRRValue (const CString& Tag_0018_1081_3_IS_VM_1 );
	CString& LowRRValue(  );
public:
	void HighRRValue (const CString& Tag_0018_1082_3_IS_VM_1 );
	CString& HighRRValue(  );
public:
	CString& IntervalsAcquired();
	void IntervalsAcquired( const CString& Tag_0018_1083_3_IS_VM_1 );
public:
	CString& IntervalsRejected();
	void IntervalsRejected( const CString& Tag_0018_1084_3_IS_VM_1 );
public:
	CDcmTimeSlotSequence& TimeSlot();
private:
	CDcmTimeSlotSequence m_TimeSlotSequence_0054_0072_2C;
};

#endif // !defined(AFX_DCMDATAINFOSEQUENCE_H__A3B128B2_36B1_4A3E_9E21_0C28F19D2361__INCLUDED_)
