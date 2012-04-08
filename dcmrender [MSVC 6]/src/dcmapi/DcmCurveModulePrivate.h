// DcmCurveModulePrivate.h: interface for the CDcmCurveModulePrivate class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMCURVEMODULEPRIVATE_H__EA075850_37D7_4513_84BA_0039C5A563FF__INCLUDED_)
#define AFX_DCMCURVEMODULEPRIVATE_H__EA075850_37D7_4513_84BA_0039C5A563FF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
class CDcmCurveModule;
class CDcmCurveModulePrivate : public CObject  
{
	friend CDcmCurveModule;
public:
	DECLARE_SERIAL( CDcmCurveModulePrivate );
public:
	CDcmCurveModulePrivate();
	virtual ~CDcmCurveModulePrivate();
private:
	void CreateDataSet ( CDcmCurveModule& module );
	CString m_Group;
};

#endif // !defined(AFX_DCMCURVEMODULEPRIVATE_H__EA075850_37D7_4513_84BA_0039C5A563FF__INCLUDED_)
