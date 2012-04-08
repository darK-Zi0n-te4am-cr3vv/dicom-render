// DcmNMIsotopeModule.h: interface for the CDcmNMIsotopeModule class.
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
#if !defined(AFX_DCMNMISOTOPEMODULE_H__823AA273_78E3_467F_8B77_EA023609DB9D__INCLUDED_)
#define AFX_DCMNMISOTOPEMODULE_H__823AA273_78E3_467F_8B77_EA023609DB9D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmRadiopharmaceuticalInformationSequence.h"
#include "DcmWindowInformationSequence.h"
#include "DcmInterventionDrugSequence.h"
// C.8.4.10 NM Isotope Module
// Table C.8-10 contains Attributes that describe the isotope administered for the acquisition.
class AFX_EXT_CLASS CDcmNMIsotopeModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmNMIsotopeModule );
public:
	CDcmNMIsotopeModule();
    CDcmNMIsotopeModule( CDcmNMIsotopeModule& module );
	virtual ~CDcmNMIsotopeModule();
public:
	CDcmNMIsotopeModule& operator=( CDcmNMIsotopeModule& module );
protected:
// Destroys and creates the module dataset
	virtual void InitializeModule();
public:
// Sequence of Repeating Items that
// describe isotope information. One or more
// Items may be included in this sequence.
	CDcmRadioPharmaceuticalSequence& Radiopharmaceutical();
public:
// Sequence of Repeating Items that
// describe the energy window groups used.
// The number of items shall be equal to
// Number of Energy Windows (0054,0011).
// The first item corresponds to frames with
// value of 1 in the Energy Window Vector
// (0054,0010), the second item with value 2,
// etc.
	CDcmWindowInformationSequence& EnergyWindow();
// Sequence of Repeating Items that
// describes the intervention drugs used.
// Zero or more Items may be included in this
// sequence.
	CDcmInterventionDrugSequence& InterventionDrug();
private:
	CDcmRadioPharmaceuticalSequence m_RadiopharmaceuticalInformation_0054_0016_2;
	CDcmWindowInformationSequence m_EnergyWindowInformation_0054_0012_2;
	CDcmInterventionDrugSequence m_InterventionDrugInformation_0018_0026_3;
};

#endif // !defined(AFX_DCMNMISOTOPEMODULE_H__823AA273_78E3_467F_8B77_EA023609DB9D__INCLUDED_)
