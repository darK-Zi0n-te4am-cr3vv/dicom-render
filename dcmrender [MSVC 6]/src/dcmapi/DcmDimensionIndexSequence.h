// DcmDimensionIndexSequence.h: interface for the CDcmDimensionIndexSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMDIMENSIONINDEXSEQUENCE_H__2FC8B46C_B2B4_4CC5_B257_88B92FC76FBE__INCLUDED_)
#define AFX_DCMDIMENSIONINDEXSEQUENCE_H__2FC8B46C_B2B4_4CC5_B257_88B92FC76FBE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmDimensionIndexSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmDimensionIndexSequence );
public:
	CDcmDimensionIndexSequence();
	virtual ~CDcmDimensionIndexSequence();
public:
	const unsigned long& DimensionIndexPointer();
	void DimensionIndexPointer(const unsigned long Tag_0020_9165_1_AT_VM_1 );
public:
	CString& DimensionIndexPrivateCreator();
	void DimensionIndexPrivateCreator(const CString& Tag_0020_9213_1C_LO_VM_1 );
public:
	const unsigned long& FunctionalGroupPointer();
	void FunctionalGroupPointer(const unsigned long Tag_0020_9167_1C_AT_VM_1 );
public:
	CString& FunctionalGroupPrivateCreator();
	void FunctionalGroupPrivateCreator(const CString& Tag_0020_9238_1C_LO_VM_1 );
public:
	CString& DimensionOrganizationUID();
	void DimensionOrganizationUID(const CString& Tag_0020_9164_1C_UI_VM_1 );
};


#endif // !defined(AFX_DCMDIMENSIONINDEXSEQUENCE_H__2FC8B46C_B2B4_4CC5_B257_88B92FC76FBE__INCLUDED_)
