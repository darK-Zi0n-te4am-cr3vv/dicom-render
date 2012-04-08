// DcmBitmapDisplayShutterModule.h: interface for the CDcmBitmapDisplayShutterModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMBITMAPDISPLAYSHUTTERMODULE_H__C89C280E_D1F7_4653_8CA0_C1A94535A5C7__INCLUDED_)
#define AFX_DCMBITMAPDISPLAYSHUTTERMODULE_H__C89C280E_D1F7_4653_8CA0_C1A94535A5C7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmBitmapDisplayShutterModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmBitmapDisplayShutterModule );
public:
	CDcmBitmapDisplayShutterModule();
	virtual ~CDcmBitmapDisplayShutterModule();
public:
	CStringArray& ShutterShape();
	void ShutterShape( const CStringArray& Tag_0018_1600_1_CS_VM_1_3 );
public:
	const unsigned short& ShutterPresentationValue ( );
	void ShutterPresentationValue ( const unsigned short Tag_0018_1622_1_US_VM_1  );
public:
	const unsigned short& ShutterOverlayGroup ( );
	void ShutterOverlayGroup ( const unsigned short Tag_0018_1623_1_US_VM_1  );
};

#endif // !defined(AFX_DCMBITMAPDISPLAYSHUTTERMODULE_H__C89C280E_D1F7_4653_8CA0_C1A94535A5C7__INCLUDED_)
