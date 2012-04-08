// DcmWindowInformationSequence.h: interface for the CDcmWindowInformationSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMWINDOWINFORMATIONSEQUENCE_H__6CB2C729_2580_471C_819D_449E9A560861__INCLUDED_)
#define AFX_DCMWINDOWINFORMATIONSEQUENCE_H__6CB2C729_2580_471C_819D_449E9A560861__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmWindowEnergyRangeSequence.h"

class AFX_EXT_CLASS CDcmWindowInformationSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmWindowInformationSequence );
public:
	CDcmWindowInformationSequence();
	CDcmWindowInformationSequence(CDcmWindowInformationSequence& sequence);
	virtual ~CDcmWindowInformationSequence();
public:
	CDcmWindowInformationSequence& operator=( CDcmWindowInformationSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
// A user defined name which describes this
// Energy Window.
	CString& EnergyWindowName();
	void EnergyWindowName(const CString& Tag_0054_0018_3_SH_VM_1);
public:
//Sequence of Repeating Items that describes this energy window group.
	CDcmWindowEnergyRangeSequence& EnergyWindowRange();
private:
	CDcmWindowEnergyRangeSequence m_EnergyWindowRange_0054_0013_3;
};

#endif // !defined(AFX_DCMWINDOWINFORMATIONSEQUENCE_H__6CB2C729_2580_471C_819D_449E9A560861__INCLUDED_)
