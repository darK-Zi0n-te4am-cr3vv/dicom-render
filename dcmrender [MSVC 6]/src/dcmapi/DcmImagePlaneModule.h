// DcmImagePlaneModule.h: interface for the CDcmImagePlaneModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMIMAGEPLANEMODULE_H__2FCECAEA_FF6F_442D_A755_2A6D00DE6CEF__INCLUDED_)
#define AFX_DCMIMAGEPLANEMODULE_H__2FCECAEA_FF6F_442D_A755_2A6D00DE6CEF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmImagePlaneModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmImagePlaneModule );
public:
	CDcmImagePlaneModule();
	virtual ~CDcmImagePlaneModule();
public:
	CStringArray& PixelSpacing();
	void PixelSpacing(const CStringArray& Tag_0028_0030_1_DS_VM_2);
public:
	CStringArray& ImageOrientationPatient();
	void ImageOrientationPatient(const CStringArray& Tag_0020_0037_1_DS_VM_6);
public:
	CStringArray& ImagePositionPatient();
	void ImagePositionPatient(const CStringArray& Tag_0020_0032_1_DS_VM_3);
public:
	CString& SliceThickness();
	void SliceThickness(const CString& Tag_0018_0050_2_DS_VM_1);
public:
	CString& SliceLocation();
	void SliceLocation(const CString& Tag_0020_1041_3_DS_VM_1);
};

#endif // !defined(AFX_DCMIMAGEPLANEMODULE_H__2FCECAEA_FF6F_442D_A755_2A6D00DE6CEF__INCLUDED_)
