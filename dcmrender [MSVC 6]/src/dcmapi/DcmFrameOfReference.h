// DcmFrameOfReference.h: interface for the CDcmFrameOfReference class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMFRAMEOFREFERENCE_H__BAF7A5D8_9133_4DE0_BBFD_5E52C76FB172__INCLUDED_)
#define AFX_DCMFRAMEOFREFERENCE_H__BAF7A5D8_9133_4DE0_BBFD_5E52C76FB172__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmFrameOfReferenceModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmFrameOfReferenceModule );
public:
	CDcmFrameOfReferenceModule();
	virtual ~CDcmFrameOfReferenceModule();
public:
    CString& FrameOfReferenceUID();
	void FrameOfReferenceUID(const CString& Tag_0020_0052_1_UI_VM_1);
public:
    CStringArray& PositionReferenceIndicator();
	void PositionReferenceIndicator(const CStringArray& Tag_0020_1040_1_LO_VM_2);
};

#endif // !defined(AFX_DCMFRAMEOFREFERENCE_H__BAF7A5D8_9133_4DE0_BBFD_5E52C76FB172__INCLUDED_)
