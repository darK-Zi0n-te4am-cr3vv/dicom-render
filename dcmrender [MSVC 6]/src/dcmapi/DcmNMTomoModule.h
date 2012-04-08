// DcmNMTomoModule.h: interface for the CDcmNMTomoModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMNMTOMOMODULE_H__C891456B_35A9_4C82_880B_31BDF9A00551__INCLUDED_)
#define AFX_DCMNMTOMOMODULE_H__C891456B_35A9_4C82_880B_31BDF9A00551__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmRotationInfoSequence.h"

class AFX_EXT_CLASS CDcmNMTomoModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmNMTomoModule );
public:
	CDcmNMTomoModule();
    CDcmNMTomoModule( CDcmNMTomoModule& module );
	virtual ~CDcmNMTomoModule();
public:
	CDcmNMTomoModule& operator=( CDcmNMTomoModule& module );
protected:
// Creates the module dataset
	virtual void InitializeModule();
public:
	CDcmRotationSequence& Rotation();
private:
	CDcmRotationSequence m_RotationInformation_0054_0052_2;
};
#endif // !defined(AFX_DCMNMTOMOMODULE_H__C891456B_35A9_4C82_880B_31BDF9A00551__INCLUDED_)
