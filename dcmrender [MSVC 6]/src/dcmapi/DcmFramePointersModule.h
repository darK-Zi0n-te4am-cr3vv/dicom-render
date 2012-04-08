// DcmFramePointersModule.h: interface for the CDcmFramePointersModule class.
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

#if !defined(AFX_DCMFRAMEPOINTERSMODULE_H__727878F2_7416_4BA4_8F55_C60E76DEFBE6__INCLUDED_)
#define AFX_DCMFRAMEPOINTERSMODULE_H__727878F2_7416_4BA4_8F55_C60E76DEFBE6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmFramePointersModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmFramePointersModule );
	CDcmFramePointersModule();
	virtual ~CDcmFramePointersModule();
public:
	void RepresentativeFrameNumber( const unsigned short Tag_0028_6010_3_US_VM_1 );
	const unsigned short& RepresentativeFrameNumber();
public:
	CWordArray& FrameNumbersOfInterest();
	void FrameNumbersOfInterest( CWordArray& Tag_0028_6020_3_US_VM_1N );
public:
	void FrameOfInterestDescription( const CStringArray& Tag_0028_6022_3_LO_VM_1N );
	CStringArray& FrameOfInterestDescription();
};
#endif // !defined(AFX_DCMFRAMEPOINTERSMODULE_H__727878F2_7416_4BA4_8F55_C60E76DEFBE6__INCLUDED_)
