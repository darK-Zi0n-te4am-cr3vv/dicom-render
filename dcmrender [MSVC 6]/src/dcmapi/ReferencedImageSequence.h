// ReferencedImageSequence.h: interface for the CReferencedImageSequence class.
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

#if !defined(AFX_REFERENCEDIMAGESEQUENCE_H__F5AD6774_C178_46E6_94DF_134B5D3DD9D7__INCLUDED_)
#define AFX_REFERENCEDIMAGESEQUENCE_H__F5AD6774_C178_46E6_94DF_134B5D3DD9D7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmCodeSequenceMacro.h"
#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmImageSequence : public CDcmSequence 
{
public:
	DECLARE_SERIAL( CDcmImageSequence );

public:
	CDcmImageSequence();
	virtual ~CDcmImageSequence();
public:
	CString& ReferencedSOPClassUID();
	void ReferencedSOPClassUID(const CString& Tag_0008_1150_1C_UI_VM_1 );
public:
	CString& ReferencedSOPInstanceUID();
	void ReferencedSOPInstanceUID(const CString& Tag_0008_1155_1C_UI_VM_1 );
public:
	CStringArray& ReferencedFrameNumber();
	void ReferencedFrameNumber(const CStringArray& Tag_0008_1160_3_IS_VM_1N  );
public:
	CDcmCodeSequenceMacroEx& PurposeOfReference();
private:
	CDcmCodeSequenceMacroEx m_PurposeOfReference_0040_A170_3_SQ;

};

#endif // !defined(AFX_REFERENCEDIMAGESEQUENCE_H__F5AD6774_C178_46E6_94DF_134B5D3DD9D7__INCLUDED_)
