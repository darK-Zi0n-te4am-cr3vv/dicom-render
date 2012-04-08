// DcmPatientIdentificationModule.h: interface for the CDcmPatientIdentificationModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMPATIENTIDENTIFICATIONMODULE_H__5522E711_CC19_4331_9A4A_3461680ADA7B__INCLUDED_)
#define AFX_DCMPATIENTIDENTIFICATIONMODULE_H__5522E711_CC19_4331_9A4A_3461680ADA7B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmPatientIdentificationModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmPatientIdentificationModule );
public:
	CDcmPatientIdentificationModule();
	virtual ~CDcmPatientIdentificationModule();
public:
	CString& PatientName(  );
	void PatientName( const CString& Tag_0010_0010_PN_VM_1 );
public:
	CString& PatientID(  );
	void PatientID( const CString& Tag_0010_0020_LO_VM_1 );
public:
	CString& IssuerOfPatientID(  );
	void IssuerOfPatientID( const CString& Tag_0010_0021_LO_VM_1N );
public:
	CStringArray& OtherPatientID(  );
	void IssuerOfPatient( const CStringArray& Tag_0010_1000_LO_VM_1N );
public:
	CString& PatientBirthName(  );
	void PatientBirthName( const CString& Tag_0010_1005_PN_VM_1 );
public:
	CString& PatientMotherBirthName(  );
	void PatientMotherBirthName( const CString& Tag_0010_1060_PN_VM_1 );
public:
	CString& MedicalRecordLocator(  );
	void MedicalRecordLocator( const CString& Tag_0010_1090_LO_VM_1 );
};

#endif // !defined(AFX_DCMPATIENTIDENTIFICATIONMODULE_H__5522E711_CC19_4331_9A4A_3461680ADA7B__INCLUDED_)
