// DcmNMMultiGatedModule.h: interface for the CDcmNMMultiGatedModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMNMMULTIGATEDMODULE_H__0D4765AC_CAA6_4BA1_8DF7_23C51A21489F__INCLUDED_)
#define AFX_DCMNMMULTIGATEDMODULE_H__0D4765AC_CAA6_4BA1_8DF7_23C51A21489F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmGatedInformationSequence.h"

class AFX_EXT_CLASS CDcmNMMultiGatedModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmNMMultiGatedModule );
public:
	CDcmNMMultiGatedModule();
    CDcmNMMultiGatedModule( CDcmNMMultiGatedModule& module );
	virtual ~CDcmNMMultiGatedModule();
public:
	CDcmNMMultiGatedModule& operator=( CDcmNMMultiGatedModule& module );
protected:
// Destroys and creates the module dataset
	virtual void InitializeModule();
public:
	void BeatRejectionFlag (const CString& Tag_0018_1080_3_CS_VM_1 );
	CString& BeatRejectionFlag(  );
public:
	CString& PVCRejection();
	void PVCRejection( const CString& Tag_0018_1085_3_LO_VM_1 );
public:
	CString& SkipBeats();
	void SkipBeats( const CString& Tag_0018_1086_3_IS_VM_1 );
public:
	CString& HeartRate();
	void HeartRate( const CString& Tag_0018_1088_3_IS_VM_1 );
public:
	CDcmGatedSequence& GatedInformation();
private:
	CDcmGatedSequence m_GatedInformation_0054_0062_2C;
};

#endif // !defined(AFX_DCMNMMULTIGATEDMODULE_H__0D4765AC_CAA6_4BA1_8DF7_23C51A21489F__INCLUDED_)
