// DcmVisitRelationshipModule.h: interface for the CDcmVisitRelationshipModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMVISITRELATIONSHIPMODULE_H__D76A85E4_E3BA_4BAE_8D5C_986B75BE4E17__INCLUDED_)
#define AFX_DCMVISITRELATIONSHIPMODULE_H__D76A85E4_E3BA_4BAE_8D5C_986B75BE4E17__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmReferencedSOPSequence.h"

class CDcmVisitRelationshipModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmVisitRelationshipModule );
public:
	CDcmVisitRelationshipModule();
	virtual ~CDcmVisitRelationshipModule();
public:
	CDcmSopSequence& ReferencedStudy( );
	CDcmSopSequence& ReferencedPatient( );
private:
	CDcmSopSequence m_ReferencedStudySequence_0008_1110;
	CDcmSopSequence m_ReferencedPatientSequence_0008_1120;
};

#endif // !defined(AFX_DCMVISITRELATIONSHIPMODULE_H__D76A85E4_E3BA_4BAE_8D5C_986B75BE4E17__INCLUDED_)
