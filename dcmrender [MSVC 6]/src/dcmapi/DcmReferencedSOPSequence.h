// DcmReferencedSOPSequence.h: interface for the CDcmReferencedSOPSequence class.
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

#if !defined(AFX_DCMREFERENCEDSOPSEQUENCE_H__715EB8C3_AA14_44A4_A9E6_E919EB765D7D__INCLUDED_)
#define AFX_DCMREFERENCEDSOPSEQUENCE_H__715EB8C3_AA14_44A4_A9E6_E919EB765D7D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmSopSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmSopSequence );
	CDcmSopSequence();
	CDcmSopSequence( CDcmSopSequence& sequence );
	virtual ~CDcmSopSequence();
public:
	CDcmSopSequence& operator=( CDcmSopSequence& sequence );
public:
// Uniquely identifies the referenced SOP Class.
	CString& ReferencedSOPClassUID();
	void ReferencedSOPClassUID(const CString& Tag_0008_1150_1_UI_VM_1);
public:
//Uniquely identifies the referenced SOP Instance.
	CString& ReferencedSOPInstanceUID();
	void ReferencedSOPInstanceUID(const CString& Tag_0008_1155_1_UI_VM_1);
protected:
// Constructs sequence dataset. 
	virtual void InitializeSequence();
};


#endif // !defined(AFX_DCMREFERENCEDSOPSEQUENCE_H__715EB8C3_AA14_44A4_A9E6_E919EB765D7D__INCLUDED_)
