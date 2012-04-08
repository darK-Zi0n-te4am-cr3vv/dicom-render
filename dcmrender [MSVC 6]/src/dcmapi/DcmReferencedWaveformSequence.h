// DcmReferencedWaveformSequence.h: interface for the CDcmReferencedWaveformSequence class.
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

#if !defined(AFX_DCMREFERENCEDWAVEFORMSEQUENCE_H__9D360B0D_5E6F_4B6E_8A54_784E3568D0EE__INCLUDED_)
#define AFX_DCMREFERENCEDWAVEFORMSEQUENCE_H__9D360B0D_5E6F_4B6E_8A54_784E3568D0EE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "DcmSequence.h"
#include "DcmCodeSequenceMacro.h"
#include "DcmSeriesSequence.h"

class AFX_EXT_CLASS CDcmWaveformSequence : public CDcmSequence
{
public:
	DECLARE_SERIAL( CDcmWaveformSequence );
public:
	CDcmWaveformSequence();
	virtual ~CDcmWaveformSequence();
public:
	CString& StudyInstanceUID();
	void StudyInstanceUID(const CString& Tag_0020_000D_1_UI_VM_1);
public:
	CDcmCodeSequenceMacroEx& PurposeOfReference();
	CDcmSeriesSequence& ReferencedSeries();
private:
	CDcmCodeSequenceMacroEx  m_PurposeOfReference_0040_A170;
	CDcmSeriesSequence m_ReferencedSeriesSequence_0008_1115;
};

#endif // !defined(AFX_DCMREFERENCEDWAVEFORMSEQUENCE_H__9D360B0D_5E6F_4B6E_8A54_784E3568D0EE__INCLUDED_)
