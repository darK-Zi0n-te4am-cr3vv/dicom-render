// DicomTag.h: interface for the CDicomTag class.
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

#if !defined(AFX_DICOMTAG_H__FBA58713_EC64_420D_8734_FC1748F8BD53__INCLUDED_)
#define AFX_DICOMTAG_H__FBA58713_EC64_420D_8734_FC1748F8BD53__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class AFX_EXT_CLASS CDmElement 
{
public:
	CDmElement( bool Read = true );
	virtual ~CDmElement();
public:
	static enum 
	{
		dcm_ae, dcm_as, dcm_at, dcm_cs, dcm_da, dcm_ds,
		dcm_dt, dcm_fl, dcm_fd, dcm_is, dcm_lo, dcm_lt,
		dcm_ob, dcm_of, dcm_ow, dcm_pn,	dcm_sh, dcm_sl,
		dcm_sq, dcm_ss, dcm_st, dcm_tm, dcm_ui, dcm_ul, 
		dcm_un, dcm_us, dcm_ut
	};
	bool IsEqualVr( const int ValueRepresentation );
	bool IsEqualGroup( const int Group );
	bool IsEqualElement( const int Element );
	bool IsEqualGroupElement( const int Group, const int Element );

	CDmElement& operator=( const CDmElement& tag );
	bool m_Encoded, m_ReadValueField;
	CByteArray m_ValueField;
	int m_Group, m_Element, m_ValueRepresentation, m_ValueMultiplicity;
	CString m_Description, m_vr_string;

};

#endif // !defined(AFX_DICOMTAG_H__FBA58713_EC64_420D_8734_FC1748F8BD53__INCLUDED_)
