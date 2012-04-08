// DcmImagePixelModule.h: interface for the CDcmImagePixelModule class.
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

#if !defined(AFX_DCMIMAGEPIXELMODULE_H__DD4C1CBC_1327_4F79_90C3_AD3358CA2B9B__INCLUDED_)
#define AFX_DCMIMAGEPIXELMODULE_H__DD4C1CBC_1327_4F79_90C3_AD3358CA2B9B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
// C.7.6.3 Image Pixel Module
// Table C.7-11 specified the Attributes that describe the pixel data of the image.
class AFX_EXT_CLASS CDcmImagePixelModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmImagePixelModule );
	CDcmImagePixelModule();
    CDcmImagePixelModule( CDcmImagePixelModule& module );
	virtual ~CDcmImagePixelModule();
public:
	CDcmImagePixelModule& operator=( CDcmImagePixelModule& module );
public:
// Samples per Pixel (0028,0002) is the number of separate planes in this image. One, three, and
// four image planes are defined. Other numbers of image planes are allowed, but their meaning is
// not defined by this Standard.
// For monochrome (gray scale) and palette color images, the number of planes is 1. For RGB and
// other three vector color models, the value of this attribute is 3. For four vector color models, the
// value of this attribute is 4.
// All image planes shall have the same number of Rows (0028,0010), Columns (0028,0011), Bits
// Allocated (0028,0100), Bits Stored (0028,0101), High Bit (0028,0102), Pixel Representation
// (0028,0103), and Pixel Aspect Ratio (0028,0034).
	void SamplesperPixel ( unsigned short Tag_0028_0002_1_US_VM_1 );
	const unsigned short& SamplesperPixel ( );
public:
// The value of Photometric Interpretation (0028,0004) specifies the intended interpretation of the
// image pixel data. See PS 3.5 for restrictions imposed by compressed Transfer Syntaxes.
// The value of Photometric Interpretation (0028,0004) specifies the intended interpretation of the
// image pixel data. See PS 3.5 for restrictions imposed by compressed Transfer Syntaxes.
// The following values are defined. Other values are permitted but the meaning is not defined by
// this Standard. MONOCHROME1, MONOCHROME2, PALETTE COLOR, RGB HSV = Retired, ARGB = Retired, 
// CMYK = Retired, YBR_FULL, YBR_FULL_422, YBR_PARTIAL_422, YBR_ICT, YBR_RCT, 
	CString& PhotoMetricInterpretation();
	void PhotoMetricInterpretation( const CString& Tag_0028_0004_1_CS_VM_1 );
public:
// Planar Configuration (0028,0006) indicates whether the color pixel data are sent color-by-plane
// or color-by-pixel. This Attribute shall be present if Samples per Pixel (0028,0002) has a value
// greater than 1. It shall not be present otherwise.
	void PlanarConfiguration ( unsigned short Tag_0028_0006_1C_US_VM_1  );
	const  unsigned short& PlanarConfiguration(  );
public:
// Number of rows in the image.
	void Rows ( unsigned short Tag_0028_0010_1_US_VM_1  );
	const unsigned short& Rows ( );
public:
// Number of columns in the image
	void Columns ( unsigned short Tag_0028_0011_1_US_VM_1  );
	const unsigned short& Columns ( );
public:
// Ratio of the vertical size and horizontal size of the pixels in the image specified by
// a pair of integer values where the first value is the vertical pixel size, and the
// second value is the horizontal pixel size. Required if the aspect ratio is not 1\1 and
// the Image Plane Module is not applicable to this Image. 
// The pixel aspect ratio is the ratio of the vertical size and horizontal size of the pixels in the image
// specified by a pair of integer values where the first value is the vertical pixel size, and the second
// value is the horizontal pixel size. To illustrate, consider the following example pixel size:
// Pixel Aspect Ratio = Vertical Size \ Horizontal Size = 0.30 mm \0.25 mm. Thus the Pixel Aspect
// Ratio could be represented as the multivalued integer string "6\5", "60\50", or any equivalent
// integer ratio.
	CStringArray& PixelAspectRatio();
	void PixelAspectRatio( const CStringArray& Tag_0028_0034_1C_IS_VM_2 );
public:
// Number of bits stored for each pixel sample. Each sample shall have the same
// number of bits stored. See PS 3.5 for further explanation.
	void BitsAllocated ( unsigned short Tag_0028_0100_1_US_VM_1  );
	const unsigned short& BitsAllocated ( );
public:
// Number of bits stored for each pixel sample. Each sample shall have the same
// number of bits stored. See PS 3.5 for  further explanation.
	void BitsStored ( unsigned short Tag_0028_0101_1_US_VM_1  );
	const unsigned short& BitsStored ( );
public:
// Most significant bit for pixel sample data. Each sample shall have the same high bit.
// See PS 3.5 for further explanation.
	void HighBit ( unsigned short Tag_0028_0102_1_US_VM_1  );
	const unsigned short& HighBit ( );
public:
// Data representation of the pixel samples. Each sample shall have the same pixel
// representation. Enumerated Values: 0000H = unsigned integer. 0001H = 2's complement
	void PixelRepresentation ( unsigned short Tag_0028_0103_1_US_VM_1  );
	const unsigned short& PixelRepresentation ( );
public:
// The minimum actual pixel value encountered in this image.
	const unsigned short& SmallestImagePixelValue();
	void SmallestImagePixelValue( unsigned short Tag_0028_0106_3_US_VM_1 );
public:
// The maximum actual pixel value encountered in this image.
	const unsigned short& LargestImagePixelValue();
	void LargestImagePixelValue( unsigned short Tag_0028_0107_3_US_VM_1 );
public:	
// Descriptor Specifies the format of the Palette Color Lookup Table Data (0028,1201)
// Required if Photometric Interpretation  (0028,0004) has a value of PALETTE
// COLOR. See C.7.6.3.1.5 for further  explanation.
	CWordArray& RedLUTDescriptor(  );
	void RedLUTDescriptor( const CWordArray& Tag_0028_1101_1C_US_VM_3 );
public:
// Descriptor Specifies the format of the Palette Color Lookup Table Data (0028,1201)
// Required if Photometric Interpretation  (0028,0004) has a value of PALETTE
// COLOR. See C.7.6.3.1.5 for further  explanation.
	CWordArray& GreenLUTDescriptor();
	void GreenLUTDescriptor ( const CWordArray& Tag_0028_1102_1C_US_VM_3 );
public:
// Descriptor Specifies the format of the Palette Color Lookup Table Data (0028,1201)
// Required if Photometric Interpretation  (0028,0004) has a value of PALETTE
// COLOR. See C.7.6.3.1.5 for further explanation.
	CWordArray& BlueLUTDescriptor();
	void BlueLUTDescriptor( const CWordArray& Tag_0028_1103_1C_US_VM_3 );
public:
// Palette Color Lookup Table Data. Required if Photometric Interpretation
// (0028,0004) has a value of PALETTE  COLOR. See C.7.6.3.1.6 for further explanation.
	CWordArray& RedLUTData();
	void RedLUTData( const CWordArray& Tag_0028_1201_1C_OW_VM_1 );
public:
// Palette Color Lookup Table Data. Required if Photometric Interpretation
// (0028,0004) has a value of PALETTE  COLOR. See C.7.6.3.1.6 for further explanation.
	CWordArray& GreenLUTData();
	void GreenLUTData( const CWordArray& Tag_0028_1202_1C_OW_VM_1 );
public:
// Palette Color Lookup Table Data. Required if Photometric Interpretation
// (0028,0004) has a value of PALETTE  COLOR. See C.7.6.3.1.6 for further explanation.
	CWordArray& BlueLUTData( );
	void BlueLUTData( const CWordArray& Tag_0028_1203_1C_OW_VM_1 );
public:
// A data stream of the pixel samples that comprise the Image. Pixel Data (7FE0,0010) for this image.
// The order of pixels sent for each image plane is left to right, top to bottom, i.e., the upper left pixel (labeled 1,1) is sent first followed by the remainder of
// row 1, followed by the first pixel of row 2 (labeled 2,1) then the remainder of row 2 and so on.
// For multi-plane images see Planar Configuration (0028,0006) in this Section.
	void GetPixelData( CObList& PixelData );
	void SetPixelData( CObList& Tag_7FE0_0010_1C_OB_or_OW_VM_1 );
	void SetPixelData( const CByteArray& Tag_7FE0_0010_1C_OB_VM_1 );
	void SetPixelData( const CWordArray& Tag_7FE0_0010_1C_OW_VM_1 );
public:
// Custom Compression/Decompression support. Should not be part of image pixel module. Not included 
// in functional specification of dicomapi. Dicomapi functional specification explicitly
// excludes pixel data processing. Remove jkf
	void DcmRleDecode( const CByteArray& src, CByteArray& dst );
	void DcmRleEncode( CByteArray& src );
protected:
	virtual void InitializeModule();
};

#endif // !defined(AFX_DCMIMAGEPIXELMODULE_H__DD4C1CBC_1327_4F79_90C3_AD3358CA2B9B__INCLUDED_)
