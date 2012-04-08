// DcmQueryRetrieveModule.h: interface for the CDcmQueryRetrieveModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMQUERYRETRIEVEMODULE_H__27E85332_9E64_4F02_BE38_81155A0A3B22__INCLUDED_)
#define AFX_DCMQUERYRETRIEVEMODULE_H__27E85332_9E64_4F02_BE38_81155A0A3B22__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

class AFX_EXT_CLASS CDcmQueryRetrieveModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmQueryRetrieveModule );
public:
	CDcmQueryRetrieveModule();
	virtual ~CDcmQueryRetrieveModule();
public:
	CString& QueryRetrieveLevel();
	void QueryRetrieveLevel(const CString& Tag_0008_0052_CS_VM_1 );
public:
	CStringArray& SpecificCharacterSet();
	void SpecificCharacterSet(const CStringArray& Tag_0008_0005_CS_VM_1N );
public:
	CString& StorageMediaFileSetID();
	void StorageMediaFileSetID(const CString& Tag_0088_0130_SH_VM_1 );
public:
	CString& StorageMediaFileSetUID();
	void StorageMediaFileSetUID(const CString& Tag_0088_0140_UI_VM_1 );
public:
	CStringArray& RetrieveAETitle();
	void RetrieveAETitle(const CStringArray& Tag_0008_0054_AE_VM_1N );
public:
	CString& InstanceAvailability();
	void InstanceAvailability(const CString& Tag_0008_0056_CS_VM_1 );
public:
	CString& NumberPatientRelatedStudies();
	void NumberPatientRelatedStudies(const CString& Tag_0020_1200_IS_VM_1 );
public:
	CString& NumberPatientRelatedSeries();
	void NumberPatientRelatedSeries(const CString& Tag_0020_1202_IS_VM_1 );
public:
	CString& NumberPatientRelatedInstances();
	void NumberPatientRelatedInstances(const CString& Tag_0020_1204_IS_VM_1 );
public:
	CString& NumberStudyRelatedSeries();
	void NumberStudyRelatedSeries(const CString& Tag_0020_1206_IS_VM_1 );
public:
	CString& NumberStudyRelatedInstances();
	void NumberStudyRelatedInstances(const CString& Tag_0020_1208_IS_VM_1 );
public:
	CString& NumberSeriesRelatedInstances();
	void NumberSeriesRelatedInstances(const CString& Tag_0020_1209_IS_VM_1 );
public:
	CStringArray& FailedSOPInstanceUIDList();
	void FailedSOPInstanceUIDList(const CStringArray& Tag_0008_0058_UI_VM_1N );
};



#endif // !defined(AFX_DCMQUERYRETRIEVEMODULE_H__27E85332_9E64_4F02_BE38_81155A0A3B22__INCLUDED_)
