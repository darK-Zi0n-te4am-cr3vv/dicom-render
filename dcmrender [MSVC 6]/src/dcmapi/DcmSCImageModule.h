// DcmSCImageModule.h: interface for the CDcmSCImageModule class.
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

#if !defined(AFX_DCMSCIMAGEMODULE_H__AE4F45C7_53E9_4932_A305_6E1B44B63EFC__INCLUDED_)
#define AFX_DCMSCIMAGEMODULE_H__AE4F45C7_53E9_4932_A305_6E1B44B63EFC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmSCImageModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmSCImageModule );
	CDcmSCImageModule();
	virtual ~CDcmSCImageModule();
public:
	CString& DateOfSecondaryCapture();
	void DateOfSecondaryCapture(const CString& Tag_0018_1012_3_DA_VM_1 );
public:
	CString& TimeOfSecondaryCapture();
	void TimeOfSecondaryCapture(const CString& Tag_0018_1014_3_TM_VM_1 );

};
#endif // !defined(AFX_DCMSCIMAGEMODULE_H__AE4F45C7_53E9_4932_A305_6E1B44B63EFC__INCLUDED_)
