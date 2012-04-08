// DcmMACParametersEx.h: interface for the CDcmMACParametersEx class.
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

#if !defined(AFX_DCMMACPARAMETERSEX_H__C0A5C209_0952_48EC_B06A_5150604FA4A2__INCLUDED_)
#define AFX_DCMMACPARAMETERSEX_H__C0A5C209_0952_48EC_B06A_5150604FA4A2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmMACParameterSequence : public CDcmSequence 
{
public:
	DECLARE_SERIAL( CDcmMACParameterSequence );

public:
	CDcmMACParameterSequence();
	virtual ~CDcmMACParameterSequence();

public:
	const unsigned short& IDNumber();
	void IDNumber(const unsigned short Tag_0400_0005_1_US_VM_1);	
public:	
	CString&  CalculationTransferSyntaxUID();
	void CalculationTransferSyntaxUID(const CString& Tag_0400_0010_1_UI_VM_1);	
public:
	CString&  Algorithm();
	void Algorithm(const CString& Tag_0400_0015_1_CS_VM_1);	
public:
	CWordArray& DataElementsSigned();
	void DataElementsSigned(const CWordArray& Tag_0400_0020_1_AT_VM_1N);
};



#endif // !defined(AFX_DCMMACPARAMETERSEX_H__C0A5C209_0952_48EC_B06A_5150604FA4A2__INCLUDED_)
