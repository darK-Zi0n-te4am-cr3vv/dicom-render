// DcmUsFrameOfReferenceModule.h: interface for the CDcmUsFrameOfReferenceModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMUSFRAMEOFREFERENCEMODULE_H__2130918D_7480_4326_9A18_C97842B083D3__INCLUDED_)
#define AFX_DCMUSFRAMEOFREFERENCEMODULE_H__2130918D_7480_4326_9A18_C97842B083D3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmUSFrameOfReferenceModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmUSFrameOfReferenceModule );
public:
	CDcmUSFrameOfReferenceModule();
	virtual ~CDcmUSFrameOfReferenceModule();
public:
	const unsigned long& RegionLocationMinX0();
	void RegionLocationMinX0(const unsigned long Tag_0018_6018_1_UL_VM_1 );
public:
	const unsigned long& RegionLocationMinY0();
	void RegionLocationMinY0(const unsigned long Tag_0018_601A_1_UL_VM_1 );
public:
	const unsigned long& RegionLocationMaxX1();
	void RegionLocationMaxX1(const unsigned long Tag_0018_601C_1_UL_VM_1 );
public:
	const unsigned long& RegionLocationMaxY1();
	void RegionLocationMaxY1(const unsigned long Tag_0018_601E_1_UL_VM_1 );
public:
	const unsigned short& PhysicalUnitsXDirection();
	void PhysicalUnitsXDirection(const unsigned short Tag_0018_6024_1_US_VM_1 );
public:
	const unsigned short& PhysicalUnitsYDirection();
	void PhysicalUnitsYDirection(const unsigned short Tag_0018_6026_1_US_VM_1 );
public:
	const double& PhysicalDeltaX();
	void PhysicalDeltaX(const double Tag_0018_602C_1_FD_VM_1 );
public:
	const double& PhysicalDeltaY();
	void PhysicalDeltaY(const double Tag_0018_602E_1_FD_VM_1 );
public:
	const unsigned long& ReferencePixelX0();
	void ReferencePixelX0(const unsigned long Tag_0018_6020_3_SL_VM_1 );
public:
	const unsigned long& ReferencePixelY0();
	void ReferencePixelY0(const unsigned long Tag_0018_6022_3_SL_VM_1 );
public:
	const double& ReferencePixelPhysicalValueX();
	void ReferencePixelPhysicalValueX(const  double& Tag_0018_6028_3_FD_VM_1 );
public:
	const double& ReferencePixelPhysicalValueY();
	void ReferencePixelPhysicalValueY(const double& Tag_0018_602A_3_FD_VM_1 );
};

#endif // !defined(AFX_DCMUSFRAMEOFREFERENCEMODULE_H__2130918D_7480_4326_9A18_C97842B083D3__INCLUDED_)
