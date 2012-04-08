// DcmGeneralImageModule.h: interface for the CDcmGeneralImageModule class.
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

#if !defined(AFX_DCMGENERALIMAGEMODULE_H__51E0EFA0_F9AB_4E97_95C5_4F6B04FF9114__INCLUDED_)
#define AFX_DCMGENERALIMAGEMODULE_H__51E0EFA0_F9AB_4E97_95C5_4F6B04FF9114__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmCommon.h"
#include "ReferencedImageSequence.h"
#include "DcmReferencedWaveformSequence.h"
#include "DcmIconImageSequence.h"

class AFX_EXT_CLASS CDcmGeneralImageModule : public CDcmModule 
{
	DECLARE_SERIAL( CDcmGeneralImageModule );
public:
	CDcmGeneralImageModule();
	CDcmGeneralImageModule( CDcmGeneralImageModule& module );
	virtual ~CDcmGeneralImageModule();

	CDcmGeneralImageModule& operator=(CDcmGeneralImageModule& module);
protected:
	virtual void InitializeModule();
public:
	CString& InstanceNumber();
	void InstanceNumber(const CString& Tag_0020_0013_2_IS_VM_1 );
public:
	CStringArray& PatientOrientation();
	void PatientOrientation(const CStringArray& Tag_0020_0020_2C_CS_VM_2);
public:
	CString& ContentDate();
	void ContentDate(const CString& Tag_0008_0023_2C_DA_VM_1 );
public:
	CString& ContentTime();
	void ContentTime(const CString& Tag_0008_0033_2C_TM_VM_1 );
public:
	CStringArray& ImageType();
	void ImageType(const CStringArray& Tag_0008_0008_3_CS_VM_1N);
public:
	CString& AcquisitionNumber();
	void AcquisitionNumber(const CString& Tag_0020_0012_3_IS_VM_1 );
public:
	CString& AcquisitionDate();
	void AcquisitionDate(const CString& Tag_0008_0022_3_DA_VM_1 );
public:
	CString& AcquisitionTime();
	void AcquisitionTime(const CString& Tag_0008_0032_3_DA_VM_1 );
public:
	CString& AcquisitionDatetime();
	void AcquisitionDatetime(const CString& Tag_0008_002A_3_DT_VM_1 );
public:
	CString& DerivationDescription();
	void DerivationDescription(const CString& Tag_0008_2111_3_ST_VM_1 );
public:
	CString& ImagesInAcquisition();
	void ImagesInAcquisition(const CString& Tag_0020_1002_3_IS_VM_1 );
public:
	CString& ImageComments();
	void ImageComments(const CString& Tag_0020_4000_3_LT_VM_1 );
public:
	CString& QualityControlImage();
	void QualityControlImage(const CString& Tag_0028_0300_3_CS_VM_1 );
public:
	CString& BurnedInAnnotation();
	void BurnedInAnnotation(const CString& Tag_0028_0301_3_CS_VM_1 );
public:
	CString& LossyImageCompression();
	void LossyImageCompression(const CString& Tag_0028_2110_3_CS_VM_1 );
public:
	CStringArray& LossyImageCompressionRatio();
	void LossyImageCompressionRatio(const CStringArray& Tag_0028_2112_3_DS_VM_1N);
public:
	CString& PresentationLUTShape();
	void PresentationLUTShape(const CString& Tag_2050_0020_3_CS_VM_1 );
public:
	CDcmImageSequence& ReferencedImage();
	CDcmImageSequence& SourceImage();
	CDcmWaveformSequence& ReferencedWaveForm();
	CDcmCodeSequenceMacroEx& DerivationCode();
	CDcmIconImageSequence& IconImage();
private:
	CDcmImageSequence m_ReferencedImageSequence_0008_1140;
	CDcmImageSequence m_SourceImageSequence_0008_2112;
	CDcmCodeSequenceMacroEx m_DerivationCodeSequence_0008_9215;
	CDcmWaveformSequence m_ReferencedWaveformSequence_0008_113A;
	CDcmIconImageSequence m_IconImageSequence_0088_0200;
};

#endif // !defined(AFX_DCMGENERALIMAGEMODULE_H__51E0EFA0_F9AB_4E97_95C5_4F6B04FF9114__INCLUDED_)


