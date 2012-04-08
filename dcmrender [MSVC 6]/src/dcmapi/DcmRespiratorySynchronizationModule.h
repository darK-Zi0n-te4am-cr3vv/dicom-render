// DcmRespiratorySynchronizationModule.h: interface for the CDcmRespiratorySynchronizationModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMRESPIRATORYSYNCHRONIZATIONMODULE_H__4B3A76E9_7BD1_4ACB_81AE_DB79F12501F0__INCLUDED_)
#define AFX_DCMRESPIRATORYSYNCHRONIZATIONMODULE_H__4B3A76E9_7BD1_4ACB_81AE_DB79F12501F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmRespiratorySynchronizationModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmRespiratorySynchronizationModule );
public:
	CDcmRespiratorySynchronizationModule();
	virtual ~CDcmRespiratorySynchronizationModule();
public:
	CString& RespiratoryMotionCompensationTechnique();
	void RespiratoryMotionCompensationTechnique(const CString& Tag_0018_9170_1C_CS_VM_1 );
public:
	CString& RespiratorySignalSource();
	void RespiratorySignalSource(const CString& Tag_0018_9171_1C_CS_VM_1 );
};

#endif // !defined(AFX_DCMRESPIRATORYSYNCHRONIZATIONMODULE_H__4B3A76E9_7BD1_4ACB_81AE_DB79F12501F0__INCLUDED_)
