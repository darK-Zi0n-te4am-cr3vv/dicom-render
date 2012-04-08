// DcmTimeSlotSequence.h: interface for the CDcmTimeSlotSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMTIMESLOTSEQUENCE_H__1FE1ED62_5052_4661_AF0A_522047988703__INCLUDED_)
#define AFX_DCMTIMESLOTSEQUENCE_H__1FE1ED62_5052_4661_AF0A_522047988703__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmTimeSlotSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmTimeSlotSequence );
public:
	CDcmTimeSlotSequence();
	CDcmTimeSlotSequence(CDcmTimeSlotSequence& sequence);

	virtual ~CDcmTimeSlotSequence();
public:
	CDcmTimeSlotSequence& operator=( CDcmTimeSlotSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
	void TimeSlotTime( const CString& Tag_0054_0073_3_DS_VM_1 );
	CString& FrameTime(  );

};
/*
Time Slot Information Sequence (0054,0072) 2C
>Time Slot Time (0054,0073) 3 (0054,0073) Time Slot Time DS 1
*/
#endif // !defined(AFX_DCMTIMESLOTSEQUENCE_H__1FE1ED62_5052_4661_AF0A_522047988703__INCLUDED_)
