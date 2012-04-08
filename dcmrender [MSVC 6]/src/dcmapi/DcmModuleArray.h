// DcmModuleArray.h: interface for the CDcmModuleArray class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMMODULEARRAY_H__26DDB47B_0854_499B_8037_8C7CE909ACDE__INCLUDED_)
#define AFX_DCMMODULEARRAY_H__26DDB47B_0854_499B_8037_8C7CE909ACDE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
class CDcmModule;
class CDcmModuleArray : public CObArray  
{
public:
	CDcmModuleArray();
	virtual ~CDcmModuleArray();
public:
	void AddModule(CDcmModule& module);
	void RemoveModule( CRuntimeClass* prt );
	void RemoveModule(CDcmModule& module);
	CDcmModule* FindModule( CRuntimeClass* prt );
	CDcmModule* FindModule( CDcmModule& module );
	void EmptyModule();
	void RemoveModule();
	void DetachModule();
	void AttachModule();
};

#endif // !defined(AFX_DCMMODULEARRAY_H__26DDB47B_0854_499B_8037_8C7CE909ACDE__INCLUDED_)
