// DcmMaskSubtractionSequence.h: interface for the CDcmMaskSubtractionSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMMASKSUBTRACTIONSEQUENCE_H__79BE81DD_04A3_4C00_B771_1F07A56C21EF__INCLUDED_)
#define AFX_DCMMASKSUBTRACTIONSEQUENCE_H__79BE81DD_04A3_4C00_B771_1F07A56C21EF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include <afxtempl.h>

class AFX_EXT_CLASS CDcmMaskSubtractionSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmMaskSubtractionSequence );
public:
	CDcmMaskSubtractionSequence();
	virtual ~CDcmMaskSubtractionSequence();
public:
	CString& MaskOperation();
	void MaskOperation(const CString& Tag_0028_6101_1_CS_VM_1 );
public:
	CWordArray& ApplicableFrameRange();
	void ApplicableFrameRange(const CWordArray& Tag_0028_6102_3_US_VM_2N );
public:
	CWordArray& MaskFrameNumbers();
	void MaskFrameNumbers(const CWordArray& Tag_0028_6110_1C_US_VM_1N );
public:
	const unsigned short& ContrastFrameAveraging();
	void ContrastFrameAveraging(const unsigned short Tag_0028_6112_3_US_VM_1 );
public:
	CArray< float, float >& MaskSubPixelShift();
	void MaskSubPixelShift(const CArray< float, float >& Tag_0028_6114_3_FL_VM_2 );
public:
	const unsigned short& TIDOffset();
	void TIDOffset(const unsigned short Tag_0028_6120_2C_SS_VM_1 );
public:
	CString& MaskOperationExplanation();
	void MaskOperationExplanation(const CString& Tag_0028_6190_3_ST_VM_1 );
};

#endif // !defined(AFX_DCMMASKSUBTRACTIONSEQUENCE_H__79BE81DD_04A3_4C00_B771_1F07A56C21EF__INCLUDED_)
