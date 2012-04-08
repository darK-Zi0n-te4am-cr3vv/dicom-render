// DcmDisplayShutterModule.h: interface for the CDcmDisplayShutterModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMDISPLAYSHUTTERMODULE_H__AD92120A_583C_44F1_8051_722586D7EC02__INCLUDED_)
#define AFX_DCMDISPLAYSHUTTERMODULE_H__AD92120A_583C_44F1_8051_722586D7EC02__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmDisplayShutterModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmDisplayShutterModule );
public:
	CDcmDisplayShutterModule();
	virtual ~CDcmDisplayShutterModule();
public:
	CStringArray& ShutterShape();
	void ShutterShape(const CStringArray& Tag_0018_1600_1_CS_VM_1_3 );
public:
	CString& ShutterLeftVerticalEdge();
	void ShutterLeftVerticalEdge(const CString& Tag_0018_1602_1C_IS_VM_1 );
public:
	CString& ShutterRightVerticalEdge();
	void ShutterRightVerticalEdge(const CString& Tag_0018_1604_1C_IS_VM_1 );
public:
	CString& ShutterUpperHorizontalEdge();
	void ShutterUpperHorizontalEdge(const CString& Tag_0018_1606_1C_IS_VM_1 );
public:
	CString& ShutterLowerHorizontalEdge();
	void ShutterLowerHorizontalEdge(const CString& Tag_0018_1608_1C_IS_VM_1 );
public:
	CStringArray& CenterOfCircularShutter();
	void CenterOfCircularShutter(const CStringArray& Tag_0018_1610_1C_IS_VM_2 );
public:
	CString& RadiusOfCircularShutter();
	void RadiusOfCircularShutter(const CString& Tag_0018_1612_1C_IS_VM_1 );
public:
	CStringArray& VerticesOfPolygonalShutter();
	void VerticesOfPolygonalShutter(const CStringArray& Tag_0018_1620_1C_IS_VM_2N );
public:
	const unsigned short& ShutterPresentationValue();
	void ShutterPresentationValue(unsigned short Tag_0018_1622_1_US_VM_1 );
};

#endif // !defined(AFX_DCMDISPLAYSHUTTERMODULE_H__AD92120A_583C_44F1_8051_722586D7EC02__INCLUDED_)
