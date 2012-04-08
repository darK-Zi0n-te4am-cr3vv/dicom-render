// PresentationDataValue.h: interface for the CPresentationDataValue class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PRESENTATIONDATAVALUE_H__115E892A_4A1B_42FC_B355_51D6266FD200__INCLUDED_)
#define AFX_PRESENTATIONDATAVALUE_H__115E892A_4A1B_42FC_B355_51D6266FD200__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class AFX_EXT_CLASS CPresentationDataValue : public CObject  
{
public:
	DECLARE_SERIAL( CPresentationDataValue );
public:
	CPresentationDataValue();
	CPresentationDataValue( CPresentationDataValue& src );
	CPresentationDataValue& operator=( CPresentationDataValue& src );
	virtual ~CPresentationDataValue();
	int m_ContextID, m_ControlHeader;
	CByteArray m_Fragment;
};

#endif // !defined(AFX_PRESENTATIONDATAVALUE_H__115E892A_4A1B_42FC_B355_51D6266FD200__INCLUDED_)
