// DcmMultiFrameModule.h: interface for the CDcmMultiFrameModule class.
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
#if !defined(AFX_DCMMULTIFRAMEMODULE_H__863E1C56_91C0_44B1_891F_E176F4EF7DFD__INCLUDED_)
#define AFX_DCMMULTIFRAMEMODULE_H__863E1C56_91C0_44B1_891F_E176F4EF7DFD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmMultiFrameModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmMultiFrameModule );

public:
	CDcmMultiFrameModule();
	virtual ~CDcmMultiFrameModule();
public:
	void NumberOfFrames( const CString& Tag_0028_0008_1_IS_VM_1 );
	CString& NumberOfFrames();
public:
	void FrameIncrementPointer( const CWordArray& Tag_0028_0009_1_AT_VM_1N );
	CWordArray& FrameIncrementPointer( );
};

#endif // !defined(AFX_DCMMULTIFRAMEMODULE_H__863E1C56_91C0_44B1_891F_E176F4EF7DFD__INCLUDED_)
