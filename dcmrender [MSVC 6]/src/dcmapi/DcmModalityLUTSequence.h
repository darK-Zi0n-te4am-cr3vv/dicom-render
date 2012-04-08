// CDcmLUTSequence.h: interface for the CDcmModalityLUTSequence class.
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

#if !defined(AFX_DCMMODALITYLUTSEQUENCE_H__1E68A19C_B20A_4AF0_A693_06330AC070DF__INCLUDED_)
#define AFX_DCMMODALITYLUTSEQUENCE_H__1E68A19C_B20A_4AF0_A693_06330AC070DF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmLutSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmLutSequence );

public:
	CDcmLutSequence();
	virtual ~CDcmLutSequence();
public:
    void LUTDescriptor(const CWordArray& Tag_0028_3002_1C_US_VM_3 );
	CWordArray& LUTDescriptor();
public:	
	void LUTExplanation(const CString& Tag_0028_3003_3_LO_VM_1);
	CString& LUTExplanation();
public:
	void ModalityLUTType(const CString& Tag_0028_3004_1C_LO_VM_1);
	CString& ModalityLUTType();
public:
	void LUTData(const CWordArray& Tag_0028_3006_1C_OW_VM_1N );
	CWordArray& LUTData( );
};

#endif // !defined(AFX_DCMMODALITYLUTSEQUENCE_H__1E68A19C_B20A_4AF0_A693_06330AC070DF__INCLUDED_)
