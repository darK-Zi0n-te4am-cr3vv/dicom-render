// DcmUltraSoundRegionSequence.h: interface for the CDcmUSRegionSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMULTRASOUNDREGIONSEQUENCE_H__CB917EB2_EAB3_4292_A959_103DBBDF30E2__INCLUDED_)
#define AFX_DCMULTRASOUNDREGIONSEQUENCE_H__CB917EB2_EAB3_4292_A959_103DBBDF30E2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <afxtempl.h>
#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmUSRegionSequence : public CDcmSequence  
{

public:
	DECLARE_SERIAL( CDcmUSRegionSequence );
public:
	CDcmUSRegionSequence();
	virtual ~CDcmUSRegionSequence();
public:
	const unsigned long& RegionLocationMin_x0( );
	void RegionLocationMin_x0(const unsigned long Tag_0018_6018_1_UL_VM_1);
public:
	const unsigned long& RegionLocationMin_y0( );
	void RegionLocationMin_y0(const unsigned long Tag_0018_601A_1_UL_VM_1);
public:
	const unsigned long& RegionLocationMax_x1( );
	void RegionLocationMax_x1(const unsigned long Tag_0018_601C_1_UL_VM_1);
public:
	const unsigned long& RegionLocationMax_y1( );
	void RegionLocationMax_y1(const unsigned long Tag_0018_601E_1_UL_VM_1);
public:
	const unsigned short& PhysicalUnitsXDirection( );
	void PhysicalUnitsXDirection(const unsigned short Tag_0018_6024_1_US_VM_1);
public:
	const unsigned short& PhysicalUnitsYDirection( );
	void PhysicalUnitsYDirection(const unsigned short Tag_0018_6026_1_US_VM_1);
public:
	const double& PhysicalDeltaX( );
	void PhysicalDeltaX(const double Tag_0018_602C_1_FD_VM_1);
public:
	const double& PhysicalDeltaY( );
	void PhysicalDeltaY(const double Tag_0018_602E_3_FD_VM_1);
public:
	const unsigned long& ReferencePixel_x0( );
	void ReferencePixel_x0(const unsigned long Tag_0018_6020_3_SL_VM_1);
public:
	const unsigned long& ReferencePixel_y0( );
	void ReferencePixel_y0(const unsigned long Tag_0018_6022_3_SL_VM_1);
public:
	const double& RefPixelPhysicalValueX( );
	void RefPixelPhysicalValueX(const double Tag_0018_6028_3_FD_VM_1);
public:
	const double& RefPixelPhysicalValueY( );
	void RefPixelPhysicalValueY(const double Tag_0018_602A_3_FD_VM_1);
public:
	const unsigned short& RegionSpatialFormat( );
	void RegionSpatialFormat(const unsigned short Tag_0018_6012_1_US_VM_1);
public:
	const unsigned short& RegionDataType( );
	void RegionDataType(const unsigned short Tag_0018_6014_1_US_VM_1);
public:
	const unsigned long& RegionFlags( );
	void RegionFlags(const unsigned long Tag_0018_6016_1_UL_VM_1);
public:
	const unsigned short& PixelComponentOrganization( );
	void PixelComponentOrganization(const unsigned short Tag_0018_6044_1C_US_VM_1);
public:
	const unsigned long& PixelComponentMask( );
	void PixelComponentMask(const unsigned long Tag_0018_6046_1C_UL_VM_1);
public:
	const unsigned long& PixelComponentRangeStart( );
	void PixelComponentRangeStart(const unsigned long Tag_0018_6048_1C_UL_VM_1);
public:
	const unsigned long& PixelComponentRangeStop( );
	void PixelComponentRangeStop(const unsigned long Tag_0018_604A_1C_UL_VM_1);
public:
	const unsigned short& PixelComponentPhysicalUnits( );
	void PixelComponentPhysicalUnits(const unsigned short Tag_0018_604C_1C_US_VM_1);
public:
	const unsigned short& PixelComponentDataType( );
	void PixelComponentDataType(const unsigned short Tag_0018_604E_1C_US_VM_1);
public:
	const unsigned long& NumberOfTableBreakPoints( );
	void NumberOfTableBreakPoints(const unsigned long Tag_0018_6050_1C_UL_VM_1);
public:
	CUIntArray& TableOfXBreakPoints( );
	void TableOfXBreakPoints(const CUIntArray& Tag_0018_6052_1C_UL_VM_1N);
public:
	CArray< double, double >& TableOfYBreakPoints( );
	void TableOfYBreakPoints(const CArray< double, double >& Tag_0018_6054_1C_FD_VM_1N);
public:
	const unsigned long& NumberOfTableEntries( );
	void NumberOfTableEntries(const unsigned long Tag_0018_6056_1C_UL_VM_1);
public:
	CUIntArray& TableOfPixelValues( );
	void TableOfPixelValues(const CUIntArray& Tag_0018_6058_1C_UL_VM_1N);
public:
	CArray< float, float >& TableOfParameterValues( );
	void TableOfParameterValues(const CArray< float, float >& Tag_0018_605A_1C_FL_VM_1N);
public:
	const unsigned long& TranducerFrequency( );
	void TranducerFrequency(const unsigned long Tag_0018_6030_3_UL_VM_1);
public:
	const unsigned long& PulseRepetitionFrequency( );
	void PulseRepetitionFrequency(const unsigned long Tag_0018_6032_3_UL_VM_1);
public:
	const double& DopplerCorrectionAngle( );
	void DopplerCorrectionAngle(const double Tag_0018_6034_3_FD_VM_1);
public:
	const double& SteeringAngle( );
	void SteeringAngle(const double Tag_0018_6036_3_FD_VM_1);
public:
	const unsigned long& DopplerSampleVolumeXPosition( );
	void DopplerSampleVolumeXPosition(const unsigned long Tag_0018_6039_3_SL_VM_1);
public:
	const unsigned long& DopplerSampleVolumeYPosition( );
	void DopplerSampleVolumeYPosition(const unsigned long Tag_0018_603B_3_SL_VM_1);
public:
	const unsigned long& TMLinePosition_x0( );
	void TMLinePosition_x0(const unsigned long Tag_0018_603D_3_SL_VM_1);
public:
	const unsigned long& TMLinePosition_y0( );
	void TMLinePosition_y0(const unsigned long Tag_0018_603F_3_SL_VM_1);
public:
	const unsigned long& TMLinePosition_x1( );
	void TMLinePosition_x1(const unsigned long Tag_0018_6041_3_SL_VM_1);
public:
	const unsigned long& TMLinePosition_y1( );
	void TMLinePosition_y1(const unsigned long Tag_0018_6043_3_SL_VM_1);
};

#endif // !defined(AFX_DCMULTRASOUNDREGIONSEQUENCE_H__CB917EB2_EAB3_4292_A959_103DBBDF30E2__INCLUDED_)
