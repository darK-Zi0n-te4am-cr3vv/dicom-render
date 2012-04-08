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

// DcmMRImageModule.h: interface for the CDcmMRImageModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMMRIMAGEMODULE_H__2E34F2A7_5BB3_47A8_BEBA_1DC3ECE8C423__INCLUDED_)
#define AFX_DCMMRIMAGEMODULE_H__2E34F2A7_5BB3_47A8_BEBA_1DC3ECE8C423__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"


class AFX_EXT_CLASS CDcmMRImageModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmMRImageModule );
public:
	CDcmMRImageModule();
    CDcmMRImageModule( CDcmMRImageModule& module );
// C.8.3 MR Modules
// This Section describes the MR Image Module. This Module contains all Attributes that are
// specific to MR images.
	virtual ~CDcmMRImageModule();
public:
	CDcmMRImageModule& operator=( CDcmMRImageModule& module );
public:
// For MR Images, Image Type (0008,0008) is specified to be Type 1 and use one of the following
// Defined Terms for Value 3: MPR, PROJECTION IMAGE, T1 MAP, T2 MAP, DIFFUSION MAP ,DENSITY MAP,
// PHASE MAP, VELOCITY MAP, IMAGE ADDITION, PHASE SUBTRACT, MODULUS SUBTRACT, OTHER
	CStringArray& ImageType( );
	void ImageType(const CStringArray& Tag_0008_0008_1_CS_VM_1N );
public:
// For MR Images, Samples per Pixel (0028,0002) shall have an Enumerated Value of 1.
	void SamplesPerPixel ( unsigned short Tag_0028_0002_1_US_VM_1  );
	const unsigned short& SamplesPerPixel ( );
public:
// For MR Images, Photometric Interpretation (0028,0004) shall have one of the following
// Enumerated Values: MONOCHROME1, MONOCHROME2
	CString& PhotoMetricInterpretation();
	void PhotoMetricInterpretation( const CString& Tag_0028_0004_1_CS_VM_1 );
public:
// For MR Images, Bits Allocated (0028,0100) shall have the Enumerated Value of 16.
	void BitsAllocated ( unsigned short Tag_0028_0100_1_US_VM_1  );
	const unsigned short& BitsAllocated ( );
public:
// Description of the type of data taken. Enumerated Values: SE = Spin Echo, IR = Inversion Recovery,
// GR = Gradient Recalled, EP = Echo Planar, RM = Research Mode,
	CStringArray& ScanningSequence( );
	void ScanningSequence(const CStringArray& Tag_0018_0020_1_CS_VM_1N );
public:
// Variant of the Scanning Sequence. Defined Terms: SK = segmented k-space, MTC = magnetization transfer contrast,
// SS = steady state, TRSS = time reversed steady state, SP = spoiled, MP = MAG prepared, OSP = oversampling phase,
// NONE = no sequence variant,
	CStringArray& SequenceVariant( );
	void SequenceVariant(const CStringArray& Tag_0018_0021_1_CS_VM_1N );
public:
// Parameters of scanning sequence. Defined Terms: PER = Phase Encode Reordering,
// RG = Respiratory Gating, CG = Cardiac Gating, PPG = Peripheral Pulse Gating,
// FC = Flow Compensation, PFF = Partial Fourier-Frequency, PFP = Partial Fourier - Phase,
// SP = Spatial Presaturation, FS = Fat Saturation
	CStringArray& ScanOptions( );
	void ScanOptions(const CStringArray& Tag_0018_0022_2_CS_VM_1N );
public:
	CString& MRAcquisitionType();
	void MRAcquisitionType( const CString& Tag_0018_0023_2_CS_VM_1 );
public:
	CString& RepetitionTime();
	void RepetitionTime( const CString& Tag_0018_0080_2C_DS_VM_1 );
public:
	CString& EchoTime();
	void EchoTime( const CString& Tag_0018_0081_2_DS_VM_1 );
public:
	CString& EchoTrainLength();
	void EchoTrainLength( const CString& Tag_0018_0091_2_IS_VM_1 );
public:
	CString& InversionTime();
	void InversionTime( const CString& Tag_0018_0082_2C_DS_VM_1 );
public:
	CString& TriggerTime();
	void TriggerTime( const CString& Tag_0018_1060_2C_DS_VM_1 );
public:
	CString& SequenceName();
	void SequenceName( const CString& Tag_0018_0024_3_SH_VM_1 );
public:
	CString& AngioFlag();
	void AngioFlag( const CString& Tag_0018_0025_3_CS_VM_1 );
public:
	CString& NumberOfAverages();
	void NumberOfAverages( const CString& Tag_0018_0083_3_DS_VM_1 );
public:
	CString& ImagingFrequency();
	void ImagingFrequency( const CString& Tag_0018_0084_3_DS_VM_1 );
public:
	CString& ImagedNucleus();
	void ImagedNucleus( const CString& Tag_0018_0085_3_SH_VM_1 );
public:
	CStringArray& EchoNumber();
	void EchoNumber( const CStringArray& Tag_0018_0086_3_IS_VM_1N );
public:
	CString& MagneticFieldStrength();
	void MagneticFieldStrength( const CString& Tag_0018_0087_3_DS_VM_1 );
public:
	CString& SpacingBetweenSlices();
	void SpacingBetweenSlices( const CString& Tag_0018_0088_3_DS_VM_1 );
public:
	CString& NumberPhaseEncodingSteps();
	void NumberPhaseEncodingSteps( const CString& Tag_0018_0089_3_IS_VM_1 );
public:
	CString& PercentSampling();
	void PercentSampling( const CString& Tag_0018_0093_3_DS_VM_1 );
public:
	CString& PercentPhaseFieldView();
	void PercentPhaseFieldView( const CString& Tag_0018_0094_3_DS_VM_1 );
public:
	CString& PixelBandwidth();
	void PixelBandwidth( const CString& Tag_0018_0095_3_DS_VM_1 );
public:
	CString& NominalInterval();
	void NominalInterval( const CString& Tag_0018_1062_3_IS_VM_1 );
public:
	CString& BeatRejectionFlag();
	void BeatRejectionFlag( const CString& Tag_0018_1080_3_CS_VM_1 );
public:
	CString& LowRRValue();
	void LowRRValue( const CString& Tag_0018_1081_3_IS_VM_1 );
public:
	CString& HighRRValue();
	void HighRRValue( const CString& Tag_0018_1082_3_IS_VM_1 );
public:
	CString& IntervalsAcquired();
	void IntervalsAcquired( const CString& Tag_0018_1083_3_IS_VM_1 );
public:
	CString& IntervalsRejected();
	void IntervalsRejected( const CString& Tag_0018_1084_3_IS_VM_1 );
public:
	CString& PVCRejection();
	void PVCRejection( const CString& Tag_0018_1085_3_LO_VM_1 );
public:
	CString& SkipBeats();
	void SkipBeats( const CString& Tag_0018_1086_3_IS_VM_1 );
public:
	CString& HeartRate();
	void HeartRate( const CString& Tag_0018_1088_3_IS_VM_1 );
public:
	CString& CardiacNumberImages();
	void CardiacNumberImages( const CString& Tag_0018_1090_3_IS_VM_1 );
public:
	CString& TriggerWindow();
	void TriggerWindow( const CString& Tag_0018_1094_3_IS_VM_1 );
public:
	CString& ReconstructionDiameter();
	void ReconstructionDiameter( const CString& Tag_0018_1100_3_DS_VM_1 );
public:
	CString& ReceiveCoilName();
	void ReceiveCoilName( const CString& Tag_0018_1250_3_SH_VM_1 );
public:
	CString& TransmitCoilName();
	void TransmitCoilName( const CString& Tag_0018_1251_3_SH_VM_1 );
public:
	CWordArray& AcquisitionMatrix ( );
	void AcquisitionMatrix(const CWordArray& Tag_0018_1310_3_US_VM_4 );
public:
	CString& InPlanePhaseEncodingDirection();
	void InPlanePhaseEncodingDirection( const CString& Tag_0018_1312_3_CS_VM_1 );
public:
	CString& FlipAngle();
	void FlipAngle( const CString& Tag_0018_1314_3_DS_VM_1 );
public:
	CString& SAR();
	void SAR( const CString& Tag_0018_1316_3_DS_VM_1 );
public:
	CString& VariableFlipAngleFlag();
	void VariableFlipAngleFlag( const CString& Tag_0018_1315_3_CS_VM_1 );
public:
	CString& dB_dt();
	void dB_dt( const CString& Tag_0018_1318_3_DS_VM_1 );
public:
	CString& TemporalPositionIdentifier();
	void TemporalPositionIdentifier( const CString& Tag_0020_0100_3_IS_VM_1 );
public:
	CString& NumberTemporalPositions();
	void NumberTemporalPositions( const CString& Tag_0020_0105_3_IS_VM_1 );
public:
	CString& TemporalResolution();
	void TemporalResolution( const CString& Tag_0020_0110_3_DS_VM_1 );
protected:
// Destroys and creates the module dataset
	virtual void InitializeModule();
};

#endif // !defined(AFX_DCMMRIMAGEMODULE_H__2E34F2A7_5BB3_47A8_BEBA_1DC3ECE8C423__INCLUDED_)
