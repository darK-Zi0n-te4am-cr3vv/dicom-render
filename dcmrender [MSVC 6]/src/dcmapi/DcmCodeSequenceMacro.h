// DcmCodeSequenceMacro.h: interface for the CDcmCodeSequenceMacro class.
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

#if !defined(AFX_DCMCODESEQUENCEMACRO_H__D9A98368_7416_4FC1_84E8_3836FFE016D8__INCLUDED_)
#define AFX_DCMCODESEQUENCEMACRO_H__D9A98368_7416_4FC1_84E8_3836FFE016D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "DcmSequence.h"

// Table 8.8-1 Common Attribute Set for Code Sequence Attributes
// (Invoked as “Code Sequence Macro”)
class AFX_EXT_CLASS CDcmCodeSequenceMacroEx : public CDcmSequence
{
public:
	DECLARE_SERIAL( CDcmCodeSequenceMacroEx );
public:
	CDcmCodeSequenceMacroEx();
	CDcmCodeSequenceMacroEx( CDcmCodeSequenceMacroEx& sequence );
	virtual ~CDcmCodeSequenceMacroEx();
public:
	CDcmCodeSequenceMacroEx& operator=( CDcmCodeSequenceMacroEx& sequence  );
public:
// The Code Value (0008,0100) is an identifier that is unambiguous within the Coding Scheme denoted by
// Coding Scheme Designator (0008,0102) and Coding Scheme Version (0008,0103).
// Note: The Code Value is typically not a natural language string, e.g. “T-04000”.
	CString& CodeValue();
	void CodeValue( const CString& Tag_0008_0100_1C_SH_VM_1 );
public:
// The attribute Coding Scheme Designator (0008,0102) identifies the coding scheme in which the code for
// a term is defined. Standard coding scheme designators used in DICOM information interchange are listed
// in PS 3.16. Other coding scheme designators, for both private and public coding schemes, may be used.
// Further identification of the coding scheme designators used in a SOP Instance may be provided in the
// Coding Scheme Identification Sequence (0008,0110) (see Section C.12).
	CString& CodingSchemeDesignator();
	void CodingSchemeDesignator( const CString& Tag_0008_0102_1C_SH_VM_1 );
public:
// The attribute Coding Scheme Version (0008,0103) may be used to identify the version of a coding
// scheme if necessary to resolve ambiguity in the Code Value (0008,0100) or Code Meaning (0008,0104),
// or if the Code Value does not appear in all versions of the Coding Scheme identified by the Coding
// Scheme Designator.
	CString& CodingSchemeVersion();
	void CodingSchemeVersion( const CString& Tag_0008_0103_1C_SH_VM_1 );
public:
// 8.3 CODE MEANING
// The Code Meaning (0008,0104) is text which has meaning to a human and which conveys the meaning
// of the term defined by the combination of Code Value and Coding Scheme Designator. Though such a
// meaning can be “looked up” in the dictionary for the coding scheme, it is encoded for the convenience of
// applications that do not have access to such a dictionary.
	CString& CodeMeaning();
	void CodeMeaning( const CString& Tag_0008_0104_1C_LO_VM_1 );
public:
// The value of Context Identifier (0008,010F) identifies the Context Group defined by Mapping Resource
// (0008,0105) from which the values of Code Value (0008,0100) and Code Meaning (0008,0104) were
// selected , or to which the Code Value (0008,0100) and Code Meaning (0008,0104) have been added as
// a private Context Group extension (see Section 8.7) .
// Note: Privately defined Context Groups are not identified by Context Identifier and Mapping Resource.
	CString& ContextIdentifier();
	void ContextIdentifier( const CString& Tag_0008_010F_3_CS_VM_1 );
public:
// The value of Mapping Resource (0008,0105) denotes the message/terminology Mapping Resource that
// specifies the Context Group that specifies the Value Set. The Defined Terms for the value of Mapping
// Resource (0008,0105) shall be:
// “DCMR”= “DICOM Content Mapping Resource”,
// "SDM"= "SNOMED DICOM Microglossary" (Retired).
// PS 3.16 specifies the DICOM Content Mapping Resource (DCMR).
	CString& MappingResource();
	void MappingResource( const CString& Tag_0008_0105_1C_CS_VM_1 );
public:
// Context Group Version (0008,0106) conveys the version (as a datetime value) of the Context Group
// identified by Context Identifier (0008,010F).
	CString& ContextGroupVersion();
	void ContextGroupVersion( const CString& Tag_0008_0106_1C_DT_VM_1 );
public:
// Context Group Extension Flag (0008,010B) may be used to designate a Code Value/Code Meaning pair
// as a selection from a private extension of a Context Group. If the Context Group Extension Flag is
// present, and has a value of “Y”, Context Group Extension Creator UID (0008,010D) shall be used to
// identify the person or organization who created the extension to the Context Group. Context Group Local
// Version (0008,0107) conveys an implementation-specific private version datetime of a Context Group that
// contains private extensions
	CString& ContextGroupExtensionFlag();
	void ContextGroupExtensionFlag( const CString& Tag_0008_010B_3_CS_VM_1 );
public:
// See Section 8.7. Required if the value of Context Group
// Extension Flag (0008,010B) is "Y".
	CString& ContextGroupLocalVersion();
	void ContextGroupLocalVersion( const CString& Tag_0008_0107_1C_DT_VM_1 );
public:
// Identifies the person or organization who created an
// extension to the Context Group. See Section 8.7.
// Required if the value of Context Group Extension Flag
// 0008,010B) is "Y".
	CString& ContextGroupExtensionCreatorUID();
	void ContextGroupExtensionCreatorUID( const CString& Tag_0008_010D_1C_UI_VM_1 );
protected:
// Constructs sequence dataset. 
	virtual void InitializeSequence();
};

#endif // !defined(AFX_DCMCODESEQUENCEMACRO_H__D9A98368_7416_4FC1_84E8_3836FFE016D8__INCLUDED_)
