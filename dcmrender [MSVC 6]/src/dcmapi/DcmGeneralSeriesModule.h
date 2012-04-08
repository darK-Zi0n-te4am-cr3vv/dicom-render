// DcmGeneralSeriesModule.h: interface for the CDcmGeneralSeriesModule class.
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

#if !defined(AFX_DCMGENERALSERIESMODULE_H__92571CAA_E389_48FA_9DC5_48FC7EC0A538__INCLUDED_)
#define AFX_DCMGENERALSERIESMODULE_H__92571CAA_E389_48FA_9DC5_48FC7EC0A538__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmPersonIdentificationMacro.h"
#include "DcmCodeSequenceMacro.h"
#include "DcmReferencedSOPSequence.h"
#include "DcmRequestAttributes.h"

class AFX_EXT_CLASS CDcmGeneralSeriesModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmGeneralSeriesModule );

public:
	CDcmGeneralSeriesModule();
	virtual ~CDcmGeneralSeriesModule();
public:
	CString& Modality();
	void Modality(const CString& Tag_0008_0060_1_CS_VM_1 );
public:
	CString& SeriesInstanceUID();
	void SeriesInstanceUID(const CString& Tag_0020_000E_1_UI_VM_1 );
public:
	CString& SeriesNumber();
	void SeriesNumber(const CString& Tag_0020_0011_2_IS_VM_1 );
public:
	CString& Laterality();
	void Laterality(const CString& Tag_0020_0060_2C_CS_VM_1 );
public:
	CString& SeriesDate();
	void SeriesDate(const CString& Tag_0008_0021_3_DA_VM_1 );
public:
	CString& SeriesTime();
	void SeriesTime(const CString& Tag_0008_0031_3_TM_VM_1 );
public:
	CStringArray& PerformingPhysicianName();
	void PerformingPhysicianName(const CStringArray& Tag_0008_1050_3_PN_VM_1N);
public:
	CString& ProtocolName();
	void ProtocolName(const CString& Tag_0018_1030_3_LO_VM_1 );
public:
	CString& SeriesDescription();
	void SeriesDescription(const CString& Tag_0008_103E_3_LO_VM_1 );
public:
	CStringArray& OperatorName();
	void OperatorName(const CStringArray& Tag_0008_1070_3_PN_VM_1N );
public:
	CString& BodyPartExamined();
	void BodyPartExamined(const CString& Tag_0018_0015_2C_CS_VM_1 );
public:
	CString& PatientPosition();
	void PatientPosition(const CString& Tag_0018_5100_2C_CS_VM_1 );
public:
	const  unsigned short& SmallestPixelValue();
	void SmallestPixelValue(const unsigned short Tag_0028_0108_3_US_VM_1 );
public:
	const unsigned short& LargestPixelValue();
	void LargestPixelValue(const unsigned short Tag_0028_0109_3_US_VM_1 );
public:
	CString& PerformedProcedureStepID();
	void PerformedProcedureStepID(const CString& Tag_0040_0253_3_SH_VM_1  );
public:
	CString& PerformedProcedureStepStartDate();
	void PerformedProcedureStepStartDate(const CString& Tag_0040_0244_3_DA_VM_1 );
public:
	CString& PerformedProcedureStepStartTime();
	void PerformedProcedureStepStartTime(const CString& Tag_0040_0245_3_TM_VM_1 );
public:
	CString& PerformedProcedureStepDescription();
	void PerformedProcedureStepDescription(const CString& Tag_0040_0254_3_LO_VM_1 );
public:
	CString& CommentOnThePerformedProcedureStep();
	void CommentOnThePerformedProcedureStep(const CString& Tag_0040_0280_3_ST_VM_1 );
public:
	CDcmPersonIdentificationMacro& PerformingPhysician();
	CDcmPersonIdentificationMacro& Operator();
	CDcmSopSequence& ReferencedPerformedProcedureStep();
	CDcmRequestAttributeSequence& RequestAttributes();
	CDcmCodeSequenceMacroEx& PerformedProtocol();
private:
	CDcmPersonIdentificationMacro m_PerformingPhysicianIdSequence_0008_1052,
		m_OperatorIdSequence_0008_1072;
	CDcmCodeSequenceMacroEx  m_PerformedProtocolCodeSequence_0040_0260;
	CDcmSopSequence m_ReferencedPerformedProcedureStepSequence_0008_1111;
	CDcmRequestAttributeSequence  m_RequestAttributeSequence_0040_0275;
};


#endif // !defined(AFX_DCMGENERALSERIESMODULE_H__92571CAA_E389_48FA_9DC5_48FC7EC0A538__INCLUDED_)
