// DcmClinicalTrialSubjectModule.h: interface for the CDcmClinicalTrialSubjectModule class.
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

#if !defined(AFX_DCMCLINICALTRIALSUBJECTMODULE_H__6A537D1C_0189_4E3C_9E21_93BA08218D5E__INCLUDED_)
#define AFX_DCMCLINICALTRIALSUBJECTMODULE_H__6A537D1C_0189_4E3C_9E21_93BA08218D5E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmClinicalTrialSubjectModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmClinicalTrialSubjectModule );
	CDcmClinicalTrialSubjectModule();
	virtual ~CDcmClinicalTrialSubjectModule();
public:
	CString& TrialSponsorName();
	void TrialSponsorName(const CString& Tag_0012_0010_1_LO_VM_1 );
public:
	CString& TrialProtocolID();
	void TrialProtocolID(const CString& Tag_0012_0020_1_LO_VM_1 );
public:
	CString& TrialProtocolName();
	void TrialProtocolName(const CString& Tag_0012_0021_2_LO_VM_1 );
public:
	CString& TrialSiteID();
	void TrialSiteID(const CString& Tag_0012_0030_2_LO_VM_1);
public:
	CString& TrialSiteName();
	void TrialSiteName(const CString& Tag_0012_0031_2_LO_VM_1);
public:
	CString& TrialSubjectID();
	void TrialSubjectID(const CString& Tag_0012_0040_1C_LO_VM_1);
public:
	CString& TrialSubjectReadingID();
	void TrialSubjectReadingID(const CString& Tag_0012_0042_1C_LO_VM_1);
};


#endif // !defined(AFX_DCMCLINICALTRIALSUBJECTMODULE_H__6A537D1C_0189_4E3C_9E21_93BA08218D5E__INCLUDED_)
