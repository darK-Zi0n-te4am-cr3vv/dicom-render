// DcmUserData.h: interface for the CDcmUserData class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMUSERDATA_H__C64CEB89_9A1D_455F_AB7C_06572360C8C8__INCLUDED_)
#define AFX_DCMUSERDATA_H__C64CEB89_9A1D_455F_AB7C_06572360C8C8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class AFX_EXT_CLASS CDcmUserData : public CObject  
{
public:
	DECLARE_SERIAL( CDcmUserData );
public:
	CDcmUserData();
	CDcmUserData( CDcmUserData& src );
	CDcmUserData& operator=( CDcmUserData& src );
	virtual ~CDcmUserData();
public:
	int m_ItemType;
	CByteArray m_UserData;
};

#endif // !defined(AFX_DCMUSERDATA_H__C64CEB89_9A1D_455F_AB7C_06572360C8C8__INCLUDED_)
