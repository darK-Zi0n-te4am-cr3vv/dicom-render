// DcmAudioModule.h: interface for the CDcmAudioModule class.
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
#if !defined(AFX_DCMAUDIOMODULE_H__447BCE20_079F_4525_9E0B_16ECB53275A6__INCLUDED_)
#define AFX_DCMAUDIOMODULE_H__447BCE20_079F_4525_9E0B_16ECB53275A6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DcmModule.h"
#include "DcmReferencedSOPSequence.h"
// C.10.3 Audio module
// This Module defines Attributes that describe characteristics of audio curves.
class AFX_EXT_CLASS CDcmAudioModule : public CDcmModule  
{
public:
	DECLARE_SERIAL( CDcmAudioModule );
public:
	CDcmAudioModule(const CString& Group_Hex = "5000");
	CDcmAudioModule(CDcmAudioModule& module);
	virtual ~CDcmAudioModule();
public:
	CDcmAudioModule& operator=( CDcmAudioModule& module );
public:
// Indicates the type of Audio Sample Data.
// Enumerated Values:
// 0000H = none
// 0001H = Doppler Audio
// 0002H = Voice Audio
// 0003H = Phono Audio
	const unsigned short& AudioType();
	void AudioType(const unsigned short Tag_50xx_2000_1_US_VM_1);
public:
// Format of the Audio Sample Data.
// Enumerated Values: 0000H = 16 bit 2's complement, interleaved per channel: channel 0 sample
// 0, channel 1 sample 0, channel 0 sample1, channel 1 sample 1 
// 0001H = 8 bit 2’s complement, interleaved
// per channel: channel 0 sample 0, channel1 sample 0, channel 0 sample 1, channel 1 sample 1
	const unsigned short& AudioSampleFormat();
	void AudioSampleFormat(const unsigned short Tag_50xx_2002_1_US_VM_1);
public:
// Number of Audio Channels. Enumerated
// Values:
// 0000H = mono
// 0001H = stereo
	const unsigned short& NumberOfChannels();
	void NumberOfChannels(const unsigned short Tag_50xx_2004_1_US_VM_1);
public:
// The number of audio samples for one
// channel. Each channel will have this many
// samples.
	const unsigned long& NumberOfSamples();
	void NumberOfSamples(const unsigned long Tag_50xx_2006_1_UL_VM_1);
public:
// Number of samples per second at which
// audio data was acquired. The temporal
// axis is linear.
	const unsigned long& SampleRate();
	void SampleRate(const unsigned long Tag_50xx_2008_1_UL_VM_1);
public:
// Length of real time that the audio data
// covers ( in microseconds).
	const unsigned long& TotalTime();
	void TotalTime(const unsigned long Tag_50xx_200A_1_UL_VM_1);
public:
// Audio sample data values. The amplitude
// representation of the audio sample data is
// linear.
	CByteArray& AudioSampleData();
	void AudioSampleData(const CByteArray& Tag_50xx_200C_1_OB_VM_1);
public:
// A Sequence which provides reference to a
// set of Image SOP Class/Instance pairs to
// which this audio applies. One or more
// Items may be included in this Sequence.
	CDcmSopSequence& ReferencedImage();
protected:
// Constructs module dataset. 
	virtual void InitializeModule();
private:
	CDcmSopSequence m_ReferencedImage_0008_1140_3;
	CString m_Group;
};

#endif // !defined(AFX_DCMAUDIOMODULE_H__447BCE20_079F_4525_9E0B_16ECB53275A6__INCLUDED_)
