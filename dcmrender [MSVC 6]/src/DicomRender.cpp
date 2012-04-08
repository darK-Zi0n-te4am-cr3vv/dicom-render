// DicomRender.cpp: implementation of the CDicomRender class.
//
//////////////////////////////////////////////////////////////////////

#include "StdAfx.h"

#include "DicomRender.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif


/* ctor/dtor */

CDicomRender::CDicomRender()
{
	
	
}

CDicomRender::~CDicomRender()
{

}

/* public methods */

void CDicomRender::Load(const char *fname)
{
	CFile file(fname, CFile::modeRead);
	
	Load(&file);	
}


void CDicomRender::Load(BYTE *buffer, DWORD len)
{
	/* здесь мы создаем MemFile (похож на фреймворковский MemoryStream) */

	CMemFile mFile(buffer, len);
	
	Load(&mFile);

	mFile.Detach();
}

DWORD CDicomRender::GetImagesCount()
{
	return m_Images.GetSize();
}

BOOL CDicomRender::RenderToHdc(DWORD imgIndex, HDC dc)
{
	if ((DWORD)m_Images.GetSize() <= imgIndex) 
		return FALSE;

	((CxImage*)m_Images[imgIndex])->Draw(dc); 
	return TRUE;
}

int CDicomRender::GetImageWidth(DWORD imgIndex)
{
	if ((DWORD)m_Images.GetSize() <= imgIndex) 
		return -1;

	return ((CxImage*)m_Images[imgIndex])->GetWidth();
}

int CDicomRender::GetImageHeight(DWORD imgIndex)
{
	if ((DWORD)m_Images.GetSize() <= imgIndex) 
		return -1;

	return ((CxImage*)m_Images[imgIndex])->GetHeight();
}


/* private methods */

void CDicomRender::ProcessImagePixelModule()
{
	CPtrArray &images = m_ImagePixelData;
	CDcmRegistry registry;
	CDcmImagePixelModule ipm;
	CDcmMetaFileInformation mfi;
	CDcmMultiFrameModule  mfm;
	CDcmVioLutModule vlm;
	CDcmModalityLUTModule mlm;

	m_iod >> ipm >> mfi >> mfm >> vlm >> mlm;

	CString syntax = mfi.TransferSyntaxUID();

	int TransferSyntax = registry.UidEnum( syntax );

	if ( TransferSyntax == CDcmRegistry::DcmUnDefinedUid )
	{
		 TransferSyntax = m_iod.IodSyntax();
	}
	if ( TransferSyntax >= CDcmRegistry::JPEG_Baseline_1_8 && 
		TransferSyntax <= CDcmRegistry::JPEG_2000  )
	{
	//	if ( TransferSyntax == CDcmRegistry::JPEG_LNHFOP_14 ) return;


		CObList list;
		ipm.GetPixelData(list);
	
		CByteArray* frame = NULL;
		int CurrentImage = 1;
		for ( POSITION pos = list.GetHeadPosition(); pos != NULL; list.GetNext(pos ), CurrentImage++ )
		{
			frame = (CByteArray*)list.GetAt( pos );
			ASSERT ( frame != NULL );
			if ( frame == NULL ) continue;
			if ( frame->GetSize() == 0 ) continue;
		
			
			::Sleep( 2 );
			CByteArray* temp = new CByteArray;
			temp->Copy( *frame );
			m_ImagePixelData.Add(  temp  );
		
		}
	
	}
	else
	{
		CByteArray* bitmap = NULL;
		CObList frame_list;
		switch ( TransferSyntax )
		{
			case CDcmRegistry::RLE_Lossless:
			case CDcmRegistry::ImplicitVRLittleEndian:
			case CDcmRegistry::ExplicitVRLittleEndian:
			case CDcmRegistry::ExplicitVRBigEndian:
				{
					CObList list;
					ipm.GetPixelData(list);
					// unele fisiere pot avea mai multe frame-uri dar au setul de date
					// corespunzator imaginii intr-un singur buffer fara delimitari
					// este necesara crearea unui buffer multi-frame
					if ( !mfm.NumberOfFrames().IsEmpty()  )
					{
						int frame_cnt = 0;
						::sscanf( mfm.NumberOfFrames(), "%d", &frame_cnt );
						if ( list.GetCount() == 1 && frame_cnt > 1 )
						{
							POSITION pos = list.GetHeadPosition();
							CByteArray* frame = (CByteArray*)list.GetAt( pos );
							if ( frame != NULL )
							{
								int frame_size = frame->GetSize() / frame_cnt;
								for ( int i = 0; i < frame_cnt; i++ )
								{
									CByteArray* temp = new CByteArray();	
									if ( temp != NULL )
									{
										temp->SetSize( frame_size );
										memcpy (temp->GetData(), frame->GetData()+(i*frame_size), frame_size ); 
										frame_list.AddTail( temp );
									}
								}
								list.RemoveAll();
								list.AddTail(&frame_list);
								// Convert to Multiframe 
								ipm.SetPixelData(list); 
							}
						}
					}
	
					int CurrentImage = 1;
					CByteArray* frame = NULL;
					for ( POSITION pos = list.GetHeadPosition(); pos != NULL; list.GetNext(pos ),
						CurrentImage++ )
					{
						frame = (CByteArray*)list.GetAt( pos );
						ASSERT ( frame != NULL );

						if ( frame == NULL ) continue;
						if ( frame->GetSize() == 0 ) continue;
					
						unsigned short width =	ipm.Columns();
						unsigned short height = ipm.Rows();
						unsigned short BitsPerPixel = ipm.BitsAllocated();
						unsigned short BitsStored = ipm.BitsStored();
						
						CByteArray RleDecode;
						CByteArray *temp = NULL;
						if ( TransferSyntax == CDcmRegistry::RLE_Lossless )
						{
							CString status;
							status.Format("Loading RLE Compressed Pixel Data Fragment %d of %d", CurrentImage, list.GetCount() );
							ipm.DcmRleDecode( *frame, RleDecode );
							temp = &RleDecode;
						}
						else
						{
							temp = frame;
							CString status;
							status.Format("Loading Native Pixel Data Fragment %d of %d", CurrentImage, list.GetCount() );
						}
						CByteArray ImageFragment;
						ImageFragment.Copy( *temp);
						int Photometric = registry.PhotoMetricEnum( ipm.PhotoMetricInterpretation() );
						switch ( BitsPerPixel )
						{
							case 8:
							{
								if ( Photometric == CDcmRegistry::DcmPalleteColor )
								{
									int NumberEntries = 0;
									int FirstStoredPixel = 0;
									int NumberBits = 0;
									if ( ipm.BlueLUTDescriptor().GetSize() >= 3 )
									{
										NumberEntries = ipm.BlueLUTDescriptor()[0];	
										FirstStoredPixel = ipm.BlueLUTDescriptor()[1];	
										NumberBits = ipm.BlueLUTDescriptor()[2];		
									}
								
									CByteArray FragmentDecode;
									FragmentDecode.SetSize( ImageFragment.GetSize() * 3 );
									int k = 0;
									CWordArray& Red = ipm.RedLUTData();
									CWordArray& Green = ipm.GreenLUTData();
									CWordArray& Blue = ipm.BlueLUTData();

									int shift = 0;
									if ( NumberBits > 8 )
									{
										shift = 8;
									}
									for ( int i = 0; i < ImageFragment.GetSize(); i++, k+=3 )
									{
										int LutIndex = ImageFragment[i];
										FragmentDecode[k+2]  = (BYTE)(Red[LutIndex] >> shift);
										FragmentDecode[k+1]  = (BYTE)(Green[LutIndex] >> shift);
										FragmentDecode[k]  = (BYTE)(Blue[LutIndex] >> shift); 
									}
									bitmap = MakeBitmap(&FragmentDecode, width, height, 24);
									if ( bitmap != NULL )
									{
										images.Add( bitmap );
									}
								}
								else if ( Photometric == CDcmRegistry::DcmRgb )
								{
									if ( ipm.PlanarConfiguration() == 1 )
									{
										int plane_size = ImageFragment.GetSize() / 3;
										CByteArray temp;
										temp.SetSize( ImageFragment.GetSize() );
										for ( int i = 0, k = 0 ; k < plane_size; i+=3, k++ )
										{
											temp[i+2] = ImageFragment[k];
											temp[i+1]= ImageFragment[plane_size + k];
											temp[i] = ImageFragment[2*plane_size + k];
										}
										bitmap = MakeBitmap(&temp, width, height, 24);
										if ( bitmap != NULL )
										{
											images.Add( bitmap );
										}
									}
									else
									{
										int BytesPerLine = width * 3;
										ASSERT ( ImageFragment.GetSize() >= (BytesPerLine * height) );
										if ( ImageFragment.GetSize() >= (BytesPerLine * height) )
										{
											for ( int k = 0; k < height; k++ )
											{
												BYTE* line = &ImageFragment[ k * BytesPerLine ];
												BYTE temp;
												for ( int i=0 ; i < BytesPerLine; i+=3 )
												{
													temp = line[i]; line[i] = line[i+2]; line[i+2] = temp;
												}
											}
										}
										bitmap = MakeBitmap(&ImageFragment, width, height, 24);
										if ( bitmap != NULL )
										{
											images.Add( bitmap );
										}
									}
								}
								else
								{
									bitmap = MakeBitmap(&ImageFragment, width, height, 8);
									if ( bitmap != NULL )
									{
										images.Add( bitmap );
									}
								}
							}
							break;

							case 16:
							{
								ApplyTransforms( ipm, vlm, mlm, ImageFragment );
								ImageFragment.SetSize( width * height );
								bitmap = MakeBitmap(&ImageFragment, width, height, 8);
								if ( bitmap != NULL )
								{
									images.Add( bitmap );
								}
							}
							break;
							default:
								ASSERT ( false );
							break;

						}
					} //end for
					
					for ( pos = frame_list.GetHeadPosition(); pos != NULL; frame_list.GetNext( pos ) )
						delete frame_list.GetAt ( pos ); 
			}
			break;
		default:
		break;
		}
	}
}

void CDicomRender::ApplyTransforms( CDcmImagePixelModule& ipm, CDcmVioLutModule& vlm,
		CDcmModalityLUTModule& mlm, CByteArray& PixelData )
{
	// Window and slope transforms defined in the standard 
	float w = 1;
	float c = 1;
	float k_1 = 0;
	float k_2 = 0;
	unsigned short BitsPerPixel = ipm.BitsAllocated();	
	unsigned short BitsUsed = ipm.BitsStored();

	bool window = false;
	if ( vlm.WindowWidth().GetSize() && vlm.WindowCenter().GetSize() )
	{
		::sscanf( vlm.WindowWidth()[0], "%f", &w );
		::sscanf( vlm.WindowCenter()[0], "%f", &c );
		k_1 = (float)((c - .5) - ((w-1)/2));	
		k_2 = (float)((c - .5) + ((w-1)/2));
		if ( w >= 1 )
		{
			window = true;
		}
	}
	float s = 1;
	float b = 0;
	int slope = false;
	if ( !mlm.RescaleSlope().IsEmpty() && !mlm.Intercept().IsEmpty() )
	{
		::sscanf( mlm.RescaleSlope(), "%f", &s );
		::sscanf( mlm.Intercept(), "%f", &b );
		if ( s > 0 )
		slope = true;
	}

	float k_Normalize = 0;
	int NormalizeContrast = false;
	float UpperBpp = 0xffff;
	float LowerBpp = 0;
	float SmallestPixel = ipm.SmallestImagePixelValue();
	float LargestPixel = ipm.LargestImagePixelValue();
	// use a linear contrast stretch 
   	if ( LargestPixel > 0 )
	{
		k_Normalize = (UpperBpp-LowerBpp)/(LargestPixel-SmallestPixel);
		NormalizeContrast = true;
	}
	
	int largest = 0xffff;
	int smallest = 0;
	for ( int i = 0, k = 0; (i+2) < PixelData.GetSize(); i+=2, k++ )
	{
		int temp = 0 ;
		memcpy (&temp, &PixelData[i], 2 );
		if ( slope )  temp =  (int)(s*temp + b);
		if ( window )
		{
		   if ( temp <=  k_1  )
		   {
				temp = smallest;
		   }
		   else if ( temp > k_2 ) 
		   {
				temp = largest;
		   }
		   else
		   {
				temp = (int)(((temp - (c-.5)) / (w-1) + .5) * (largest-smallest) + smallest);
		   }  
		}
		if ( NormalizeContrast ) temp = (int)(((float)(temp - SmallestPixel) * k_Normalize) + LowerBpp);
      // convert to 8 bit value
		PixelData[k] = (BYTE)( temp/257.0 + .5);
	}
	PixelData.SetSize(k);
}


CByteArray* CDicomRender::MakeBitmap(CByteArray* frame, int Width, int Height, int BitsPerPixel)
{
	CxImage image;
	int BytesPerline = Width;
	if ( BitsPerPixel == 24 ) BytesPerline *= 3 ;
	image.CreateFromArray(frame->GetData(), Width , Height, BitsPerPixel, BytesPerline, true );
	BYTE* buffer = NULL;
	long  size = 0;
	CByteArray* bmp = new CByteArray;
	image.Encode( buffer, size, CXIMAGE_FORMAT_BMP );
	bmp->SetSize( size );
	memcpy ( bmp->GetData(), buffer, size );
	delete buffer;
	return bmp;

}




void CDicomRender::Load(CFile *file)
{
	/* от него создаем архив */
	CArchive ar(file, CArchive::load);
	CArchive &arr = ar; 

	/* загружаем данные в IOD, не знаю, что такое ИОД лол */
	m_iod.Serialize(arr);

	/* закрываем */
	ar.Close();
	file->Close();

	/* обрабатываем загруженные картинки */
	m_ImagePixelData.SetSize(0);
	ProcessImagePixelModule();	

	/* складываем в массив */
	int i;
	for (i = 0; i < m_Images.GetSize(); i++)
	{
		delete ((CxImage*)m_Images[i]);
	}
	
	m_Images.SetSize(0);
	for (i = 0; i < m_ImagePixelData.GetSize(); i++)
	{
		CByteArray* frame = (CByteArray*)m_ImagePixelData[i];

		m_Images.Add(new CxImage);
		((CxImage*)m_Images[i])->Decode(frame->GetData(), frame->GetSize(), CXIMAGE_FORMAT_UNKNOWN);
	}
}

