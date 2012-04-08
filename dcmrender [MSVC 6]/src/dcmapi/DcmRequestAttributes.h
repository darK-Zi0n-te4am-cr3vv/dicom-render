// DcmRequestAttributes.h: interface for the CDcmRequestAttributes class.
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

#if !defined(AFX_DCMREQUESTATTRIBUTES_H__9B75AD74_A9EB_46A2_84BD_9F296C327F29__INCLUDED_)
#define AFX_DCMREQUESTATTRIBUTES_H__9B75AD74_A9EB_46A2_84BD_9F296C327F29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmCodeSequenceMacro.h"
#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmRequestAttributeSequence : public CDcmSequence
{
public:
	DECLARE_SERIAL( CDcmRequestAttributeSequence );
public:
	CDcmRequestAttributeSequence();
	virtual ~CDcmRequestAttributeSequence();
public:
	CString& RequestedProcedureID();
	void RequestedProcedureID( const CString& Tag_0040_1001_1C_SH_VM_1 );
public:
	CString& ScheduledProcedureStepID();
	void ScheduledProcedureStepID( const CString& Tag_0040_0009_1C_SH_VM_1 );
public:
	CString& ScheduledProcedureStepDescription();
	void ScheduledProcedureStepDescription( const CString& Tag_0040_0007_3_LO_VM_1 );
public:
	CDcmCodeSequenceMacroEx& ScheduledProtocol();
private:	
	CDcmCodeSequenceMacroEx m_CodeSequenceMacro_0040_0008_3;
	
};

#endif // !defined(AFX_DCMREQUESTATTRIBUTES_H__9B75AD74_A9EB_46A2_84BD_9F296C327F29__INCLUDED_)
