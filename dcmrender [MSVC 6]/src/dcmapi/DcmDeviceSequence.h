// DcmDeviceSequence.h: interface for the CDcmDeviceSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMDEVICESEQUENCE_H__7260C0FE_55D5_4FD6_AA77_802C61764B91__INCLUDED_)
#define AFX_DCMDEVICESEQUENCE_H__7260C0FE_55D5_4FD6_AA77_802C61764B91__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmCodeSequenceMacro.h"
class AFX_EXT_CLASS CDcmDeviceSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmDeviceSequence );
public:
	CDcmDeviceSequence();
	virtual ~CDcmDeviceSequence();
public:
	CString& DeviceLength();
	void DeviceLength(const CString& Tag_0050_0014_3_DS_VM_1 );
public:
	CString& DeviceDiameter();
	void DeviceDiameter(const CString& Tag_0050_0016_3_DS_VM_1 );
public:
	CString& DeviceDiameterUnits();
	void DeviceDiameterUnits(const CString& Tag_0050_0017_2C_CS_VM_1 );
public:
	CString& DeviceVolume();
	void DeviceVolume(const CString& Tag_0050_0018_3_DS_VM_1 );
public:
	CString& InterMarkerDistance();
	void InterMarkerDistance(const CString& Tag_0050_0019_3_DS_VM_1 );
public:
	CString& DeviceDescription();
	void DeviceDescription(const CString& Tag_0050_0020_3_LO_VM_1 );
public:
	CDcmCodeSequenceMacroEx& Code();
private:
	CDcmCodeSequenceMacroEx m_CodeSequenceMacro;
};

#endif // !defined(AFX_DCMDEVICESEQUENCE_H__7260C0FE_55D5_4FD6_AA77_802C61764B91__INCLUDED_)
