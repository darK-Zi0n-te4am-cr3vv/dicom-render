// DcmCurveModule.h: interface for the CDcmCurveModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMCURVEMODULE_H__7076E639_4B4D_4F3E_9196_B637D94C7167__INCLUDED_)
#define AFX_DCMCURVEMODULE_H__7076E639_4B4D_4F3E_9196_B637D94C7167__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "ReferencedOverLaySequence.h"

class AFX_EXT_CLASS CDcmCurveModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmCurveModule );
public:
	CDcmCurveModule();
	CDcmCurveModule(const CString& Group_Hex);
	CDcmCurveModule( CDcmCurveModule& module );
	virtual ~CDcmCurveModule();
	CDcmCurveModule& operator=( CDcmCurveModule& module );
protected:
	virtual void InitializeModule();
public:
	const unsigned short& CurveDimensions( );
	void CurveDimensions(const unsigned short Tag_50xx_0005_1_US_VM_1 );
public:
	const unsigned short& NumberOfPoints( );
	void NumberOfPoints(const unsigned short Tag_50xx_0010_1_US_VM_1 );
public:
	CString& TypeOfData( );
	void TypeOfData(const CString& Tag_50xx_0020_1_CS_VM_1 );
public:
	const unsigned short& DataValueRepresentation( );
	void DataValueRepresentation(const unsigned short Tag_50xx_0103_1_US_VM_1 );
public:
	CByteArray& CurveData( );
	void CurveData(const CByteArray& Tag_50xx_3000_1_OBOW_VM_1 );
public:
	CString& CurveDescription( );
	void CurveDescription(const CString& Tag_50xx_0022_3_LO_VM_1 );
public:
	CStringArray& AxisUnits( );
	void AxisUnits(const CStringArray& Tag_50xx_0030_3_SH_VM_1N );
public:
	CStringArray& AxisLabels( );
	void AxisLabels(const CStringArray& Tag_50xx_0040_3_SH_VM_1N );
public:
	CWordArray& MinimumCoordinateValue ( );
	void MinimumCoordinateValue(const CWordArray& Tag_50xx_0104_3_US_VM_1N );
public:
	CWordArray& MaximumCoordinateValue ( );
	void MaximumCoordinateValue(const CWordArray& Tag_50xx_0105_3_US_VM_1N );
public:
	CStringArray& CurveRange ( );
	void CurveRange(const CStringArray& Tag_50xx_0106_3_SH_VM_1N );
public:
	CWordArray& CurveDataDescriptor ( );
	void CurveDataDescriptor(const CWordArray& Tag_50xx_0110_1C_US_VM_1N );
public:
	CWordArray& CoordinateStartValue ( );
	void CoordinateStartValue(const CWordArray& Tag_50xx_0112_1C_US_VM_1N );
public:
	CWordArray& CoordinateStepValue ( );
	void CoordinateStepValue(const CWordArray& Tag_50xx_0114_1C_US_VM_1N );
public:
	CString& CurveLabel( );
	void CurveLabel(const CString& Tag_50xx_2500_3_LO_VM_1 );
public:
	CReferencedOverLaySequence& ReferencedOverlay(  );
public:
	CString m_Group;
private:
	CReferencedOverLaySequence m_ReferencedOverlay_50xx_2600_3;
};

#endif // !defined(AFX_DCMCURVEMODULE_H__7076E639_4B4D_4F3E_9196_B637D94C7167__INCLUDED_)
