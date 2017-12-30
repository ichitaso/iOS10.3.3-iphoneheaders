/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:49 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVConferenceDelegate, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, NSObject, NSDictionary, CALayer, NSMutableDictionary, NSTimer;

@interface AVConference : NSObject {

	AVConferenceXPCClient* connection;
	id opaqueConf;
	char useServer;
	NSObject*<AVConferenceDelegate> _delegate;
	NSDictionary* serverBag;
	CALayer* remoteLayerFront;
	CALayer* remoteLayerBack;
	CALayer* remoteSubLayerFront;
	CALayer* remoteSubLayerBack;
	char _isUsingFrontCamera;
	char _microphoneMuted;
	NSMutableDictionary* _stateCacheForCallID;
	NSObject*<OS_dispatch_queue> _stateQueue;
	char shouldDisplayNetworkQualityGraph_;
	NSTimer* networkQualityUpdateTimer_;
	CALayer* networkQualityGraphLayer_;

}

@property (retain) CALayer * networkQualityGraphLayer; 
@property (retain) NSTimer * networkQualityUpdateTimer; 
@property (assign) char shouldDisplayNetworkQualityGraph; 
@property (getter=isUsingViceroyBlobFormat) char useViceroyBlobFormat; 
@property (assign,nonatomic) NSObject*<AVConferenceDelegate> delegate; 
@property (assign,getter=isMicrophoneMuted,nonatomic) char microphoneMuted;                                            //@synthesize microphoneMuted=_microphoneMuted - In the implementation block
@property (assign,getter=isInputFrequencyMeteringEnabled,nonatomic) char inputFrequencyMeteringEnabled; 
@property (assign,getter=isOutputFrequencyMeteringEnabled,nonatomic) char outputFrequencyMeteringEnabled; 
@property (assign,getter=isOutputMeteringEnabled,nonatomic) char outputMeteringEnabled; 
@property (assign,getter=isInputMeteringEnabled,nonatomic) char inputMeteringEnabled; 
@property (readonly) float outputMeterLevel; 
@property (readonly) float inputMeterLevel; 
@property (assign,nonatomic) char requiresWifi; 
@property (readonly) int localFrameHeight; 
@property (readonly) int localFrameWidth; 
@property (getter=isSpeakerPhoneEnabled) char enableSpeakerPhone; 
@property (readonly) unsigned natType; 
+(void)refreshLoggingParameters;
+(void)startAudioSession;
+(void)startAudioSessionWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)stopAudioSession;
+(char)hasActiveAudioSession;
+(unsigned)doBlockingConnectionCheck:(char)arg1 ;
+(unsigned)doBlockingConnectionCheck;
+(short)addressPointerFromBlob:(id)arg1 ;
+(id)externalAddressForSelfConnectionBlob:(id)arg1 ;
+(void)setAudioSessionProperties:(id)arg1 ;
-(id)init;
-(void)setDelegate:(NSObject*<AVConferenceDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<AVConferenceDelegate>)delegate;
-(char)setActive:(char)arg1 ;
-(float)networkQuality;
-(void)stopListeningForNotifications;
-(void)handleGKSConnectivitySettingsUpdate:(id)arg1 ;
-(void)updateGKSConnectivitySettings;
-(id)initWithClientUUID:(id)arg1 ;
-(id)initWithClientUUID:(id)arg1 transportType:(unsigned)arg2 ;
-(void)setShouldDisplayNetworkQualityGraph:(char)arg1 ;
-(char)shouldDisplayNetworkQualityGraph;
-(void)serverDied;
-(void)registerBlocksForVCNotifications;
-(void)listenForNotifications;
-(int)initializeNewCallWithDeviceRole:(int)arg1 ;
-(void)setCallState:(id)arg1 forCallID:(id)arg2 ;
-(void)setRemoteVideoLayer:(void*)arg1 ;
-(void)setRemoteVideoBackLayer:(void*)arg1 ;
-(void)cleanupSubLayerFront;
-(void)deregisterBlocksForVCNotifications;
-(id)newRandomParticipantID;
-(void)startNetworkQualityUpdateTimer;
-(id)callStateForCallID:(id)arg1 ;
-(char)startConnectionWithCallID:(int)arg1 oldCallID:(int)arg2 usingInviteData:(id)arg3 isCaller:(char)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(char)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 destination:(id)arg9 error:(id*)arg10 ;
-(char)startConnectionWithCallID:(int)arg1 oldCallID:(int)arg2 usingInviteData:(id)arg3 isCaller:(char)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(char)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 error:(id*)arg9 ;
-(char)startConnectionWithCallID:(int)arg1 oldCallID:(int)arg2 usingInviteData:(id)arg3 isCaller:(char)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(char)arg6 capabilities:(id)arg7 error:(id*)arg8 ;
-(double)networkQualityForCallID:(int)arg1 ;
-(CALayer *)networkQualityGraphLayer;
-(NSTimer *)networkQualityUpdateTimer;
-(char)updateNetworkQualityGraph;
-(void)setNetworkQualityUpdateTimer:(NSTimer *)arg1 ;
-(void)insertSubLayerFrontInLayer:(id)arg1 videoSlot:(id)arg2 ;
-(void)setActiveRemoteVideoLayerFront:(char)arg1 ;
-(void)setNetworkQualityGraphLayer:(CALayer *)arg1 ;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(unsigned)doBlockingConnectionCheck;
-(int)initializeNewCall;
-(void)warmupForCall;
-(char)isUsingViceroyBlobFormat;
-(void)setUseViceroyBlobFormat:(char)arg1 ;
-(void)setSetSessionID:(id)arg1 forCallID:(int)arg2 ;
-(void)addGKSCallEvent:(id)arg1 sessionID:(id)arg2 ;
-(void)sendARPLData:(id)arg1 toCallID:(int)arg2 ;
-(void)sendData:(id)arg1 forCallID:(int)arg2 encrypted:(char)arg3 ;
-(void)inviteDictionaryForCallID:(int)arg1 remoteInviteDictionary:(id)arg2 nonCellularCandidateTimeout:(double)arg3 block:(/*^block*/id)arg4 queue:(id)arg5 ;
-(id)callMetadataForCallID:(int)arg1 ;
-(void)setPeerCN:(id)arg1 callID:(int)arg2 ;
-(void)setSessionID:(id)arg1 callID:(int)arg2 ;
-(char)requiresWifi;
-(void)setRequiresWifi:(char)arg1 ;
-(id)convertBlobtoOldBlob:(id)arg1 ;
-(id)convertBlobtoNewBlob:(id)arg1 ;
-(char)startConnectionWithCallID:(int)arg1 inviteData:(id)arg2 isCaller:(char)arg3 capabilities:(id)arg4 destination:(id)arg5 error:(id*)arg6 ;
-(char)startConnectionWithCallID:(int)arg1 usingInviteData:(id)arg2 isCaller:(char)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(char)arg5 capabilities:(id)arg6 idsSocket:(int)arg7 error:(id*)arg8 ;
-(char)startConnectionWithCallID:(int)arg1 usingInviteData:(id)arg2 isCaller:(char)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(char)arg5 capabilities:(id)arg6 error:(id*)arg7 ;
-(void)stopCallID:(int)arg1 ;
-(void)cancelCallID:(int)arg1 ;
-(void)remoteCancelledCallID:(int)arg1 ;
-(void)sendProtobuf:(id)arg1 withType:(int)arg2 forCallID:(int)arg3 ;
-(void)setCallReport:(int)arg1 withReport:(id)arg2 ;
-(int)lastActiveCallID;
-(void)setLastActiveCallID:(int)arg1 ;
-(void)processRemoteIPChange:(id)arg1 callID:(int)arg2 ;
-(char)isOutputMeteringEnabled;
-(void)setOutputMeteringEnabled:(char)arg1 ;
-(char)isInputMeteringEnabled;
-(void)setInputMeteringEnabled:(char)arg1 ;
-(char)isInputFrequencyMeteringEnabled;
-(void)setInputFrequencyMeteringEnabled:(char)arg1 ;
-(char)isOutputFrequencyMeteringEnabled;
-(void)setOutputFrequencyMeteringEnabled:(char)arg1 ;
-(float)outputMeterLevel;
-(char)getIsAudioPaused:(char*)arg1 callID:(int)arg2 error:(id*)arg3 ;
-(char)getIsVideoPaused:(char*)arg1 callID:(int)arg2 error:(id*)arg3 ;
-(float)inputMeterLevel;
-(id)currentAudioInputDevice;
-(id)currentAudioOutputDevice;
-(char)setAudioInputDevice:(id)arg1 ;
-(char)setAudioOutputDevice:(id)arg1 ;
-(void)stopNetworkQualityUpdateTimer;
-(void*)remoteVideoLayer;
-(void*)remoteVideoBackLayer;
-(int)videoStreamTokenForCallID:(int)arg1 ;
-(double)localFramerateForCallID:(int)arg1 ;
-(double)localBitrateForCallID:(int)arg1 ;
-(double)remoteFramerateForCallID:(int)arg1 ;
-(double)remoteBitrateForCallID:(int)arg1 ;
-(int)localFrameHeight;
-(int)localFrameWidth;
-(int)remoteFrameHeightForCallID:(int)arg1 ;
-(int)remoteFrameWidthForCallID:(int)arg1 ;
-(double)remotePacketLossRateForCallID:(int)arg1 ;
-(double)localPacketLossRateForCallID:(int)arg1 ;
-(double)roundTripTimeForCallID:(int)arg1 ;
-(id)statsForCallID:(int)arg1 ;
-(void)setEnableSpeakerPhone:(char)arg1 ;
-(char)isSpeakerPhoneEnabled;
-(unsigned)natType;
-(char)setPauseAudio:(char)arg1 callID:(int)arg2 error:(id*)arg3 ;
-(char)setPauseVideo:(char)arg1 callID:(int)arg2 error:(id*)arg3 ;
-(void)updateCapabilities:(id)arg1 forCallID:(int)arg2 ;
-(id)capabilitiesForCallID:(int)arg1 ;
-(char)setServerInfo:(id)arg1 ;
-(void)videoConference:(id)arg1 didStartSession:(char)arg2 withCallID:(unsigned long)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 didStartSession:(char)arg2 withCallID:(unsigned long)arg3 withUserInfo:(id)arg4 error:(id)arg5 ;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg1 withCallID:(int)arg2 didPauseAudio:(char)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 withCallID:(int)arg2 didPauseVideo:(char)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3 callMetadata:(id)arg4 ;
-(void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 remoteMediaStalled:(char)arg2 callID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned long)arg2 ;
-(void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 remoteAudioPaused:(char)arg2 callID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 remoteVideoPaused:(char)arg2 callID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2 ;
-(void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2 ;
-(void)videoConference:(id)arg1 isRemoteAudioBelowThreshold:(char)arg2 ;
-(void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned long)arg2 requestDict:(id)arg3 ;
-(void)videoConference:(id)arg1 sendRelayUpdate:(unsigned long)arg2 updateDict:(id)arg3 ;
-(void)videoConference:(id)arg1 cancelRelayRequest:(unsigned long)arg2 requestDict:(id)arg3 ;
-(void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned long)arg2 isDegraded:(char)arg3 isRemote:(char)arg4 ;
-(void)videoConference:(id)arg1 withCallID:(unsigned long)arg2 networkHint:(char)arg3 ;
-(void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 forCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned long)arg2 ;
-(void)videoConference:(id)arg1 remoteAudioEnabled:(char)arg2 forCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 localAudioEnabled:(char)arg2 forCallID:(unsigned long)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned long)arg2 forCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 reinitializeCallForCallID:(unsigned long)arg2 ;
-(void)videoConference:(id)arg1 closeConnectionForCallID:(int)arg2 ;
-(void)processRelayRequestResponse:(int)arg1 responseDict:(id)arg2 didOriginateRequest:(char)arg3 ;
-(void)processRelayUpdate:(int)arg1 updateDict:(id)arg2 didOriginateRequest:(char)arg3 ;
-(void)processCancelRelayRequest:(int)arg1 cancelDict:(id)arg2 didOriginateRequest:(char)arg3 ;
-(void)shouldSendBlackFrames:(char)arg1 callID:(int)arg2 ;
-(void)setConferenceState:(unsigned)arg1 forCallID:(int)arg2 ;
-(void)setConferenceVisualRectangle:(CGRect)arg1 forCallID:(int)arg2 ;
-(void)setPeerProtocolVersion:(unsigned)arg1 forCallID:(int)arg2 ;
-(void)serverReconnected;
-(void)setMicrophoneMuted:(char)arg1 ;
-(char)isMicrophoneMuted;
@end
