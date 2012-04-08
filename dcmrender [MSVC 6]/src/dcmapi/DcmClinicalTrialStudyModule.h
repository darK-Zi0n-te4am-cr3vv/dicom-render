// DcmClinicalTrialStudyModule.h: interface for the CDcmClinicalTrialStudyModule class.
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

#if !defined(AFX_DCMCLINICALTRIALSTUDYMODULE_H__67DE51B5_FB17_41BB_8DA8_1A792E083D89__INCLUDED_)
#define AFX_DCMCLINICALTRIALSTUDYMODULE_H__67DE51B5_FB17_41BB_8DA8_1A792E083D89__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmClinicalTrialStudyModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmClinicalTrialStudyModule );
	CDcmClinicalTrialStudyModule();
	virtual ~CDcmClinicalTrialStudyModule();
public:
	CString& TrialTimePointID();
	void TrialTimePointID(const CString& Tag_0012_0050_2_LO_VM_1 );
public:
	CString& TrialTimePointDescription();
	void TrialTimePointDescription(const CString& Tag_0012_0051_3_ST_VM_1 );
};

#endif // !defined(AFX_DCMCLINICALTRIALSTUDYMODULE_H__67DE51B5_FB17_41BB_8DA8_1A792E083D89__INCLUDED_)
