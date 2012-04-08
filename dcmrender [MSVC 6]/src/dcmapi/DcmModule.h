// DcmModule.h: interface for the CDcmModule class.
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

#if !defined(AFX_DCMMODULE_H__B60E6C38_36BA_4E03_9CD8_CA9593155494__INCLUDED_)
#define AFX_DCMMODULE_H__B60E6C38_36BA_4E03_9CD8_CA9593155494__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmCommon.h"

class CDcmElementSet;
class CModulePrivate;
class CDcmCompositeIOD;

class AFX_EXT_CLASS CDcmModule :  public CDcmAttributeSet 
{
public:
	DECLARE_SERIAL( CDcmModule );
public:
	CDcmModule();
	CDcmModule( CDcmModule& module );
	virtual ~CDcmModule();
public:
// Copy by create
	CDcmModule& operator=( CDcmModule& module );
// Copy by value
	CDcmModule& operator<<( CDcmModule& module );
// Copy by value
	CDcmModule& operator>>( CDcmModule& module );
// Logical comparsion of group-element number and value field of members
	bool operator==( CDcmModule& module );
// Logical comparsion of group-element number and value field of members
	bool operator!=( CDcmModule& module );
	void EmptyModule();
	void RemoveModule();
	void AttachModule();
	void DetachModule();

// iod this module is attached
	CDcmCompositeIOD* m_iod;
protected:
// Private implementation details
	CModulePrivate& ModulePrivate() { return m_members; };
// Private implementation details
	CDcmElementSet& DcmModuleData();
// Private implementation details
	CModulePrivate& m_members;
// Constructs module dataset. 
	virtual void InitializeModule();
// Copies dataset by value
	virtual void CopyModule( CDcmModule& module );
// Creates null dataset
	virtual void DestroyModule();
};

#endif // !defined(AFX_DCMMODULE_H__B60E6C38_36BA_4E03_9CD8_CA9593155494__INCLUDED_)
