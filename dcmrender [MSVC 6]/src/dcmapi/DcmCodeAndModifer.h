// DcmCodeAndModifer.h: interface for the CDcmCodeAndModifer class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMCODEANDMODIFER_H__93AAF737_53DA_4456_AF37_82D44E02D122__INCLUDED_)
#define AFX_DCMCODEANDMODIFER_H__93AAF737_53DA_4456_AF37_82D44E02D122__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmCodeSequenceMacro.h"

class AFX_EXT_CLASS CDcmCodeAndModifer : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmCodeAndModifer );
public:
	CDcmCodeAndModifer(const CString Group_Hex, const CString Element_Hex);
	CDcmCodeAndModifer(CDcmCodeAndModifer& sequence);
	virtual ~CDcmCodeAndModifer();
public:
	CDcmCodeAndModifer& operator=( CDcmCodeAndModifer& sequence );
protected:
// Destroys and creates the module dataset
	virtual void InitializeSequence();
public:
	CDcmCodeSequenceMacroEx& Code();
	CDcmCodeSequenceMacroEx& Modifier();
protected:
	CDcmCodeAndModifer();
private:
	CDcmCodeSequenceMacroEx m_Code, m_Modifier;
	CString m_Group, m_Element;
};

#endif // !defined(AFX_DCMCODEANDMODIFER_H__93AAF737_53DA_4456_AF37_82D44E02D122__INCLUDED_)
