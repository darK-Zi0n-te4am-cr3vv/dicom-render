// DcmScMultiFrameImageModule.h: interface for the DcmScMultiFrameImageModule class.
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

#if !defined(AFX_DCMSCMULTIFRAMEIMAGEMODULE_H__8898F4DC_A44F_4224_BE3A_27870DAF02EC__INCLUDED_)
#define AFX_DCMSCMULTIFRAMEIMAGEMODULE_H__8898F4DC_A44F_4224_BE3A_27870DAF02EC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmSCMultiFrameImageModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmSCMultiFrameImageModule );

public:
	CDcmSCMultiFrameImageModule();
	virtual ~CDcmSCMultiFrameImageModule();
public:
	void BurnedInAnnotation( const CString& Tag_0028_0301_1_CS_VM_1 );
	CString& BurnedInAnnotation( );
public:
	void PresentationLUTShape( const CString& Tag_2050_0020_1C_CS_VM_1 );
	CString& PresentationLUTShape();
public:
	void Illumination( const unsigned short Tag_2050_0020_1C_US_VM_1 );
	const unsigned short& Illumination();
public:
	void ReflectedAmbientLight( const unsigned short Tag_2010_0160_3_US_VM_1 );
	const unsigned short& ReflectedAmbientLight();
public:
	void RescaleIntercept( const CString& Tag_0028_1052_1C_DS_VM_1 );
	CString& RescaleIntercept();
public:
	void RescaleSlope( const CString& Tag_0028_1053_1C_DS_VM_1 );
	CString& RescaleSlope();
public:
	void RescaleType( const CString& Tag_0028_1054_1C_LO_VM_1 );
	CString& RescaleType();
public:
	void FrameIncrementPointer( const CWordArray& Tag_0028_0009_1C_AT_VM_1N );
	CWordArray& FrameIncrementPointer(  );
public:
	void NominalScannedPixelSpacing( const CStringArray& Tag_0018_2010_1C_DS_VM_2 );
	CStringArray& NominalScannedPixelSpacing();
public:
	void DigitizingDeviceTransportDirection( const CString& Tag_0018_2020_3_CS_VM_1 );
	CString& DigitizingDeviceTransportDirection();
public:
	void RotationOfScannedFilm( const CString& Tag_0018_2030_3_DS_VM_1 );
	CString& RotationOfScannedFilm();
};


#endif // !defined(AFX_DCMSCMULTIFRAMEIMAGEMODULE_H__8898F4DC_A44F_4224_BE3A_27870DAF02EC__INCLUDED_)
