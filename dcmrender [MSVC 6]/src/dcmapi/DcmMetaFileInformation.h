// DcmMetaFileInformation.h: interface for the CDcmMetaFileInformation class.
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

#if !defined(AFX_DCMMETAFILEINFORMATION_H__2A3D34FF_EFC0_496C_B6B2_5ADB254A79B8__INCLUDED_)
#define AFX_DCMMETAFILEINFORMATION_H__2A3D34FF_EFC0_496C_B6B2_5ADB254A79B8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmMetaFileInformation : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmMetaFileInformation );
public:
	CDcmMetaFileInformation();
// The File Meta Information includes identifying information on the encapsulated Data Set. This header
// consists of a 128 byte File Preamble, followed by a 4 byte DICOM prefix, followed by the File Meta
// Elements shown in Table 7.1-1. This header shall be present in every DICOM file.
// The File Preamble is available for use as defined by Application Profiles or specific implementations.
// This Part of the DICOM Standard does not require any structure for this fixed size Preamble. It is not
// required to be structured as a DICOM Data Element with a Tag and a Length. It is intended to facilitate
// access to the images and other data in the DICOM file by providing compatibility with a number of
// commonly used computer image file formats. Whether or not the File Preamble contains information, the
// DICOM File content shall conform to the requirements of this Part and the Data Set shall conform to the
// SOP Class specified in the File Meta Information.
	virtual ~CDcmMetaFileInformation();
	CDcmMetaFileInformation( CDcmMetaFileInformation& module );
public:
	CDcmMetaFileInformation& operator=( CDcmMetaFileInformation& module );
protected:
	virtual void InitializeModule();
public:
// This is a two byte field where each bit identifies a version
// this File Meta Information header. In version 1 the first byte
// value is 00H and the second value byte value is 01H.
// Implementations reading Files with Meta Information where
// this attribute has bit 0 (lsb) of the second byte set to 1 may
// interpret the File Meta Information as specified in this
// version of PS 3.10. All other bits shall not be checked.
	void MetaVersion (CByteArray& Tag_0002_0001_1_OB_VM_1 );
	CByteArray& MetaVersion ();
public:
// Uniquely identifies the SOP Class associated with the Data
// Set. SOP Class UIDs allowed for media storage are
// specified in PS 3.4 of the DICOM Standard - Media Storage
// Application Profiles.
	void MediaClassUID( const CString& Tag_0002_0002_1_UI_VM_1 );
	CString& MediaClassUID();
public:
// Uniquely identifies the SOP Instance associated with the
// Data Set placed in the file and following the File Meta
// Information.
	void MediaInstanceUID( const CString& Tag_0002_0003_1_UI_VM_1 );
	CString& MediaInstanceUID();
public:
// Uniquely identifies the Transfer Syntax used to encode the
// following Data Set. This Transfer Syntax does not apply to
// the File Meta Information.
	void TransferSyntaxUID( const CString& Tag_0002_0010_1_UI_VM_1 );
	CString& TransferSyntaxUID( );
public:
// Uniquely identifies the implementation which wrote this file
// and its content. It provides an unambiguous identification
// of the type of implementation which last wrote the file in the
// event of interchange problems. It follows the same policies
// as defined by PS 3.7 of the DICOM Standard (association
// negotiation).
	void ImplementationClassUID( const CString& Tag_0002_0012_1_UI_VM_1 );
	CString& ImplementationClassUID ( );
public:
// Identifies a version for an Implementation Class UID
// (0002,0012) using up to 16 characters of the repertoire
// identified in Section 8.5. It follows the same policies as
// defined by PS 3.7 of the DICOM Standard (association
// negotiation).
	void ImplementationVersionName( const CString& Tag_0002_0013_1_SH_VM_1 );
	CString& ImplementationVersionName( );
public:
// The DICOM Application Entity (AE) Title of the AE which
// wrote this file's content (or last updated it). If used, it allows
// the tracing of the source of errors in the event of media
// interchange problems. The policies associated with AE
// Titles are the same as those defined in PS 3.8 of the
// DICOM Standard.
	void SourceApplicationEntity( const CString& Tag_0002_0016_1_AE_VM_1 );
	CString& SourceApplicationEntity();
public:
//The UID of the creator of the private information
//(0002,0102).
	void PrivateCreatorUID( const CString& Tag_0002_0100_3_UI_VM_1 );
	CString& PrivateCreatorUID();
public:
// Contains Private Information placed in the File Meta
// Information. The creator shall be identified in (0002,0100).
// Required if Private Information Creator UID (0002,0100) is
// present.
	void PrivateInformation( const CByteArray& Tag_0002_0102_1C_OB_VM_1 );
	const CByteArray& PrivateInformation();
};

#endif // !defined(AFX_DCMMETAFILEINFORMATION_H__2A3D34FF_EFC0_496C_B6B2_5ADB254A79B8__INCLUDED_)
