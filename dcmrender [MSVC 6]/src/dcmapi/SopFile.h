// SopFile.h: interface for the CSopFile class.
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

#if !defined(AFX_SOPFILE_H__0ADA0B87_45E2_463F_BC36_B00A5432A909__INCLUDED_)
#define AFX_SOPFILE_H__0ADA0B87_45E2_463F_BC36_B00A5432A909__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CDcmElementSet;
class CDcmIODPrivate;
class CDcmModule;

namespace encode
{
	enum encode_mode { dataset_all, dataset_normal };
}

class  AFX_EXT_CLASS CDcmIOD : public CObject
{
	friend CDcmModule;
public:
	DECLARE_SERIAL( CDcmIOD );
public:
// The IOD class contains the dicom dataset, parser and encoder. 
	CDcmIOD();
	CDcmIOD(CDcmIOD& iod);
	virtual ~CDcmIOD();
public:
// Create dataset from text script file. Allows for easy
// dataset construction. Just create the script file then 
// load the iod dataset with default attributes then handcraft the iod. 
	void ImportFromASL( const CString& scriptfile );
public:
// operator>> moves attribute information from the IOD dataset 
// to the module datset. This operator does not add elements
// to the module datset but updates the value field of the elements
// present in the module datset. Copy by value.
	CDcmIOD& operator>>( CDcmModule& module );
// operator<< moves attribute information from the  module
// dataset to the IOD dataset. This operator does add elements
// to the IOD dataset but only adds elements which are not empty.
	CDcmIOD& operator<<( CDcmModule& module );
// Removes module dataset from iod
	CDcmIOD& operator-=( CDcmModule& module );
// Adds module dataset to iod. Will add empty elements but will
// not create duplicate elements
	CDcmIOD& operator+=( CDcmModule& module );
// Removes all attributes of the module then adds non-empty attributes.
// Adds attributes to dataset
	CDcmIOD& operator <( CDcmModule& module );
// Update non-empty attributes. Does not add attributes to dataset
	CDcmIOD& operator &=( CDcmModule& module );

// Compares iod datasets 
	bool operator==( CDcmIOD& iod );
// Compares iod datasets 
	bool operator!=( CDcmIOD& iod );
// Subtracts iod datasets
	CDcmIOD& operator-=( CDcmIOD& iod );
// Destroys dataset and creates copy of new dataset
	CDcmIOD& operator=( CDcmIOD& iod );
// Used for Query/Retrieve Dimse Service
// Only compares the IOD dataset. 
    bool IsSubSet( CDcmIOD& iod );
// Move information to and from IOD dataset
// true = Modules to IOD dataset
// false = IOD dataset to modules
	void UpdateIod( bool direction = true );
// Empty the modules associated with the IOD.
// Leaves the IOD dataset intact
    void EmptyIodModules();
//  Destroys the IOD dataset. Leaves modules intact
	void RemoveAll();
// Reports count of the IOD dataset excluding sequence members 
	const int GetCount();
// Reports count of the IOD dataset including sequence members 
	const int GetCountAll();
// Sorts IOD dataset in ascending order of group and element number
 	void Sort();
public:
// Encode or decode dataset
	void Serialize( CArchive& ar );
public:
// Path name used by  Serialize( CArchive& ar );
    const CString& PathName();
public:
// IodSyntax can have only three values: explicit little endian, implicit little endian,
// and explicit big endian. It is the syntax used by the encoder
// Datasets can be encoded in three formats. There is no implicit big endian format 
	const int IodSyntax();
// Transfer Syntax used when encoding dataset without a metafile header 
    void IodSyntax( const CString& transferSyntaxUID );
//Export encoded dataset to buffer. Includes preamble and prefix
	void ExportFileFormat( CByteArray& array );
// Export iod dataset as a string table 
	void Export( CStringArray& array );
// Export iod dataset as a string table and writes to file
	void Export( const CString& pathname );
//Export encoded dataset to buffer. Excludes preamble and prefix
	void Export( CByteArray& array, const CString& TransferSyntax );
// Import dataset in encoded format from buffer
	void Import ( CByteArray& array );
// Will remove attributes which are recommended by supplement 55
// or fill in value fields if parameter is not empty
	void Anonymize55( const CString& valuefield = "" );
public:
// Determines how elements are moved into the iod dataset;
	int m_EncodeMode;
// Encode group length attribute for each group in dataset
	bool m_GroupLength;
// Encode preamble and prefix
	bool m_PreamblePrefix;
// Allows custom file preamble. Must by 128 bytes in size
// or it will be ignored
	CByteArray m_Preamble;
protected:
// Use by derived classes to manage modules attached to the derived IOD
// Modules attached to the IOD.
	CObArray m_IodModules;
	void AddIodModule(CDcmModule& module);
	void RemoveIodModule(CDcmModule& module);
	void RemoveIodModule( CRuntimeClass* prt );
	void RemoveIodModules();
	CDcmModule* FindIodModule( CDcmModule& module );
	CDcmModule* FindIodModule( CRuntimeClass* prt );
//  
	void UpdateIodModule( CDcmModule& module, CDcmElementSet& dataset );
	void UpdateIodModule( CDcmModule& module );
	void UpdateIodModuleSet();
protected:
    CByteArray m_Prefix;
	int m_IodSyntax, m_DefaultIodSyntax;
	CString m_PathName;
	void AddSetExcludeEmpty( CDcmModule& module );
	void AddSetIncludeEmpty( CDcmModule& module );
protected:
	CDcmIODPrivate& IodPrivate() { return m_members; };
// The IOD dataset. Not accessible to users of the class
	CDcmElementSet& m_DicomDataSet;
private:
// Class to hide implementation details
// A cheap way to defeat AFX_EXT_CLASS
	CDcmIODPrivate& m_members;
};

#endif // !defined(AFX_SOPFILE_H__0ADA0B87_45E2_463F_BC36_B00A5432A909__INCLUDED_)
