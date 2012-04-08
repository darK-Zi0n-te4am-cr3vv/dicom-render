// DcmGeneralEquipmentModule.h: interface for the CDcmGeneralEquipmentModule class.
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

#if !defined(AFX_DCMGENERALEQUIPMENTMODULE_H__516E302A_A9F8_4013_BDCC_8EAB4A3B1C00__INCLUDED_)
#define AFX_DCMGENERALEQUIPMENTMODULE_H__516E302A_A9F8_4013_BDCC_8EAB4A3B1C00__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmGeneralEquipmentModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmGeneralEquipmentModule );

public:
	CDcmGeneralEquipmentModule();
	virtual ~CDcmGeneralEquipmentModule();
public:
    CString& Manufacturer();
	void Manufacturer(const CString& Tag_0008_0070_2_LO_VM_1);
public:	
	CString& InstitutionName();
	void InstitutionName(const CString& Tag_0008_0080_3_LO_VM_1);
public:
	CString& InstitutionAddress();
	void InstitutionAddress(const CString& Tag_0008_0081_3_ST_VM_1);
public:
	CString& StationName();
	void StationName(const CString& Tag_0008_1010_3_SH_VM_1);
public:
	CString& InstitutionalDepartmentName();
	void InstitutionalDepartmentName( const CString& Tag_0008_1040_3_LO_VM_1);
public:
	CString& ManufacturerModelName();
	void ManufacturerModelName(const CString& Tag_0008_1090_3_LO_VM_1);
public:
	CString& DeviceSerialNumber();
	void DeviceSerialNumber(const CString& Tag_0018_1000_3_LO_VM_1);
public:
	CStringArray& SoftwareVersions();
	void SoftwareVersions(const CStringArray& Tag_0018_1020_3_LO_VM_1N );
public:
	CString& SpatialResolution();
	void SpatialResolution(const CString& Tag_0018_1050_3_DS_VM_1);
public:
	CStringArray& DateOfLastCalibration();
	void DateOfLastCalibration(const CStringArray& Tag_0018_1200_3_DA_VM_1N);
public:
	CStringArray& TimeOfLastCalibration();
	void TimeOfLastCalibration(const CStringArray& Tag_0018_1201_3_TM_1N);
public:
	const unsigned short& PixelPaddingValue();
	void PixelPaddingValue(const unsigned short Tag_0028_0120_3_US_VM_1);
};

#endif // !defined(AFX_DCMGENERALEQUIPMENTMODULE_H__516E302A_A9F8_4013_BDCC_8EAB4A3B1C00__INCLUDED_)
