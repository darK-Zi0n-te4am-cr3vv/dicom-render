// DcmSpecimenSequence.h: interface for the CDcmSpecimenSequence class.
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

#if !defined(AFX_DCMSPECIMENSEQUENCE_H__AC3860D8_04DF_4BAF_915F_1D241373CB84__INCLUDED_)
#define AFX_DCMSPECIMENSEQUENCE_H__AC3860D8_04DF_4BAF_915F_1D241373CB84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "DcmCodeSequenceMacro.h"
#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmSpecimenSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmSpecimenSequence );
	CDcmSpecimenSequence();
	virtual ~CDcmSpecimenSequence();
public:
	CString& SpecimenIdentifier();
	void SpecimenIdentifier(const CString& Tag_0040_0551_2C_LO_VM_1 );
public:
	CString& SlideIdentifier();
	void SlideIdentifier(const CString& Tag_0040_06FA_2C_LO_VM_1 );
public:
	CDcmCodeSequenceMacroEx& SpecimenType();
private:
	CDcmCodeSequenceMacroEx m_SpecimenType__0040_059A_2C;
};


#endif // !defined(AFX_DCMSPECIMENSEQUENCE_H__AC3860D8_04DF_4BAF_915F_1D241373CB84__INCLUDED_)
