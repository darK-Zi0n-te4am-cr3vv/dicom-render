// DcmAcquisitionContextSequence.h: interface for the CDcmAcquisitionContextSequence class.
//
//////////////////////////////////////////////////////////////////////
/* 
 * Permission is given by the author to freely redistribute and include
 * this code in any program.
 *
 * Copyright: (c) 2005, John Fitzgerald <dicomapi@yahoo.com>
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
#if !defined(AFX_DCMACQUISITIONCONTEXTSEQUENCE_H__CB0A57F9_7867_44C3_9CB9_9D3A37534739__INCLUDED_)
#define AFX_DCMACQUISITIONCONTEXTSEQUENCE_H__CB0A57F9_7867_44C3_9CB9_9D3A37534739__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmCodeSequenceMacro.h"
// C.7.6.14 Acquisition Context Module
// Table C.7.6.14-1 specifies Attributes for description of the conditions present during data
// acquisition.
class AFX_EXT_CLASS CDcmAcquisitionContextSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmAcquisitionContextSequence );
public:
	CDcmAcquisitionContextSequence();
	CDcmAcquisitionContextSequence(CDcmAcquisitionContextSequence& sequence);
	virtual ~CDcmAcquisitionContextSequence();
public:
	CDcmAcquisitionContextSequence& operator=( CDcmAcquisitionContextSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
// References one or more frames in a Multi-frame
// SOP Instance. The first frame shall be denoted
// as frame number one.
// Required if Acquisition Context Sequence
// (0040,0555) is sent and this SOP Instance is a
// Multi-frame SOP Instance and the values in this
// sequence item do not apply to all frames.
	CWordArray& ReferencedFrameNumbers();
	void ReferencedFrameNumbers( const CWordArray& Tag_0040_A136_1C_US_VM_1N );
public:
// This is the Value component of a Name/Value
// pair when the Concept implied by Concept Name
// Code Sequence (0040,A043) is a set of one or
// more numeric values.
// Required if Concept Name Code Sequence
// (0040,A043) is present and the value it requires
// (implies) is a set of one or more integers or real
// numbers. Shall not be present otherwise.
	CStringArray& NumericValue();
	void NumericValue( const CStringArray& Tag_0040_A30A_1C_DS_VM_1N );
public:
// This is the Value component of a Name/Value
// pair when the Concept implied by Concept Name
// Code Sequence (0040,A043) is a date.
// Note: The purpose or role of the date value could be
// specified in Concept Name Code
// Sequence (0040,A043).
// Required if Concept Name Code Sequence
// (0040,A043) is present and the value it requires
// (implies) is a date. Shall not be present
// otherwise.
	CString& Date();
	void Date( const CString& Tag_0040_A121_1C_DA_VM_1 );
public:
// This is the Value component of a Name/Value
// pair when the Concept implied by Concept Name
// Code Sequence (0040,A043) is a time.
// Note: The purpose or role of the time value could be
// specified in Concept Name Code
// Sequence (0040,A043).
// Required if Concept Name Code Sequence
// (0040,A043) is present and the value it requires
// (implies) is a time. Shall not be present
// otherwise.
	CString& Time();
	void Time( const CString& Tag_0040_A122_1C_TM_VM_1 );
public:
// This is the Value component of a Name/Value
// pair when the Concept implied by Concept Name
// Code Sequence (0040,A043) is a Person Name.
// Note: The role of the person could be specified in
// Concept Name Code Sequence
// (0040,A043).
// Required if Concept Name Code Sequence
// (0040,A043) is present and the value it requires
// (implies) is a person name. Shall not be present
// otherwise.
	CString& PersonName();
	void PersonName( const CString& Tag_0040_A123_1C_PN_VM_1 );
public:
// This is the Value component of a Name/Value
// pair when the Concept implied by Concept Name
// Code Sequence (0040,A043) is a Text
// Observation Value.
// Required if Date (0040,A121), Time
// (0040,A122), and Person Name (0040,A123) do
// not fully describe the concept specified by
// Concept Name Code Sequence (0040,A043).
// Shall not be present otherwise.
	CString& TextValue();
	void TextValue( const CString& Tag_0040_A160_1C_UT_VM_1 );
public:
// A concept that constrains the meaning of (i.e.
// defines the role of) the Observation Value. The
// “Name” component of a Name/Value pair. This
// sequence shall contain exactly one item.
// Required if a sequence item is present.
	CDcmCodeSequenceMacroEx& ConceptName();
// Units of measurement. Only a single Item shall
// be permitted in this Sequence.
// Required if a sequence item is present and
// Numeric Value (0040,A30A) is sent. Shall not be
// present otherwise.
	CDcmCodeSequenceMacroEx& MeasurementUnits();
// This is the Value component of a Name/Value
// pair when the Concept implied by Concept Name
// Code Sequence (0040,A043) is a Coded Value.
// This sequence shall contain exactly one item.
// Required if a sequence item is present and Date
// (0040,A121), Time (0040,A122), Person Name
// (0040,A123), Text Value (0040,A160), and the
// pair of Numeric Value (0040,A30A) and
// Measurement Units Code Sequence
// (0040,08EA) are not present.
	CDcmCodeSequenceMacroEx& Concept();
private:
	CDcmCodeSequenceMacroEx m_ConceptName_0040_A043_1C,	m_MeasurementUnits_0040_08EA_1C,
		m_Concept_0040_A168_1C;


};

#endif // !defined(AFX_DCMACQUISITIONCONTEXTSEQUENCE_H__CB0A57F9_7867_44C3_9CB9_9D3A37534739__INCLUDED_)
