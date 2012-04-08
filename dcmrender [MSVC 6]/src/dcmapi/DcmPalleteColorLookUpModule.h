// DcmPalleteColorLookUpModule.h: interface for the CDcmPalleteColorLookUpModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMPALLETECOLORLOOKUPMODULE_H__9FC7FFF0_A2F4_4B7E_B0D3_854F9DCA7FC2__INCLUDED_)
#define AFX_DCMPALLETECOLORLOOKUPMODULE_H__9FC7FFF0_A2F4_4B7E_B0D3_854F9DCA7FC2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmPalleteColorLookUpModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmPalleteColorLookUpModule );
public:
	CDcmPalleteColorLookUpModule();
	virtual ~CDcmPalleteColorLookUpModule();
public:	
	CWordArray& RedPaletteDescriptor ();
	void RedPaletteDescriptor ( const CWordArray& Tag_0028_1101_1C_US_VM_3 );
public:	
	CWordArray& GreenPaletteDescriptor ();
	void GreenPaletteDescriptor ( const CWordArray& Tag_0028_1102_1C_US_VM_3 );
public:	
	CWordArray& BluePaletteDescriptor ();
	void BluePaletteDescriptor ( const CWordArray& Tag_0028_1103_1C_US_VM_3 );
public:	
	CString& PaletteUID ();
	void PaletteUID ( const CString& Tag_0028_1199_3_UI_VM_1 );
public:	
	CWordArray& RedPaletteData ();
	void RedPaletteData ( const CWordArray& Tag_0028_1201_1C_OW_VM_1 );
public:	
	CWordArray& GreenPaletteData ();
	void GreenPaletteData ( const CWordArray& Tag_0028_1202_1C_OW_VM_1 );
public:	
	CWordArray& BlueTableData ();
	void BluePaletteData ( const CWordArray& Tag_0028_1203_1C_OW_VM_1 );
public:	
	CWordArray& SegmentedRedPaletteData ();
	void SegmentedRedPaletteData ( const CWordArray& Tag_0028_1221_1C_OW_VM_1 );
public:	
	CWordArray& SegmentedGreenPaletteData ();
	void SegmentedGreenPaletteData ( const CWordArray& Tag_0028_1222_1C_OW_VM_1 );
public:	
	CWordArray& SegmentedBluePaletteData ();
	void SegmentedBluePaletteData ( const CWordArray& Tag_0028_1223_1C_OW_VM_1 );


};
#endif // !defined(AFX_DCMPALLETECOLORLOOKUPMODULE_H__9FC7FFF0_A2F4_4B7E_B0D3_854F9DCA7FC2__INCLUDED_)
