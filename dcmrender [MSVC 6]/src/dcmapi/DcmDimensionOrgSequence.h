// DcmDimensionOrgSequence.h: interface for the CDcmDimensionOrgSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMDIMENSIONORGSEQUENCE_H__2A3912D1_F23B_4EFC_96E4_5A7286C27010__INCLUDED_)
#define AFX_DCMDIMENSIONORGSEQUENCE_H__2A3912D1_F23B_4EFC_96E4_5A7286C27010__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"

class AFX_EXT_CLASS CDcmDimensionOrgSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmDimensionOrgSequence );
public:
	CDcmDimensionOrgSequence();
	virtual ~CDcmDimensionOrgSequence();
public:
	CString& DimensionOrganizationUID();
	void DimensionOrganizationUID(const CString& Tag_0020_9164_1_UI_VM_1 );
};

#endif // !defined(AFX_DCMDIMENSIONORGSEQUENCE_H__2A3912D1_F23B_4EFC_96E4_5A7286C27010__INCLUDED_)
