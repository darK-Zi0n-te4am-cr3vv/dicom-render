// DcmNMMultiFrameModule.h: interface for the CDcmNMMultiFrameModule class.
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
#if !defined(AFX_DCMNMMULTIFRAMEMODULE_H__12542E07_78DD_4C91_86D1_11C93AB6C56F__INCLUDED_)
#define AFX_DCMNMMULTIFRAMEMODULE_H__12542E07_78DD_4C91_86D1_11C93AB6C56F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
// Table C.8-7 specifies the Attributes of a NM Multi-frame Image. 
class AFX_EXT_CLASS CDcmNMMultiFrameModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmNMMultiFrameModule );
public:
	CDcmNMMultiFrameModule();
    CDcmNMMultiFrameModule( CDcmNMMultiFrameModule& module );
	virtual ~CDcmNMMultiFrameModule();
public:
	CDcmNMMultiFrameModule& operator=( CDcmNMMultiFrameModule& module );
protected:
// Destroys and creates the module dataset
	virtual void InitializeModule();
public:
//C.8.4.8.1.1 Frame Increment Pointer
//By definition, NM Images are multi-dimensional Multi-frame Images. The value of the Frame
//Increment Pointer (0028,0009) contains the Tag for one or more frame indexing vectors. This
//determines the number of dimensions of frame indices in the image, and the order in which these
//indices vary from one frame to the next, with the last Tag indicating the most rapidly changing
//index. The Enumerated Values for the Frame Increment Pointer (0028,0009) are determined by
//the Image Type (0008,0008), Value 3, as shown in Table C.8-8.
	void FrameIncrementPointer( const CWordArray& Tag_0028_0009_1_AT_VM_1N );
	CWordArray& FrameIncrementPointer( );
public:
// An array which contains the energy
// window number for each frame. Required
// if the value of the Frame Increment
// Pointer (0028,0009) includes the Tag for
// Energy Window Vector (0054,0010). See
// C.8.4.8.1.2 for specialization.
	CWordArray& EnergyWindowVector();
	void EnergyWindowVector(const CWordArray& Tag_0054_0010_1C_US_VM_1N );
public:
//Number of energy window groupings. See
//C.8.4.8.1.2 for specialization.
	const unsigned short& NumberOfEnergyWindows();
	void NumberOfEnergyWindows(const unsigned short Tag_0054_0011_1_US_VM_1 );
public:
//An array which contains the detector
//number for each frame. Required if the
//value of the Frame Increment Pointer
//(0028,0009) includes the Tag for Detector
//Vector (0054,0020). See C.8.4.8.1.3 for
//specialization.
	CWordArray& DetectorVector();
	void DetectorVector(const CWordArray& Tag_0054_0020_1C_US_VM_1N );
public:
// Number of detectors. See C.8.4.8.1.3 for
// specialization.
	const unsigned short& NumberOfDetectors();
	void NumberOfDetectors(const unsigned short Tag_0054_0021_1_US_VM_1 );
public:
// An array which contains the phase number
// for each frame. Required if the value of the
// Frame Increment Pointer (0028,0009)
// includes the Tag for Phase Vector
// (0054,0030). See C.8.4.8.1.4 for
// specialization.
	CWordArray& PhaseVector();
	void PhaseVector(const CWordArray& Tag_0054_0030_1C_US_VM_1N );
public:
// Number of phases. Required if the value of
// the Frame Increment Pointer (0028,0009)
// includes the Tag for Phase Vector
// (0054,0030). See C.8.4.8.1.4 for
// specialization.
	const unsigned short& NumberOfPhases();
	void NumberOfPhases(const unsigned short Tag_0054_0031_1_US_VM_1 );
public:
// An array which contains the rotation
// number for each frame. Required if the
// value of the Frame Increment Pointer
// (0028,0009) includes the Tag for Rotation
// Vector (0054,0050). See C.8.4.8.1.5 for
// specialization.
	CWordArray& RotationVector();
	void RotationVector(const CWordArray& Tag_0054_0050_1C_US_VM_1N );
public:
// Number of rotations. Required if Image
// Type (0008,0008), Value 3 is TOMO, GATED TOMO, RECON TOMO, or
// RECON GATED TOMO.
// See C.8.4.8.1.5 for specialization.
	const unsigned short& NumberOfRotations();
	void NumberOfRotations(const unsigned short Tag_0054_0051_1C_US_VM_1 );
public:
// An array which contains the R-R interval
// number for each frame. Required if the
// value of the Frame Increment Pointer
// (0028,0009) includes the Tag for R-R
// Interval Vector (0054,0060). See
// C.8.4.8.1.6 for specialization.
	CWordArray& RRIntervalVector();
	void RRIntervalVector(const CWordArray& Tag_0054_0060_1C_US_VM_1N );
public:
// Number of R-R intervals. Required if the
// value of the Frame Increment Pointer
// (0028,0009) includes the Tag for R-R
// Interval Vector (0054,0060). See
// C.8.4.8.1.6 for specialization.
	const unsigned short& NumberRRIntervals();
	void NumberRRIntervals(const unsigned short Tag_0054_0061_1C_US_VM_1 );
public:
// An array which contains the time slot
// number for each frame. Required if the
// value of the Frame Increment Pointer
// (0028,0009) includes the Tag for Time
// Slot Vector (0054,0070). See C.8.4.8.1.7
// for specialization.
	CWordArray& TimeSlotVector();
	void TimeSlotVector(const CWordArray& Tag_0054_0070_1C_US_VM_1N );
public:
// Number of time slots. Required if the value
// of the Frame Increment Pointer
// (0028,0009) includes the Tag for Time
// Slot Vector (0054,0070). See C.8.4.8.1.7
// for specialization.
	const unsigned short& NumberTimeSlots();
	void NumberTimeSlots(const unsigned short Tag_0054_0071_1C_US_VM_1 );
public:
// Slice Vector (0054,0080) 1C An array which contains the spatial slice
// number for each frame. Required if the
// value of the Frame Increment Pointer
// (0028,0009) includes the Tag for Slice
// Vector (0054,0080). See C.8.4.8.1.8 for
// specialization.
	CWordArray& SliceVector();
	void SliceVector(const CWordArray& Tag_0054_0080_1C_US_VM_1N );
public:
// Number of slices. Required if the value of
// the Frame Increment Pointer (0028,0009)
// includes the Tag for Slice Vector
// (0054,0080). See C.8.4.8.1.8 for
// specialization.
	const unsigned short& NumberOfSlices();
	void NumberOfSlices(const unsigned short Tag_0054_0081_1C_US_VM_1 );
public:
// An array which contains the angular view
// number for each frame. Required if the
// value of the Frame Increment Pointer
// (0028,0009) includes the Tag for Angular
// View Vector (0054,0090). See C.8.4.8.1.9
// for specialization.
	CWordArray& AngularViewVector();
	void AngularViewVector(const CWordArray& Tag_0054_0090_1C_US_VM_1N );
public:
// An array which contains the time slice
// number for each frame. Required if the
// value of the Frame Increment Pointer
// (0028,0009) includes the Tag for Time
// Slice Vector (0054,0100). See C.8.4.8.1.10
// for specialization.
	CWordArray& TimeSliceVector();
	void TimeSliceVector(const CWordArray& Tag_0054_0100_1C_US_VM_1N );

};

#endif // !defined(AFX_DCMNMMULTIFRAMEMODULE_H__12542E07_78DD_4C91_86D1_11C93AB6C56F__INCLUDED_)
