// ReferencedOverLaySequence.h: interface for the CReferencedOverLaySequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_REFERENCEDOVERLAYSEQUENCE_H__85C3D634_04EA_4A59_B1F1_E24338D675B9__INCLUDED_)
#define AFX_REFERENCEDOVERLAYSEQUENCE_H__85C3D634_04EA_4A59_B1F1_E24338D675B9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
class CReferenceOverLayPrivate;
class AFX_EXT_CLASS CReferencedOverLaySequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CReferencedOverLaySequence );
public:
	CReferencedOverLaySequence();
	CReferencedOverLaySequence(const CString& Group);
	virtual ~CReferencedOverLaySequence();
public:
	CString& ReferencedSOPClassUID();
	void ReferencedSOPClassUID(const CString& Tag_0008_1150_1C_UI_VM_1);
public:
	CString& ReferencedSOPInstanceUID();
	void ReferencedSOPInstanceUID(const CString& Tag_0008_1155_1C_UI_VM_1);
public:
	const unsigned short& ReferencedOverlayGroup();
	void ReferencedOverlayGroup(const unsigned short& Tag_50xx_2610_1C_US_VM_1);
private:
	CReferenceOverLayPrivate& m_member;
};

#endif // !defined(AFX_REFERENCEDOVERLAYSEQUENCE_H__85C3D634_04EA_4A59_B1F1_E24338D675B9__INCLUDED_)
