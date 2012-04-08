// DcmSCEquipmentModule.h: interface for the CDcmSCEquipmentModule class.
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

#if !defined(AFX_DCMSCEQUIPMENTMODULE_H__4EFEB912_AD69_4CAB_9F79_FC1DFA5D1200__INCLUDED_)
#define AFX_DCMSCEQUIPMENTMODULE_H__4EFEB912_AD69_4CAB_9F79_FC1DFA5D1200__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmSCEquipmentModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmSCEquipmentModule );
public:

	CDcmSCEquipmentModule();
	virtual ~CDcmSCEquipmentModule();
public:
	CString& ConversionType();
	void ConversionType(const CString& Tag_0008_0064_1_CS_VM_1 );
public:
	CString& Modality();
	void Modality(const CString& Modality_0008_0060_1_CS_VM_1  );
public:
	CString& SecondaryCaptureDeviceID();
	void SecondaryCaptureDeviceID(const CString& Tag_0018_1010_3_LO_VM_1  );
public:
	CString& SecondaryCaptureDeviceManufacturer();
	void SecondaryCaptureDeviceManufacturer(const CString& Tag_0018_1016_3_LO_VM_1  );
public:
	CString& SecondaryCaptureDeviceManufacturerModelName();
	void SecondaryCaptureDeviceManufacturerModelName(const CString& Tag_0018_1018_3_LO_VM_1 );
public:
	CStringArray& SecondaryCaptureDeviceSoftwareVersion();
	void SecondaryCaptureDeviceSoftwareVersion(const CStringArray& Tag_0018_1019_3_LO_VM_1N );
public:
	CString& VideoImageFormatAcquired();
	void VideoImageFormatAcquired(const CString& Tag_0018_1022_3_SH_VM_1 );
public:
	CString& DigitalImageFormatAcquired();
	void DigitalImageFormatAcquired(const CString& Tag_0018_1023_3_LO_VM_1 );
};

#endif // !defined(AFX_DCMSCEQUIPMENTMODULE_H__4EFEB912_AD69_4CAB_9F79_FC1DFA5D1200__INCLUDED_)
