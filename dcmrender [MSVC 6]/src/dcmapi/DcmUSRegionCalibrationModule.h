// DcmUSRegionCalibrationModule.h: interface for the CDcmUSRegionCalibrationModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMUSREGIONCALIBRATIONMODULE_H__D320850B_E837_4083_B7D4_12EC18CC1B67__INCLUDED_)
#define AFX_DCMUSREGIONCALIBRATIONMODULE_H__D320850B_E837_4083_B7D4_12EC18CC1B67__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmUltraSoundRegionSequence.h"
class AFX_EXT_CLASS CDcmUSRegionCalibrationModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmUSRegionCalibrationModule );
public:
	CDcmUSRegionCalibrationModule();
	virtual ~CDcmUSRegionCalibrationModule();
public:
	CDcmUSRegionSequence& UltraSoundRegions();
private:
	CDcmUSRegionSequence m_UltraSoundRegions_0018_6011_1;

};

#endif // !defined(AFX_DCMUSREGIONCALIBRATIONMODULE_H__D320850B_E837_4083_B7D4_12EC18CC1B67__INCLUDED_)
