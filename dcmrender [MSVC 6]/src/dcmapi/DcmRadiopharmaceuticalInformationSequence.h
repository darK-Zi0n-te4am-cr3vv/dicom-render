// DcmRadiopharmaceuticalInformationSequence.h: interface for the CDcmRadiopharmaceuticalInformationSequence class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMRADIOPHARMACEUTICALINFORMATIONSEQUENCE_H__1307B77D_CE0B_4D9E_BF57_785EEC9BA9E1__INCLUDED_)
#define AFX_DCMRADIOPHARMACEUTICALINFORMATIONSEQUENCE_H__1307B77D_CE0B_4D9E_BF57_785EEC9BA9E1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmSequence.h"
#include "DcmCodeSequenceMacro.h"
#include "DcmCalibrationDataSequence.h"

class AFX_EXT_CLASS CDcmRadioPharmaceuticalSequence : public CDcmSequence  
{
public:
	DECLARE_SERIAL( CDcmRadioPharmaceuticalSequence );
public:
	CDcmRadioPharmaceuticalSequence();
	CDcmRadioPharmaceuticalSequence(CDcmRadioPharmaceuticalSequence& sequence);
	virtual ~CDcmRadioPharmaceuticalSequence();
public:
	CDcmRadioPharmaceuticalSequence& operator=( CDcmRadioPharmaceuticalSequence& sequence );
protected:
// Constructs sequence dataset
	virtual void InitializeSequence();
public:
// Route of injection.
	CString& Route();
	void Route(const CString& Tag_0018_1070_3_LO_VM_1 );
public:
// Volume of injection in cubic cm.
	CString& Volume();
	void Volume(const CString& Tag_0018_1071_3_DS_VM_1 );
public:
// C.8.4.10.1.5 Radiopharmaceutical Start Time
// Radiopharmaceutical Start Time (0018,1072) is the actual time of radiopharmaceutical
// administration to the patient for imaging purposes, using the same time base as for the
// Acquisition Start Time (0008,0032).
	CString& StartTime();
	void StartTime(const CString& Tag_0018_1072_3_TM_VM_1 );
public:
// C.8.4.10.1.6 Radiopharmaceutical Stop Time
// Radiopharmaceutical Stop Time (0018,1073) is the actual ending time of radiopharmaceutical
// administration to the patient for imaging purposes, using the same time base as for the
// Acquisition Start Time (0008,0032).
	CString& StopTime();
	void StopTime(const CString& Tag_0018_1073_3_TM_VM_1 );
public:
// C.8.4.10.1.7 Radionuclide Total Dose
// Radionuclide Total Dose (0018,1074) is the radiopharmaceutical dose administered to the patient
// measured in MegaBecquerels (Mbq) at the Radiopharmaceutical Start Time.
	CString& TotalDose();
	void TotalDose(const CString& Tag_0018_1074_3_DS_VM_1 );
public:
// Name of the radiopharmaceutical.
	CString& RadiopharmaceuticalName();
	void RadiopharmaceuticalName(const CString& Tag_0018_0031_3_LO_VM_1 );
public:
// Sequence that identifies the radionuclide.
// This sequence shall contain exactly one
// item. Required if a sequence Item is
// present.
	CDcmCodeSequenceMacroEx& Radionuclide();
//Sequence that identifies the administration
// route for the radiopharmaceutical. This
// sequence shall contain exactly one item.
	CDcmCodeSequenceMacroEx& AdministrationRoute();
// Sequence of Repeating Items that
// describe isotope information. One or more
// Items may be included in this sequence.
	CDcmCodeSequenceMacroEx& Radiopharmaceutical();
// Sequence that contains calibration data.
	CDcmCalibrationDataSequence& CalibrationData();
private:
	CDcmCodeSequenceMacroEx m_RadionuclideCode_0054_0300_2C,
		m_AdministrationRouteCode_0054_0302_3, m_RadiopharmaceuticalCode_0054_0304_3;
	CDcmCalibrationDataSequence m_CalibrationData_0054_0306_3;
};

#endif // !defined(AFX_DCMRADIOPHARMACEUTICALINFORMATIONSEQUENCE_H__1307B77D_CE0B_4D9E_BF57_785EEC9BA9E1__INCLUDED_)
