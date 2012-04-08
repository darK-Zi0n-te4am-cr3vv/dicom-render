// DcmNormalizedIOD.h: interface for the CDcmNormalizedIOD class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMNORMALIZEDIOD_H__1270F83B_2CD5_403C_9BEB_BFF09449CAEE__INCLUDED_)
#define AFX_DCMNORMALIZEDIOD_H__1270F83B_2CD5_403C_9BEB_BFF09449CAEE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "SopFile.h"
class CDcmModule;
#include "DcmSOPCommonModule.h"
#include "DcmMetaFileInformation.h"
class AFX_EXT_CLASS CDcmNormalizedIOD : public CDcmIOD  
{
public:
	DECLARE_SERIAL( CDcmNormalizedIOD );
public:
	CDcmNormalizedIOD();
	virtual ~CDcmNormalizedIOD();
public:
	void Serialize( CArchive& ar );
	CDcmNormalizedIOD& operator>>( CDcmModule& module );
	CDcmNormalizedIOD& operator<<( CDcmModule& module );
	bool operator==( CDcmNormalizedIOD& iod );
	bool operator!=( CDcmNormalizedIOD& iod );
	CDcmNormalizedIOD& operator=( CDcmNormalizedIOD& iod );
public:
	CDcmSOPCommonModule m_SopCommon;
	CDcmMetaFileInformation m_MetaFile;
};

#endif // !defined(AFX_DCMNORMALIZEDIOD_H__1270F83B_2CD5_403C_9BEB_BFF09449CAEE__INCLUDED_)
