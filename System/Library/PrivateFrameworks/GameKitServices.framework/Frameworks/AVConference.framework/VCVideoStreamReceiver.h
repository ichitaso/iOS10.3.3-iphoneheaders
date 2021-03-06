/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:50 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaStreamSyncDestination.h>

@protocol VCVideoStreamReceiverDelegate, OS_dispatch_queue, VCMediaStreamSyncSource;
@class VCVideoStreamRateAdaptation, NSObject, VideoAttributes, VCMediaStreamSynchronizer, VCMediaStreamStats, NSString;

@interface VCVideoStreamReceiver : NSObject <VCMediaStreamSyncDestination> {

	tagHANDLE* _hRTP;
	OpaqueVTDecompressionSessionRef _decompressionSession;
	char _receivedFirstPacket;
	char _receivedFirstRemoteFrame;
	unsigned short _lastSequenceNumber;
	int _sequenceNumberOutOfOrder;
	unsigned char _firSequenceNumber;
	double _lastFIRArrivalTime;
	VCVideoStreamRateAdaptation* _rateAdaptation;
	unsigned _mostRecentTimestamp;
	unsigned _lastVideoTimestamp;
	double _lastReceivedVideoRTPPacketTime;
	double _lastReceivedVideoRTCPPacketTime;
	unsigned _videoTimestampWrapCount;
	opaqueCMFormatDescriptionRef _formatDescription;
	id<VCVideoStreamReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _videoStreamReceiverQueue;
	OpaqueFigThreadRef _networkReceiveThread;
	char _runNetworkReceiveThread;
	int _sRecvReset;
	VideoPacketBuffer_tRef _videoPacketBuffer;
	VideoAttributes* _remoteVideoAttributes;
	VCMediaStreamSynchronizer* _mediaStreamSynchronizer;
	id<VCMediaStreamSyncSource> _syncSource;
	int _remoteVideoOrientation;
	int _remoteVideoCamera;
	char _enableCVO;
	unsigned _cvoExtensionID;
	unsigned long _lastKeyFrameSampleBufferSize;
	SCD_Struct_VC21 _lastFrameTime;
	SCD_Struct_VC21 _lastDisplayTime;
	VCMediaStreamStats* _stats;
	double _reportingIntervalStartTime;
	double _reportingLastUpdateTime;
	unsigned _receivedBytes;
	double _roundTripTime;
	unsigned _videoStallDurationMillis;
	double _videoStallStartTime;
	opaqueRTCReportingRef _reportingAgent;

}

@property (assign) int remoteVideoOrientation;                                        //@synthesize remoteVideoOrientation=_remoteVideoOrientation - In the implementation block
@property (assign,nonatomic) id<VCVideoStreamReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<VCMediaStreamSyncSource> syncSource;                  //@synthesize syncSource=_syncSource - In the implementation block
@property (assign) double roundTripTime;                                              //@synthesize roundTripTime=_roundTripTime - In the implementation block
@property (readonly) double lastReceivedVideoRTPPacketTime;                           //@synthesize lastReceivedVideoRTPPacketTime=_lastReceivedVideoRTPPacketTime - In the implementation block
@property (readonly) double lastReceivedVideoRTCPPacketTime;                          //@synthesize lastReceivedVideoRTCPPacketTime=_lastReceivedVideoRTCPPacketTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<VCVideoStreamReceiverDelegate>)arg1 ;
-(void)dealloc;
-(id<VCVideoStreamReceiverDelegate>)delegate;
-(void)gatherRealtimeStats:(CFDictionaryRef)arg1 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 ;
-(void)startVideo;
-(void)stopVideo;
-(char)startSynchronization:(id)arg1 ;
-(void)stopSynchronization;
-(long)stopNetworkReceiveThread;
-(void)teardownDecodeSession:(char)arg1 ;
-(void)setEnableRateAdaptation:(char)arg1 maxBitrate:(unsigned)arg2 minBitrate:(unsigned)arg3 adaptationInterval:(double)arg4 ;
-(long)startNetworkReceiveThread;
-(void)setSyncSource:(id<VCMediaStreamSyncSource>)arg1 ;
-(long)processVideoRTP;
-(long)processVideoRTCP;
-(void)updateVideoStallStatus:(char)arg1 ;
-(long)decodeBuffer:(char*)arg1 size:(unsigned long)arg2 timestamp:(unsigned)arg3 hostTime:(double)arg4 ;
-(void)scheduleVideoDecode:(unsigned*)arg1 schedule_n:(int)arg2 ;
-(void)updateSequenceNumber:(unsigned short)arg1 ;
-(void)setRoundTripTime:(double)arg1 ;
-(long)decodeFrame:(opaqueCMSampleBufferRef)arg1 showFrame:(char)arg2 ;
-(void)createDecodeSession:(opaqueCMFormatDescriptionRef)arg1 ;
-(char)handleRemoteVideoAttributesChange:(CVBufferRef)arg1 ;
-(double)roundTripTime;
-(id)initWithRTP:(tagHANDLE*)arg1 delegate:(id)arg2 reportingAgent:(opaqueRTCReportingRef)arg3 ;
-(void)setEnableCVO:(char)arg1 cvoExtensionID:(unsigned)arg2 ;
-(void)pauseVideo;
-(void*)networkReceivePackets;
-(void)rtcpSendIntervalElapsed;
-(long)showDecodedFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_VC21)arg2 ;
-(int)remoteVideoOrientation;
-(void)setRemoteVideoOrientation:(int)arg1 ;
-(double)lastReceivedVideoRTPPacketTime;
-(double)lastReceivedVideoRTCPPacketTime;
-(id<VCMediaStreamSyncSource>)syncSource;
@end

