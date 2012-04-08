// DcmTherapyModule.h: interface for the CDcmTherapyModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMTHERAPYMODULE_H__14DFD158_1BB9_4AFA_91AC_4A2F9EE559A8__INCLUDED_)
#define AFX_DCMTHERAPYMODULE_H__14DFD158_1BB9_4AFA_91AC_4A2F9EE559A8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmTherapySequence.h"
class AFX_EXT_CLASS CDcmTherapyModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmTherapyModule );
public:
	CDcmTherapyModule();
	virtual ~CDcmTherapyModule();
	CDcmTherapySequence& InterventionalTherapy();
private:
	CDcmTherapySequence m_InterventionalTherapy_0018_0036_3;
};

#endif // !defined(AFX_DCMTHERAPYMODULE_H__14DFD158_1BB9_4AFA_91AC_4A2F9EE559A8__INCLUDED_)
