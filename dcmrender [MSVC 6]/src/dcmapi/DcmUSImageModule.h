// DcmUSImageModule.h: interface for the CDcmUSImageModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMUSIMAGEMODULE_H__69813E41_ADEC_4646_8997_C4CBC7229DE2__INCLUDED_)
#define AFX_DCMUSIMAGEMODULE_H__69813E41_ADEC_4646_8997_C4CBC7229DE2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmReferencedSOPSequence.h"
#include "DcmCodeSequenceMacro.h"
#include "DcmCodeAndModifer.h"

class AFX_EXT_CLASS CDcmUSImageModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmUSImageModule );
public:
	CDcmUSImageModule();
	virtual ~CDcmUSImageModule();
public:
	void SamplesPerPixel(const unsigned short Tag_0028_0002_1_US_VM_1 );
	const unsigned short& SamplesPerPixel();
public:
	void PhotometricInterpretation(const CString Tag_0028_0004_1_CS_VM_1 );
	CString& PhotometricInterpretation(  );
public:
	void BitsAllocated(const unsigned short Tag_0028_0100_1_US_VM_1 );
	const unsigned short& BitsAllocated();
public:
	void BitsStored(const unsigned short Tag_0028_0101_1_US_VM_1 );
	const unsigned short& BitsStored();
public:
	void HighBit(const unsigned short Tag_0028_0102_1_US_VM_1 );
	const unsigned short& HighBit();
public:
	void PlanarConfiguration(const unsigned short Tag_0028_0006_1C_US_VM_1 );
	const unsigned short& PlanarConfiguration();
public:
	void PixelRepresentation(const unsigned short Tag_0028_0103_1_US_VM_1 );
	const unsigned short& PixelRepresentation();
public:
	void FrameIncrementPointer(const CWordArray& Tag_0028_0009_1_AT_VM_1N );
	CWordArray& FrameIncrementPointer();
public:
	void ImageType(const CString Tag_0008_0008_2_CS_VM_1N );
	CString& ImageType(  );
public:
	void LossyImageCompression(const CString Tag_0028_2110_1C_CS_VM_1 );
	CString& LossyImageCompression(  );
public:
	void NumberOfStages(const CString Tag_0008_2124_2C_IS_VM_1 );
	CString& NumberOfStages(  );
public:
	void NumberOfViewsInStage(const CString Tag_0008_212A_2C_IS_VM_1 );
	CString& NumberOfViewsInStage(  );
public:
	void UltraSoundColorDataPresent (const unsigned short Tag_0028_0014_3_US_VM_1 );
	const unsigned short& UltraSoundColorDataPresent(  );
public:
	void StageName (const CString& Tag_0008_2120_3_SH_VM_1 );
	CString& StageName(  );
public:
	void StageNumber (const CString& Tag_0008_2122_3_IS_VM_1 );
	CString& StageNumber(  );
public:
	void ViewName (const CString& Tag_0008_2127_3_SH_VM_1 );
	CString& ViewName(  );
public:
	void ViewNumber (const CString& Tag_0008_2128_3_IS_VM_1 );
	CString& ViewNumber(  );
public:
	void NumberOfEventTimers (const CString& Tag_0008_2129_3_IS_VM_1 );
	CString& NumberOfEventTimers(  );
public:
	void EventElapsedTimes (const CStringArray& Tag_0008_2130_3_DS_VM_1N );
	CStringArray& EventElapsedTimes(  );
public:
	void EventTimerNames (const CStringArray& Tag_0008_2132_3_LO_VM_1N );
	CStringArray& EventTimerNames(  );
public:
	void AcquisitionDateTime (const CString& Tag_0008_002A_1C_DT_VM_1 );
	CString& AcquisitionDateTime(  );
public:
	void TriggerTime (const CString& Tag_0018_1060_3_DS_VM_1 );
	CString& TriggerTime(  );
public:
	void NominalInterval (const CString& Tag_0018_1062_3_IS_VM_1 );
	CString& NominalInterval(  );
public:
	void BeatRejectionFlag (const CString& Tag_0018_1080_3_CS_VM_1 );
	CString& BeatRejectionFlag(  );
public:
	void LowRRValue (const CString& Tag_0018_1081_3_IS_VM_1 );
	CString& LowRRValue(  );
public:
	void HighRRValue (const CString& Tag_0018_1082_3_IS_VM_1 );
	CString& HighRRValue(  );
public:
	void HeartRate (const CString& Tag_0018_1088_3_IS_VM_1 );
	CString& HeartRate(  );
public:
	void IVUSAcquisition (const CString& Tag_0018_3100_1C_CS_VM_1 );
	CString& IVUSAcquisition(  );
public:
	void IVUSPullBackRate (const CString& Tag_0018_3101_1C_DS_VM_1 );
	CString& IVUSPullBackRate(  );
public:
	void IVUSGatedRate (const CString& Tag_0018_3102_1C_DS_VM_1 );
	CString& IVUSGatedRate(  );
public:
	void IVUSPullBackStartFrameNumber (const CString& Tag_0018_3103_1C_IS_VM_1 );
	CString& IVUSPullBackStartFrameNumber(  );
public:
	void IVUSPullBackStopFrameNumber (const CString& Tag_0018_3104_1C_IS_VM_1 );
	CString& IVUSPullBackStopFrameNumber(  );
public:
	void LesionNumber (const CStringArray& Tag_0018_3105_3_IS_VM_1N );
	CStringArray& LesionNumber(  );
public:
	void OutputPower (const CStringArray& Tag_0018_5000_3_SH_VM_1N );
	CStringArray& OutputPower(  );
public:
	void TransducerData (const CStringArray& Tag_0018_5010_3_LO_VM_3 );
	CStringArray& TransducerData(  );
public:
	void TransducerType (const CString& Tag_0018_6031_3_CS_VM_1 );
	CString& TransducerType(  );
public:
	void FocusDepth (const CString& Tag_0018_5012_3_DS_VM_1 );
	CString& FocusDepth(  );
public:
	void PreprocessingFunction (const CString& Tag_0018_5020_3_LO_VM_1 );
	CString& PreprocessingFunction(  );
public:
	void MechanicalIndex (const CString& Tag_0018_5022_3_DS_VM_1 );
	CString& MechanicalIndex(  );
public:
	void BoneThermalIndex  (const CString& Tag_0018_5024_3_DS_VM_1 );
	CString& BoneThermalIndex(  );
public:
	void CranialThermalIndex  (const CString& Tag_0018_5026_3_DS_VM_1 );
	CString& CranialThermalIndex(  );
public:
	void SoftTissueThermalIndex  (const CString& Tag_0018_5027_3_DS_VM_1 );
	CString& SoftTissueThermalIndex(  );
public:
	void SoftTissueFocusThermalIndex  (const CString& Tag_0018_5028_3_DS_VM_1 );
	CString& SoftTissueFocusThermalIndex(  );
public:
	void SoftTissueSurfaceThermalIndex  (const CString& Tag_0018_5029_3_DS_VM_1 );
	CString& SoftTissueSurfaceThermalIndex(  );
public:
	void DepthOfScanField (const CString& Tag_0018_5050_3_IS_VM_1 );
	CString& DepthOfScanField(  );
public:
	void ImageTransformationMatrix(const CStringArray& Tag_0018_5210_3_DS_VM_6 );
	CStringArray& ImageTransformationMatrix(  );
public:
	void ImageTranslationVector (const CStringArray& Tag_0018_5212_3_DS_VM_3 );
	CStringArray& ImageTranslationVector(  );
public:
	void OverlaySubtype (const CString& Tag_60xx_0045_3_LO_VM_1 );
	CString& OverlaySubtype(  );
public:
	CDcmSopSequence& ReferencedOverlay(  );
	CDcmSopSequence& ReferencedCurve(  );
	CDcmCodeSequenceMacroEx& StageCode(  );
	CDcmCodeAndModifer& AnatomicRegion(  );
	CDcmCodeAndModifer& PrimaryAnatomicStructure(  );
	CDcmCodeAndModifer& TransducerPosition(  );
	CDcmCodeAndModifer& TransducerOrientation(  );
private:
	CDcmSopSequence m_ReferencedOverlay_0008_1130_3;
	CDcmSopSequence m_ReferencedCurve_0008_1145_3;
	CDcmCodeSequenceMacroEx m_StageCode_0040_000A_3;
	CDcmCodeAndModifer m_AnatomicRegion_0008_2218_3; 
	CDcmCodeAndModifer m_PrimaryAnatomicStructure_0008_2228_3;
	CDcmCodeAndModifer m_TransducerPosition_0008_2240_3;
	CDcmCodeAndModifer m_TransducerOrientation_0008_2244_3;
		
};
/*
Referenced Overlay Sequence (0008,1130) 3  (0008,1130) Referenced Overlay Sequence SQ 1
>Referenced SOP Class UID (0008,1150) 1C
>Referenced SOP Instance UID (0008,1155) 1C
Referenced Curve Sequence (0008,1145) 3   (0008,1145) Referenced Curve Sequence SQ 1
>Referenced SOP Class UID (0008,1150) 1C
>Referenced SOP Instance UID (0008,1155) 1C
Stage Code Sequence (0040,000A) 3   (0040,000A) Stage Code Sequence SQ 1
>Include “Code Sequence Macro” Table 8.8-1. Baseline
Anatomic Region Sequence (0008,2218) 3  (0008,2218) Anatomic Region Sequence SQ 1
>Include ‘Code Sequence Macro’ Table 8.8-1 Baseline
>Anatomic Region Modifier Sequence (0008,2220) 3
>>Include ‘Code Sequence Macro’ Table 8.8-1 Baseline
Primary Anatomic Structure Sequence (0008,2228) 3   (0008,2228) Primary Anatomic Structure Sequence SQ 1
>Include ‘Code Sequence Macro’ Table 8.8-1 Baseline
>Primary Anatomic Structure Modifier Sequence (0008,2230) 3  (0008,2230) Primary Anatomic Structure Modifier Sequence SQ 1
>>Include ‘Code Sequence Macro’ Table 8.8-1 Baseline
Transducer Position Sequence (0008,2240) 3     (0008,2240) Transducer Position Sequence SQ 1
>Include ‘Code Sequence Macro’ Table 8.8-1 Baseline
> Transducer Position Modifier(0008,2242) 3  (0008,2242) Transducer Position Modifier Sequence SQ 1
>>Include ‘Code Sequence Macro’ Table 8.8-1 Baseline
Transducer Orientation Sequence (0008,2244) 3   (0008,2244) Transducer Orientation Sequence SQ 1
>Include ‘Code Sequence Macro’ Table 8.8-1 Baseline
> Transducer Orientation Modifier Sequence (0008,2246) 3  (0008,2246) Transducer Orientation Modifier Sequence SQ 1
>>Include ‘Code Sequence Macro’ Table 8.8-1 Baseline 


*/
#endif // !defined(AFX_DCMUSIMAGEMODULE_H__69813E41_ADEC_4646_8997_C4CBC7229DE2__INCLUDED_)
