// DcmNMImagePixelModule.h: interface for the CDcmNMImagePixelModule class.
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
#if !defined(AFX_DCMNMIMAGEPIXELMODULE_H__6C0E239B_A068_4752_B423_A463946CE4C0__INCLUDED_)
#define AFX_DCMNMIMAGEPIXELMODULE_H__6C0E239B_A068_4752_B423_A463946CE4C0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
// C.8.4.7 NM Image Pixel Module
// Table C.8-6 specifies the Attributes that describe the pixel data of a NM image.
class AFX_EXT_CLASS CDcmNMImagePixelModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmNMImagePixelModule );
public:
	CDcmNMImagePixelModule();
    CDcmNMImagePixelModule( CDcmNMImagePixelModule& module );
	virtual ~CDcmNMImagePixelModule();
public:
	CDcmNMImagePixelModule& operator=( CDcmNMImagePixelModule& module );
public:
// Number of samples (color planes) in this image. The value shall be 1.
	void SamplesperPixel ( unsigned short Tag_0028_0002_1_US_VM_1 );
	const unsigned short& SamplesperPixel ( );
public:
// For NM Images, Photometric Interpretation (0028,0004)
// Enumerated Values: MONOCHROME2, PALETTE COLOR
// See C.7.6.3.1.2 for definition of these terms.
	CString& PhotoMetricInterpretation();
	void PhotoMetricInterpretation( const CString& Tag_0028_0004_1_CS_VM_1 );
public:
// Number of bits allocated for each pixel sample. Each sample shall have the number of bits allocated. Enumerated Values: 8, 16.
	void BitsAllocated ( unsigned short Tag_0028_0100_1_US_VM_1  );
	const unsigned short& BitsAllocated ( );
public:
// Number of bits stored for each pixel sample. Each sample shall have the same
// number of bits stored. The value shall be the same as the value in Bits Allocated (0028,0100).
  	void BitsStored ( unsigned short Tag_0028_0101_1_US_VM_1  );
	const unsigned short& BitsStored ( );
public:
// Most significant bit for pixel sample data.  Each sample shall have the same high bit.
// Shall be one less than the value in Bits Stored (0028,0101).
	void HighBit ( unsigned short Tag_0028_0102_1_US_VM_1  );
	const unsigned short& HighBit ( );
public:
// Physical distance in the patient between  the center of each pixel, specified by a
// numeric pair - adjacent row spacing  (delimiter) adjacent column spacing, in mm.
	CStringArray& PixelSpacing();
	void PixelSpacing(const CStringArray& Tag_0028_0030_1_DS_VM_2);
protected:
// Destroys and creates the module dataset
	virtual void InitializeModule();
};

#endif // !defined(AFX_DCMNMIMAGEPIXELMODULE_H__6C0E239B_A068_4752_B423_A463946CE4C0__INCLUDED_)
