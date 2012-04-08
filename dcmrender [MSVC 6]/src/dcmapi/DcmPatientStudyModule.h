// DcmPatientStudyModule.h: interface for the CDcmPatientStudyModule class.
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

#if !defined(AFX_DCMPATIENTSTUDYMODULE_H__375B196B_2DD6_4C2F_B5DB_9423227AA2D0__INCLUDED_)
#define AFX_DCMPATIENTSTUDYMODULE_H__375B196B_2DD6_4C2F_B5DB_9423227AA2D0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmCodeSequenceMacro.h"

class AFX_EXT_CLASS CDcmPatientStudyModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmPatientStudyModule );
public:
	CDcmPatientStudyModule();
	virtual ~CDcmPatientStudyModule();
public:
	CStringArray& AdmittingDiagnosesDescription();
	void AdmittingDiagnosesDescription(const CStringArray& Tag_0008_1080_3_LO_VM_1N );
public:
	CString& PatientAge();
	void PatientAge(const CString& Tag_0010_1010_3_AS_VM_1 );
public:
	CString& PatientSize();
	void PatientSize(const CString& Tag_0010_1020_3_DS_VM_1 );
public:
	CString& PatientWeight();
	void PatientWeight(const CString& Tag_0010_1030_3_DS_VM_1 );
public:
	CString& Occupation();
	void Occupation(const CString& Tag_0010_2180_3_SH_VM_1 );
public:
	CString& AdditionalPatientHistory();
	void AdditionalPatientHistory(const CString& Tag_0010_21B0_3_LT_VM_1 );
public:	
	CDcmCodeSequenceMacroEx& AdmittingDiagnoses();	
private:
	CDcmCodeSequenceMacroEx  m_AdmittingDiagnosesCode_0008_1084_3;

};

#endif // !defined(AFX_DCMPATIENTSTUDYMODULE_H__375B196B_2DD6_4C2F_B5DB_9423227AA2D0__INCLUDED_)
