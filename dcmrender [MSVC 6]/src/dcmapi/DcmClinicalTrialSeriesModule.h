// DcmClinicalTrialSeriesModule.h: interface for the CDcmClinicalTrialSeriesModule class.
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

#if !defined(AFX_DCMCLINICALTRIALSERIESMODULE_H__11788DB2_6142_40CE_891A_B43F9BFBCC22__INCLUDED_)
#define AFX_DCMCLINICALTRIALSERIESMODULE_H__11788DB2_6142_40CE_891A_B43F9BFBCC22__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmClinicalTrialSeriesModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmClinicalTrialSeriesModule );
	CDcmClinicalTrialSeriesModule();
	virtual ~CDcmClinicalTrialSeriesModule();
public:
	CString& TrialCoordinatingCenterName();
	void  TrialCoordinatingCenterName( const CString& Tag_0012_0060_2_LO_VM_1 );

};


#endif // !defined(AFX_DCMCLINICALTRIALSERIESMODULE_H__11788DB2_6142_40CE_891A_B43F9BFBCC22__INCLUDED_)
