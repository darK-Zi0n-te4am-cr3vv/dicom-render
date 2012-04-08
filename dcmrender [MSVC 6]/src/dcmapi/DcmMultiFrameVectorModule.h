// DcmMultiFrameVectorModule.h: interface for the CDcmMultiFrameVectorModule class.
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

#if !defined(AFX_DCMMULTIFRAMEVECTORMODULE_H__3B7B280A_CBE7_4708_B4F2_90C5631FEB55__INCLUDED_)
#define AFX_DCMMULTIFRAMEVECTORMODULE_H__3B7B280A_CBE7_4708_B4F2_90C5631FEB55__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmSCMultiFrameVectorModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmSCMultiFrameVectorModule );
	CDcmSCMultiFrameVectorModule();
	virtual ~CDcmSCMultiFrameVectorModule();
public:
	void FrameTimeVector( const CStringArray& Tag_0018_1065_1C_DS_VM_1N );
	CStringArray& FrameTimeVector();
public:
	void PageNumberVector( const CStringArray& Tag_0018_2001_1C_IS_VM_1N );
	CStringArray& PageNumberVector();	
public:
	void FrameLabelVector( const CStringArray& Tag_0018_2002_1C_SH_VM_1N );
	CStringArray& FrameLabelVector();	
public:
	void FramePrimaryAngleVector( const CStringArray& Tag_0018_2003_1C_DS_VM_1N );
	CStringArray& FramePrimaryAngleVector();	
public:
	void FrameSecondaryAngleVector( const CStringArray& Tag_0018_2004_1C_DS_VM_1N );
	CStringArray& FrameSecondaryAngleVector();
public:
	void SliceLocationVector( const CStringArray& Tag_0018_2005_1C_DS_VM_1N );
	CStringArray& SliceLocationVector();	
public:
	void DisplayWindowLabelVector( const CStringArray& Tag_0018_2006_1C_SH_VM_1N );
	CStringArray& DisplayWindowLabelVector();	

};

#endif // !defined(AFX_DCMMULTIFRAMEVECTORMODULE_H__3B7B280A_CBE7_4708_B4F2_90C5631FEB55__INCLUDED_)
