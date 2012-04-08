// DcmCRSeriesModule.h: interface for the CDcmCRSeriesModule class.
//
//////////////////////////////////////////////////////////////////////
/* 
 * Permission is given by the author to freely redistribute and include
 * this code in any program.
 *
 * Copyright: (c) 2004, John Fitzgerald <dicomapi@yahoo.com>
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
#if !defined(AFX_DCMCRSERIESMODULE_H__8DC20401_886A_415F_9294_16F1E3D84067__INCLUDED_)
#define AFX_DCMCRSERIESMODULE_H__8DC20401_886A_415F_9294_16F1E3D84067__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
// C.8.1.1 CR Series Module
// Table C.8-1 contains IOD Attributes that describe a computed radiography series performed on
// the patient.
class AFX_EXT_CLASS CDcmCRSeriesModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmCRSeriesModule );
public:
	CDcmCRSeriesModule();
    CDcmCRSeriesModule( CDcmCRSeriesModule& module );
	virtual ~CDcmCRSeriesModule();
public:
	CDcmCRSeriesModule& operator=( CDcmCRSeriesModule& module );
public:
// Text description of the part examined. Defined Terms:
// SKULL, CSPINE, TSPINE, LSPINE, SSPINE, COCCYX, CHEST, CLAVICLE
// BREAST, ABDOMEN, PELVIS, HIP, SHOULDER, ELBOW, KNEE, ANKLE, HAND
// FOOT, EXTREMITY.
	CString& BodyPartExamined( ); 
	void BodyPartExamined(const CString& Tag_0018_0015_2_CS_VM_1 );
public:
// Radiographic view associated with Patient Position (0018,5100). Defined Terms:
// AP = Anterior/Posterior, PA = Posterior/Anterior
// LL = Left Lateral, RL = Right Lateral
// RLD = Right Lateral Decubitus, LLD = Left Lateral Decubitus
// RLO = Right Lateral Oblique, LLO = Left Lateral Oblique
	CString& ViewPosition( );
	void ViewPosition(const CString& Tag_0018_5101_2_CS_VM_1 );
public:
//Label for the type of filter inserted into the x-ray beam
	CString& FilterType( );
	void FilterType(const CString& Tag_0018_1160_3_SH_VM_1 );
public:
// Label describing any grid inserted.
	CString& CollimatorGridName( );
	void CollimatorGridName(const CString& Tag_0018_1180_3_SH_VM_1 );
public:
// Size of the focal spot in mm. For devices with variable focal spot or multiple focal
// spots, small dimension followed by large dimension.
	CStringArray& FocalSpot( );
	void FocalSpot(const CStringArray& Tag_0018_1190_3_DS_VM_1N );
public:
// Label of the type of storage phosphor plates used in this series
	CString& PlateType( );
	void PlateType(const CString& Tag_0018_1260_3_SH_VM_1 );
public:
// Label of type of phosphor on the plates
	CString& PhosphorType( );
	void PhosphorType(const CString& Tag_0018_1261_3_SH_LO_1 );
protected:
// Destroys and creates the module dataset
	virtual void InitializeModule();
};

#endif // !defined(AFX_DCMCRSERIESMODULE_H__8DC20401_886A_415F_9294_16F1E3D84067__INCLUDED_)
