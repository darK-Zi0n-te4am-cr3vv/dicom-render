// DcmNMPetOrientationModule.h: interface for the CDcmNMPetOrientationModule class.
//
//////////////////////////////////////////////////////////////////////
/* 
 * Permission is given by the author to freely redistribute and include
 * this code in any program.
 *
 * Copyright: (c) 2005, John Fitzgerald <dicomapi@yahoo.com>
 *
 * COVERED CODE IS PROVIDED UNDER THIS LICENSE ON AN "AS IS" BASIS, WITHOUT WARRANTY
 * OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, WITHOUT LIMITATION, WARRANTIES
 * THAT THE COVERED CODE IS FREE OF DEFECTS, MERCHANTABLE, FIT FOR A PARTICULAR PURPOSE
 * OR NON-INFRINGING. THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE COVERED
 * CODE IS WITH YOU. SHOULD ANY COVERED CODE PROVE DEFECTIVE IN ANY RESPECT, YOU (NOT
 * THE INITIAL DEVELOPER OR ANY OTHER CONTRIBUTOR) ASSUME THE COST OF ANY NECESSARY
 * SERVICING, REPAIR OR CORRECTION. THIS DISCLAIMER OF WARRANTY CONSTITUTES AN ESSENTIAL
 * PART OF THIS LICENSE. NO USE OF ANY COVERED CODE IS AUTHORIZED HEREUNDER EXCEPT UNDER
 * THIS DISCLAIMER.
 *
 * Use at your own risk!
 * ==========================================================
 */
#if !defined(AFX_DCMNMPETORIENTATIONMODULE_H__ABB89D15_AB77_4589_BAC4_C24D44A240B6__INCLUDED_)
#define AFX_DCMNMPETORIENTATIONMODULE_H__ABB89D15_AB77_4589_BAC4_C24D44A240B6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmCodeAndModifer.h"
#include "DcmCodeSequenceMacro.h"
//C.8.4.6 NM/PET Patient Orientation Module
//Table C.8-5 specifies the Attributes that describe the NM/PET Patient Orientation.
class AFX_EXT_CLASS CDcmNMPetOrientationModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmNMPetOrientationModule );
public:
	CDcmNMPetOrientationModule();
    CDcmNMPetOrientationModule( CDcmNMPetOrientationModule& module );
	virtual ~CDcmNMPetOrientationModule();
public:
	CDcmNMPetOrientationModule& operator=( CDcmNMPetOrientationModule& module );
public:
// C.8.4.6.1.1 Patient Orientation Code Sequence
// The Patient Orientation Code Sequence (0054,0410) is used to describe the orientation of the
// patient with respect to gravity, and is independent of the position in the gantry. Only a single Item
// shall be permitted in this sequence.
	CDcmCodeAndModifer& PatientOrientation();
// C.8.4.6.1.3 Patient Gantry Relationship Code Sequence
// Patient Gantry Relationship Code Sequence (0054,0414) is used to describe the patient
// within the gantry, such as head-first or feet-first. When imaging the extremities, these directions
// are related to normal anatomic position.
// Example: In normal anatomic position, the fingers point towards the feet.
// Only a single Item shall be permitted in this sequence.
	CDcmCodeSequenceMacroEx& PatientGantryRelationship();
protected:
// Destroys and creates the module dataset
	virtual void InitializeModule();
private:
    CDcmCodeAndModifer m_PatientOrientation_0054_0410;
	CDcmCodeSequenceMacroEx m_PatientGantryRelationship_0054_0414; 
};

#endif // !defined(AFX_DCMNMPETORIENTATIONMODULE_H__ABB89D15_AB77_4589_BAC4_C24D44A240B6__INCLUDED_)
