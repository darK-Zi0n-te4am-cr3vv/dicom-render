// DcmSynchronizationModule.h: interface for the CDcmSynchronizationModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMSYNCHRONIZATIONMODULE_H__AF7AD198_33E5_40F0_87C6_DC2D21031C69__INCLUDED_)
#define AFX_DCMSYNCHRONIZATIONMODULE_H__AF7AD198_33E5_40F0_87C6_DC2D21031C69__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmSynchronizationModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmSynchronizationModule );
public:
	CDcmSynchronizationModule();
	virtual ~CDcmSynchronizationModule();
public:
    CString& SynchronizationFrameOfReference();
	void SynchronizationFrameOfReference(const CString& Tag_0020_0200_1_UI_VM_1);
public:
    CString& SynchronizationTrigger();
	void SynchronizationTrigger(const CString& Tag_0018_106A_1_CS_VM_1);
public:
    CString& TriggerSourceOrType();
	void TriggerSourceOrType(const CString& Tag_0018_1061_3_LO_VM_1);
public:
    CWordArray& SynchronizationChannel();
	void SynchronizationChannel(const CWordArray& Tag_0018_106C_1C_US_VM_1);
public:
    CString& AcquisitionTimeSynchronized();
	void AcquisitionTimeSynchronized(const CString& Tag_0018_1800_1_CS_VM_1);
public:
    CString& TimeSource ();
	void TimeSource(const CString& Tag_0018_1801_3_SH_VM_1);
public:
    CString& TimeDistributionProtocol ();
	void TimeDistributionProtocol(const CString& Tag_0018_1802_3_CS_VM_1);
};

#endif // !defined(AFX_DCMSYNCHRONIZATIONMODULE_H__AF7AD198_33E5_40F0_87C6_DC2D21031C69__INCLUDED_)
