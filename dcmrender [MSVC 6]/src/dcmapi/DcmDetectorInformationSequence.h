// DcmDetectorInformationSequence.h: interface for the CDcmDetectorSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMDETECTORINFORMATIONSEQUENCE_H__A7191C10_8484_4E67_8F2E_29B28626BD4A__INCLUDED_)
#define AFX_DCMDETECTORINFORMATIONSEQUENCE_H__A7191C10_8484_4E67_8F2E_29B28626BD4A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmCodeAndModifer.h"
class  CDcmCompositeIOD;
// Table C.8-11 contains IOD Attributes that describe Nuclear Medicine Detectors used to produce
// an image.
class AFX_EXT_CLASS CDcmDetectorSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmDetectorSequence );
public:
// Table C.8-11 contains IOD Attributes that describe Nuclear Medicine Detectors used to produce
// an image.
	CDcmDetectorSequence();
	CDcmDetectorSequence(CDcmDetectorSequence& sequence);

	virtual ~CDcmDetectorSequence();
public:
	CDcmDetectorSequence& operator=( CDcmDetectorSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
//Label describing the collimator used
//(LEAP, hires, etc.)
	CString& CollimatorGridName();
	void CollimatorGridName(const CString& Tag_0018_1180_3_SH_VM_1 );
public:
//Collimator type. Defined Terms:
//PARA = Parallel (default)
//PINH = Pinhole
//FANB = Fan-beam
//ONE = Cone-beam
//SLNT = Slant hole
//ASTG = Astigmatic
//DIVG = Diverging
//NONE = No collimator
//UNKN = Unknown
	CString& CollimatorType ();
	void CollimatorType(const CString& Tag_0018_1181_2C_CS_VM_1 );
public:
//Shape of the field of view of the Nuclear
//Medicine detector. Defined Terms:
//RECTANGLE
//ROUND
//HEXAGONAL
	CString& FieldOfViewShape ();
	void FieldOfViewShape(const CString& Tag_0018_1147_3_CS_VM_1 );
public:
//Dimensions of the field of view, in mm. If
//Field of View Shape (0018,1147) is:
//RECTANGLE: row dimension followed by
//column.
//ROUND: diameter.
//HEXAGONAL: diameter of a circumscribed
//circle.
	CStringArray& FieldOfViewDimension ();
	void FieldOfViewDimension(const CStringArray& Tag_0018_1149_3_IS_VM_1_2 );
public:
//Focal Distance (0018,1182) for NM Image data is the focal distance, in mm for converging or
//diverging collimators, measured from the front face of the detector to the focus. Positive values
//indicate converging and negative values indicate diverging collimators. A value of 0 means
//infinite distance for parallel collimation.
	CStringArray& FocalDistance();
	void FocalDistance(const CStringArray& Tag_0018_1182_2C_IS_VM_1_2 );
public:
// X Focus Center (0018,1183) and Y Focus Center (0018,1184) for NM Image data is used to
// define the projection of the focus for a converging or diverging collimator within the un-zoomed
// Field of View. It is defined in mm for row and column relative to the center of the un-zoomed Field
// of View.
	CStringArray& XFocusCenter();
	void XFocusCenter(const CStringArray& Tag_0018_1183_3_DS_VM_1_2 );
public:
// X Focus Center (0018,1183) and Y Focus Center (0018,1184) for NM Image data is used to
// define the projection of the focus for a converging or diverging collimator within the un-zoomed
// Field of View. It is defined in mm for row and column relative to the center of the un-zoomed Field
// of View.
	CStringArray& YFocusCenter();
	void YFocusCenter(const CStringArray& Tag_0018_1184_3_DS_VM_1_2 );
public:
// Zoom Center (0028,0032) is the offset between the un-zoomed camera field of view and field of
// view, measured from the center of the un-zoomed camera field of view to the center the of the
// zoomed field of view. The offset is measured in mm in the un-zoomed camera FOV dimensions.
// Positive values are to the right and down from the un-zoomed center, as viewed from the image
// plane. When this attribute is not given, the Zoom Center is assumed to be 0\0.
	CStringArray& ZoomCenter();
	void ZoomCenter(const CStringArray& Tag_0028_0032_3_DS_VM_2 );
public:
// Zoom Factor (0028,0031) is the magnification factor that was used during the acquisition. When
// this attribute is not given, it is assumed to be 1.0\1.0.
	CStringArray& ZoomFactor();
	void ZoomFactor(const CStringArray& Tag_0028_0031_3_DS_VM_2 );
public:
// Center of Rotation Offset (0018,1145) is the average amount of offset in mm between the
// Detector Field of View center and the physical center of rotation of the gantry for circular orbital
// scans. Positive values indicate the physical center is to the right of the image plane center.
	CString& CenterOfRotationOffset();
	void CenterOfRotationOffset(const CString& Tag_0018_1145_3_DS_VM_1 );
public:
// Gantry/Detector Tilt (0018,1120) for NM Image data is the angle in degrees of the detector face
// relative to the patient's major (Head to Feet) axis (or the table supporting the patient). Positive tilt
// is towards the patient’s feet.
	CString& GantryDetectorTilt();
	void GantryDetectorTilt(const CString& Tag_0018_1120_3_DS_VM_1 );
public:
// Distance in mm from transmission source
// to the detector face. Required if Image
// Type (0008,0008) Value 4 is
// TRANSMISSION, Value 3 is not TOMO,
// and a sequence Item is present.
	CString& DistanceSourceToDetector();
	void DistanceSourceToDetector(const CString& Tag_0018_1110_2C_DS_VM_1 );
public:
// Position of the detector about the patient
// for the start of the acquisition, in degrees.
// Zero degrees is referenced to the origin at
// the patient's back. Viewing from the
// patient's feet, angle increases in a counterclockwise
// direction (detector normal
// rotating from the patient's back towards the
// patient's left side). Should not be included
// if Image Type (0008,0008), Value 3, is
// TOMO, GATED TOMO, RECON TOMO or RECON GATED TOMO.
	CString& StartAngle();
	void StartAngle(const CString& Tag_0054_0200_3_DS_VM_1 );
public:
// Radial distance of the detector from the
// center of rotation, in mm. Should not be
// included if Image Type (0008,0008), Value
// 3, is TOMO, GATED TOMO, RECON TOMO or RECON GATED TOMO.
	CStringArray& RadialPosition();
	void RadialPosition(const CStringArray& Tag_0018_1142_3_DS_VM_1N );
public:
// Image Orientation (0020,0037)
// specifies the direction cosines of the first row and the first column with respect to the patient.
	CStringArray& ImageOrientationPatient();
	void ImageOrientationPatient(const CStringArray& Tag_0020_0037_2C_DS_VM_6 );
public:
// The Image Position (0020,0032) specifies the x, y, and z coordinates of the upper left hand
// corner of the image; it is the center of the first voxel transmitted. Image Orientation (0020,0037)
// specifies the direction cosines of the first row and the first column with respect to the patient.
// These Attributes shall be provide as a pair. Row value for the x, y, and z axes respectively
// followed by the Column value for the x, y, and z axes respectively.
// The direction of the axes is defined fully by the patient’s orientation. The x-axis is increasing to
// the left hand side of the patient. The y-axis is increasing to the posterior side of the patient. The
// z-axis is increasing toward the head of the patient.
// The patient based coordinate system is a right handed system, i.e. the vector cross product of a
// unit vector along the positive x-axis and a unit vector along the positive y-axis is equal to a unit
// vector along the positive z-axis.
	CStringArray& ImagePositionPatient();
	void ImagePositionPatient(const CStringArray& Tag_0020_0032_2C_DS_VM_3 );
public:
	CDcmCodeAndModifer& ViewCode();
private:
	CDcmCodeAndModifer m_ViewCodeSequence_0054_0220;
};

#endif // !defined(AFX_DCMDETECTORINFORMATIONSEQUENCE_H__A7191C10_8484_4E67_8F2E_29B28626BD4A__INCLUDED_)
