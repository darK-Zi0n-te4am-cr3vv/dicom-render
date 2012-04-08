// DcmWindowEnergyRangeSequence.h: interface for the CDcmWindowEnergyRangeSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMWINDOWENERGYRANGESEQUENCE_H__675CBF61_F9D8_4437_9A91_B0C6C21A6862__INCLUDED_)
#define AFX_DCMWINDOWENERGYRANGESEQUENCE_H__675CBF61_F9D8_4437_9A91_B0C6C21A6862__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
// C.8.4.10 NM Isotope Module
// Table C.8-10 contains Attributes that describe the isotope administered for the acquisition.
class AFX_EXT_CLASS CDcmWindowEnergyRangeSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmWindowEnergyRangeSequence );
public:
	CDcmWindowEnergyRangeSequence();
	CDcmWindowEnergyRangeSequence(CDcmWindowEnergyRangeSequence& sequence);
	virtual ~CDcmWindowEnergyRangeSequence();
public:
	CDcmWindowEnergyRangeSequence& operator=( CDcmWindowEnergyRangeSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
// Energy Window Lower Limit (0054,0014) is the acquisition energy window lower limit in KeV for
// acceptance of scintillation events into this Isotope.
	CString& EnergyWindowLowerLimit();
	void EnergyWindowLowerLimit(const CString& Tag_0054_0014_3_DS_VM_1);
public:
// Energy Window Upper Limit (0054,0015) is the acquisition energy window upper limit in KeV for
// acceptance of scintillation events into this Isotope.
	CString& EnergyWindowUpperLimit();
	void EnergyWindowUpperLimit(const CString& Tag_0054_0015_3_DS_VM_1);
};

#endif // !defined(AFX_DCMWINDOWENERGYRANGESEQUENCE_H__675CBF61_F9D8_4437_9A91_B0C6C21A6862__INCLUDED_)
