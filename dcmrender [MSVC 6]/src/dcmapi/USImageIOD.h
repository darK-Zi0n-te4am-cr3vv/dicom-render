// USImageIOD.h: interface for the CUSImageIOD class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_USIMAGEIOD_H__49D0F51B_8DCA_4AD0_9B37_929164D0BC9C__INCLUDED_)
#define AFX_USIMAGEIOD_H__49D0F51B_8DCA_4AD0_9B37_929164D0BC9C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "UltraSoundIOD.h"

class AFX_EXT_CLASS CUSImageIOD : public CUltraSoundIOD  
{
public:
	DECLARE_SERIAL( CUSImageIOD );
public:
	CUSImageIOD( );
	CUSImageIOD( CUSImageIOD& iod );
	CUSImageIOD( CDcmCompositeIOD& iod );
	virtual ~CUSImageIOD();
public:
	CUSImageIOD& operator=( CDcmCompositeIOD& iod )
	{
		CUltraSoundIOD::operator =( iod );
		return *this;
	};
	CUSImageIOD& operator=( CUSImageIOD& iod )
	{
		if ( this == &iod ) return *this;
		m_imageIE = iod.m_imageIE;
		CUltraSoundIOD::operator=( iod );
		return *this;
	};
	bool operator==( CUSImageIOD& iod )
	{
		if ( this == &iod ) return true; 
		return 	m_imageIE == iod.m_imageIE
		&& CUltraSoundIOD::operator==( iod );
	};
	bool operator!=( CUSImageIOD& iod )
	{
		return !operator==( iod );
	};
	void Serialize( CArchive& ar )
	{
		CUltraSoundIOD::Serialize( ar );
	}

protected:
	virtual void InitializeIod()
	{
		CUltraSoundIOD::InitializeIod();
		m_imageIE.AttachIE();
	};
public:
	class image_ie_us m_imageIE;

};

#endif // !defined(AFX_USIMAGEIOD_H__49D0F51B_8DCA_4AD0_9B37_929164D0BC9C__INCLUDED_)
