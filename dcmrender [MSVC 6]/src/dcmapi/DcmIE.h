// DcmIE.h: interface for the CDcmIE class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMIE_H__AB99D800_7607_4275_AD5D_D4D9E46CFC8D__INCLUDED_)
#define AFX_DCMIE_H__AB99D800_7607_4275_AD5D_D4D9E46CFC8D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDcmCompositeIE;

#include "DcmModuleArray.h"
#include "DcmModule.h"
class AFX_EXT_CLASS CDcmIE : public CObject  
{
public:
	DECLARE_SERIAL( CDcmIE );
	CDcmIE();
	CDcmIE(CDcmCompositeIE* iod)
	{
		ASSERT ( m_iod != NULL );
		m_iod = iod; 	
	};
	virtual ~CDcmIE();
	CDcmIE( CDcmIE& ie );
public:
	CDcmIE& operator=( CDcmIE& ie );
	void EmptyIE()
	{
		m_IeModuleArray.EmptyModule();
	};
	void RemoveIE()
	{
		m_IeModuleArray.RemoveModule();
	};
	void DetachIE()
	{
		m_IeModuleArray.DetachModule();
	};	
	void AttachIE()
	{
		m_IeModuleArray.AttachModule();
	};	
protected:
	void AddIeModule(CDcmModule& module)
	{
		module.m_iod = (CDcmCompositeIOD*)m_iod;
		m_IeModuleArray.AddModule(module);
	};
	void RemoveIeModule( CRuntimeClass* prt )
	{
		m_IeModuleArray.RemoveModule( prt );
	};
	void RemoveIeModule(CDcmModule& module)
	{
		m_IeModuleArray.RemoveModule( module );
	};
	void RemoveIeModules()
	{
		m_IeModuleArray.RemoveAll();
	};
	CDcmModule* FindIeModule( CRuntimeClass* prt )
	{
		return m_IeModuleArray.FindModule( prt );
	};
	CDcmModule* FindIeModule( CDcmModule& module )
	{
		return m_IeModuleArray.FindModule( module );
	};

	CDcmCompositeIE* m_iod;
	CDcmModuleArray m_IeModuleArray;
};

#endif // !defined(AFX_DCMIE_H__AB99D800_7607_4275_AD5D_D4D9E46CFC8D__INCLUDED_)
