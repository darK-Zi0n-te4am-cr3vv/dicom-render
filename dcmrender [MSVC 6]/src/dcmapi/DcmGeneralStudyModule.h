// DcmGeneralStudyModule.h: interface for the CDcmGeneralStudyModule class.
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

#if !defined(AFX_DCMGENERALSTUDYMODULE_H__A4B8E738_A95F_48AB_9472_7086AC0185A3__INCLUDED_)
#define AFX_DCMGENERALSTUDYMODULE_H__A4B8E738_A95F_48AB_9472_7086AC0185A3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmCodeSequenceMacro.h"
#include "DcmPersonIdentificationMacro.h"
#include "DcmReferencedSOPSequence.h"

class AFX_EXT_CLASS CDcmGeneralStudyModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmGeneralStudyModule );

public:
	CDcmGeneralStudyModule();
	virtual ~CDcmGeneralStudyModule();
public:
	CString& StudyInstanceUID();
	void StudyInstanceUID(const CString& Tag_0020_000D);
public:
	CString& StudyDate();
	void StudyDate(const CString& Tag_0008_0020);
public:
	CString& StudyTime();
	void StudyTime(const CString& Tag_0008_0030);
public:
	CString& ReferringPhysicianName();
	void ReferringPhysicianName(const CString& Tag_0008_0090);
public:
	CString& StudyID();
	void StudyID(const CString& Tag_0020_0010);
public:
	CString& Accession_Number();
	void Accession_Number(const CString& Tag_0008_0050);
public:	
	CString& StudyDescription();
	void StudyDescription(const CString& Tag_0008_1030);
public:
	CString& PhysicianOfRecord();
	void PhysicianOfRecord(const CString& Tag_0008_1048);
public:
	CString& NameOfPhysicianReadingStudy();
	void NameOfPhysicianReadingStudy(const CString& Tag_0008_1060);
public:
	CDcmPersonIdentificationMacro& ReferringPhysicianId();
	CDcmPersonIdentificationMacro& PhysicianOfRecordId();
	CDcmPersonIdentificationMacro& PhysicianReadingStudyId();
	CDcmCodeSequenceMacroEx& ProcedureCode();
	CDcmSopSequence& ReferencedStudy();
private:
	CDcmPersonIdentificationMacro m_ReferringPhysicianIdentification_3;
	CDcmPersonIdentificationMacro m_PhysicianOfRecordIdentification_3;
	CDcmPersonIdentificationMacro m_PhysicianReadingStudyIdentification_3;
	CDcmCodeSequenceMacroEx m_ProcedureCodeSequence_0008_1032_3;
	CDcmSopSequence ReferencedStudySequence_0008_1110_3;
};



#endif // !defined(AFX_DCMGENERALSTUDYMODULE_H__A4B8E738_A95F_48AB_9472_7086AC0185A3__INCLUDED_)
