// DcmCardiacSynchronizationModule.h: interface for the CDcmCardiacSynchronizationModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMCARDIACSYNCHRONIZATIONMODULE_H__8771AF7F_3CEA_4045_99DF_781B58FF3B57__INCLUDED_)
#define AFX_DCMCARDIACSYNCHRONIZATIONMODULE_H__8771AF7F_3CEA_4045_99DF_781B58FF3B57__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmCardiacSynchronizationModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmCardiacSynchronizationModule );
public:
	CDcmCardiacSynchronizationModule();
	virtual ~CDcmCardiacSynchronizationModule();
public:
	CString& CardiacSynchronizationTechnique(  );
	void CardiacSynchronizationTechnique( const CString& Tag_0018_9037_1C_CS_VM_1 );
public:
	CString& CardiacSignalSource(  );
	void CardiacSignalSource( const CString& Tag_0018_9085_1C_CS_VM_1 );
public:
	const double& CardiacRRIntervalSpecified(  );
	void CardiacRRIntervalSpecified( const double Tag_0018_9070_1C_FD_VM_1 );
public:
	CString& CardiacBeatRejectionTechnique(  );
	void CardiacBeatRejectionTechnique( const CString& Tag_0018_9169_1C_CS_VM_1 );
public:
	CString& LowRRValue(  );
	void LowRRValue( const CString& Tag_0018_1081_2C_IS_VM_1 );
public:
	CString& HighRRValue(  );
	void HighRRValue( const CString& Tag_0018_1082_2C_IS_VM_1 );
public:
	CString& IntervalsAcquired(  );
	void IntervalsAcquired( const CString& Tag_0018_1083_2C_IS_VM_1 );
public:
	CString& IntervalsRejected(  );
	void IntervalsRejected( const CString& Tag_0018_1084_2C_IS_VM_1 );
};

#endif // !defined(AFX_DCMCARDIACSYNCHRONIZATIONMODULE_H__8771AF7F_3CEA_4045_99DF_781B58FF3B57__INCLUDED_)
