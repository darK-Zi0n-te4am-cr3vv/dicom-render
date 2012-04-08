// DcmNMReconstructionModule.h: interface for the CDcmNMReconstructionModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMNMRECONSTRUCTIONMODULE_H__42383651_79F6_4E1D_B6F9_808080ED4891__INCLUDED_)
#define AFX_DCMNMRECONSTRUCTIONMODULE_H__42383651_79F6_4E1D_B6F9_808080ED4891__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmNMReconstructionModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmNMReconstructionModule );
public:
	CDcmNMReconstructionModule();
    CDcmNMReconstructionModule( CDcmNMReconstructionModule& module );
	virtual ~CDcmNMReconstructionModule();
public:
	CDcmNMReconstructionModule& operator=( CDcmNMReconstructionModule& module );
protected:
// Creates the module dataset
	virtual void InitializeModule();
public:
	void SpacingBetweenSlices (const CString& Tag_0018_0088_2_DS_VM_1 );
	CString& SpacingBetweenSlices( );
public:
	void ReconstructionDiameter (const CString& Tag_0018_1100_3_DS_VM_1 );
	CString& ReconstructionDiameter( );
public:
	void ConvolutionKernel (const CStringArray& Tag_0018_1210_3_SH_VM_1N );
	CStringArray& ConvolutionKernel( );
public:
	void SliceThickness (const CString& Tag_0018_0050_3_DS_VM_1 );
	CString& SliceThickness( );
public:
	void SliceLocation (const CString& Tag_0020_1041_3_DS_VM_1 );
	CString& SliceLocation( );
};

#endif // !defined(AFX_DCMNMRECONSTRUCTIONMODULE_H__42383651_79F6_4E1D_B6F9_808080ED4891__INCLUDED_)
