// DcmContrastAdministrationRoute.h: interface for the CDcmContrastAdministrationRoute class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMCONTRASTADMINISTRATIONROUTE_H__C9211B57_3444_4F1B_BDA9_1A9ED57E6501__INCLUDED_)
#define AFX_DCMCONTRASTADMINISTRATIONROUTE_H__C9211B57_3444_4F1B_BDA9_1A9ED57E6501__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmCodeSequenceMacro.h"
class AFX_EXT_CLASS CDcmContrastAdministrationRouteSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmContrastAdministrationRouteSequence );
public:
	CDcmContrastAdministrationRouteSequence();
	virtual ~CDcmContrastAdministrationRouteSequence();
public:
	CDcmCodeSequenceMacroEx& Code();
	CDcmCodeSequenceMacroEx& AdditionalDrug();
private:
	CDcmCodeSequenceMacroEx m_ContrastAdministrationRoute_0018_0014;
	CDcmCodeSequenceMacroEx m_AdditionalDrug_0018_002A_3;
};

#endif // !defined(AFX_DCMCONTRASTADMINISTRATIONROUTE_H__C9211B57_3444_4F1B_BDA9_1A9ED57E6501__INCLUDED_)
