// DcmNMDetectorModule.h: interface for the CDcmNMDetectorModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMNMDETECTORMODULE_H__8DA5AACE_C728_411D_AEEA_C825397C3CB8__INCLUDED_)
#define AFX_DCMNMDETECTORMODULE_H__8DA5AACE_C728_411D_AEEA_C825397C3CB8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmDetectorInformationSequence.h"
//Table C.8-11 contains IOD Attributes that describe Nuclear Medicine Detectors used to produce
//an image.
class AFX_EXT_CLASS CDcmNMDetectorModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmNMDetectorModule );
public:
	CDcmNMDetectorModule();
    CDcmNMDetectorModule( CDcmNMDetectorModule& module );
	virtual ~CDcmNMDetectorModule();
public:
	CDcmNMDetectorModule& operator=( CDcmNMDetectorModule& module );
protected:
// Creates the module dataset
	virtual void InitializeModule();
public:
// Sequence of Repeating Items that
// describe the detectors used. The number
// of items shall be equal to Number of
// Detectors (0054,0021). The first item
// corresponds to frames with value of 1 in
// the Detector Vector (0054,0020), the
// second item with value 2, etc.
	CDcmDetectorSequence& DetectorInformation();


private:
	CDcmDetectorSequence m_DetectorInformation_0054_0022_2;

};
// Detector Information Sequence (0054,0022) 2
#endif // !defined(AFX_DCMNMDETECTORMODULE_H__8DA5AACE_C728_411D_AEEA_C825397C3CB8__INCLUDED_)



