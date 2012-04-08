// DcmEncryptedAttributesEx.h: interface for the CDcmEncryptedAttributesEx class.
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

#if !defined(AFX_DCMENCRYPTEDATTRIBUTESEX_H__F94F4996_CB84_464A_8FBA_B1FB46DEBA49__INCLUDED_)
#define AFX_DCMENCRYPTEDATTRIBUTESEX_H__F94F4996_CB84_464A_8FBA_B1FB46DEBA49__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmEncryptedAttributesSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmEncryptedAttributesSequence );
	CDcmEncryptedAttributesSequence();
	virtual ~CDcmEncryptedAttributesSequence();
public:
	CString& TransferSyntaxUID();
	void TransferSyntaxUID( const CString& Tag_0400_0510_1_UI_VM_1 );
public:
	CByteArray& EncryptedContent();
	void EncryptedContent( const CByteArray& Tag_0400_0510_1_OB_VM_1 );
};

#endif // !defined(AFX_DCMENCRYPTEDATTRIBUTESEX_H__F94F4996_CB84_464A_8FBA_B1FB46DEBA49__INCLUDED_)
