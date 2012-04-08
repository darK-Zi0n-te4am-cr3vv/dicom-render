// DcmPrimaryLanguageSequence.h: interface for the CDcmPrimaryLanguageSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMPRIMARYLANGUAGESEQUENCE_H__A468D116_0077_4550_9D48_B5CC29AE5F37__INCLUDED_)
#define AFX_DCMPRIMARYLANGUAGESEQUENCE_H__A468D116_0077_4550_9D48_B5CC29AE5F37__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmCodeSequenceMacro.h"
class AFX_EXT_CLASS CDcmPrimaryLanguageSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmPrimaryLanguageSequence );
public:
	CDcmPrimaryLanguageSequence();
	virtual ~CDcmPrimaryLanguageSequence();
public:
	CDcmCodeSequenceMacroEx& Modifier( );
	CDcmCodeSequenceMacroEx& Code();
private:
	CDcmCodeSequenceMacroEx m_LanguageModifier_0010_0102;
	CDcmCodeSequenceMacroEx m_PrimaryLanguage_0010_0101;

};

#endif // !defined(AFX_DCMPRIMARYLANGUAGESEQUENCE_H__A468D116_0077_4550_9D48_B5CC29AE5F37__INCLUDED_)
