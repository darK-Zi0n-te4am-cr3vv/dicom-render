// DcmAcquisitionContextModule.h: interface for the CDcmAcquisitionContextModule class.
//
//////////////////////////////////////////////////////////////////////
/* 
 * Permission is given by the author to freely redistribute and include
 * this code in any program.
 *
 * Copyright: (c) 2005, John Fitzgerald <dicomapi@yahoo.com>
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
#if !defined(AFX_DCMACQUISITIONCONTEXTMODULE_H__20C61485_F379_4393_B1B8_641FDE6ABB14__INCLUDED_)
#define AFX_DCMACQUISITIONCONTEXTMODULE_H__20C61485_F379_4393_B1B8_641FDE6ABB14__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmAcquisitionContextSequence.h"
// Table C.7.6.14-1 specifies Attributes for description of the conditions present during data
// acquisition. This Module shall not contain descriptions of conditions that replace those that are already
// described in specific Modules or Attributes that are also contained within the IOD that contains
// this Module.
class AFX_EXT_CLASS CDcmAcquisitionContextModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmAcquisitionContextModule );
public:
	CDcmAcquisitionContextModule();
	virtual ~CDcmAcquisitionContextModule();
	CDcmAcquisitionContextModule( CDcmAcquisitionContextModule& module );
public:
	CDcmAcquisitionContextModule& operator=( CDcmAcquisitionContextModule& module );
public:
// Free-text description of the image-acquisition context.
	CString& ContextDescription();
	void ContextDescription( const CString& Tag_0040_0556_3_ST_VM_1 );
// A sequence of repeating items that describes the conditions present during the acquisition of an
// Image. Zero or more items may be included in this sequence.
	CDcmAcquisitionContextSequence& AcquisitionContext();
protected:
// Constructs module dataset. 
	virtual void InitializeModule();
private:
	CDcmAcquisitionContextSequence m_AcquisitionContext_0040_0555_2;
};
//Acquisition Context Description (0040,0556) 3 Free-text description of the image-acquisition context.
#endif // !defined(AFX_DCMACQUISITIONCONTEXTMODULE_H__20C61485_F379_4393_B1B8_641FDE6ABB14__INCLUDED_)
