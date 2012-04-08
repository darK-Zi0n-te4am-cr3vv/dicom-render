// DcmPatientModule.h: interface for the CDcmPatientModule class.
//
//////////////////////////////////////////////////////////////////////
/* 
 * Permission is given by the author to freely redistribute and include
 * this code in any program.
 *
 * Copyright: (c) 2004, John Fitzgerald <dicomapi@yahoo.com>
 *
 * COVERED CODE IS PROVIDED UNDER THIS LICENSE ON AN "AS IS" BASIS, WITHOUT WARRANTY
 * OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, WITHOUT LIMITATION, WARRANTIES
 * THAT THE COVERED CODE IS FREE OF DEFECTS, MERCHANTABLE, FIT FOR A PARTICULAR PURPOSE
 * OR NON-INFRINGING. THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE COVERED
 * CODE IS WITH YOU. SHOULD ANY COVERED CODE PROVE DEFECTIVE IN ANY RESPECT, YOU (NOT
 * THE INITIAL DEVELOPER OR ANY OTHER CONTRIBUTOR) ASSUME THE COST OF ANY NECESSARY
 * SERVICING, REPAIR OR CORRECTION. THIS DISCLAIMER OF WARRANTY CONSTITUTES AN ESSENTIAL
 * PART OF THIS LICENSE. NO USE OF ANY COVERED CODE IS AUTHORIZED HEREUNDER EXCEPT UNDER
 * THIS DISCLAIMER.
 *
 * Use at your own risk!
 * ==========================================================
 */

#if !defined(AFX_DCMPATIENTMODULE_H__01417CE5_AA0E_472B_A58A_B987A36998A6__INCLUDED_)
#define AFX_DCMPATIENTMODULE_H__01417CE5_AA0E_472B_A58A_B987A36998A6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "DcmModule.h"
#include "DcmReferencedSOPSequence.h"
#include "DcmSpecimenSequence.h"

class AFX_EXT_CLASS CDcmPatientModule : public CDcmModule
{
public:
	DECLARE_SERIAL( CDcmPatientModule );

public:
	CDcmPatientModule();
	virtual ~CDcmPatientModule();
public:
	CString& PatientName();
	void PatientName( const CString& Tag_0010_0010_2_PN_VM_1 );
public:
	CString& PatientID();
	void PatientID( const CString& Tag_0010_0020_2_LO_VM_1 );
public:
	CString& PatientBirthDate();
	void PatientBirthDate( const CString& Tag_0010_0030_2_DA_VM_1 );
public:
	CString& PatientSex();
	void PatientSex( const CString& Tag_0010_0040_2_CS_VM_1 );
public:
	CString& PatientBirthTime();
	void PatientBirthTime( const CString& Tag_0010_0032_3_TM_VM_1 );
public:
	CStringArray& OtherPatientID();
	void OtherPatientID( const CStringArray& Tag_0010_1000_3_LO_VM_1N );
public:
	CStringArray& OtherPatientNames();
	void OtherPatientNames( const CStringArray& Tag_0010_1001_3_PN_VM_1N );
public:
	CString& EthnicGroup();
	void EthnicGroup( const CString& Tag_0010_2160_3_SH_VM_1 );
public:
	CString& PatientComments();
	void PatientComments( const CString& Tag_0010_4000_3_LT_VM_1 );
public:
	CString& SpecimenAccessionNumber();
	void SpecimenAccessionNumber( const CString& Tag_0040_050A_1_LO_VM_1 );
public:
	CDcmSpecimenSequence& Specimen();
	CDcmSopSequence& ReferencedPatient(); 
private:
	CDcmSopSequence m_ReferencedPatient_3;
	CDcmSpecimenSequence m_Specimen_2;

};



#endif // !defined(AFX_DCMPATIENTMODULE_H__01417CE5_AA0E_472B_A58A_B987A36998A6__INCLUDED_)
