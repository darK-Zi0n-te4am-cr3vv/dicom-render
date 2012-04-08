// DcmCalibrationDataSequence.h: interface for the CDcmCalibrationDataSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMCALIBRATIONDATASEQUENCE_H__8C58D258_5DD9_41E0_B107_37AF05A03620__INCLUDED_)
#define AFX_DCMCALIBRATIONDATASEQUENCE_H__8C58D258_5DD9_41E0_B107_37AF05A03620__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"

class AFX_EXT_CLASS  CDcmCalibrationDataSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmCalibrationDataSequence );
public:
	CDcmCalibrationDataSequence();
	CDcmCalibrationDataSequence(CDcmCalibrationDataSequence& sequence);
	virtual ~CDcmCalibrationDataSequence();
public:
	CDcmCalibrationDataSequence& operator=( CDcmCalibrationDataSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
// The Item number in the Energy Window
// Information Sequence to which the
// following calibration data relates. The
// Items are numbered starting from 1.
// Required if a sequence Item is present.
	const unsigned short& EnergyWindowNumber();
	void EnergyWindowNumber(const unsigned short Tag_0054_0306_1C_US_VM_1 );
public:
// C.8.4.10.1.8 Syringe Counts
// Syringe Counts (0018,1045) is the pre-injection syringe acquisition count rate measured in
// counts/sec, corrected to the Acquisition Start Time (0008,0032) if necessary.
	CString& SyringeCounts();
	void SyringeCounts(const CString& Tag_0018_1045_3_IS_VM_1 );
public:
// C.8.4.10.1.9 Residual Syringe Counts
// Residual Syringe Counts (0054,0017) is the syringe acquisition count rate following patient
// injection, measured in counts/sec, corrected to the Acquisition Start Time (0008,0032) if
// necessary.
	CString& ResidualSyringeCounts();
	void ResidualSyringeCounts(const CString& Tag_0054_0017_3_IS_VM_1 );
};

#endif // !defined(AFX_DCMCALIBRATIONDATASEQUENCE_H__8C58D258_5DD9_41E0_B107_37AF05A03620__INCLUDED_)
