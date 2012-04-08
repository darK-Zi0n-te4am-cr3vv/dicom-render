// DcmSOPCommonModule.h: interface for the CDcmSOPCommonModule class.
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

#if !defined(AFX_DCMSOPCOMMONMODULE_H__89D6864F_FB55_4312_A241_2B0DDDF1F97A__INCLUDED_)
#define AFX_DCMSOPCOMMONMODULE_H__89D6864F_FB55_4312_A241_2B0DDDF1F97A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmContributingEquipmentEx.h"
#include "DcmEncryptedAttributesEx.h"
#include "DcmDigitalSignatureEx.h"
#include "DcmMACParametersEx.h"
#include "DcmCodingSchemeIdentificationSequence.h"

class AFX_EXT_CLASS CDcmSOPCommonModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmSOPCommonModule );

public:
	CDcmSOPCommonModule();
	virtual ~CDcmSOPCommonModule();
public:
	CString& AuthEquipmentCertificationNumber();
	void AuthEquipmentCertificationNumber ( const CString& Tag_0100_0426_3_LO_VM_1 );
public:
	CString& SOPAuthorizationComment();
	void SOPAuthorizationComment ( const CString& Tag_0100_0424_3_LT_VM_1 );
public:
	CString& SOPAuthDateAndTime();
	void SOPAuthDateAndTime( const CString& Tag_0100_0420_3_DT_VM_1 );
public:
	CString& SOPInstanceStatus();
	void SOPInstanceStatus ( const CString& Tag_0100_0410_3_CS_VM_1);
public:
	CString& InstanceNumber();
	void InstanceNumber ( const CString& Tag_0020_0013_3_IS_VM_1 );
public:
	CString& OffsetFromUTC();
	void OffsetFromUTC( const CString& Tag_0008_0201_3_SH_VM_1 );
public:
	CString& InstanceCreatorUID();
	void InstanceCreatorUID ( const CString& Tag_0008_0014_3_UI_VM_1 );
public:
	CString& InstanceCreationTime();
	void InstanceCreationTime ( const CString& Tag_0008_0013_3_TM_VM_1 );
public:
	CString& InstanceCreationDate();
	void InstanceCreationDate ( const CString& Tag_0008_0012_3_DA_VM_1 );
public:
	CStringArray& SpecificCharacterSet();
	void SpecificCharacterSet( const CStringArray& Tag_0008_0005_1C_CS_VM_1N );
public:
	CString& SOPInstanceUID();
	void SOPInstanceUID( const CString& Tag_0008_0018_UI_VM_1 );
public:
	CString& SOPClassUID();
	void SOPClassUID( const CString& Tag_0008_0016_UI_VM_1 );
public:
    CDcmEncryptedAttributesSequence& EncryptedAttributes();
	CDcmContributingEquipmentSequence& ContributingEquipment();
	CDcmMACParameterSequence& MACParameters();
	CDcmDigitalSignatureSequence& DigitalSignatures();
	CDcmCodingSchemeIdSequence& CodingScheme();	  
private:
	CDcmContributingEquipmentSequence m_ContributingEquipmentSequence_0018_A001_3_SQ;
	CDcmEncryptedAttributesSequence   m_EncryptedAttributesSequence_0400_0500_1C_SQ;
	CDcmMACParameterSequence m_MACParametersSequence_4FFE_0001_3_SQ;
	CDcmDigitalSignatureSequence   m_DigitalSignaturesSequence_FFFA_FFFA_3_SQ;
	CDcmCodingSchemeIdSequence m_CodingSchemeIdentification_0008_0110_3_SQ;
};


#endif // !defined(AFX_DCMSOPCOMMONMODULE_H__89D6864F_FB55_4312_A241_2B0DDDF1F97A__INCLUDED_)
