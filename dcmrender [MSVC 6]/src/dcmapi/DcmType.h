// DcmType.h: interface for the CDcmRegistry class.
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

#if !defined(AFX_DCMTYPE_H__5874D1D3_8B32_4A4F_A9D4_BEAAF2B10F0E__INCLUDED_)
#define AFX_DCMTYPE_H__5874D1D3_8B32_4A4F_A9D4_BEAAF2B10F0E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CDcmEntry;
class CDcmType;
enum dcm_type;

#undef  AFX_DATA
#define AFX_DATA AFX_EXT_CLASS
class CDcmRegistryPrivate; 
class CDcmRegistry : public CObject  
{

public: 
	DECLARE_SERIAL( CDcmRegistry );
public: 
	AFX_EXT_CLASS CDcmRegistry();
	AFX_EXT_CLASS virtual ~CDcmRegistry();
public:
	static enum PhotoMetric
	{
		DcmPhotoNone = -1, DcmMono_1 = 0, DcmMono_2 = 1, DcmPalleteColor = 2, DcmRgb = 3,
		DcmYbrFull = 4, DcmYbrFull_422 = 5, DcmYbrPartial_422 = 6, DcmYbr_Ict = 7,
		DcmYbr_Rct = 8, DcmHsv = 9, DcmARgb = 10, DcmCMYK = 11
	};
	static enum Uid 
	{
		DcmUnDefinedUid = -1,
		DcmVerificationSOPClass = 0,
		ImplicitVRLittleEndian = 1,
		ExplicitVRLittleEndian = 2,
		DeflatedExplicitVRLittleEndian = 3,
		ExplicitVRBigEndian = 4,
		JPEG_Baseline_1_8 = 5,
		JPEG_ExtendedProcess_2_4  = 6,
		JPEG_Extended_3_5 = 7,
		JPEG_SNH_6_8 = 8,
		JPEG_SNH_7_9 = 9,
		JPEG_FNH_10_12 = 10,
		JPEG_FNH_11_13 = 11,
		JPEG_LNH_14 = 12,
		JPEG_LNH_15 = 13,
		JPEG_EH_16_18 = 14,
		JPEG_EH_17_19 = 15,
		JPEG_SSH_20_22 = 16,
		JPEG_SSH_21_23 = 17,
		JPEG_FPH_24_26 = 18,
		JPEG_FPH_25_27 = 19,
		JPEG_LH_28 = 20,
		JPEG_LH_29 = 21,
		JPEG_LNHFOP_14 = 22,
		JPEG_LSLIC = 23,
		JPEG_LSLNLIC = 24,
		JPEG_2000Lossless = 25,
		JPEG_2000 = 26,
		RLE_Lossless = 27,
		MediaStorageDirectoryStorage = 28,
		BasicStudyContentNotificationSOPClass = 29,
		StorageCommitmentPushModelSOPClass = 30
	};
public:
	AFX_EXT_CLASS  const CString& UidString( const int UidIndex );
	AFX_EXT_CLASS  int UidEnum( const CString& UidString );
public:
	AFX_EXT_CLASS  int PhotoMetricEnum (const CString& string );
	AFX_EXT_CLASS  const CString& PhotoMetricString (const int PhotoMetric );
	AFX_EXT_CLASS  int DictionarySize();
	AFX_EXT_CLASS  int UidDictionarySize();
public:
	const CDcmEntry* LookUpDictionary ( const int dcm_group, const int dcm_element ) const;
	AFX_EXT_CLASS const CDcmEntry* LookUpDictionary ( const CString& dcm_group, const CString& dcm_element ) const;
	AFX_EXT_CLASS void ExportPublicDictionary( CStringArray& Entrys );
	void  EmptyPrivateDictionary();
	void  EmptyParseDictionary();
	const CDcmEntry* InsertPrivateDictionary( const int dcm_group, const int dcm_element,
				const CString& ValueRepresentation, int ValueMultiplicity = 1 );  
	const CDcmEntry* InsertParseDictionary( const int dcm_group, const int dcm_element,
				const CString& ValueRepresentation, int ValueMultiplicity = 1 );  
	int StringToVrEnum ( const CString& ValueRepresentation );
	const CString& VrEnumToString( int ValueRepresentation ); 
	void UpdatePrivateDictionary();
private:

	const CDcmEntry* LookUpDictionary ( const CString& dcm_Group_Element ) const;
	int StringToVm( CString vm );
private:
	void InsertPublicDictionary( CString& Group_Hex, CString& Element_Hex, CString& Description, 
							CString& Represention, CString& Multiplicity  );
private:

	void SerializeDcmDictionaryEx( CArchive& ar );
	void SerializeDcmUidTable( CArchive& ar);
private:
	const CDcmEntry* LookUpPrivate ( const CString& dcm_Group_Element ) const;
	const CDcmEntry* LookUpPrivate ( const int dcm_group, const int dcm_element ) const;
private:
	const CDcmEntry* LookUpPublic ( const CString& dcm_Group_Element ) const;
	const CDcmEntry* LookUpPublic ( const int dcm_group, const int dcm_element ) const;
private:
	const CDcmEntry* LookUpParse ( const CString& dcm_Group_Element ) const;
	const CDcmEntry* LookUpParse ( const int dcm_group, const int dcm_element ) const;
private:
	void CreateDcmPublicDictionary();
	void CreateDcmUidDictionary();
	void CreateVrTable();
	void CreatePhotoMetricTable();
private:
	void DestroyPublicDictionary();
	void DestroyPrivateDictionary();
	void DestroyParseDictionary();
	void DestroyVrTable();
private:
	CDcmRegistryPrivate& m_members;
};

#undef  AFX_DATA
#define AFX_DATA


#endif // !defined(AFX_DCMTYPE_H__5874D1D3_8B32_4A4F_A9D4_BEAAF2B10F0E__INCLUDED_)
