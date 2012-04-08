// DcmDerivedIOD.h: interface for the CDcmCompositeIE class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DCMDERIVEDIOD_H__14D3C96B_4773_4E74_848A_1B2C62E284C3__INCLUDED_)
#define AFX_DCMDERIVEDIOD_H__14D3C96B_4773_4E74_848A_1B2C62E284C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmCompositeIOD.h"
#include "iodmodule.h"

class AFX_EXT_CLASS CDcmCompositeIE : public CDcmCompositeIOD  
{
public:
	DECLARE_SERIAL( CDcmCompositeIE );
public:
	CDcmCompositeIE();
	CDcmCompositeIE( CDcmCompositeIE& iod );
	CDcmCompositeIE( CDcmCompositeIOD& iod );
	virtual ~CDcmCompositeIE();
public:
	CDcmCompositeIE& operator=( CDcmCompositeIOD& iod )
	{
		CDcmCompositeIOD::operator=( iod );
		return *this;
	};
	CDcmCompositeIE& operator=( CDcmCompositeIE& iod )
	{
		if ( this == &iod ) return *this;
		m_MetaFile = iod.m_MetaFile;
		CDcmCompositeIOD::operator=( iod );
		return *this;
	};
	bool operator==( CDcmCompositeIE& iod )
	{
		if ( this == &iod ) return true;
		return m_MetaFile == iod.m_MetaFile
		&& CDcmCompositeIOD::operator==( iod );
	};
	bool operator!=( CDcmCompositeIE& iod )
	{
		return !CDcmCompositeIOD::operator==( iod );
	};
protected:
	void Serialize( CArchive& ar )
	{
		CDcmCompositeIOD::Serialize( ar );
	};
	virtual void InitializeIod()
	{
		RemoveIodModules();
		m_MetaFile.AttachModule();
	};
public:
	class composite_patient_ie : public CDcmIE 
	{
	public:
		composite_patient_ie( CDcmCompositeIE* iod = NULL ) : CDcmIE( iod )
		{
			AddIeModule( m_Patient );
			AddIeModule( m_TrialSubject );
		};
		composite_patient_ie(composite_patient_ie& ie) { *this = ie; };
		composite_patient_ie& operator=( composite_patient_ie& ie )
		{
			if ( this == &ie ) return *this;
			m_Patient = ie.m_Patient;
			m_TrialSubject = ie.m_TrialSubject;
			return *this;
		};
		bool operator==( composite_patient_ie& ie )
		{
			if ( this == &ie ) return true;
			return m_Patient == ie.m_Patient
				&& m_TrialSubject == ie.m_TrialSubject;
		};
		bool operator!=( composite_patient_ie& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmPatientModule m_Patient;
		CDcmClinicalTrialSubjectModule m_TrialSubject;
	};
	class composite_study_ie : public CDcmIE 
	{
	public:
		composite_study_ie( CDcmCompositeIE* iod = NULL ) : CDcmIE( iod )
		{
			AddIeModule( m_General );
			AddIeModule( m_ClinicalTrial );
			AddIeModule( m_Patient );
		};
		composite_study_ie(composite_study_ie& ie) { *this = ie; };
		composite_study_ie& operator=( composite_study_ie& ie )
		{
			if ( this == &ie ) return *this;
			m_General = ie.m_General;
			m_ClinicalTrial = ie.m_ClinicalTrial;
			m_Patient = ie.m_Patient;
			return *this;
		};
		bool operator==( composite_study_ie& ie )
		{
			if ( this == &ie ) return true;
			return m_General == ie.m_General
				&& m_ClinicalTrial == ie.m_ClinicalTrial
				&& m_Patient == ie.m_Patient;
		};
		bool operator!=( composite_study_ie& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmGeneralStudyModule m_General;
		CDcmClinicalTrialStudyModule m_ClinicalTrial;
		CDcmPatientStudyModule m_Patient;
	};
	class composite_series_ie : public CDcmIE 
	{
	public:
		composite_series_ie( CDcmCompositeIE* iod = NULL ) : CDcmIE( iod )
		{
			AddIeModule( m_General );
			AddIeModule( m_ClinicalTrial );
		};
		composite_series_ie(composite_series_ie& ie) { *this = ie; };
		composite_series_ie& operator=( composite_series_ie& ie )
		{
			if ( this == &ie ) return *this;
			m_ClinicalTrial = ie.m_ClinicalTrial;
			m_General = ie.m_General;
			return *this;
		};
		bool operator==( composite_series_ie& ie )
		{
			if ( this == &ie ) return true;
			return m_ClinicalTrial == ie.m_ClinicalTrial
				&& m_General == ie.m_General;
		};
		bool operator!=( composite_series_ie& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmClinicalTrialSeriesModule m_ClinicalTrial;
		CDcmGeneralSeriesModule m_General;
	};
	class composite_equipment_ie : public CDcmIE 
	{
	public:
		composite_equipment_ie( CDcmCompositeIE* iod = NULL ) : CDcmIE( iod )
		{
			AddIeModule( m_General );
		};
		composite_equipment_ie(composite_equipment_ie& ie) { *this = ie; };
		composite_equipment_ie& operator=( composite_equipment_ie& ie )
		{
			if ( this == &ie ) return *this;
			m_General = ie.m_General;
			return *this;
		};
		bool operator==( composite_equipment_ie& ie )
		{
			if ( this == &ie ) return true;
			return m_General == ie.m_General;
		};
		bool operator!=( composite_equipment_ie& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmGeneralEquipmentModule m_General;
	};
	class composite_frameref_ie : public CDcmIE 
	{
	public:
		composite_frameref_ie( CDcmCompositeIE* iod = NULL ) : CDcmIE( iod )
		{
			AddIeModule( m_FrameRef );
		};
		composite_frameref_ie(composite_frameref_ie& ie) { *this = ie; };
		composite_frameref_ie& operator=( composite_frameref_ie& ie )
		{
			if ( this == &ie ) return *this;
			m_FrameRef = ie.m_FrameRef;
			return *this;
		};
		bool operator==( composite_frameref_ie& ie )
		{
			if ( this == &ie ) return true;
			return m_FrameRef == ie.m_FrameRef;
		};
		bool operator!=( composite_frameref_ie& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmFrameOfReferenceModule m_FrameRef;
	};
	class composite_image_ie : public CDcmIE 
	{
	public:
		composite_image_ie( CDcmCompositeIE* iod = NULL ) : CDcmIE( iod )
		{
			AddIeModule( m_GeneralImage );
			AddIeModule( m_ImagePixel );
			AddIeModule( m_SopCommon );
		};
		composite_image_ie(composite_image_ie& ie) { *this = ie; };
		composite_image_ie& operator=( composite_image_ie& ie )
		{
			if ( this == &ie ) return *this;
			m_GeneralImage = ie.m_GeneralImage;
			m_ImagePixel = ie.m_ImagePixel;
			m_SopCommon = ie.m_SopCommon;
			return *this;
		};
		bool operator==( composite_image_ie& ie )
		{
			if ( this == &ie ) return true;
			return m_GeneralImage == ie.m_GeneralImage
				&& m_ImagePixel == ie.m_ImagePixel
				&& m_SopCommon == ie.m_SopCommon;
		};
		bool operator!=( composite_image_ie& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmGeneralImageModule m_GeneralImage;
		CDcmImagePixelModule m_ImagePixel;
		CDcmSOPCommonModule m_SopCommon;
	};
	class image_ie_cr : public composite_image_ie 
	{
	public:
		image_ie_cr( CDcmCompositeIE* iod = NULL ) : composite_image_ie( iod )
		{
			AddIeModule( m_Contrast );
			AddIeModule( m_CRImage );
			AddIeModule( m_OverLay );
			AddIeModule( m_Curve );
			AddIeModule( m_ModalityLut );
			AddIeModule( m_VioLut );
		};
		image_ie_cr(image_ie_cr& ie) { *this = ie; };
		image_ie_cr& operator=( image_ie_cr& ie )
		{
			if ( this == &ie ) return *this;
			composite_image_ie::operator=( ie );
		
			m_Contrast = ie.m_Contrast;
			m_CRImage = ie.m_CRImage;
			m_OverLay = ie.m_OverLay;
			m_Curve = ie.m_Curve;
			m_ModalityLut = ie.m_ModalityLut;
			m_VioLut = ie.m_VioLut;
			return *this;
		};
		bool operator==( image_ie_cr& ie )
		{
			if ( this == &ie ) return true;
			return m_Contrast == ie.m_Contrast
				&& m_CRImage == ie.m_CRImage
				&& m_OverLay == ie.m_OverLay
				&& m_Curve == ie.m_Curve
				&& m_ModalityLut == ie.m_ModalityLut
				&& m_VioLut == ie.m_VioLut
				&& 	composite_image_ie::operator==( ie );
		};
		bool operator!=( image_ie_cr& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmContrastBolusModule m_Contrast;
		CDcmCRImageModule m_CRImage;
		CDcmOverLayPlaneModule m_OverLay;
		CDcmCurveModule  m_Curve;
	    CDcmModalityLUTModule  m_ModalityLut;
		CDcmVioLutModule m_VioLut;
	};

	class series_ie_cr : public composite_series_ie 
	{
	public:
		series_ie_cr( CDcmCompositeIE* iod = NULL ) : composite_series_ie( iod )
		{
			AddIeModule( m_cr );
		};
		series_ie_cr(series_ie_cr& ie) { *this = ie; };
		series_ie_cr& operator=( series_ie_cr& ie )
		{
			if ( this == &ie ) return *this;
			composite_series_ie::operator =( ie );
			m_cr = ie.m_cr;
			return *this;
		};
		bool operator==( series_ie_cr& ie )
		{
			if ( this == &ie ) return true;
			return m_cr == ie.m_cr
					&& 	composite_series_ie::operator ==( ie );
			
		};
		bool operator!=( series_ie_cr& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmCRSeriesModule m_cr;
	};

	class image_ie_ct_mr : public composite_image_ie 
	{
	public:
		image_ie_ct_mr( CDcmCompositeIE* iod = NULL ) : composite_image_ie( iod )
		{
			AddIeModule( m_ImagePlane );
           	AddIeModule( m_Contrast );
			AddIeModule( m_OverLay );
			AddIeModule( m_VioLut );
		};
		image_ie_ct_mr(image_ie_ct_mr& ie) { *this = ie; };
		image_ie_ct_mr& operator=( image_ie_ct_mr& ie )
		{
			if ( this == &ie ) return *this;
			composite_image_ie::operator=( ie );
			m_ImagePlane = ie.m_ImagePlane;
			m_Contrast = ie.m_Contrast;
			m_OverLay = ie.m_OverLay;
			m_VioLut = ie.m_VioLut;
			return *this;
		};
		bool operator==( image_ie_ct_mr& ie )
		{
			if ( this == &ie ) return true;
			return m_ImagePlane == ie.m_ImagePlane
				&& m_Contrast == ie.m_Contrast
				&& m_OverLay == ie.m_OverLay
				&& m_VioLut == ie.m_VioLut
				&& 	composite_image_ie::operator==( ie );
		};
		bool operator!=( image_ie_ct_mr& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmImagePlaneModule m_ImagePlane;
		CDcmContrastBolusModule m_Contrast;
		CDcmOverLayPlaneModule m_OverLay;
		CDcmVioLutModule m_VioLut;
	};
	class image_ie_ct : public image_ie_ct_mr 
	{
	public:
		image_ie_ct( CDcmCompositeIE* iod = NULL ) : image_ie_ct_mr( iod )
		{
			AddIeModule( m_CTImage );
        };
		image_ie_ct(image_ie_ct& ie) { *this = ie; };
		image_ie_ct& operator=( image_ie_ct& ie )
		{
			if ( this == &ie ) return *this;
			image_ie_ct_mr::operator=( ie );
			m_CTImage = ie.m_CTImage;
			return *this;
		};
		bool operator==( image_ie_ct& ie )
		{
			if ( this == &ie ) return true;
			return  m_CTImage == ie.m_CTImage
				&& 	image_ie_ct_mr::operator==( ie );
		};
		bool operator!=( image_ie_ct& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmCTImageModule m_CTImage;
	};
	class image_ie_mr : public image_ie_ct_mr 
	{
	public:
		image_ie_mr( CDcmCompositeIE* iod = NULL ) : image_ie_ct_mr( iod )
		{
			AddIeModule( m_MRImage );
		};
		image_ie_mr(image_ie_mr& ie) { *this = ie; };
		image_ie_mr& operator=( image_ie_mr& ie )
		{
			if ( this == &ie ) return *this;
			image_ie_ct_mr::operator=( ie );
			m_MRImage = ie.m_MRImage;
			return *this;
		};
		bool operator==( image_ie_mr& ie )
		{
			if ( this == &ie ) return true;
			return m_MRImage == ie.m_MRImage
				&&	image_ie_ct_mr::operator==( ie );
		};
		bool operator!=( image_ie_mr& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmMRImageModule m_MRImage;
	};
	class series_ie_nm : public composite_series_ie 
	{
	public:
		series_ie_nm( CDcmCompositeIE* iod = NULL ) : composite_series_ie( iod )
		{
			AddIeModule( m_PetOrientation );
		};
		series_ie_nm(series_ie_nm& ie) { *this = ie; };
		series_ie_nm& operator=( series_ie_nm& ie )
		{
			if ( this == &ie ) return *this;
			composite_series_ie::operator =( ie );
			m_PetOrientation = ie.m_PetOrientation;
			return *this;
		};
		bool operator==( series_ie_nm& ie )
		{
			if ( this == &ie ) return true;
			return m_PetOrientation == ie.m_PetOrientation
					&& 	composite_series_ie::operator ==( ie );
			
		};
		bool operator!=( series_ie_nm& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmNMPetOrientationModule m_PetOrientation;
	};
/*
General Image C.7.6.1 Image Pixel C.7.6.3 NM Image Pixel C.8.4.7 Multi-frame C.7.6.6
NM Multi-frame C.8.4.8 NM Image C.8.4.9 NM Isotope C.8.4.10 NM Detector C.8.4.11
NM TOMO Acquisition C.8.4.12 NM Multi-gated Acquisition C.8.4.13 
NM Phase C.8.4.14 NM Reconstruction C.8.4.15 Overlay Plane C.9.2 Multi-frame Overlay C.9.3
Curve C.10.2 VOI LUT C.11.2 SOP Common C.12.1	
*/
	class image_ie_nm : public composite_image_ie 
	{
	public:
		image_ie_nm( CDcmCompositeIE* iod = NULL ) : composite_image_ie( iod )
		{
			AddIeModule( m_NmImagePixel );  AddIeModule( m_MultiFrame );
			AddIeModule( m_NmMultiFrame );  AddIeModule( m_Image );
			AddIeModule( m_Isotope );       AddIeModule( m_Detector );
			AddIeModule( m_Tomo );  		AddIeModule( m_MultiGate );
			AddIeModule( m_Phase );			AddIeModule( m_Reconstruct );
			AddIeModule( m_OverLay );		AddIeModule( m_MultiOverlay );
			AddIeModule( m_Curve );			AddIeModule( m_VioLut );
		};
		image_ie_nm(image_ie_nm& ie) { *this = ie; };
		image_ie_nm& operator=( image_ie_nm& ie )
		{
			if ( this == &ie ) return *this;
			composite_image_ie::operator=( ie );
			m_NmImagePixel = ie.m_NmImagePixel;
			m_MultiFrame = ie.m_MultiFrame;
			m_NmMultiFrame = ie.m_NmMultiFrame;
			m_Image = ie.m_Image;
			m_Isotope = ie.m_Isotope;
			m_Detector = ie.m_Detector;
			m_Tomo = ie.m_Tomo;
			m_MultiGate = ie.m_MultiGate;
			m_Phase = ie.m_Phase;
			m_Reconstruct = ie.m_Reconstruct;
			m_OverLay = ie.m_OverLay;
			m_MultiOverlay = ie.m_MultiOverlay;
			m_Curve = ie.m_Curve;
			m_VioLut = ie.m_VioLut;
			return *this;
		};
		bool operator==( image_ie_nm& ie )
		{
			if ( this == &ie ) return true;
			return  m_NmImagePixel == ie.m_NmImagePixel
			&& m_MultiFrame == ie.m_MultiFrame
			&& m_NmMultiFrame == ie.m_NmMultiFrame
			&& m_Image == ie.m_Image
			&& m_Isotope == ie.m_Isotope
			&& m_Detector == ie.m_Detector
			&& m_Tomo == ie.m_Tomo
			&& m_MultiGate == ie.m_MultiGate
			&& m_Phase == ie.m_Phase
			&& m_Reconstruct == ie.m_Reconstruct
			&& m_OverLay == ie.m_OverLay
			&& m_MultiOverlay == ie.m_MultiOverlay
			&& m_Curve == ie.m_Curve
			&& m_VioLut == ie.m_VioLut
			&& composite_image_ie::operator==( ie );
		};
		bool operator!=( image_ie_nm& ie )
		{
			return !operator==( ie );
		};
		CDcmNMImagePixelModule m_NmImagePixel;
		CDcmMultiFrameModule m_MultiFrame;
		CDcmNMMultiFrameModule m_NmMultiFrame;
		CDcmNMImageModule m_Image;
		CDcmNMIsotopeModule m_Isotope;
		CDcmNMDetectorModule m_Detector;
		CDcmNMTomoModule m_Tomo;
		CDcmNMMultiGatedModule m_MultiGate;
		CDcmNMPhaseModule m_Phase;
		CDcmNMReconstructionModule m_Reconstruct;
        CDcmOverLayPlaneModule m_OverLay;
		CDcmMultiFrameOverlayModule m_MultiOverlay;
		CDcmCurveModule m_Curve;
		CDcmVioLutModule m_VioLut;
	};
	class equipment_ie_sc : public composite_equipment_ie 
	{
	public:
		equipment_ie_sc( CDcmCompositeIE* iod = NULL ) 
			: composite_equipment_ie( iod )
		{
			AddIeModule( m_SCEquipment ); 
		};
		equipment_ie_sc(equipment_ie_sc& ie) { *this = ie; };
		equipment_ie_sc& operator=( equipment_ie_sc& ie )
		{
			if ( this == &ie ) return *this;
			composite_equipment_ie::operator= ( ie );
			m_SCEquipment = ie.m_SCEquipment;
			return *this;
		};
		bool operator==( equipment_ie_sc& ie )
		{
			if ( this == &ie ) return true;
			return m_SCEquipment == ie.m_SCEquipment
				&& composite_equipment_ie::operator ==( ie );
		};
		bool operator!=( equipment_ie_sc& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmSCEquipmentModule m_SCEquipment;
	};
	class image_ie_sc : public composite_image_ie 
	{
	public:
		image_ie_sc( CDcmCompositeIE* iod = NULL ) 
			: composite_image_ie( iod )
		{
			AddIeModule( m_SCImage ); 
			AddIeModule( m_OverLayPlane ); 
			AddIeModule( m_ModalityLUT ); 
			AddIeModule( m_VioLut ); 
		};
		image_ie_sc(image_ie_sc& ie) { *this = ie; };
		image_ie_sc& operator=( image_ie_sc& ie )
		{
			if ( this == &ie ) return *this;
			composite_image_ie::operator=( ie );
			m_SCImage = ie.m_SCImage;
			m_OverLayPlane = ie.m_OverLayPlane;
			m_ModalityLUT = ie.m_ModalityLUT;
			m_VioLut = ie.m_VioLut;
			return *this;
		};
		bool operator==( image_ie_sc& ie )
		{
			if ( this == &ie ) return true;
			return m_SCImage == ie.m_SCImage
				&& m_OverLayPlane == ie.m_OverLayPlane
				&& m_ModalityLUT == ie.m_ModalityLUT
				&& m_VioLut == ie.m_VioLut
				&& composite_image_ie::operator==( ie );
		};
		bool operator!=( image_ie_sc& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmSCImageModule m_SCImage;
		CDcmOverLayPlaneModule m_OverLayPlane;
		CDcmModalityLUTModule m_ModalityLUT;
		CDcmVioLutModule m_VioLut;
	};
	class image_ie_sc_multi : public composite_image_ie 
	{
	public:
		image_ie_sc_multi( CDcmCompositeIE* iod = NULL ) 
			: composite_image_ie( iod )
		{
			AddIeModule( m_Cine ); 
			AddIeModule( m_MultiFrame ); 
			AddIeModule( m_ScMultiFrame ); 
			AddIeModule( m_ScMultiFrameVector ); 
			AddIeModule( m_ScImage ); 
			AddIeModule( m_OverLay );
			AddIeModule( m_VioLut ); 
		};
		image_ie_sc_multi(image_ie_sc_multi& ie) { *this = ie; };
		image_ie_sc_multi& operator=( image_ie_sc_multi& ie )
		{
			if ( this == &ie ) return *this;
			composite_image_ie::operator=( ie );
			m_Cine = ie.m_Cine;
			m_MultiFrame = ie.m_MultiFrame;
			m_ScMultiFrame = ie.m_ScMultiFrame;
			m_ScMultiFrameVector = ie.m_ScMultiFrameVector;
			m_ScImage = ie.m_ScImage;
			m_OverLay = ie.m_OverLay;
			m_VioLut = ie.m_VioLut;
			return *this;
		};
		bool operator==( image_ie_sc_multi& ie )
		{
			if ( this == &ie ) return true;
			return m_Cine == ie.m_Cine
				&& m_MultiFrame == ie.m_MultiFrame
				&& m_ScMultiFrame == ie.m_ScMultiFrame
				&& m_ScMultiFrameVector == ie.m_ScMultiFrameVector
				&& m_ScImage == ie.m_ScImage
				&& m_OverLay == ie.m_OverLay
				&& m_VioLut == ie.m_VioLut
				&& composite_image_ie::operator==( ie );
		};
		bool operator!=( image_ie_sc_multi& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmCineModule m_Cine;
		CDcmMultiFrameModule m_MultiFrame;
		CDcmSCMultiFrameImageModule m_ScMultiFrame;
		CDcmSCMultiFrameVectorModule m_ScMultiFrameVector;
		CDcmSCImageModule m_ScImage;
		CDcmOverLayPlaneModule m_OverLay;
		CDcmVioLutModule m_VioLut;
	};
	class curve_ie_us  : public CDcmIE 
	{
	public:
		curve_ie_us( CDcmCompositeIE* iod = NULL )
			: CDcmIE( iod )
		{
			AddIeModule( m_CurveID );
			AddIeModule( m_Curve );
			AddIeModule( m_Audio );
		};
		curve_ie_us(curve_ie_us& ie) { *this = ie; };
		curve_ie_us& operator=( curve_ie_us& ie )
		{
			if ( this == &ie ) return *this;
			m_CurveID = ie.m_CurveID;
			m_Curve = ie.m_Curve;
			m_Audio = ie.m_Audio;
		#ifdef CURVE_IE_SOP_COMMON
			m_SopCommon = ie.m_SopCommon;
		#endif
			return *this;
		};
		bool operator==( curve_ie_us& ie )
		{
			if ( this == &ie ) return true;
			return m_CurveID == ie.m_CurveID 
				&& m_Curve == ie.m_Curve
				&& m_Audio == ie.m_Audio;
		};
		bool operator!=( curve_ie_us& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmCurveIdentificationModule m_CurveID;
		CDcmCurveModule m_Curve;
		CDcmAudioModule m_Audio;
	#ifdef CURVE_IE_SOP_COMMON
		CDcmSOPCommonModule m_SopCommon;
	#endif
	};
	class frame_ie_us : public composite_frameref_ie
	{
	public:
		frame_ie_us( CDcmCompositeIE* iod = NULL ) 
			: composite_frameref_ie( iod )
		{
			AddIeModule( m_USFrameRef ); 
			AddIeModule( m_Synchro ); 
		};
		frame_ie_us(frame_ie_us& ie) { *this = ie; };
		frame_ie_us& operator=( frame_ie_us& ie )
		{
			if ( this == &ie ) return *this;
			composite_frameref_ie::operator=( ie );
			m_USFrameRef = ie.m_USFrameRef;
			m_Synchro = ie.m_Synchro;
			return *this;
		};
		bool operator==( frame_ie_us& ie )
		{
			if ( this == &ie ) return true;
			return m_USFrameRef == ie.m_USFrameRef 
				&& m_Synchro == ie.m_Synchro
				&& 	composite_frameref_ie::operator==( ie );
		};
		bool operator!=( frame_ie_us& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmUSFrameOfReferenceModule m_USFrameRef;
		CDcmSynchronizationModule m_Synchro;
	};
	class composite_image_ie_us  : public composite_image_ie
	{
	public:
		composite_image_ie_us( CDcmCompositeIE* iod = NULL ) 
			: composite_image_ie( iod )
		{
			AddIeModule( m_Contrast ); 
			AddIeModule( m_PalleteColor ); 
			AddIeModule( m_USRegionCalibration ); 
			AddIeModule( m_USImage ); 
			AddIeModule( m_VioLut ); 
		};
		composite_image_ie_us(composite_image_ie_us& ie) { *this = ie; };
		composite_image_ie_us& operator=( composite_image_ie_us& ie )
		{
			if ( this == &ie ) return *this;
			composite_image_ie::operator=(ie);
			m_Contrast = ie.m_Contrast;
			m_PalleteColor = ie.m_PalleteColor;
			m_USRegionCalibration = ie.m_USRegionCalibration;
			m_USImage = ie.m_USImage;
			m_VioLut = ie.m_VioLut;
			return *this;
		};
		bool operator==( composite_image_ie_us& ie )
		{
			if ( this == &ie ) return true;
			return 	m_Contrast == ie.m_Contrast
			&& m_PalleteColor == ie.m_PalleteColor
			&& m_USRegionCalibration == ie.m_USRegionCalibration
			&& m_USImage == ie.m_USImage
			&& m_VioLut == ie.m_VioLut
			&& 	composite_image_ie::operator==( ie );
		};
		bool operator!=( composite_image_ie_us& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmContrastBolusModule m_Contrast;
		CDcmPalleteColorLookUpModule m_PalleteColor;
		CDcmUSRegionCalibrationModule m_USRegionCalibration;
		CDcmUSImageModule m_USImage;
	//	CDcmOverLayPlaneModule m_OverLay;
		CDcmVioLutModule m_VioLut;
	};
	class image_ie_us  : public composite_image_ie_us
	{
	public:
		image_ie_us( CDcmCompositeIE* iod = NULL ) 
			: composite_image_ie_us( iod )
		{
			AddIeModule( m_OverLay ); 
		};
		image_ie_us(image_ie_us& ie) { *this = ie; };
		image_ie_us& operator=( image_ie_us& ie )
		{
			if ( this == &ie ) return *this;
			composite_image_ie_us::operator=(ie);
			m_OverLay = ie.m_OverLay;
			return *this;
		};
		bool operator==( image_ie_us& ie )
		{
			if ( this == &ie ) return true;
			return 	m_OverLay == ie.m_OverLay
			&& 	composite_image_ie_us::operator==( ie );
		};
		bool operator!=( image_ie_us& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmOverLayPlaneModule m_OverLay;
	};
	class image_ie_us_multi  : public composite_image_ie_us
	{
	public:
		image_ie_us_multi( CDcmCompositeIE* iod = NULL ) 
			: composite_image_ie_us( iod )
		{
			AddIeModule( m_Cine ); 
			AddIeModule( m_MultiFrame ); 
		};
		image_ie_us_multi(image_ie_us_multi& ie) { *this = ie; };
		image_ie_us_multi& operator=( image_ie_us_multi& ie )
		{
			if ( this == &ie ) return *this;
			composite_image_ie_us::operator=( ie );
			m_Cine= ie.m_Cine;
			m_MultiFrame = ie.m_MultiFrame;
			return *this;
		};
		bool operator==( image_ie_us_multi& ie )
		{
			if ( this == &ie ) return true;
			return m_Cine == ie.m_Cine
				&& m_MultiFrame == ie.m_MultiFrame
				&& 	composite_image_ie_us::operator==( ie );
		};
		bool operator!=( image_ie_us_multi& ie )
		{
			return !operator==( ie );
		};
	public:
		CDcmCineModule m_Cine;
		CDcmMultiFrameModule m_MultiFrame;
	};
	public:
// File Meta Information Version (0002,0001) 1
// Media Storage SOP Class UID (0002,0002) 1
// Media Storage SOP Instance UID (0002,0003) 1
// Transfer Syntax UID (0002,0010) 1
// Implementation Class UID (0002,0012) 1
// Implementation Version Name (0002,0013) 3
// Source Application Entity Title (0002,0016) 3
// Private Information Creator UID (0002,0100) 3
// Private Information (0002,0102) 1C
		CDcmMetaFileInformation m_MetaFile;
};

#endif // !defined(AFX_DCMDERIVEDIOD_H__14D3C96B_4773_4E74_848A_1B2C62E284C3__INCLUDED_)
