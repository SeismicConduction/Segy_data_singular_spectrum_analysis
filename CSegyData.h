// SegyData.h: interface for the CSegyData class.
//
//////////////////////////////////////////////////////////////////////

#ifndef CSEGYDATA_H
#define CSEGYDATA_H
#if _MSC_VER > 1000
#pragma once
#endif 

#include <stdlib.h>
#include <stdio.h>
#include <io.h>
#include <string.h>
#include <cstring>
#ifndef SAFERELEASE
#define SAFERELEASE(X) {if(X){delete X; X=NULL;}}
#define SAFERELEASEARRAY(X) {if(X){delete[] X; X=NULL;}}
#endif

#define  Float32	1	/* Beyong to Binary */
#define  Int32		2	/* Beyong to Binary */
#define  Int16		3	/* Beyong to Binary */
#define  Int32W		4	/* Beyong to Binary */

/****************** tape head describe *************************************/
struct ReelHead
{
	struct{
		char card[5];          /*= "C01 "*/
		char client0[8];       /*= "CLIENT "*/
		char client[20];
		char company0[10];     /*= "COMPANY "*/
		char company[20];
		char crewno0[10];      /*= "CROW NO "*/
		char crewno[7];
	}    card1;

	struct{
		char card[5];      /*="C02 "*/
		char line0[6];      /*="LINE "*/
		char line[20];
		char area0[6];      /*="AREA "*/
		char area[20];
		char mapid0[8];      /*="MAP ID "*/
		char mapid[15];
	}    card2;

	struct{
		char card[5];      /*="C03 "*/
		char reelno0[9];      /*="REEL NO "*/
		char reelno[20];
		char cc[25];
		char observer0[11];      /*="OBSERVER "*/
		char observer[10];
	}    card3;

	struct{
		char card[5];      /*="C04 "*/
		char cc[75];
	}    card4;

	struct{
		char card[5];      /*="C05 "*/
		char c1[20];      /*="DATA TRACES/RECORD "*/
		char traceperrecord[5];
		char auxtrace0[11];      /*="AUX TRACE "*/
		char auxtrace[9];
		char sumfold0[10];      /*="SUM FOLD "*/
		char sumfold[5];
		char cdpfold0[10];      /*="CDP FOLD "*/
		char cdpfold[5];
	}    card5;
	struct{
		char card[5];      /*="C06 "*/
		char c1[18];      /*="SAMPLES INTERVAL "*/
		char interval[10];
		char c2[14];      /*="SAMPES/TRACE "*/
		char samplesnum[10];
		char c3[14];      /*="BYTES/SAMPLE "*/
		char size[9];
	}    card6;
	struct{
		char card[5];      /*="C07 "*/
		char c1[18];      /*="RECORDING FORMAT "*/
		char format0[7];
		char c2[18];      /*="FORMAT THIS REEL "*/
		char format[7];
		char c3[20];      /*="MEASUREMENT SYSTEM "*/
		char measure[5];
	}    card7;
	struct{
		char card[5];      /*="C08 "*/
		char c1[23];      /*="SAMPLE CODE  FLOATING "*/
		char samplecode[10];
		char c2[42];
	}    card8;
	struct{
		char card[5];      /*="C09 "*/
		char c1[11];      /*="GAIN TYPE "*/
		char gaintype[20];
		char c2[12];      /*="GAIN LEVEL "*/
		char gainlevel[32];
	}card9;
	struct{
		char card[5];      /*="C10 "*/
		char c[75];
	}    card10;
	struct{
		char card[5];      /*="C11 "*/
		char c[75];
	}    card11;
	struct{
		char card[5];      /*="C12 "*/
		char c[75];
	}    card12;
	struct{
		char card[5];      /*="C13 "*/
		char c[75];
	}    card13;
	struct{
		char card[5];      /*="C14 "*/
		char c[75];
	}    card14;
	struct{
		char card[5];      /*="C15 "*/
		char c[75];
	}    card15;
	struct{
		char card[5];      /*="C16 "*/
		char c[75];
	}    card16;
	struct{
		char card[5];      /*="C17 "*/
		char c[75];
	}    card17;
	struct{
		char card[5];      /*="C18 "*/
		char c1[20];      /*="TRACES SORTED BY : "*/
		char sort[55];
	}    card18;
	struct{
		char card[5];      /*="C19 "*/
		char c[75];      /*="AMPLITUDE RECOVERY "*/
	}    card19;
	struct{
		char card[5];      /*="C20 "*/
		char c1[16];      /*="MAP PROJECTION "*/
		char project[14];
		char c2[10];      /*="ZONE ID "*/
		char zone[10];
		char c3[18];      /*="COORDINATE UNITS "*/
		char units[7];
	}card20;
	struct{
		char card[5];      /*="C21 "*/
		char c[75];
	}card21;
	struct{
		char card[5];      /*="C22 "*/
		char c[75];
	}card22;
	struct{
		char card[5];      /*="C23 "*/
		char c[75];
	}card23;
	struct{
		char card[5];      /*="C24 "*/
		char c[75];
	}card24;
	struct{
		char card[5];      /*="C25 "*/
		char c[75];
	}card25;
	struct{
		char card[5];      /*="C26 "*/
		char c[75];
	}card26;
	struct{
		char card[5];      /*="C27 "*/
		char c[75];
	}card27;
	struct{
		char card[5];      /*="C28 "*/
		char c[75];
	}card28;
	struct{
		char card[5];      /*="C29 "*/
		char c[75];
	}card29;
	struct{
		char card[5];      /*="C30 "*/
		char c[75];
	}card30;
	struct{
		char card[5];      /*="C31 "*/
		char c[75];
	}card31;
	struct{
		char card[5];      /*="C32 "*/
		char c[75];
	}card32;
	struct{
		char card[5];      /*="C33 "*/
		char c[75];
	}card33;
	struct{
		char card[5];      /*="C34 "*/
		char c[75];
	}card34;
	struct{
		char card[5];      /*="C35 "*/
		char c[75];
	}card35;
	struct{
		char card[5];      /*="C36 "*/
		char c[75];
	}card36;
	struct{
		char card[5];      /*="C37 "*/
		char c[75];
	}card37;
	struct{
		char card[5];      /*="C38 "*/
		char c[75];
	}card38;
	struct{
		char card[5];      /*="C39 "*/
		char c[75];
	}card39;
	struct{
		char card[5];      /*="C40 "*/
		char c[75];      /*="END EBCDIC "*/
	}card40;
};                  



/******************************Line Head describe ***************************/
struct  LineHead
{
	long int jobnum;
	long int linenum;   /* only one line per reel */
	long int reelnum;
	short      tracenum;  /* number of data traces per record */
	short      auxtrace;  /* number of auxiliary traces per record */
	short      interval; /* for this reel of data */
	short      interval0;  /* for original field recording */
	short      samplenum;/* for this reel of data */
	short      samplenum0; /* for original field recording */
	short      dataform;  /* 1 = float point(4B), 2 = fixed point(4B) */
	/* 3 = fixed point(2B)                      */
	/* 4 = fixed point w/gain code(4B)          */
	short      cdpfold;   /* expected number of data trace per CDP ensemble */
	char     rest[372];
};

/***************************** Trace Head describe ***************************/
struct TraceHead
{
	int   TraceLsNum;                      /* 1:     1-4    һ�������еĵ�˳��š����һ�����������ɾ�Ŵ���˳�����������*/
	int   TraceRsNum;                     /* 2:     5-8    �ڱ���Ŵ��еĵ�˳��š�ÿ����ĵ�˳��*/
	int   RecordNum;                      /* 3:     9-12   �Ŵ�1 ��ʼ��ԭʼ��Ұ���¼�� */
	int   TrNum;                          /* 4:    13-16   ��ԭʼҰ���¼�еĵ���*/
	int   EnergySourcePointNum;           /* 5:    17-20   ��Դ��ţ���ͬһ��������ж���һ����¼ʱʹ�ã�*/
	int   CdpNum;                         /* 6:    21-24   CMP ��*/
	int   TrNumCdp;                       /* 7:    25-28   ��CMP �����еĵ��ţ���ÿ��CMP �����е��Ŵ�1 ��ʼ�� */
	short  TraceId;                           /* 8:    29-30   ��ʶ���룺
										   1=�������� 4=ʱ�� 7=��¼
										   2=���� 5= ����ʱ�� 8=ˮ��
										   3=DUMMY 6=ɨ��� 9~N=ѡ��ʹ�ã�N=32767��
										   */
	short  NumVerStackedTraces;            /* 9:    31-32  ������һ���Ĵ�ֱ���ӵ���(1 ��һ����2 ��������ӣ���) */
	short  NumHorStackedTraces;            /* 10:   33-34  ������һ����ˮƽ���ӵ���(1 ��һ����2 ��������ӣ���)*/
	short  DataUse;                        /* 11:   35-36  ��������: 1=���� 2=���� */
	int   ShotRecOffset;                  /* 12:   37-40  ���ڵ㵽���յ�ľ��루������෴�򼤷�Ϊ��ֵ�� */
	int   ReceiverElevation;              /* 13:   41-44  ���յ�̡߳����ں�ƽ��ĸ߳�Ϊ�������ں�ƽ��Ϊ��*/
	int   SubfaceElevationAtSource;       /* 14:   45-48  �ڵ�ĵ���߳�*/
	int   SourceDepthBelowSurface;        /* 15:   49-52  �ڵ���ڵ������ȣ�������*/
	int   DatumElevationAtReceiver;       /* 16:   53-56  ���յ�Ļ�׼��߳�*/
	int   DatumElevationAtSource;         /* 17:   57-60  �ڵ�Ļ�׼��߳�*/
	int   WaterDepthAtSource;             /* 18:   61-64  �ڵ��ˮ��*/
	int   WaterDepthAtGroup;              /* 19:   65-68  ���յ��ˮ��*/
	short  ElevScale;                      /* 20:   69-70  ��41��68 �ֽ��е����и̺߳����Ӧ���˴����Ӹ�����ֵ��
										   �������ӣ�1����10����100����l000 ���ߡ�l0000�����Ϊ�����������ӣ�
										   ���Ϊ�������������*/
	short  CoordinateScale;                /* 21:   71-72  ���Ϊ������������ӡ�
										   ��73��88 �ֽ��е���������Ӧ���˴����Ӹ�����ֵ��
										   �������ӣ�1����10����100����l000 ���ߡ�l0000��
										   ���Ϊ�����������ӣ����Ϊ�������������*/
	int   SourceX;                        /* 22:   73-76  �ڵ�����----X 
										  ������굥λ�ǻ��Ȼ��룬X ֵ�����ȣ�Y ֵ����γ�ȡ�
										  ��ֵ����������������߶����߳������������
										  ��ֵ��Ϊ�������ϵ�����*/
	int   SourceY;                        /* 23:   76-80  �ڵ�����----Y*/
	int   GroupX;                         /* 24:   81-84  ���յ�����----X*/
	int   GroupY;                         /* 25:   85-88  ���յ�����----Y*/
	short  CoordinateUnits;                /* 26:   89-90  ���굥λ��1�����ȣ��׻���Ӣ�ߣ���2�����Ȼ���*/
	short  WeatheringVelocity;             /* 27:   91-92  �绯���ٶ�*/
	short  SubWeatheringVelocity;          /* 28:   93-94  �绯���µ��ٶ�*/
	short  UpholeTimeAtSource;             /* 29:   95-96  ��Դ���ľ���ʱ��*/
	short  UpholeTimeAtGroup;              /* 30:   97-98  ���յ㴦�ľ���ʱ��*/
	short  SourceStaticCorrection;         /* 31:  99-100  �ڵ�ľ�У��*/
	short  GroupStaticCorrection;          /* 32: 101-102  ���յ�ľ�У��*/
	short  TotalStatic;                    /* 33: 103-104  Ӧ�õ��ܾ�У����(���û��Ӧ�þ�У��Ϊ��)*/
	short  LagTimeA;                       /* 34: 105-106  �ӳ�ʱ��-A����ms ��ʾ��240 �ֽڵĵ���ʶ�Ľ�����ʱ���ź�֮���ʱ�䡣
										   ���ʱ���źų����ڵ�ͷ����֮ǰΪ����
										   ���ʱ���źų����ڵ�ͷ����֮��Ϊ����
										   ʱ���źž�����ʼ���壬����¼�ڸ������ϻ����ɼ�¼ϵͳָ��*/
	short  LagTimeB;                      /* 35: 107-108  ʱ���ӳ�-B����ms ��ʾ��Ϊʱ���źź�������֮���ʱ�䡣�����ɸ�*/
	short  RecordingDelay;                /* 36: 109-110  ʱ���ӳ�ʱ�䣬��ms ��ʾ��
										  ����Դ����ʱ��Ϳ�ʼ��¼��������֮���ʱ��
										  ����ˮʱ�����ݼ�¼����ʱ���㿪ʼ����*/
	short  MuteTimeStart;                 /* 37: 111-112  ��ʼ�г�ʱ��*/
	short  MuteTimeEnd;                   /* 38: 113-114  �����г�ʱ��*/
	short  NumberSamples;                 /* 39: 115-116  �����Ĳ�������*/
	short  SampleInterval;                /* 40: 117-118  �����Ĳ���������� us ��ʾ*/
	short  InstrumentGainType;            /* 41: 119-120  Ұ���������������ͣ�
										  1=�̶����� 2=����������
										  3=�������� 4~N=ѡ��ʹ��
										  */
	short  GainConstant;                  /* 42: 121-122  �������泣��*/
	short  InitialGain;                   /* 43: 123-124  ������ʼ����(dB)*/
	short  CorrelatedTrace;               /* 44: 125-126  ����� 1=û����� 2=���*/
	short  SweepFreqAtStart;              /* 45: 127-128  ��ʼɨ��Ƶ��*/
	short  SweepFreqAtEnd;                /* 46: 129-130  ����ɨ��Ƶ��*/
	short  SweepLength;                   /* 47: 131-132  ɨ�賤�ȣ���ms ��ʾ*/
	short  SweepType;                     /* 48: 133-134  ɨ�����ͣ� 1=���� 2=������ 3=ָ�� 4=���� */
	short  SweepStartTaperLength;         /* 49: 135-136  ɨ�����ʼб�³��ȣ���ms ��ʾ */
	short  SweepEndTaperLength;           /* 50: 137-138  ɨ�������б�³��ȣ���ms ��ʾ  */
	short  TaperType;                     /* 51: 139-140  б�����ͣ� 1=���� 2=COSP2       3=����  */
	short  AliasFilterFreq;               /* 52: 141-142  �˼�Ƶ��Ƶ�ʣ����ʹ�ã�*/
	short  AliasFilterSlope;              /* 53: 143-144  �˼�Ƶ�Ķ���*/
	short  NotchFilterFreq;               /* 54: 145-146  �ݲ����ʣ����ʹ�ã�*/
	short  NotchFilterSlope;              /* 55: 147-148  �ݲ�����*/
	short  LowCutFreq;                    /* 56: 149-150  �ͽ�Ƶ�ʣ����ʹ�ã�*/
	short  HighCutFreq;                   /* 57: 151-152  �߽�Ƶ�ʣ����ʹ�ã�*/
	short  LowCutSlope;                   /* 58: 153-154  �ͽ�Ƶ�ʶ���*/
	short  HighCutSlope;                  /* 59: 155-156  �߽�Ƶ�ʶ���*/
	short  Year;                          /* 60: 157-158 =0  ���ݼ�¼����*/
	short  Day;                           /* 61: 159-160 =0  ��*/
	short  Hour;                          /* 62: 161-162 =0  Сʱ��24 ʱ�ƣ�*/
	short  Minute;                        /* 63: 163-164 =0  ��*/
	short  Second;                        /* 64: 165-166 =0  ��*/
	short  TimeCode;                      /* 65: 167-168     ʱ����룺 1=����ʱ�� 2=��������ʱ�� 3=����*/
	short  TrWeightFactor;                /* 66: 169-170     ����Ȩ���ӡ�����С��Чλ����Ϊ2**���DN����N=0��1��2������32767��*/
	short  GroupNumberOfRollSwitch;       /* 67: 171-172 =0  ���ǿ���λ��1 �ļ첨������*/
	short  GroupNumOf1stTrcInOrig;        /* 68: 173-174 =0  ��ԭʼҰ���¼�е���1 �ļ첨����*/
	short  GroupNumOfLastTrcInOrig;       /* 69: 175-176 =0  ��ԭʼҰ���¼�е������һ���ļ첨����*/
	short  GapSize;                       /* 70: 177-178     ȱ�ڴ�С���������ܵ�����   */
	short  TaperOvertravely;              /* 71: 179-180     �ڲ��ߵĿ�ʼ���߽�������б��λ�ã�*/
	 //int  DataTrnum;									  //1=�ں��� 2=��ǰ��																	*/
	short  DataTrnum;                     /* 72: 181-182    total traces of data */
	char   Tmp1[2];                       /* 73: 183-184    not used */
	int   SourceResidualStaticCor;       /* 74: 185-188    */
	int   GroupResidualStaticCor;        /* 75: 189-192    */
	short  CmpDatumStaticCor;             /* 76: 193-194    */
	short  GroupStaNum;                   /* 77: 195-196    */               
	short  Linenum3dBack;                 /* 78: 197-198    */
	char   Tmp2[2];					      /* 79: 199-200    not used */
	int   CmpX;                          /* 80: 201-204    */
	int   CmpY;                          /* 81: 205-208    */
	int   CoordinateProjectType;         /* 82: 209-212    */
	int   WaterDepthAtCdp;               /* 83: 213-216    */
	short  FieldFileNum;                  /* 84: 217-218    */
	short  SourceStaNum;                  /* 85: 219-220    */
	short  CmpElevation;                  /* 86: 221-222    */
	short  CmpStaNum;                     /* 87: 223-224    */
	short  TMin;                          /* 88: 225-226    */
	short  TMax;                          /* 89: 227-228    */
	int   DatumTime;                     /* 90: 229-232    */
	int   DatumVelo;                     /* 91: 233-236    */
	char   Tmp3[2];                       /* 92: 237-238    not used */
	short  Dimension;                     /* 93: 239-240:   0 for 2D and 1 for 3D*/
};

class CSegyData  
{
public:
	CSegyData();
	CSegyData(char* segyFileName,int segyFileType);
	virtual ~CSegyData();

public:

	char*		m_segyFileName;
    
	ReelHead	m_reelHead;//3200 bytes
	LineHead	m_lineHead;//400 bytes
	TraceHead	m_traceHead;//240 bytes

	int			m_dataTraceNo; //seg-y file total data trace number

	__int64			m_traceBytes; //bytes per trace
	int			m_segyFileType;//0 --- tape file  1----disk file
	void		swapSegyTraceHeadBytes(TraceHead &trackHead );//240 bytes
private:
	char *			m_buffer;
	bool            m_bSegyFileOpened;

	int  m_fileSegy;

public:
	int     GetSegyTotalTraceNumber();//�ܵ���
	int     GetSegySampleNumber();//ÿ��������
	int     GetSegyTimeInterval();//in ����
	int     GetSegyDataFormat();//	1 = float point(4B), 	2 = fixed point(4B) 3 = fixed point(2B)	4 = fixed point w/gain code(4B)          
	int     GetSegyFileType();//0 --- tape file  1----disk file
	char*   GetSegyFileName();

	int      GetTraceBytes();

	ReelHead     GetSegyReelHead();//3200 bytes
	LineHead     GetSegyLineHead();//400 bytes
	TraceHead    GetSegyTraceHead();//240 bytes

	bool     OpenSegyFile(const char* segyFileName,const int segyFileType);
	bool     CloseSegyFile( void );

	//�����������ţ���ȡһ�������
	//���� int nTraceIndex       : �������ţ���0��ʼ����( ��Χ�� 0 <--> GetSegyTotalTraceNumber() - 1 )
	//���� TraceHead *pTraceHead : ���ص�ͷָ��
	//���� float *pTraceData     : ���ص�����������ָ�루����ΪGetSegySampleNumber()��
	//����ֵ���Ƿ��ȡ�ɹ���ͨ��������������ŷ�Χ��ȷ�����ǻ᷵��true
	bool     ReadOneTrace(__int64 nTraceIndex, TraceHead *pTraceHead, float *pTraceData);

	//�����������ţ���ȡһ�������
	//���� int nTraceIndex         : �������ţ���0��ʼ����( ��Χ�� 0 <--> GetSegyTotalTraceNumber() - 1 )
	//���� float *pTraceData     : ���ص�����������ָ�루����ΪGetSegySampleNumber()��
	//����ֵ���Ƿ��ȡ�ɹ���ͨ��������������ŷ�Χ��ȷ�����ǻ᷵��true
	bool     ReadOneTrace(__int64 nTraceIndex, float *pTraceData);

	//�����������ţ���ȡһ�������
	//���� int nTraceIndex         : �������ţ���0��ʼ����( ��Χ�� 0 <--> GetSegyTotalTraceNumber() - 1 )
	//���� TraceHead *pTraceHead : ���ص�ͷָ��
	//����ֵ���Ƿ��ȡ�ɹ���ͨ��������������ŷ�Χ��ȷ�����ǻ᷵��true
	bool     ReadOneTraceHeader(__int64 nTraceIndex, TraceHead *pTraceHead);
   /* bool     ReadTraceHeadPartInfo()*/
	bool	SplitSegyFile(const char *newSegyFileName ,
		const __int64 		m_jumpSamp,
		const __int64 		m_jumpTrace,
		const    short 		m_showSamp,
		const    int		m_showTrace	);
	bool	SegyToBinary(char *  w_buffer,//it's length must long enough ;
		const int &		m_jumpSamp,
		const int &		m_jumpTrace,
		const int &		m_showSamp,
		const int &		m_showTrace	);
	bool SegyToBinary(
		const __int64 		m_jumpSamp,
		const __int64		m_jumpTrace,
		const int &		m_showSamp,
		const int &		m_showTrace,
		const char * newBinFileName);
	bool	BinaryToSegy(const char* w_BINFileName,
		const int &		w_binDataType,  //1  --- 32bit float, 2----32bit integer 3----16bit integer
		const int &		w_segyFileType, //0 --- tape file  1----disk file
		const char *newSegyFileName,
		const int &		w_sampNum,
		const int &		w_startCDP,
		const int &		w_traceNum,
		const int &		w_timer);
	//bool WriteSegyFileHead(ReelHead & referReelHead, LineHead &referLineHead,);
	//bool Writer1TraceData2SegyFileEnd(int fdo, char * pCurrentTraceBuffer, long & nTraceIndex, int outTraceBytes, int m_segyFileType);
 //   
public:

	unsigned long	SegYToFloat( const unsigned long &data );
	long			SegYToFloat( const long &data );
	float			SegYToFloat( const float &data );

	unsigned long	FloatToSegy(const unsigned long &a);
	long			FloatToSegy(const long &a);
	float			FloatToSegy(const float &a);

	float			    SwapInt4(const float &ff);
	int				    SwapInt4(const int &ll);
	unsigned int	SwapInt4(const unsigned int &ll);
	long			SwapInt4(const long &ll);
	unsigned long	SwapInt4(const unsigned long &ll);
	short			SwapInt2(const short &ii);
	unsigned short	SwapInt2(const unsigned short &ll);
	void            SwapInt4(char *p);
	void            SwapInt4(char *p, int nCount);

public:

	float			ZPOW(const float &x,const int &y);
	bool			AnalyseSegyHeader( );
	void			swapSegyHeadBytes( );
	void	        swapSegyLineHeadBytes( LineHead	&lineHead);//400 bytes
};


#endif 
