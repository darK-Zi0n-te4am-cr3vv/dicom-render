// DcmSeriesSequence.h: interface for the CDcmSeriesSequence class.
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

#if !defined(AFX_DCMSERIESSEQUENCE_H__87313D21_881B_4201_896C_4B2D10D6D4CB__INCLUDED_)
#define AFX_DCMSERIESSEQUENCE_H__87313D21_881B_4201_896C_4B2D10D6D4CB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmReferencedSOPSequence.h"

class AFX_EXT_CLASS CDcmSeriesSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmSeriesSequence );

public:
	CDcmSeriesSequence();
	virtual ~CDcmSeriesSequence();
public:
	CString& SeriesInstanceUID();
	void SeriesInstanceUID(const CString& Tag_0020_000E_1_UI_VM_1);
public:
	CStringArray& RetrieveAETitle();
	void RetrieveAETitle(const CStringArray& Tag_0008_0054_3_AE_VM_1N);
public:
	CString& StorageMediaFileSetID();
	void StorageMediaFileSetID(const CString& Tag_0088_0130_3_SH_VM_1);
public:
	CString& StorageMediaFileSetUID();
	void StorageMediaFileSetUID(const CString& Tag_0088_0140_3_UI_VM_1);
public:
	CDcmSopSequence& ReferencedSop();
private:
	CDcmSopSequence m_ReferencedSOPSequence_0008_1199_1;
};

#endif // !defined(AFX_DCMSERIESSEQUENCE_H__87313D21_881B_4201_896C_4B2D10D6D4CB__INCLUDED_)
