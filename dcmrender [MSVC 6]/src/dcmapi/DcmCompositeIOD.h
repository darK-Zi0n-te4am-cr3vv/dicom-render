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

// DcmCompositeIOD.h: interface for the CDcmCompositeIOD class.
//
//////////////////////////////////////////////////////////////////////
#if !defined(AFX_DCMCOMPOSITEIOD_H__DD798EC8_BE2A_4BB0_945F_925103077C3F__INCLUDED_)
#define AFX_DCMCOMPOSITEIOD_H__DD798EC8_BE2A_4BB0_945F_925103077C3F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

__declspec( dllimport )  void InitDicomDLL(); 

#include "SopFile.h"
#include "DcmIE.h"
#include "DcmType.h"
#include "DicomTag.h"

class AFX_EXT_CLASS CDcmCompositeIOD : public CDcmIOD  
{
public:
	DECLARE_SERIAL( CDcmCompositeIOD );
	CDcmCompositeIOD();
	CDcmCompositeIOD(CDcmCompositeIOD& iod);
	virtual ~CDcmCompositeIOD();
public:
	void Serialize( CArchive& ar );
// Create dataset from text script array. Allows for easy
// dataset construction. Just create the script file then 
// load the iod dataset with default attributes. 
	void CreateFromASL( CStringArray& AttributeScript ); 
protected:
// Used in derived classes to build iod module table
	virtual void InitializeIod();

};

#endif // !defined(AFX_DCMCOMPOSITEIOD_H__DD798EC8_BE2A_4BB0_945F_925103077C3F__INCLUDED_)
