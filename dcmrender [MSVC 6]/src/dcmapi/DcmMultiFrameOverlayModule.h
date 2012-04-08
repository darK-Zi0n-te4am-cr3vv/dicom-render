// DcmMultiFrameOverlayModule.h: interface for the CDcmMultiFrameOverlayModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMMULTIFRAMEOVERLAYMODULE_H__9075CD1E_0C7D_4134_AB78_4077E678FD3B__INCLUDED_)
#define AFX_DCMMULTIFRAMEOVERLAYMODULE_H__9075CD1E_0C7D_4134_AB78_4077E678FD3B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
// C.9.3 Multi-frame Overlay Module
class AFX_EXT_CLASS CDcmMultiFrameOverlayModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmMultiFrameOverlayModule );
public:
	CDcmMultiFrameOverlayModule(const CString& Group_Hex = "6000");
    CDcmMultiFrameOverlayModule( CDcmMultiFrameOverlayModule& module );
	virtual ~CDcmMultiFrameOverlayModule();
public:
	CDcmMultiFrameOverlayModule& operator=( CDcmMultiFrameOverlayModule& module );
protected:
// Creates the module dataset
	virtual void InitializeModule();
public:
	CString& NumberFramesOverlay();
	void NumberFramesOverlay( const CString& Tag_60xx_0015_1_IS_VM_1 );
public:
	const unsigned short& ImageFrameOrigin();
	void ImageFrameOrigin( const unsigned short Tag_60xx_0051_3_US_VM_1 );
private:
	CString m_Group_Hex;
};

#endif // !defined(AFX_DCMMULTIFRAMEOVERLAYMODULE_H__9075CD1E_0C7D_4134_AB78_4077E678FD3B__INCLUDED_)
