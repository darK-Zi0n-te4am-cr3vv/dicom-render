// DcmGatedInformationSequence.h: interface for the CDcmGatedInformationSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMGATEDINFORMATIONSEQUENCE_H__DF9DB5BB_2727_4FD0_9017_A225494644E5__INCLUDED_)
#define AFX_DCMGATEDINFORMATIONSEQUENCE_H__DF9DB5BB_2727_4FD0_9017_A225494644E5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmDataInfoSequence.h"
class AFX_EXT_CLASS CDcmGatedSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmGatedSequence );
public:
// Table C.8-11 contains IOD Attributes that describe Nuclear Medicine Detectors used to produce
// an image.
	CDcmGatedSequence();
	CDcmGatedSequence(CDcmGatedSequence& sequence);
	virtual ~CDcmGatedSequence();
public:
	CDcmGatedSequence& operator=( CDcmGatedSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
	void TriggerTime (const CString& Tag_0018_1060_3_DS_VM_1 );
	CString& TriggerTime(  );
public:
	void FramingType (const CString& Tag_0018_1064_3_LO_VM_1 );
	CString& FramingType(  );
public:
	CDcmDataSequence& DataInformation();
private:
	CDcmDataSequence m_DataInformation_0054_0063_2C;
};

#endif // !defined(AFX_DCMGATEDINFORMATIONSEQUENCE_H__DF9DB5BB_2727_4FD0_9017_A225494644E5__INCLUDED_)
