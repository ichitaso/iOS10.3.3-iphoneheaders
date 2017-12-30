/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCMediaStreamDelegate.h>

@protocol AVCVideoStreamDelegate;
@class AVConferenceXPCClient, AVCMediaStreamConfig, VCVideoStream, NSDictionary, NSString;

@interface AVCVideoStream : NSObject <VCMediaStreamDelegate> {

	AVConferenceXPCClient* _connection;
	AVCMediaStreamConfig* _configuration;
	id<AVCVideoStreamDelegate> _delegate;
	VCVideoStream* _opaqueStream;
	int _streamToken;
	NSDictionary* _capabilities;

}

@property (nonatomic,retain) NSDictionary * capabilities;                                      //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) AVCMediaStreamConfig * configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) int direction; 
@property (assign,getter=isRTCPEnabled,nonatomic) char rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) char rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) char rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec; 
@property (nonatomic,readonly) int streamToken;                                                //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,nonatomic) id<AVCVideoStreamDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)capabilities;
-(void)setDelegate:(id<AVCVideoStreamDelegate>)arg1 ;
-(void)dealloc;
-(id<AVCVideoStreamDelegate>)delegate;
-(void)stop;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(void)start;
-(void)setConfiguration:(AVCMediaStreamConfig *)arg1 ;
-(void)resume;
-(AVCMediaStreamConfig *)configuration;
-(void)pause;
-(void)refreshLoggingParameters;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didStartStream:(char)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(char)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(char)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(char)arg2 error:(id)arg3 dictionary:(id)arg4 ;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 callID:(id)arg4 error:(id*)arg5 ;
-(id)getStats;
-(NSDictionary *)capabilities;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(int)streamToken;
-(id)initWithIDSDestination:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(char)configure:(id)arg1 error:(id*)arg2 ;
-(void)updateVideoConfiguration:(id)arg1 ;
-(void)requestLastDecodedFrame;
-(void)setRtcpEnabled:(char)arg1 ;
-(char)isRTCPEnabled;
-(void)setRtpTimeOutEnabled:(char)arg1 ;
-(char)isRTPTimeOutEnabled;
-(void)setRtcpTimeOutEnabled:(char)arg1 ;
-(char)isRTCPTimeOutEnabled;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(double)rtpTimeOutIntervalSec;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(double)rtcpTimeOutIntervalSec;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(double)rtcpSendIntervalSec;
@end
