// DcmCTImageModule.h: interface for the CDcmCTImageModule class.
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
#if !defined(AFX_DCMCTIMAGEMODULE_H__8220BB0C_B70C_4B8F_9D20_97839500FC87__INCLUDED_)
#define AFX_DCMCTIMAGEMODULE_H__8220BB0C_B70C_4B8F_9D20_97839500FC87__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

//C.8.2 CT Modules
//This Section describes the CT Image Module. This Module contains all Attributes that are specific
//to CT images.
class AFX_EXT_CLASS CDcmCTImageModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmCTImageModule );
public:
	CDcmCTImageModule();
	CDcmCTImageModule( CDcmCTImageModule& module );
	virtual ~CDcmCTImageModule();
public:
	CDcmCTImageModule& operator=( CDcmCTImageModule& module );
public:
// For CT Images, Image Type (0008,0008) is specified to be Type 1 and Defined Terms for Value 3:
// AXIAL identifies a CT Axial Image, LOCALIZER identifies a CT Localizer Image
	CStringArray& ImageType( );
	void ImageType(const CStringArray& Tag_0008_0008_1_CS_VM_1N);
public:
// For CT Images, Samples per Pixel (0028,0002) shall have an Enumerated Value of 1.
	void SamplesperPixel ( const unsigned short Tag_0028_0002_1_US_VM_1 );
	const unsigned short& SamplesperPixel (  );
public:
// For CT Images, Photometric Interpretation (0028,0004) shall have one of the following
// Enumerated Values: MONOCHROME1, MONOCHROME2
	CString& PhotoMetricInterpretation();
	void PhotoMetricInterpretation( const CString& Tag_0028_0004_1_CS_VM_1 );
public:
// For CT Images, Bits Allocated (0028,0100) shall have the Enumerated Value of 16.
	void BitsAllocated ( const unsigned short Tag_0028_0100_1_US_VM_1  );
	const unsigned short& BitsAllocated ( );
public:
// For CT Images, Bits Stored (0028,0101) shall have the Enumerated Values of 12 to 16.
	void BitsStored ( const unsigned short Tag_0028_0101_1_US_VM_1  );
	const unsigned short& BitsStored ( );
public:
// For CT Images, High Bit (0028,0102) shall have only the Enumerated Value of one less than the
// value sent in Bits Stored.
	void HighBit ( const unsigned short Tag_0028_0102_1_US_VM_1  );
	const unsigned short& HighBit ( );
public:
// The value b in relationship between stored values (SV) and Hounsfield (HU).
// HU = m*SV+b
	void RescaleIntercept( const CString& Tag_0028_1052_1_DS_VM_1 );
	CString& RescaleIntercept();
public:
// m in the equation specified in Rescale Intercept (0028,1052).
	void RescaleSlope( const CString& Tag_0028_1053_1_DS_VM_1 );
	CString& RescaleSlope();
public:
// Peak kilo voltage output of the x-ray generator used
	void KVP( const CString& Tag_0018_0060_2_DS_VM_1 );
	CString& KVP();
public:
// A number identifying the single continuous gathering of data over a
// period of time which resulted in this image
	void AcquisitionNumber( const CString& Tag_0020_0012_2_IS_VM_1 );
	CString& AcquisitionNumber();
public:
// Parameters of scanning sequence.
	void ScanOptions( const CStringArray& Tag_0018_0022_3_CS_VM_1N );
	CStringArray& ScanOptions();
public:
// The diameter in mm of the region over which data were collected
	void DataCollectionDiameter( const CString& Tag_0018_0090_3_DS_VM_1 );
	CString& DataCollectionDiameter();
public:
// Diameter in mm of the region from within which data were used in creating the
// reconstruction of the image. Data may exist outside this region and portions of
// the patient may exist outside this region.
	void ReconstructionDiameter( const CString& Tag_0018_1100_3_DS_VM_1 );
	CString& ReconstructionDiameter();
public:
// Distance in mm from source to detector center
	void DistanceSourceToDetector( const CString& Tag_0018_1110_3_DS_VM_1 );
	CString& DistanceSourceToDetector();
public:
// Distance in mm from source to isocenter (center of field of view)
	void DistanceSourceToPatient( const CString& Tag_0018_1111_3_DS_VM_1 );
	CString& DistanceSourceToPatient();
public:
// Nominal angle of tilt in degrees of the scanning gantry. Not intended for mathematical computations.
	void GantryDetectorTilt( const CString& Tag_0018_1120_3_DS_VM_1 );
	CString& GantryDetectorTilt();
public:
// The distance in mm of the top of the patient table to the center of rotation; 
// below the center is positive.
	void TableHeight( const CString& Tag_0018_1130_3_DS_VM_1 );
	CString& TableHeight();
public:
// Direction of rotation of the source when relevant, about nearest principal axis of
// equipment. Enumerated Values: CW = clockwise CC = counter clockwise
	void RotationDirection( const CString& Tag_0018_1140_3_CS_VM_1 );
	CString& RotationDirection();
public:
// Time of x-ray exposure in msec
	void ExposureTime( const CString& Tag_0018_1150_3_IS_VM_1 );
	CString& ExposureTime();
public:
// Time of x-ray exposure in msec
	void XrayTubeCurrent( const CString& Tag_0018_1151_3_IS_VM_1 );
	CString& XrayTubeCurrent();
public:
// The exposure expressed in mAs, for example calculated from Exposure Time and X-ray Tube Current.
	void Exposure( const CString& Tag_0018_1152_3_IS_VM_1 );
	CString& Exposure();
public:
// The exposure expressed in µAs, for example calculated from Exposure Time
// and X-ray Tube Current.
	void ExposureMicroAmpereSeconds( const CString& Tag_0018_1153_3_IS_VM_1 );
	CString& ExposureMicroAmpereSeconds();
public:
// Label for the type of filter inserted into the x-ray beam.
	void FilterType( const CString& Tag_0018_1160_3_SH_VM_1 );
	CString& FilterType();
public:
// Power in kW to the x-ray generator.
	void GeneratorPower( const CString& Tag_0018_1170_3_IS_VM_1 );
	CString& GeneratorPower();
public:
// Size of the focal spot in mm. For devices with variable focal spot or multiple focal
// spots, small dimension followed by large dimension.
	void FocalSpot( const CStringArray& Tag_0018_1190_3_DS_VM_1N );
	CStringArray& FocalSpot();
public:
// A label describing the convolution kernel or algorithm used to reconstruct the data
	void ConvolutionKernel( const CStringArray& Tag_0018_1210_3_SH_VM_1N );
	CStringArray& ConvolutionKernel();
protected:
// Destroys and creates the module dataset
	virtual void InitializeModule();
};

#endif // !defined(AFX_DCMCTIMAGEMODULE_H__8220BB0C_B70C_4B8F_9D20_97839500FC87__INCLUDED_)
