// DcmOverLayPlaneModule.h: interface for the CDcmOverLayPlaneModule class.
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

#if !defined(AFX_DCMOVERLAYPLANEMODULE_H__1EA3F323_393B_42F8_B4A6_93A2C87A725E__INCLUDED_)
#define AFX_DCMOVERLAYPLANEMODULE_H__1EA3F323_393B_42F8_B4A6_93A2C87A725E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmOverLayPlaneModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmOverLayPlaneModule );
public:
	CDcmOverLayPlaneModule(const CString& Group_Hex = "6000" );
	virtual ~CDcmOverLayPlaneModule();
public:
	const unsigned short& OverlayRows();
	void OverlayRows (const unsigned short  Tag_60xx_0010_1_US_VM_1 );
public:
	const unsigned short& OverlayColumns ();
	void OverlayColumns (const unsigned short  Tag_60xx_0011_1_US_VM_1 );
public:
	CString& OverlayType ();
	void OverlayType ( const CString& Tag_60xx_0040_3_CS_VM_1 );
public:
	CWordArray& OverlayOrigin (  );
	void OverlayOrigin (const CWordArray& Tag_60xx_0050_1_SS_VM_2 );
public:
	const unsigned short& OverlayBitsAllocated ();
	void OverlayBitsAllocated (const unsigned short Tag_60xx_0100_1_US_VM_1 );
public:
	const unsigned short& OverlayBitPosition ();
	void OverlayBitPosition (const unsigned short Tag_60xx_0102_1_US_VM_1 );
public:	
	CByteArray& OverlayData ();
	void OverlayData ( const CByteArray& Tag_60xx_3000_1C_OB_VM_1 );
public:
	CString& OverlayDescription ();
	void OverlayDescription ( const CString& Tag_60xx_0022_3_CS_VM_1 );
public:
	CString& OverlaySubtype ();
	void OverlaySubtype ( const CString& Tag_60xx_0045_3_LO_VM_1 );
public:
	CString& OverlayLabel ();
	void OverlayLabel ( const CString& Tag_60xx_1500_3_LO_VM_1 );
public:
	CString& ROIArea ();
	void ROIArea ( const CString& Tag_60xx_1301_3_IS_VM_1 );
public:
	CString& ROIMean ();
	void ROIMean ( const CString& Tag_60xx_1302_3_DS_VM_1 );
public:
	CString& ROIStandardDeviation ();
	void ROIStandardDeviation( const CString& Tag_60xx_1303_3_DS_VM_1 );
private:
	CString m_Group;
};

#endif // !defined(AFX_DCMOVERLAYPLANEMODULE_H__1EA3F323_393B_42F8_B4A6_93A2C87A725E__INCLUDED_)
