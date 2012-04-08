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


// DcmCineModule.h: interface for the CDcmCineModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMCINEMODULE_H__35C0FA0B_EF77_44B9_9610_5023A1625167__INCLUDED_)
#define AFX_DCMCINEMODULE_H__35C0FA0B_EF77_44B9_9610_5023A1625167__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
class AFX_EXT_CLASS CDcmCineModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmCineModule );
	CDcmCineModule();
	virtual ~CDcmCineModule();
public:
	void PreferredPlaybackSequencing( unsigned short Tag_0018_1244_3_US_VM_1 );
	const unsigned short& PreferredPlaybackSequencing(  );
public:
	void FrameTime( const CString& Tag_0018_1063_1C_DS_VM_1 );
	CString& FrameTime(  );
public:
	void FrameTimeVector( const CStringArray& Tag_0018_1065_1C_DS_VM_1N );
	CStringArray& FrameTimeVector(  );
public:
	void StartTrim( const CString& Tag_0008_2142_3_IS_VM_1 );
	CString& StartTrim(  );
public:
	void StopTrim( const CString& Tag_0008_2143_3_IS_VM_1 );
	CString& StopTrim(  );
public:
	void RecommendedDisplayFrameRate( const CString& Tag_0008_2144_3_IS_VM_1 );
	CString& RecommendedDisplayFrameRate(  );
public:
	void CineRate( const CString& Tag_0018_0040_3_IS_VM_1 );
	CString& CineRate(  ); 
public:
	void FrameDelay( const CString& Tag_0018_1066_3_DA_VM_1 );
	CString& FrameDelay(  ); 	  
public:
	void ImageTriggerDelay( const CString& Tag_0018_1067_3_DS_VM_1 );
	CString& ImageTriggerDelay(  ); 	
public:
	void EffectiveDuration( const CString& Tag_0018_0072_3_DS_VM_1 );
	CString& EffectiveDuration(  ); 
public:
	void ActualFrameDuration( const CString& Tag_0018_1242_3_IS_VM_1 );
	CString& ActualFrameDuration(  ); 
};


#endif // !defined(AFX_DCMCINEMODULE_H__35C0FA0B_EF77_44B9_9610_5023A1625167__INCLUDED_)
