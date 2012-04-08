// DcmNMPhaseModule.h: interface for the CDcmNMPhaseModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMNMPHASEMODULE_H__D6CCA3F2_F73B_4C96_934E_8F4A20DE62F6__INCLUDED_)
#define AFX_DCMNMPHASEMODULE_H__D6CCA3F2_F73B_4C96_934E_8F4A20DE62F6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmPhaseInformationSequence.h"

class AFX_EXT_CLASS CDcmNMPhaseModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmNMPhaseModule );
public:
	CDcmNMPhaseModule();
    CDcmNMPhaseModule( CDcmNMPhaseModule& module );
	virtual ~CDcmNMPhaseModule();
public:
	CDcmNMPhaseModule& operator=( CDcmNMPhaseModule& module );
protected:
// Creates the module dataset
	virtual void InitializeModule();
public:
	CDcmPhaseSequence& PhaseInformation();
private:
	CDcmPhaseSequence m_PhaseInformation_0054_0032_2C;
};

#endif // !defined(AFX_DCMNMPHASEMODULE_H__D6CCA3F2_F73B_4C96_934E_8F4A20DE62F6__INCLUDED_)
// Phase Information Sequence (0054,0032) 2C