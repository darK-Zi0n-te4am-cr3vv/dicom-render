// DcmMultiFrameDimensionModule.h: interface for the CDcmMultiFrameDimensionModule class.
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
#if !defined(AFX_DCMMULTIFRAMEDIMENSIONMODULE_H__35457BAD_CC7C_434E_A147_BE49439DC231__INCLUDED_)
#define AFX_DCMMULTIFRAMEDIMENSIONMODULE_H__35457BAD_CC7C_434E_A147_BE49439DC231__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmDimensionOrgSequence.h"
#include "DcmDimensionIndexSequence.h"
class AFX_EXT_CLASS CDcmMultiFrameDimensionModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmMultiFrameDimensionModule );
public:
	CDcmMultiFrameDimensionModule();
	virtual ~CDcmMultiFrameDimensionModule();
public:
	CDcmDimensionOrgSequence& DimensionOrganization();
	CDcmDimensionIndexSequence& DimensionIndex();
private:
	CDcmDimensionOrgSequence m_DimensionOrganization_0020_9221_2;
	CDcmDimensionIndexSequence m_DimensionIndex_0020_9222_2;
};
/*
Dimension Organization Sequence (0020,9221) 2
>Dimension Organization UID (0020,9164) 1
Dimension Index Sequence (0020,9222) 2
>Dimension Index Pointer (0020,9165) 1
>Dimension Index Private Creator (0020,9213) 1C
>Functional Group Pointer (0020,9167) 1C
>Functional Group Private Creator (0020,9238) 1C
>Dimension Organization UID (0020,9164) 1C
*/
#endif // !defined(AFX_DCMMULTIFRAMEDIMENSIONMODULE_H__35457BAD_CC7C_434E_A147_BE49439DC231__INCLUDED_)
