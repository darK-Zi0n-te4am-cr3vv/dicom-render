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

// DcmNMImageModule.h: interface for the CDcmNMImageModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMNMIMAGEMODULE_H__8CB75676_7B16_4A1F_B174_0D305CAABBBE__INCLUDED_)
#define AFX_DCMNMIMAGEMODULE_H__8CB75676_7B16_4A1F_B174_0D305CAABBBE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmReferencedSOPSequence.h"
#include "DcmCodeAndModifer.h"
// C.8.4.9 NM Image Module
// Table C.8-9 contains the Attributes that describe Nuclear Medicine Images.
class AFX_EXT_CLASS CDcmNMImageModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmNMImageModule );
public:
	CDcmNMImageModule();
    CDcmNMImageModule( CDcmNMImageModule& module );
	virtual ~CDcmNMImageModule();
public:
	CDcmNMImageModule& operator=( CDcmNMImageModule& module );
protected:
// Creates the module dataset
	virtual void InitializeModule();
public:
// For NM images, Image Type (0008,0008) Value 3 is specified to be Type 1 and use one of the
// following Enumerated Values: STATIC, DYNAMIC, GATED, WHOLE BODY, TOMO, GATED TOMO, RECON TOMO
// RECON, GATED, TOMO
// For NM images, Image Type (0008,0008) Value 4 is specified to use one of the following
// Enumerated Values: EMISSION, TRANSMISSION
	CStringArray& ImageType( );
	void ImageType(const CStringArray& Tag_0008_0008_1_CS_VM_1N );	
public:
// User or equipment generated Image identifier.
	CString& ImageID();
	void ImageID( const CString& Tag_0054_0400_3_SH_VM_1 );
public:
// Specifies whether an Image has undergone lossy compression.
// Enumerated Values: 00 = Image has NOT been subjected to lossy compression.
// 01 = Image has been subjected to lossy compression.
// See C.7.6.1.1.5
// Required if Lossy Compression has been performed on the Image.
	CString& LossyImageCompression();
	void LossyImageCompression( const CString& Tag_0028_2110_1C_CS_VM_1 );
public:
// Counts Accumulated (0018,0070) is the total of all gamma events accumulated in all frames of
// this Image. This attribute applies to acquisition data, and often does not apply to processed
// images (DERIVED, SECONDARY).
	CString& CountsAccumulated();
	void CountsAccumulated( const CString& Tag_0018_0070_2_IS_VM_1 );
public:
// Description of how the data collection was stopped. Defined Terms:
// CNTS = counts, DENS = density, MANU = manual, OVFL = data overflow
// TIME = time, TRIG = physiological trigger
// See C.8.4.9.1.3 for specialization.
	CString& AcquisitionTerminationCondition();
	void AcquisitionTerminationCondition( const CString& Tag_0018_0071_3_CS_VM_1 );
public:
// The height of the patient table in mm. The range and values of this element are
// determined by the manufacturer. Should not be included if Image Type (0008,0008),
// Value 3, is TOMO, GATED TOMO, RECON TOMO or RECON GATED TOMO.
	CString& TableHeight();
	void TableHeight( const CString& Tag_0018_1130_3_DS_VM_1 );
public:
// Location of the patient table (or gantry relative to the table) in mm. The range and
// values of this element are determined by the manufacturer. Should not be included if
// Image Type (0008,0008), Value 3, is TOMO, GATED TOMO, RECON TOMO or RECON GATED TOMO.
	CString& TableTraverse();
	void TableTraverse( const CString& Tag_0018_1131_3_DS_VM_1 );
public:
// Elapsed time for data acquisition in msec. Required if Image Type (0008,0008) Value
// 3 is: WHOLE BODY or STATIC.
// See C.8.4.9.1.4 for specialization.
	CString& ActualFrameDuration();
	void ActualFrameDuration( const CString& Tag_0018_1242_1C_IS_VM_1 );
public:
// Maximum count rate achieved during the acquisition in counts/sec.
	CString& CountRate();
	void CountRate( const CString& Tag_0018_1243_3_IS_VM_1 );
public:
// Code or description of processing functions applied to the data.
	CString& ProcessingFunction();
	void ProcessingFunction( const CString& Tag_0018_5020_3_LO_VM_1 );
public:
// A value that indicates which, if any, corrections have been applied to the
// image. Corrections are applied to all frames in the image. Defined Terms:
// UNIF = flood corrected COR = center of rotation corrected NCO = non-circular orbit corrected
// DECY = decay corrected ATTN = attenuation corrected SCAT = scatter corrected
// DTIM = dead time corrected NRGY = energy corrected LIN = linearity corrected
// MOTN = motion corrected CLN = count loss normalization;
// Any type of normalization applied to correct for count loss in Time Slots.
	CStringArray& CorrectedImage( );
	void CorrectedImage(const CStringArray& Tag_0028_0051_3_CS_VM_1N );	
public:
// The type of scan performed. Used only if Image Type (0008,0008), Value 3,
// contains the value WHOLE BODY. Enumerated Values: 1PS = one pass, 2PS = two pass,
// PCN = patient contour following employed, MSP = multiple static frames collected into a whole
// body frame.
	CStringArray& WholeBodyTechnique( );
	void WholeBodyTechnique(const CStringArray& Tag_0018_1301_3_CS_VM_1N );	
public:
// The speed of the camera motion over the body in mm/sec.
// Required if Image Type (0008,0008) Value 3 contains the value WHOLE BODY.
	CString& ScanVelocity();
	void ScanVelocity( const CString& Tag_0018_1300_2C_DS_VM_1 );
public:
// Size of the imaged area in the direction of scanning motion, in mm. Required if Image
// Type (0008,0008) Value 3 contains the value WHOLE BODY.
	CString& ScanLength();
	void ScanLength( const CString& Tag_0018_1302_2C_IS_VM_1 );
public:
// Text indicating trigger source. Defined Term: EKG
	CString& TriggerSourceOrType();
	void TriggerSourceOrType( const CString& Tag_0018_1061_3_LO_VM_1 );
public:
// A sequence which provides reference to a set of SOP Class/Instance pairs which are
// related independent Overlays. Uniquely identifies Overlays significantly related to
// this Image. Zero or more Items may be included in this sequence.
	CDcmSopSequence& ReferencedOverlay();
// A sequence which provides reference to a set of SOP Class/Instance pairs which are
// related independent Curves. Uniquely identifies Curves significantly related to this
// Image. Zero or more Items may be included in this sequence.
	CDcmSopSequence& ReferencedCurve();
//Sequence of one or more Items that modifies the anatomic region of interest in
// this image (i.e. prone, supine, decubitus right). See Section C.8.4.9.1.5.
// The general region of the body (e.g. the anatomic region, organ, or body cavity being examined)
// may be identified by the Anatomic Region Sequence (0008,2218). Characteristics of the
// anatomic region being examined, such as its orientation relative to gravity (e.g. prone, supine,
// semi-erect), sub-region (e.g. medial, lateral, superior, inferior, lobe, quadrant), and laterality (e.g.
// right, left, both), and so on, may be refined by the Anatomic Region Modifier Sequence (0008,2220).
	CDcmCodeAndModifer& AnatomicRegion();
// Sequence of one or more Items that  modifies the primary anatomic structure of
// interest in this image. See SectionC.8.4.9.1.6.
// The specific anatomic structures of interest within the image (e.g. a particular artery within the
// anatomic region) is identified by the Primary Anatomic Structure Sequence (0008,2228).
// Characteristics of the anatomic structure, such as its location (e.g. subcapsular, peripheral,
// central), configuration (e.g. distended, contracted), and laterality (e.g. right, left, both), and so on,
// may be refined by the Primary Anatomic Structure Modifier Sequence (0008,2230).
	CDcmCodeAndModifer& PrimaryAnatomicStructure();
private:
	CDcmSopSequence m_ReferencedOverlay_0008_1130_3, m_ReferencedCurve_0008_1145_3;
	CDcmCodeAndModifer m_AnatomicRegion_0008_2218_3, m_PrimaryAnatomicStructure_0008_2228_3;


};

#endif // !defined(AFX_DCMNMIMAGEMODULE_H__8CB75676_7B16_4A1F_B174_0D305CAABBBE__INCLUDED_)
