// DcmCurveIdentificationModule.h: interface for the CDcmCurveIdentificationModule class.
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
#if !defined(AFX_DCMCURVEIDENTIFICATIONMODULE_H__564F92F5_9D7E_4C02_B3AE_05CF250AB360__INCLUDED_)
#define AFX_DCMCURVEIDENTIFICATIONMODULE_H__564F92F5_9D7E_4C02_B3AE_05CF250AB360__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

#include "DcmReferencedSOPSequence.h"
class AFX_EXT_CLASS CDcmCurveIdentificationModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmCurveIdentificationModule );
public:
	CDcmCurveIdentificationModule();
	virtual ~CDcmCurveIdentificationModule();
	CDcmCurveIdentificationModule( CDcmCurveIdentificationModule& module );
protected:
	virtual void InitializeModule();
public:
	CDcmCurveIdentificationModule& operator=( CDcmCurveIdentificationModule& module );
public:
	CString& CurveNumber( );
	void CurveNumber(const CString& Tag_0020_0024_2_IS_VM_1 );
public:
	CString& CurveDate( );
	void CurveDate(const CString& Tag_0008_0025_3_DA_VM_1 );
public:
	CString& CurveTime( );
	void CurveTime(const CString& Tag_0008_0035_3_TM_VM_1 );
public:
	CDcmSopSequence& ReferencedImage();
	CDcmSopSequence& ReferencedOverlay();
	CDcmSopSequence& ReferencedCurve();
private:
	CDcmSopSequence m_ReferencedImage_0008_1140_3;
	CDcmSopSequence m_ReferencedOverlay_0008_1130_3;
	CDcmSopSequence m_ReferencedCurve_0008_1145_3;
};
#endif // !defined(AFX_DCMCURVEIDENTIFICATIONMODULE_H__564F92F5_9D7E_4C02_B3AE_05CF250AB360__INCLUDED_)
