// DcmDeviceModule.h: interface for the CDcmDeviceModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMDEVICEMODULE_H__8D021E82_3A09_4CC0_B8CE_5C2AF52A26E6__INCLUDED_)
#define AFX_DCMDEVICEMODULE_H__8D021E82_3A09_4CC0_B8CE_5C2AF52A26E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmDeviceSequence.h"
class AFX_EXT_CLASS CDcmDeviceModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmDeviceModule );
public:
	CDcmDeviceModule();
	virtual ~CDcmDeviceModule();
public:
	CDcmDeviceSequence& Device();
private:
	CDcmDeviceSequence m_DeviceSequence_0050_0010_3;
};
/*
Device Sequence (0050,0010) 3
>Include ‘Code Sequence Macro’ Table 8.8-1 Baseline
>Device Length (0050,0014) 3
>Device Diameter (0050,0016) 3
>Device Diameter units (0050,0017) 2C
>Device Volume (0050,0018) 3
>Inter-Marker Distance (0050,0019) 3
>Device Description (0050,0020) 3
*/
#endif // !defined(AFX_DCMDEVICEMODULE_H__8D021E82_3A09_4CC0_B8CE_5C2AF52A26E6__INCLUDED_)
