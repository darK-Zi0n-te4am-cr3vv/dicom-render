// DcmCodingSchemeIdentificationSequence.h: interface for the CDcmCodingSchemeIdentificationSequence class.
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

#if !defined(AFX_DCMCODINGSCHEMEIDENTIFICATIONSEQUENCE_H__0287CEC5_DF35_4182_A8D8_1A572BE7D0E1__INCLUDED_)
#define AFX_DCMCODINGSCHEMEIDENTIFICATIONSEQUENCE_H__0287CEC5_DF35_4182_A8D8_1A572BE7D0E1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmCodingSchemeIdSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmCodingSchemeIdSequence );
	CDcmCodingSchemeIdSequence();
	virtual ~CDcmCodingSchemeIdSequence();
public:
	void CodingSchemeDesignator(const CString& Tag_0008_0102_1_SH_VM_1 );
	CString& CodingSchemeDesignator();
public:
	void CodingSchemeRegistry(const CString& Tag_0008_0112_1C_LO_VM_1 );
	CString& CodingSchemeRegistry();
public:
	void CodingSchemeUID(const CString& Tag_0008_010C_1C_UI_VM_1 );
	CString& CodingSchemeUID();	 
public:
	void CodingSchemeExternalUID(const CString& Tag_0008_0114_2C_UI_VM_1 );
	CString& CodingSchemeExternalUID();
public:
	void CodingSchemeName(const CString& Tag_0008_0115_3_ST_VM_1 );
	CString& CodingSchemeName();
public:
	void CodingSchemeVersion(const CString& Tag_0008_0103_3_SH_VM_1 );
	CString& CodingSchemeVersion();	
public:
	void ResponsibleOrganization(const CString& Tag_0008_0116_3_ST_VM_1 );
	CString& ResponsibleOrganization();	
};

#endif // !defined(AFX_DCMCODINGSCHEMEIDENTIFICATIONSEQUENCE_H__0287CEC5_DF35_4182_A8D8_1A572BE7D0E1__INCLUDED_)
