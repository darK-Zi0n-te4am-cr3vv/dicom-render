// DcmRotationInfoSequence.h: interface for the CDcmRotationSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMROTATIONINFOSEQUENCE_H__A89034ED_BC12_47D4_A42A_24A9FAC6B912__INCLUDED_)
#define AFX_DCMROTATIONINFOSEQUENCE_H__A89034ED_BC12_47D4_A42A_24A9FAC6B912__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmRotationSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmRotationSequence );
public:
	CDcmRotationSequence();
	CDcmRotationSequence(CDcmRotationSequence& sequence);

	virtual ~CDcmRotationSequence();
public:
	CDcmRotationSequence& operator=( CDcmRotationSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
	CString& StartAngle();
	void StartAngle(const CString& Tag_0054_0200_1C_DS_VM_1 );
public:
	CString& AngularStep();
	void AngularStep(const CString& Tag_0018_1144_1C_DS_VM_1 );
public:
	CString& RotationDirection();
	void RotationDirection(const CString& Tag_0018_1140_1C_CS_VM_1 );
public:
	CString& ScanArc();
	void ScanArc(const CString& Tag_0018_1143_1C_DS_VM_1 );
public:
	CString& ActualFrameDuration();
	void ActualFrameDuration(const CString& Tag_0018_1242_1C_IS_VM_1 );
public:
	CStringArray& RadialPosition();
	void RadialPosition(const CStringArray& Tag_0018_1142_3_DS_VM_1N );
public:
	CString& DistanceSourceToDetector();
	void DistanceSourceToDetector(const CString& Tag_0018_1110_2C_DS_VM_1 );
public:
	const unsigned short& NumberFramesRotation();
	void NumberFramesRotation(const unsigned short Tag_0054_0053_1C_US_VM_1);
public:
	CString& TableTraverse();
	void TableTraverse(const CString& Tag_0018_1131_3_DS_VM_1 );
public:
	CString& TableHeight();
	void TableHeight(const CString& Tag_0018_1130_3_DS_VM_1 );
public:
	CString& TypeDetectorMotion ();
	void TypeDetectorMotion(const CString& Tag_0054_0202_3_CS_VM_1 );
};


#endif // !defined(AFX_DCMROTATIONINFOSEQUENCE_H__A89034ED_BC12_47D4_A42A_24A9FAC6B912__INCLUDED_)
