// DcmPersonIdentificationMacro.h: interface for the CDcmPersonIdentificationMacro class.
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

#if !defined(AFX_DCMPERSONIDENTIFICATIONMACRO_H__0BDBE03A_5CDA_470D_8ABE_9ADB316F4071__INCLUDED_)
#define AFX_DCMPERSONIDENTIFICATIONMACRO_H__0BDBE03A_5CDA_470D_8ABE_9ADB316F4071__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmCodeSequenceMacro.h"
#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmPersonIdentificationMacro : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmPersonIdentificationMacro );
public:
	CDcmPersonIdentificationMacro();
	virtual ~CDcmPersonIdentificationMacro();
public:
	CString& PersonAddress();
	void PersonAddress(const CString& Tag_0040_1102_3_ST_VM_1 );
public:
	CStringArray& PersonTelephoneNumbers();
	void PersonTelephoneNumbers(const CStringArray& Tag_0040_1103_3_LO_VM_1N );
public:
	CString& InstitutionName();
	void InstitutionName(const CString& Tag_0008_0080_1C_LO_VM_1 );
public:
	CString& InstitutionAddress();
	void InstitutionAddress(const CString& Tag_0008_0081_3_ST_VM_1 );
public:
	CDcmCodeSequenceMacroEx& PersonCode();
	CDcmCodeSequenceMacroEx& InstitutionCode();
private:
	CDcmCodeSequenceMacroEx m_PersonIdentification_1_0040_1101;
	CDcmCodeSequenceMacroEx m_Institution_1C_0008_0082;
};

#endif // !defined(AFX_DCMPERSONIDENTIFICATIONMACRO_H__0BDBE03A_5CDA_470D_8ABE_9ADB316F4071__INCLUDED_)
