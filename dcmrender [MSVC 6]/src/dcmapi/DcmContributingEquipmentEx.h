// DcmContributingEquipmentEx.h: interface for the CDcmContributingEquipmentEx class.
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

#if !defined(AFX_DCMCONTRIBUTINGEQUIPMENTEX_H__B4550189_86C0_4BF4_A508_6A32F5C6A2A1__INCLUDED_)
#define AFX_DCMCONTRIBUTINGEQUIPMENTEX_H__B4550189_86C0_4BF4_A508_6A32F5C6A2A1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "DcmSequence.h"
#include "DcmCodeSequenceMacro.h"

class AFX_EXT_CLASS CDcmContributingEquipmentSequence : public CDcmSequence 
{
public:
	DECLARE_SERIAL( CDcmContributingEquipmentSequence );
	CDcmContributingEquipmentSequence();
	virtual ~CDcmContributingEquipmentSequence();  
public:
	CDcmCodeSequenceMacroEx& PurposeOfReference(); 
public:
	CString& Manufacturer();
	void Manufacturer(const CString& Tag_0008_0070_1_LO_VM_1 );
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
	void InstitutionalDepartmentName(const CString& Tag_0008_1040_3_LO_VM_1);
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
	void TimeOfLastCalibration(const CStringArray& Tag_0018_1201_3_DA_VM_1N);
public:
	CString& ContributionDateTime();
	void ContributionDateTime(const CString& Tag_0018_AOO2_3_DT_VM_1);
public:
	CString& ContributionDescription();
	void ContributionDescription(const CString& Tag_0018_AOO3_3_ST_VM_1);
private:
	CDcmCodeSequenceMacroEx  m_PurposeOfReferenceSequence_0040_A170_1;
};

#endif // !defined(AFX_DCMCONTRIBUTINGEQUIPMENTEX_H__B4550189_86C0_4BF4_A508_6A32F5C6A2A1__INCLUDED_)
