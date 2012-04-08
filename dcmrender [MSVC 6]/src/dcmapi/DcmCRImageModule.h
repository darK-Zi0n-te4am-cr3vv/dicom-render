// DcmCRImageModule.h: interface for the CDcmCRImageModule class.
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
#if !defined(AFX_DCMCRIMAGEMODULE_H__CFB78DB0_1A03_4713_899B_3BB0A8869E41__INCLUDED_)
#define AFX_DCMCRIMAGEMODULE_H__CFB78DB0_1A03_4713_899B_3BB0A8869E41__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

// C.8.1.2 CR Image Module
// Table C.8-2 contains IOD Attributes that describe computed radiography images.
class AFX_EXT_CLASS CDcmCRImageModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmCRImageModule );
public:
	CDcmCRImageModule();
    CDcmCRImageModule( CDcmCRImageModule& module );
	virtual ~CDcmCRImageModule();
public:
	CDcmCRImageModule& operator=( CDcmCRImageModule& module );
public:
// Specifies the intended interpretation of pixel data. Shall have one of the following Enumerated Values: MONOCHROME1, MONOCHROME2
	CString& PhotometricInterpretation( );
	void PhotometricInterpretation(const CString& Tag_0028_0004_1_CS_VM_1 );
public:
// Peak kilo voltage output of the x-ray generator used
	CString& KVP( );
	void KVP(const CString& Tag_0018_0060_1_DS_VM_1 );
public:
//The ID or serial number of the sensing plate upon which the image was acquired
	CString& PlateID( );
	void PlateID(const CString& Tag_0018_1004_3_LO_VM_1 );
public:
//Distance in mm from source to detector center
	CString& DistanceSourceDetector( );
	void DistanceSourceDetector(const CString& Tag_0018_1110_3_DS_VM_1 );
public:
// Distance in mm from source to isocenter (center of field of view)
	CString& DistanceSourcePatient( );
	void DistanceSourcePatient(const CString& Tag_0018_1111_3_DS_VM_1 );
public:
//Time of x-ray exposure in msec
	CString& ExposureTime( );
	void ExposureTime(const CString& Tag_0018_1150_3_IS_VM_1 );
public:
// X-ray Tube Current in mA.
	CString& XRayTubeCurrent( );
	void XRayTubeCurrent(const CString& Tag_0018_1151_3_IS_VM_1 );
public:
// The exposure expressed in mAs, for example calculated from Exposure Time
// and X-ray Tube Current.
	CString& Exposure( );
	void Exposure(const CString& Tag_0018_1152_3_IS_VM_1 );
public:
// The exposure expressed in µAs, for example calculated from Exposure Time
// and X-ray Tube Current.
	CString& ExposureMicroAmpereSeconds( );
	void ExposureMicroAmpereSeconds(const CString& Tag_0018_1153_3_IS_VM_1 );
public:
// Physical distance measured at the front
// plane of the Image Receptor housing
// between the center of each pixel. Specified
// by a numeric pair - row spacing value
// (delimiter) column spacing value - in mm.
// In the case of CR, the front plane is defined
// to be the external surface of the CR plate
// closest to the patient and radiation source.
	CStringArray& ImagerPixelSpacing( );
	void ImagerPixelSpacing(const CStringArray& Tag_0018_1164_3_DS_VM_2 );
public:
// Power in kW to the x-ray generator.
	CString& GeneratorPower( );
	void GeneratorPower(const CString& Tag_0018_1170_3_IS_VM_1 );
public:
// Describes device-specific processing associated with the image (e.g. Organ Description)
	CString& AcquisitionDeviceProcessing( );
	void AcquisitionDeviceProcessing(const CString& Tag_0018_1400_3_LO_VM_1 );
public:
// Code representing the device-specific processing associated with the image (e.g.CR Organ Filtering code)
	CString& AcquisitionDeviceProcessingCode( );
	void AcquisitionDeviceProcessingCode(const CString& Tag_0018_1401_3_LO_VM_1 );
protected:
// Destroys and creates the module dataset
	virtual void InitializeModule();
};

#endif // !defined(AFX_DCMCRIMAGEMODULE_H__CFB78DB0_1A03_4713_899B_3BB0A8869E41__INCLUDED_)
