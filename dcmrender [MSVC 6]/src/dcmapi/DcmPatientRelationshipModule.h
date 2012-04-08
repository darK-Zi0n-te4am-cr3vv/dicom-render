// DcmPatientRelationshipModule.h: interface for the CDcmPatientRelationshipModule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMPATIENTRELATIONSHIPMODULE_H__A983843B_FD83_42E6_936B_276F99D18853__INCLUDED_)
#define AFX_DCMPATIENTRELATIONSHIPMODULE_H__A983843B_FD83_42E6_936B_276F99D18853__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"

#include "DcmReferencedSOPSequence.h"
class AFX_EXT_CLASS CDcmPatientRelationshipModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmPatientRelationshipModule );
public:
	CDcmPatientRelationshipModule();
	virtual ~CDcmPatientRelationshipModule();
public:
	CDcmSopSequence& ReferencedStudy();
	CDcmSopSequence& ReferencedVisit();
	CDcmSopSequence& ReferencedPatientAlias();
private:
	CDcmSopSequence m_ReferencedStudySequence_0008_1110;
	CDcmSopSequence m_ReferencedVisitSequence_0008_1125;
	CDcmSopSequence m_ReferencedPatientAliasSequence_0038_0004;

};

#endif // !defined(AFX_DCMPATIENTRELATIONSHIPMODULE_H__A983843B_FD83_42E6_936B_276F99D18853__INCLUDED_)
