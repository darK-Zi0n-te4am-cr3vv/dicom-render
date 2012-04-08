// DcmCommon.h: 
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
#if !defined(AFX_DCMCOMMON_H__96A834CE_9559_405E_943C_EA8859FFA53B__INCLUDED_)
#define AFX_DCMCOMMON_H__96A834CE_9559_405E_943C_EA8859FFA53B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CDcmElementSet;
class CDmElement;
class AFX_EXT_CLASS CDcmAttributeSet  : public CObject 
{
public:
	DECLARE_SERIAL( CDcmAttributeSet );
public:
	CDcmAttributeSet();
	CDcmAttributeSet( CDcmAttributeSet& set );
	virtual ~CDcmAttributeSet();
public:
// Copy by create
	CDcmAttributeSet& operator=( CDcmAttributeSet& set );
// Copy by value
	CDcmAttributeSet& operator<<( CDcmAttributeSet& set );
// Copy by value
	CDcmAttributeSet& operator>>( CDcmAttributeSet& set );
// Logical comparsion of group-element number and value field of members
	bool operator==( CDcmAttributeSet& set );
// Logical comparsion of group-element number and value field of members
	bool operator!=( CDcmAttributeSet& set );
public:
// Empty dataset set element
	void Empty( int Group_Hex, int Element_Hex );
	void Empty( const CDmElement* tag );
	void Empty( const CDmElement& tag );
protected:
// Empty all members of dataset including sequence members
	void EmptyAll();
public:
// Export dataset as string array
	void Export( CStringArray& array );
// Export dataset as string array and send to text file
	void Export( const CString& pathname );
public:
// Sort by ascending group and element
	void Sort();
public:
// Get count of elements in the dataset excluding sequence members
	const int GetCount();
// Get count of elements in the dataset including sequence members
	const int GetCountAll();
public:
	CDcmElementSet& GetDcmElementSet();
protected:
// Copies only the values of the intersection of this set 
// and the target set 
	void CopyByValue(CDcmAttributeSet& set);
// Destroys this dataset and creates copy of the target set
	void CopyByCreate(CDcmAttributeSet& set);
// Copies reference only; Both datasets point to the same set of elements
	void CopyByReference(CDcmAttributeSet& set);
// Create null set
	void DestroySet();
private:
// the internal dicom dataset
	CDcmElementSet& m_DcmElementSet;
};

#endif // !defined(AFX_DCMCOMMON_H__96A834CE_9559_405E_943C_EA8859FFA53B__INCLUDED_)
