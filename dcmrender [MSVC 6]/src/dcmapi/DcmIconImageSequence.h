// DcmIconImageSequence.h: interface for the CDcmIconImageSequence class.
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

#if !defined(AFX_DCMICONIMAGESEQUENCE_H__085DC477_FD0A_47AF_A030_BD84F6DAFB3D__INCLUDED_)
#define AFX_DCMICONIMAGESEQUENCE_H__085DC477_FD0A_47AF_A030_BD84F6DAFB3D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "DcmSequence.h"

class CDcmImagePixelModule;
class AFX_EXT_CLASS CDcmIconImageSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmIconImageSequence );
	CDcmIconImageSequence();
	virtual ~CDcmIconImageSequence();
public:
	CDcmImagePixelModule& ImagePixelModule();
private:
// jkf why a reference?
	CDcmImagePixelModule& m_ImagePixelModule;
};

#endif // !defined(AFX_DCMICONIMAGESEQUENCE_H__085DC477_FD0A_47AF_A030_BD84F6DAFB3D__INCLUDED_)
