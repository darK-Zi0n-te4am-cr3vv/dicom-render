// DcmModalityLUTModule.h: interface for the CDcmModalityLUTModule class.
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

#if !defined(AFX_DCMMODALITYLUTMODULE_H__9F1463C2_7FEA_4D4B_B80A_27BAA35AAD15__INCLUDED_)
#define AFX_DCMMODALITYLUTMODULE_H__9F1463C2_7FEA_4D4B_B80A_27BAA35AAD15__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmModalityLUTSequence.h"


class AFX_EXT_CLASS CDcmModalityLUTModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmModalityLUTModule );

public:
	CDcmModalityLUTModule();
	virtual ~CDcmModalityLUTModule();
public:
	CString& Intercept();
	void Intercept(const CString& Tag_0028_1052_1C_DS_VM_1);
public:
	CString& RescaleSlope();
	void RescaleSlope(const CString& Tag_0028_1053_1C_DS_VM_1);
public:
	CString& RescaleType();
	void RescaleType(const CString& Tag_0028_1054_1C_LO_VM_1);
public:
	CDcmLutSequence&  ModalityLUT();
private:
	CDcmLutSequence m_ModalityLUTSequence_0028_3000;
};

#endif // !defined(AFX_DCMMODALITYLUTMODULE_H__9F1463C2_7FEA_4D4B_B80A_27BAA35AAD15__INCLUDED_)
