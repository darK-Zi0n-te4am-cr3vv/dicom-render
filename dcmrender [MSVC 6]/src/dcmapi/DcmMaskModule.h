// DcmMaskModule.h: interface for the CDcmMaskModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMMASKMODULE_H__477FCD3E_5DF6_4C57_B8F4_AF525B09CAB0__INCLUDED_)
#define AFX_DCMMASKMODULE_H__477FCD3E_5DF6_4C57_B8F4_AF525B09CAB0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmMaskSubtractionSequence.h"

class AFX_EXT_CLASS CDcmMaskModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmMaskModule );
public:
	CDcmMaskModule();
	virtual ~CDcmMaskModule();
public:	
	CString& RecommendedViewingMode();
	void RecommendedViewingMode(const CString& Tag_0028_1090_2_CS_VM_1);
public:
	CDcmMaskSubtractionSequence& MaskSubtraction();
private:
	CDcmMaskSubtractionSequence m_MaskSubtraction_0028_6100_1;
};

#endif // !defined(AFX_DCMMASKMODULE_H__477FCD3E_5DF6_4C57_B8F4_AF525B09CAB0__INCLUDED_)
