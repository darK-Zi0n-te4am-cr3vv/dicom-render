// DcmSequence.h: interface for the CDcmSequence class.
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

#if !defined(AFX_DCMSEQUENCE_H__D2B783FB_0B43_4125_A4C9_76E585B66302__INCLUDED_)
#define AFX_DCMSEQUENCE_H__D2B783FB_0B43_4125_A4C9_76E585B66302__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmCommon.h"
class CSequencePrivate;
class AFX_EXT_CLASS CDcmSequence : public CDcmAttributeSet
{
public:
	DECLARE_SERIAL( CDcmSequence );
public:
	CDcmSequence();
	virtual ~CDcmSequence();
	CDcmSequence( CDcmSequence& sequence );
public:
	CDcmSequence& operator=( CDcmSequence& sequence  );
	CDcmSequence& operator<<( CDcmSequence& sequence  );
	CDcmSequence& operator>>( CDcmSequence& sequence  );
	bool operator==( CDcmSequence& sequence  );
	bool operator!=( CDcmSequence& sequence  );
	void EmptySequence();
protected:
// Private implemetation details
	CSequencePrivate& SequencePrivate() { return m_members; };
// Private implemetation details
	CSequencePrivate& m_members;
// Constructs sequence dataset. 
	virtual void InitializeSequence();
// Copy dataset by value
	virtual void CopySequence( CDcmSequence& sequence );
// Destroys dataset
	virtual void DestroySequence();
};

#endif // !defined(AFX_DCMSEQUENCE_H__D2B783FB_0B43_4125_A4C9_76E585B66302__INCLUDED_)
