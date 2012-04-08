// DcmVioLutModule.h: interface for the CDcmVioLutModule class.
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

#if !defined(AFX_DCMVIOLUTMODULE_H__4DBDF1D3_E948_4976_A373_8773F7F01A0B__INCLUDED_)
#define AFX_DCMVIOLUTMODULE_H__4DBDF1D3_E948_4976_A373_8773F7F01A0B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmModalityLUTSequence.h"

class AFX_EXT_CLASS CDcmVioLutModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmVioLutModule );
public:
	CDcmVioLutModule();
	virtual ~CDcmVioLutModule();
public:
	CStringArray& WindowCenter();
	void WindowCenter( const CStringArray& Tag_0028_3010_3_DS_VM_1N );
public:
	CStringArray& WindowWidth();
	void WindowWidth( const CStringArray& Tag_0028_1051_1C_DS_VM_1N );
public:
	CStringArray& WindowCenterAndWidthExplanation();
	void WindowCenterAndWidthExplanation( const CStringArray& Tag_0028_1055_3_LO_VM_1N );
public:
	CDcmLutSequence& VoiLut();
private:
	CDcmLutSequence m_VoiLut_0028_3010_3;
};

#endif // !defined(AFX_DCMVIOLUTMODULE_H__4DBDF1D3_E948_4976_A373_8773F7F01A0B__INCLUDED_)
