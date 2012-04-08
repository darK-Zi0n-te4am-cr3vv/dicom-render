// DcmDigitalSignatureEx.h: interface for the CDcmDigitalSignatureEx class.
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

#if !defined(AFX_DCMDIGITALSIGNATUREEX_H__29FFD11D_8D6A_47B7_AB9C_2B9A91AB4A4C__INCLUDED_)
#define AFX_DCMDIGITALSIGNATUREEX_H__29FFD11D_8D6A_47B7_AB9C_2B9A91AB4A4C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"


class AFX_EXT_CLASS CDcmDigitalSignatureSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmDigitalSignatureSequence );

public:
	CDcmDigitalSignatureSequence();
	virtual ~CDcmDigitalSignatureSequence();
public:
	const unsigned short& MacIDNumber();
	void MacIDNumber(unsigned short Tag_0400_0005_1_US_VM_1 );
public:
	CString& DigitalSignatureUID();
	void DigitalSignatureUID(const CString& Tag_0400_0100_1_UI_VM_1 );
public:
	CString& DigitalSignatureDateTime();
	void DigitalSignatureDateTime(const CString& Tag_0400_0105_1_DT_VM_1 );
public:
    CString& CertificateType();
	void CertificateType(const CString& Tag_0400_0110_1_CS_VM_1 );
public:
    CByteArray& CertificateOfSigner();
	void CertificateOfSigner(	const CByteArray& Tag_0400_0115_1_OB_VM_1 );
public:
    CByteArray& Signature();
	void Signature(const CByteArray& Tag_0400_0120_1_OB_VM_1 );
public:
    CString& CertifiedTimestampType();
	void CertifiedTimestampType(const CString&Tag_0400_0305_1C_CS_VM_1 );
public:
	CByteArray& CertifiedTimestamp();
	void CertifiedTimestamp(const CByteArray& Tag_0400_0310_3_OB_VM_1 );
};



#endif // !defined(AFX_DCMDIGITALSIGNATUREEX_H__29FFD11D_8D6A_47B7_AB9C_2B9A91AB4A4C__INCLUDED_)
