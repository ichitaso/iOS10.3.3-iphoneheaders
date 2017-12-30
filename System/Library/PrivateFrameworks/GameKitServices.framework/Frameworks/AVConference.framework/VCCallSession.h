/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:50 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCSecureDataChannelDelegate.h>
#import <AVConference/AVTelephonyInterfaceDelegate.h>
#import <libobjc.A.dylib/VCCaptionsReceiverDelegate.h>
#import <libobjc.A.dylib/VCTransportSessionLegacyDelegate.h>

@protocol VCCallSessionDelegate, VCConnectionProtocol, OS_dispatch_queue, OS_dispatch_source, VideoConferenceChannelQualityDelegate;
@class NSObject, VCCallInfo, VCConnectionManager, VCMediaNegotiator, NSMutableArray, VCAudioPayload, VCAudioTierPicker, VCAudioTier, VCPacketBundler, VCImageAttributeRules, VCCapabilities, GKRingBuffer, NSDictionary, NSMutableDictionary, NSArray, TimingCollection, NSString, VCCallLinkCongestionDetector, NSData, VCSessionMessaging, VCBitrateArbiter, VCAudioTransmitter, VCCaptionsReceiver, VideoAttributes, VCWCMClient, WRMClient, VCSecureDataChannel, NSNumber, AVTelephonyInterface, VCTransportSession;

@interface VCCallSession : NSObject <VCSecureDataChannelDelegate, AVTelephonyInterfaceDelegate, VCCaptionsReceiverDelegate, VCTransportSessionLegacyDelegate> {

	NSObject*<VCCallSessionDelegate> delegate;
	VCCallInfo* localCallInfo;
	VCCallInfo* remoteCallInfo;
	int packetMultiplexMode;
	tagHANDLE* rtpHandle;
	tagHANDLE* rtpVideo;
	VCConnectionManager* connectionManager;
	int connectionChangeState;
	id<VCConnectionProtocol> toBeChangedPrimaryConnection;
	VCMediaNegotiator* _mediaNegotiator;
	NSObject*<OS_dispatch_queue> connectionChangeQueue;
	int state;
	int _sipState;
	NSMutableArray* audioPayloads;
	VCAudioPayload* currentAudioPayload;
	VCAudioPayload* currentDTXPayload;
	VCAudioTierPicker* audioTierPicker_AppleCalling;
	VCAudioTierPicker* audioTierPicker_FaceTime;
	VCAudioTier* currentAudioTier;
	VCAudioTier* requestedAudioTier;
	VCPacketBundler* audioBundler;
	int audioTierChangeRequestCount;
	int videoPayload;
	int screenPayload;
	int sampleRate;
	int samplesPerFrame;
	int blockSize;
	float blockSeconds;
	tagHANDLE* hSIP;
	char isAudioRunning;
	char isWaitingForICEResult;
	char didSend200OK;
	opaque_pthread_mutex_t mutex;
	char receivedSIPInvite;
	VCImageAttributeRules* imageAttributeRules;
	int iRemoteRTPPort;
	int iRemoteRTCPPort;
	VCCapabilities* caps;
	int _deviceRole;
	tagHANDLE* hMediaQueue;
	tagHANDLE* hAFRC;
	GKRingBuffer* ringBuf;
	unsigned lastReceived;
	char* lastInputSampleBuffer;
	unsigned lastInputSampleBufferSize;
	int preferredAudioCodec;
	int audioTxBitrate;
	int audioHeaderSize;
	unsigned afrcBitrate;
	unsigned afrcDuplication;
	double audioInterval;
	char useSBR;
	char useControlByte;
	char useUEP;
	NSDictionary* _allPayloadsLocalFeaturesString;
	NSMutableDictionary* featuresListStringDict;
	unsigned char inputMeter;
	char audioIsPaused;
	opaque_pthread_mutex_t pauseLock;
	NSObject*<OS_dispatch_queue> videoQueue;
	NSObject*<OS_dispatch_queue> videoAsyncQueue;
	NSArray* mutedPeers;
	int bandwidthUpstream;
	int bandwidthDownstream;
	char allowAudioRecording;
	int aacBlockSize;
	char _useAMRLowLatencyMode;
	char fInitialBandwidthDetection;
	int carrierBitrateCap;
	AudioStreamBasicDescription vpioFormat;
	char allowAudioSwitching;
	char shouldUpdateLastReceivedPacketTimestamp;
	double lastReceivedPacketTimestamp;
	char isRemoteMediaStalled;
	int packetsSinceStall;
	int natType;
	unsigned lastSentAudioSampleTime;
	NSObject*<OS_dispatch_source> pausedAudioHeartBeat;
	TimingCollection* perfTimers;
	double packetLossRate;
	double timeLastCheckedNetworkConditions;
	double timeLastKnowGoodNetworkPLR;
	double timeLastKnowGoodNetworkRTT;
	double networkConditionsTimeoutInSeconds;
	NSString* peerCN;
	NSString* sessionID;
	unsigned roundTripTime;
	float packetLateAndMissingRatio;
	int sampleLogCount;
	double timeSinceLastReportedNoPackets;
	double noRemotePacketsTimeout;
	char didAttemptSIPInvite;
	NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate;
	opaque_pthread_mutex_t qualityDelegateLock;
	NSObject*<OS_dispatch_queue> qualityQueue;
	NSObject*<OS_dispatch_queue> managerQueue;
	char shouldTimeoutPackets;
	opaque_pthread_mutex_t srtpLock;
	char didPrepareSRTP;
	char useAFRC;
	char isRTCPFBEnabled;
	VCCallLinkCongestionDetector* congestionDetector;
	char shouldSendAudio;
	char isGKVoiceChat;
	void* packetThread;
	int signalStrength;
	int signalRaw;
	int signalGrade;
	BOOL bBWEstOperatingModeInitialized;
	BOOL bBWEstNewBWEstModeEnabled;
	BOOL bBWEstFakeLargeFrameModeEnabled;
	BOOL bBWEstActiveProbingSenderLog;
	CGSize remoteScreenPortraitAspectRatio;
	CGSize remoteScreenLandscapeAspectRatio;
	CGSize remoteExpectedPortraitAspectRatio;
	CGSize remoteExpectedLandscapeAspectRatio;
	char isStarted;
	NSData* srtpKeyBytes;
	char isInitiator;
	char sentClientSuccessfulDidStart;
	double videoThrottlingTimeout;
	unsigned awdCallNonce;
	VCSessionMessaging* messaging;
	char isCurrentNetworkBad;
	unsigned callSessionBitrate;
	NSObject*<OS_dispatch_queue> cellTechQueue;
	NSObject*<OS_dispatch_source> cellTechChangeSource;
	TimingCollection* cameraTimers;
	VCBitrateArbiter* callSessionBitrateArbiter;
	NSObject*<OS_dispatch_source> connectionTimeoutSource;
	unsigned short maxPacketLength;
	char lastAudioStalled;
	double lastTierSwitch;
	char audioTierHysteresis;
	long long initialSentBytes;
	long long initialReceivedBytes;
	tagVCAudioReceiver* audioReceiver;
	VCAudioTransmitter* audioTransmitter;
	VCCaptionsReceiver* _captionsReceiver;
	tagHANDLE* hVideoReceiver;
	tagHANDLE* hVideoTransmitter;
	char remoteSupportsVisibleRect;
	char remoteSupportsExpectedAspectRatio;
	char canLocalResizePIP;
	char canRemoteResizePIP;
	char receivedFirstRemoteFrame;
	int fecMode;
	NSObject*<OS_dispatch_source> sessionHealthMonitor;
	VideoAttributes* remoteVideoAttributes;
	double lastVideoQualityNotificationUpdate;
	unsigned remoteFrameWidth;
	unsigned remoteFrameHeight;
	VCWCMClient* vcWCMClient;
	WRMClient* vcWRMClient;
	char iRATSuggestionEnabled;
	OpaqueVTPixelTransferSessionRef hdTransferSession;
	CVPixelBufferPoolRef hdBufferPool;
	CGSize expectedDecodeSize;
	opaqueRTCReportingRef reportingAgent;
	int reportUpdateInterval;
	int reportReportFrequency;
	char enableAFRCDump;
	unsigned awdTime;
	int operatingMode;
	unsigned sentAudioBytes;
	unsigned totalTxAudioBytes;
	unsigned estimateTxAudioBytes;
	unsigned audioFrameCounter;
	unsigned silenceFrameCounter;
	unsigned vadSegmentCounter;
	char lastIsTalking;
	double lastVCLogCallbackTime;
	SKEStateOpaqueRef skeState;
	CFDataRef secretKey;
	VCSecureDataChannel* secureDataChannel;
	NSString* basebandCodecType;
	NSNumber* basebandCodecSampleRate;
	char _didSendBasebandCodec;
	AVTelephonyInterface* telephonyInterface;
	double lastUpdateQualityIndicator;
	unsigned dwRTT_ice;
	NSObject*<OS_dispatch_queue> timestampQueue;
	char shouldSendBlackFrame;
	unsigned _peerProtocolVersion;
	tagWRMMetricsInfo* wrmInfo;
	char _inviteDataRequested;
	unsigned _transportType;
	VCTransportSession* _transportSession;
	char _cleanupDone;
	char _isLocalCellular_LowestConnectionQuality;
	char _isRemoteCellular_LowestConnectionQuality;
	char _isConnectedOnIPv6_LowestConnectionQuality;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int connectionChangeState; 
@property (retain) VCConnectionManager * connectionManager; 
@property (readonly) VCCallInfo * localCallInfo; 
@property (nonatomic,copy) NSString * peerCN; 
@property (readonly) tagVCAudioReceiver* audioReceiver; 
@property (readonly) VCAudioTransmitter * audioTransmitter; 
@property (nonatomic,readonly) char isCaller; 
@property (nonatomic,copy) NSString * sessionID; 
@property (assign,nonatomic) char isStarted; 
@property (nonatomic,retain) VCImageAttributeRules * imageAttributeRules; 
@property (assign,nonatomic) char shouldSendAudio; 
@property (assign,nonatomic) unsigned roundTripTime; 
@property (assign,nonatomic) char useAFRC; 
@property (assign,nonatomic) char isRTCPFBEnabled; 
@property (assign,nonatomic) double packetLossRate; 
@property (assign,nonatomic) float packetLateAndMissingRatio; 
@property (readonly) double networkQuality; 
@property (assign,nonatomic) double networkConditionsTimeoutInSeconds; 
@property (assign,nonatomic) int signalStrength; 
@property (assign,nonatomic) int signalRaw; 
@property (assign,nonatomic) int signalGrade; 
@property (assign,nonatomic) unsigned lastSentAudioSampleTime; 
@property (assign,nonatomic) int natType; 
@property (assign,nonatomic) char requiresWifi; 
@property (assign,nonatomic) char useCompressedConnectionData; 
@property (retain) NSObject*<VCCallSessionDelegate> delegate; 
@property (assign) tagHANDLE* rtpHandle; 
@property (readonly) int numBufferBytesAvailable; 
@property (assign) unsigned short maxPacketLength; 
@property (assign) int state; 
@property (assign) int sipState;                                                                  //@synthesize sipState=_sipState - In the implementation block
@property (assign) char didSend200OK; 
@property (assign) int videoPayload; 
@property (assign) int sampleRate; 
@property (readonly) char isAudioRunning; 
@property (readonly) char isVideoRunning; 
@property (readonly) char videoIsPaused; 
@property (readonly) char audioIsPaused; 
@property (assign) char isGKVoiceChat; 
@property (nonatomic,readonly) VCAudioPayload * currentAudioPayload; 
@property (assign) char isWaitingForICEResult; 
@property (assign) char receivedSIPInvite; 
@property (assign) tagHANDLE* hMediaQueue; 
@property (assign) tagHANDLE* hAFRC; 
@property (nonatomic,retain) GKRingBuffer * ringBuf; 
@property (assign) unsigned lastReceived; 
@property (readonly) int bundledPackets; 
@property (assign) int packetsPerBundle; 
@property (assign) int preferredAudioCodec; 
@property (nonatomic,readonly) int audioTxBitrate; 
@property (assign) char useControlByte; 
@property (assign) char useUEP; 
@property (assign) unsigned char inputMeter; 
@property (assign) int bandwidthUpstream; 
@property (assign) int bandwidthDownstream; 
@property (nonatomic,retain) NSArray * mutedPeers; 
@property (assign) NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate; 
@property (assign) char shouldTimeoutPackets; 
@property (retain) NSData * srtpKeyBytes; 
@property (nonatomic,retain) VideoAttributes * remoteVideoAttributes; 
@property (assign) unsigned remoteFrameWidth; 
@property (assign) unsigned remoteFrameHeight; 
@property (assign,nonatomic) int operatingMode; 
@property (readonly) char isSKEOptimizationEnabled; 
@property (readonly) char isRemoteMediaStalled; 
@property (retain) VCCapabilities * capabilities; 
@property (assign) int deviceRole;                                                                //@synthesize deviceRole=_deviceRole - In the implementation block
@property (nonatomic,retain) NSNumber * basebandCodecSampleRate; 
@property (nonatomic,copy) NSString * basebandCodecType; 
@property (nonatomic,readonly) int audioTierNetworkBitrate; 
@property (nonatomic,readonly) int audioTierAudioBitrate; 
@property (nonatomic,readonly) int audioTierPacketsPerBundle; 
@property (nonatomic,readonly) int audioTierPayload; 
@property (nonatomic,readonly) NSDictionary * dtxMetrics; 
+(id)keyPathsForValuesAffectingNetworkQuality;
-(VCConnectionManager *)connectionManager;
-(id)init;
-(void)setDelegate:(NSObject*<VCCallSessionDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSObject*<VCCallSessionDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)lock;
-(void)unlock;
-(void)setSampleRate:(int)arg1 ;
-(int)sampleRate;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(char)cancel:(id)arg1 ;
-(double)networkQuality;
-(unsigned long)callID;
-(void)sendARPLData:(id)arg1 toCallID:(unsigned long)arg2 ;
-(char)requiresWifi;
-(void)setRequiresWifi:(char)arg1 ;
-(void)processRemoteIPChange:(id)arg1 callID:(unsigned long)arg2 ;
-(int)natType;
-(void)triggerInterfaceChange;
-(int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 withPayload:(int*)arg5 isTalking:(char)arg6 ;
-(char)setupAudioEncoders;
-(unsigned)maximumPayloadSize;
-(int)deviceRole;
-(int)bundledPackets;
-(char)setupAudioCodecWithPayload:(int)arg1 ;
-(id)addAudioPayload:(int)arg1 ;
-(void)setPacketsPerBundle:(int)arg1 ;
-(void)setDeviceRole:(int)arg1 ;
-(char)choosePayload:(int*)arg1 count:(int)arg2 ;
-(char)setRTPPayloads:(int*)arg1 numPayloads:(int)arg2 withError:(id*)arg3 ;
-(char)setMediaQueueStreamSettings;
-(void)startAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopPausedHeartbeat;
-(void)stopAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startPausedHeartbeat;
-(void)setWRMMetricConfig:(SCD_Struct_VC24*)arg1 ;
-(void)setWRMNotification:(SCD_Struct_VC25*)arg1 ;
-(void)reportWRMMetrics:(const SCD_Struct_VC30*)arg1 ;
-(int)numBufferBytesAvailable;
-(tagHANDLE*)rtpHandle;
-(unsigned)lastSentAudioSampleTime;
-(int)preferredAudioCodec;
-(VCAudioPayload *)currentAudioPayload;
-(VCAudioTransmitter *)audioTransmitter;
-(unsigned)audioRTPID;
-(unsigned)videoRTPID;
-(NSString *)basebandCodecType;
-(NSNumber *)basebandCodecSampleRate;
-(void)setRoundTripTime:(unsigned)arg1 ;
-(unsigned)roundTripTime;
-(void)handleCellularMTUChanged:(unsigned short)arg1 ;
-(id)initWithDeviceRole:(int)arg1 transportType:(unsigned)arg2 ;
-(int)mapPacketMultiplexModeToSIPMode:(int)arg1 ;
-(char)getRealAudioTxBitrate:(unsigned short*)arg1 RxBitrate:(unsigned short*)arg2 duplication:(unsigned short*)arg3 ;
-(double)sessionReceivingBitrate;
-(double)sessionTransmittingBitrate;
-(char)useCompressedConnectionData;
-(void)setUseCompressedConnectionData:(char)arg1 ;
-(char)evaluateEnableRRx:(int*)arg1 ;
-(void)resetVideoRulesForInterface:(int)arg1 videoReportingDictionary:(id)arg2 ;
-(char)stopVideoSend:(char)arg1 error:(id*)arg2 ;
-(char)startVideoSend:(char)arg1 error:(id*)arg2 ;
-(char)isCaller;
-(char)videoIsPaused;
-(char)isCallOngoing;
-(unsigned)currentAudioCap;
-(void)updateMaxPktLength;
-(char)findFeatureString:(const char*)arg1 value:(char*)arg2 valueLength:(unsigned)arg3 withPrefix:(const char*)arg4 ;
-(id)newRemoteScreenAttributesForOrientation:(int)arg1 ;
-(long)Conference_SetBWEstMode:(BOOL)arg1 bFakeLargeFrameMode:(BOOL)arg2 ;
-(void)setUseControlByte:(char)arg1 ;
-(void)setUseUEP:(char)arg1 ;
-(VCImageAttributeRules *)imageAttributeRules;
-(char)chooseVideoPayload:(id)arg1 operatingMode:(int)arg2 isLocalOnCellular:(char)arg3 isRemoteOnCellular:(char)arg4 ;
-(char)disconnect:(id)arg1 didRemoteCancel:(char)arg2 ;
-(void)getVideoSettings:(int)arg1 forInterface:(int)arg2 width:(int*)arg3 height:(int*)arg4 framerate:(int*)arg5 bitRate:(int*)arg6 ;
-(char)chooseVideoPayloadForInterface:(int)arg1 ;
-(id)getVideoRuleForVideoMode:(unsigned)arg1 interface:(int)arg2 sessionBitrate:(int*)arg3 ;
-(id)getFeaturesListStringForPayload:(int)arg1 ;
-(long)applyFeaturesListStringForPayload:(int)arg1 ;
-(void)primaryConnectionDidChangeTo:(id)arg1 oldConnection:(id)arg2 ;
-(void)setupWCMClient;
-(void)cleanupWCMClient;
-(void)updateCachedConnectionState;
-(void)notifyDelegateActiveConnectionDidChange;
-(void)disconnectWithNoRemotePackets:(int)arg1 ;
-(void)logDetailedNetworkInformation;
-(void)updateNetworkCheckHint:(double)arg1 ;
-(void)updateRemoteMediaStallState:(double)arg1 ;
-(void)updateLastReceivedPacketWithTimestamp:(double)arg1 ;
-(void)sendTimings;
-(void)setRemoteVideoAttributes:(VideoAttributes *)arg1 ;
-(void)setupConnectionTimeoutTimerWithErrorCode:(int)arg1 detailedCode:(int)arg2 description:(id)arg3 reason:(id)arg4 ;
-(void)cancelConnectionTimeoutTimer;
-(char)isLocalOrRemoteOnCellular;
-(char)shouldUseDtx;
-(int)packetsPerBundle;
-(int)bundleAndSendSamples:(char*)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned)arg4 bufferedSamples:(int)arg5 hasNewSamples:(char)arg6 ;
-(char)chooseAudioNetworkBitrate;
-(float)nextAudioInterval:(int)arg1 ;
-(int)sendAudioBundle:(char)arg1 atTimeStamp:(unsigned)arg2 nextInterval:(float)arg3 ;
-(void)setupPeerInfo:(id)arg1 usingInviteData:(id)arg2 isCaller:(char)arg3 capabilities:(id)arg4 ;
-(char)setupIDSConnectionForCallID:(unsigned long)arg1 destination:(id)arg2 socket:(int)arg3 error:(id*)arg4 ;
-(void)handleReceivedPiggybackBlobIDS:(id)arg1 ;
-(char)configureLegacyTransportWithInviteInfo:(id)arg1 error:(id*)arg2 ;
-(void)handleReceivedPiggybackBlobLegacy:(id)arg1 ;
-(void)handleNewConnectionSetup:(id)arg1 isInitialConnection:(char)arg2 ;
-(void)handlePrimaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)handleDuplicationEnabled:(char)arg1 activeConnection:(id)arg2 ;
-(VCCallInfo *)localCallInfo;
-(void)handleCellTechChange:(int)arg1 ;
-(tagHANDLE*)hAFRC;
-(int)setSKEBlobOnTransportSession;
-(void)handleKeyExchangeCompleted;
-(char)disconnectInternal:(char)arg1 disconnectError:(id)arg2 didRemoteCancel:(char)arg3 ;
-(id)allocLocalFeaturesString;
-(void)setPreferredAudioCodec:(int)arg1 ;
-(void)initWithRelevantStorebagEntries;
-(void)reportOperatingMode;
-(id)newSKEBlobWithRemoteSKEBlob:(id)arg1 ;
-(id)newMediaBlobWithRemoteMediaBlob:(id)arg1 localCallID:(unsigned)arg2 ;
-(void)addLocalCallInfoToInviteDictionary:(id)arg1 ;
-(char)setPauseAudio:(char)arg1 force:(char)arg2 error:(id*)arg3 ;
-(char)startVideo:(char)arg1 error:(id*)arg2 ;
-(char)stopVideo:(char)arg1 error:(id*)arg2 ;
-(char)setPauseVideo:(char)arg1 force:(char)arg2 error:(id*)arg3 ;
-(void)logPerfTimings;
-(void)sendData:(id)arg1 messageType:(unsigned)arg2 encrypted:(char)arg3 ;
-(void)getFrontCaptureTime:(float*)arg1 backCaptureTime:(float*)arg2 ;
-(unsigned)primaryConnectionType;
-(tagVCAudioReceiver*)audioReceiver;
-(void)sendCallingModeMessage;
-(void)enableAudio:(char)arg1 ;
-(void)updateDeviceRole:(int)arg1 ;
-(void)schedulePrimaryConnectionChange:(id)arg1 oldConnection:(id)arg2 ;
-(void)handleFirstConnectionSetup:(id)arg1 ;
-(char)startMediaWithPreNegotiatedSettings:(id*)arg1 ;
-(void)sipConnectThreadProc:(id)arg1 ;
-(void)setupCalleeSIPStartTimeout:(float)arg1 ;
-(void)logConnectionSuccess;
-(void)setupSecureDataChannel;
-(void)startAWDStats;
-(void)setUseAFRC:(char)arg1 ;
-(void)updateVideoQualityStatus:(double)arg1 bitrate:(double)arg2 time:(double)arg3 isRemote:(char)arg4 ;
-(char)isBetterForSIPInviteWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 thanSession:(id)arg2 ;
-(void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned)arg2 ;
-(void)handlePendingPrimaryConnectionChange;
-(void)setQualityDelegate:(NSObject*<VideoConferenceChannelQualityDelegate>)arg1 ;
-(NSObject*<VideoConferenceChannelQualityDelegate>)qualityDelegate;
-(void)updateLastReceivedAudioTime;
-(void)updateLastReceivedPacket:(char)arg1 ;
-(char)handshakeComplete:(SSLContextRef)arg1 withError:(_CFError*)arg2 ;
-(void)timeoutUnfinishedConnection;
-(void)sendThreadedAudio:(tagEncodedAudio*)arg1 buffer:(char*)arg2 bufferSize:(unsigned long)arg3 ;
-(int)sendAudioHeartbeat:(unsigned)arg1 ;
-(char)startConnectionWithParticipantID:(id)arg1 callID:(unsigned long)arg2 usingInviteData:(id)arg3 isCaller:(char)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id*)arg8 ;
-(int)rtcpDescriptor;
-(void)setupWRMClient;
-(void)cleanupWRMClient;
-(void)sendWRMStatusUpdate:(const SCD_Struct_VC46*)arg1 ;
-(void)requestWRMNotification;
-(id)inviteDataForParticipantID:(id)arg1 callID:(unsigned*)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id*)arg5 ;
-(void)setRemoteCallInfoFromInviteDictionary:(id)arg1 ;
-(void)setShouldSendAudio:(char)arg1 ;
-(void)setIsGKVoiceChat:(char)arg1 ;
-(char)isGKVoiceChat;
-(char)setPauseAudio:(char)arg1 error:(id*)arg2 ;
-(char)setPauseVideo:(char)arg1 error:(id*)arg2 ;
-(char)stillWantsToRelay;
-(void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(char)arg2 ;
-(void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(char)arg2 ;
-(void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(char)arg2 ;
-(void)rcvdFirstRemoteFrame;
-(id)remoteParticipantID;
-(id)localParticipantID;
-(void)localCameraSwitchedFrom:(int)arg1 to:(int)arg2 ;
-(id)callMetadata;
-(char)pullAudioSamples:(char*)arg1 timestamp:(unsigned*)arg2 byteCount:(int*)arg3 sampleCount:(int*)arg4 lastReceivedAudioTime:(double*)arg5 padding:(char*)arg6 paddingLength:(char*)arg7 silence:(int*)arg8 ;
-(char)isSKEOptimizationEnabled;
-(int)audioTierNetworkBitrate;
-(int)audioTierAudioBitrate;
-(int)audioTierPacketsPerBundle;
-(int)audioTierPayload;
-(NSDictionary *)dtxMetrics;
-(void)setSessionConferenceState:(unsigned)arg1 callID:(unsigned long)arg2 ;
-(void)setSessionConferenceVisualRectangle:(CGRect)arg1 callID:(unsigned long)arg2 ;
-(void)setPeerProtocolVersion:(unsigned)arg1 ;
-(char)isVideoRunning;
-(void)setRtpHandle:(tagHANDLE*)arg1 ;
-(int)connectionChangeState;
-(void)setConnectionChangeState:(int)arg1 ;
-(void)setConnectionManager:(VCConnectionManager *)arg1 ;
-(unsigned short)maxPacketLength;
-(void)setMaxPacketLength:(unsigned short)arg1 ;
-(int)videoPayload;
-(void)setVideoPayload:(int)arg1 ;
-(char)isAudioRunning;
-(char)isWaitingForICEResult;
-(void)setIsWaitingForICEResult:(char)arg1 ;
-(char)receivedSIPInvite;
-(void)setReceivedSIPInvite:(char)arg1 ;
-(tagHANDLE*)hMediaQueue;
-(void)setHMediaQueue:(tagHANDLE*)arg1 ;
-(void)setHAFRC:(tagHANDLE*)arg1 ;
-(GKRingBuffer *)ringBuf;
-(void)setRingBuf:(GKRingBuffer *)arg1 ;
-(unsigned)lastReceived;
-(void)setLastReceived:(unsigned)arg1 ;
-(int)audioTxBitrate;
-(char)useControlByte;
-(char)useUEP;
-(unsigned char)inputMeter;
-(void)setInputMeter:(unsigned char)arg1 ;
-(int)bandwidthUpstream;
-(void)setBandwidthUpstream:(int)arg1 ;
-(int)bandwidthDownstream;
-(void)setBandwidthDownstream:(int)arg1 ;
-(NSArray *)mutedPeers;
-(void)setMutedPeers:(NSArray *)arg1 ;
-(char)audioIsPaused;
-(void)setNatType:(int)arg1 ;
-(void)setLastSentAudioSampleTime:(unsigned)arg1 ;
-(NSString *)peerCN;
-(void)setPeerCN:(NSString *)arg1 ;
-(double)packetLossRate;
-(void)setPacketLossRate:(double)arg1 ;
-(double)networkConditionsTimeoutInSeconds;
-(void)setNetworkConditionsTimeoutInSeconds:(double)arg1 ;
-(int)signalRaw;
-(void)setSignalRaw:(int)arg1 ;
-(int)signalGrade;
-(void)setSignalGrade:(int)arg1 ;
-(float)packetLateAndMissingRatio;
-(void)setPacketLateAndMissingRatio:(float)arg1 ;
-(char)shouldTimeoutPackets;
-(void)setShouldTimeoutPackets:(char)arg1 ;
-(char)useAFRC;
-(char)isRTCPFBEnabled;
-(void)setIsRTCPFBEnabled:(char)arg1 ;
-(char)shouldSendAudio;
-(void)setIsStarted:(char)arg1 ;
-(void)setImageAttributeRules:(VCImageAttributeRules *)arg1 ;
-(unsigned)remoteFrameWidth;
-(void)setRemoteFrameWidth:(unsigned)arg1 ;
-(unsigned)remoteFrameHeight;
-(void)setRemoteFrameHeight:(unsigned)arg1 ;
-(char)isRemoteMediaStalled;
-(void)setBasebandCodecSampleRate:(NSNumber *)arg1 ;
-(void)setBasebandCodecType:(NSString *)arg1 ;
-(int)sipState;
-(void)setSipState:(int)arg1 ;
-(char)didSend200OK;
-(void)setDidSend200OK:(char)arg1 ;
-(NSData *)srtpKeyBytes;
-(void)setSrtpKeyBytes:(NSData *)arg1 ;
-(void)vcSecureDataChannel:(id)arg1 messageType:(unsigned)arg2 receivedData:(id)arg3 ;
-(void)sendBasebandCodecMessage;
-(void)avTelephonyInterface:(id)arg1 vocoderInfoChangedToType:(id)arg2 sampleRate:(id)arg3 ;
-(void)wcmSetCallConfig:(unsigned)arg1 interferenceLevel:(unsigned)arg2 ;
-(void)wcmGetCallConfig:(unsigned*)arg1 targetBitrate:(unsigned*)arg2 ;
-(void)didReceiveCaptions:(id)arg1 ;
-(int)handleIncomingWithCallID:(unsigned long)arg1 msgIn:(const char*)arg2 msgOut:(char*)arg3 optional:(void*)arg4 confIndex:(int*)arg5 error:(id*)arg6 ;
-(long)setupEncryptionWithKey:(const _CFData*)arg1 confIndex:(int*)arg2 ;
-(char)doBandwidthDetection:(tagHANDLE*)arg1 error:(id*)arg2 ;
-(char)startMediaQueue:(id*)arg1 ;
-(void)processSIPMessage:(char*)arg1 msgOut:(char*)arg2 optional:(void*)arg3 confIndex:(int*)arg4 ;
-(char)shouldNotifyDelegateDidStartBeforeAudioSetup;
-(void)notifyDelegateSessionStarted;
-(void)enableSessionHealthMonitor;
-(void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg1 withReason:(const char*)arg2 ;
-(void)handleMediaReceivedOverPeerToPeerLink;
-(void)handleMediaReceivedOverRelayLink;
-(long)flushBasebandQueueWithPayloads:(id)arg1 flushCount:(unsigned*)arg2 ;
-(int)sipCallback:(int)arg1 callID:(unsigned long)arg2 msgIn:(const char*)arg3 msgOut:(char*)arg4 optional:(void*)arg5 confIndex:(int*)arg6 ;
-(SecIdentityRef)retrieveIdentity;
-(void)setupDTLSDefaults;
-(void)setLocalIdentityForKeyExchange;
-(void)setupMessaging;
-(void)logIdentity:(SecIdentityRef)arg1 ;
-(int)calculateSIPEndAction:(char)arg1 currentState:(int)arg2 error:(id)arg3 ;
-(void)doSipEndAction:(int)arg1 callID:(unsigned long)arg2 error:(id)arg3 ;
-(void)disableSessionHealthMonitor;
-(void)disconnectWithNoRemotePackets:(int)arg1 timeoutUsed:(double)arg2 ;
-(char)treatAsCellular;
-(void)negotiateMediaMaxBandwidth;
-(char)createRTPHandles:(id*)arg1 ;
-(char)prepareSRTPWithError:(id*)arg1 ;
-(char)createMediaQueueHandle:(id*)arg1 ;
-(void)applyNegotiatedSettings;
-(char)applyNegotiatedAudioSettings:(id*)arg1 ;
-(char)applyNegotiatedVideoSettings:(id*)arg1 ;
-(void)applyNegotiatedCaptionsSettings;
-(char)startAFRC:(id*)arg1 ;
-(char)negotiatePayloads:(int*)arg1 numPayloads:(int*)arg2 withError:(id*)arg3 ;
-(char)negotiateMaxBandwidth:(int*)arg1 ;
-(int)getAllCompatibleVideoPayloads:(int*)arg1 forMediaType:(int)arg2 ;
-(id)getCompatibleLocalFeaturesListForPayloads:(int*)arg1 count:(int)arg2 ;
-(char)createSDP:(int*)arg1 audioPayloadCount:(int)arg2 secondaryPayloadTypes:(int*)arg3 secondaryPayloadCount:(int)arg4 videoPayloadTypes:(int*)arg5 videoPayloadCount:(int)arg6 localFeaturesList:(id)arg7 answerBandwidth:(int)arg8 maxBandwidth:(int)arg9 imageSizesSend:(imageTag*)arg10 imageSendCount:(int*)arg11 imageSizesRecv:(imageTag*)arg12 imageRecvCount:(int*)arg13 sdp:(char*)arg14 numSDPBytes:(int*)arg15 error:(id*)arg16 ;
-(char)stopMediaQueue:(id*)arg1 ;
-(void)releaseRTPHandles;
-(void)getAllPayloadsForAudio:(int*)arg1 count:(int*)arg2 secondaryPayloads:(int*)arg3 secondaryCount:(int*)arg4 ;
-(void)getAllPayloadsForVideo:(int*)arg1 count:(int*)arg2 ;
-(id)allPayloadsLocalFeaturesString;
-(char)canSendSIPInviteWithError:(id*)arg1 ;
-(id)createInviteSDPWithError:(id*)arg1 ;
-(char)establishSIPDialogWithSDP:(id)arg1 error:(id*)arg2 ;
-(int)mapPacketMultiplexModeToRTPMode:(int)arg1 ;
-(id)pickFeaturesStringForPayload:(int)arg1 featuresListDict:(id)arg2 remote:(char)arg3 ;
-(char)setMatchedFeaturesString:(char*)arg1 localFeaturesString:(id)arg2 remoteFeaturesString:(id)arg3 ;
-(char)chooseSecondaryPayloads:(int*)arg1 count:(int)arg2 ;
-(char)chooseDTXPayloads:(int*)arg1 count:(int)arg2 ;
-(void)getDecodePayloads:(int*)arg1 numPayloads:(int*)arg2 withPayload:(int)arg3 secondaryPayloads:(int*)arg4 numSecondaryPayloads:(int)arg5 ;
-(void)negotiateFeaturesString:(id)arg1 forPayload:(int)arg2 ;
-(char)doesVideoPayloadMatchRemoteImageAttributeRules:(id)arg1 ;
-(char)canNegotiateVideoPayload:(int)arg1 supportedPayloads:(id)arg2 isLocalOnCellular:(char)arg3 isRemoteOnCellular:(char)arg4 ;
-(char)isValidVideoPayloadOverride:(id)arg1 ;
-(void)setPayloadEmergencyTierSettings:(id)arg1 ;
-(char)sendSIPInviteWithError:(id*)arg1 ;
-(char)setupCallerRTPChannelWithError:(id*)arg1 ;
-(void)setupAudioHeaderSize;
-(char)setupAudioTierPicker;
-(unsigned)maximumSamplesPerFrame;
-(char)allocateLastInputSampleBuffer:(unsigned)arg1 ;
-(char)setupAudioCookies;
-(void)startAudioIOWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopAudioIO:(/*^block*/id)arg1 ;
-(void)removeUnusedAudioPayloads;
-(void)useAudioTier:(id)arg1 ;
-(void)updateAudioTxBitrate;
-(void)useAudioPayload:(id)arg1 withBitrate:(unsigned long)arg2 ;
-(int)interfaceForCurrentCall;
-(void)adjustBitrateForConnectionType;
-(char)initializeVideoTransmitter:(id*)arg1 encodeRule:(id)arg2 unpausing:(char)arg3 reportingAgent:(opaqueRTCReportingRef)arg4 ;
-(char)initializeVideoReceiver:(id*)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(char)startVideoReceive:(id*)arg1 ;
-(char)stopVideoReceive:(id*)arg1 isPausing:(char)arg2 ;
-(void)setupAACELDPayload:(int)arg1 ;
-(unsigned)codecBitmapForPayloads:(int*)arg1 count:(int)arg2 ;
-(char)sipConnectWithError:(id*)arg1 ;
-(id)deriveAspectRatioFLS;
-(id)retrieveRawFeaturesString;
-(unsigned)maxBitrateForConnectionType;
-(double)sessionReceivingFramerate;
-(double)sessionTransmittingFramerate;
-(void)reportDashboardEndResult:(char)arg1 ;
-(char)stopAFRC:(id*)arg1 ;
-(void)cleanupMedia;
-(void)notifyDelegateAndEndCall:(int)arg1 didRemoteCancel:(char)arg2 error:(id)arg3 ;
-(void)remotePauseDidChangeToState:(char)arg1 forVideo:(char)arg2 ;
-(void)addScreenConfigToSDP:(id)arg1 ;
-(void)getAllPayloadsForScreen:(int*)arg1 count:(int*)arg2 ;
-(void)doSipEndProc:(id)arg1 ;
-(const char*)matchedFeaturesStringForPayload:(int)arg1 ;
-(void)setupBitrateNegotation;
-(void)shouldSendBlackFrame:(char)arg1 ;
-(void)setDuplicationFlag:(char)arg1 withPreferredLocalLinkTypeForDuplication:(int)arg2 ;
-(void)setupVideoPauseMessages;
-(void)setupAudioPauseMessages;
-(void)setupCellTechChangeMessages;
-(void)setupAudioPausedHBMessages;
-(void)setupCallingModeMessages;
-(void)setupHandoverCandidateChangeMessage;
-(void)setupPiPStateChangeMessage;
-(void)setupBasebandCodecInfoMessages;
-(void)setupAudioOnOffStateMessages;
-(void)transportSession:(id)arg1 connectionSetupDataDidChange:(id)arg2 ;
-(void)transportSession:(id)arg1 cancelRelayRequest:(id)arg2 ;
-(void)transportSession:(id)arg1 initiateRelayRequest:(id)arg2 ;
-(void)transportSession:(id)arg1 sendRelayResponse:(id)arg2 ;
-(void)callAlarmsWithRTPTimeStamp:(unsigned)arg1 ;
-(void)processResolutionChangeToVideoRule:(id)arg1 captureRule:(id)arg2 featuresListString:(id)arg3 ;
-(char)onCaptureFrame:(CVBufferRef)arg1 audioTS:(unsigned)arg2 audioHT:(double)arg3 videoHT:(SCD_Struct_VC21)arg4 droppedFrames:(int)arg5 cameraBits:(unsigned char)arg6 ;
-(void)processBlackFrame:(CVBufferRef)arg1 ;
-(void)updateVideoQualityNotification:(double)arg1 ;
-(void)onPlayVideo:(CVBufferRef)arg1 frameTime:(SCD_Struct_VC21)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(unsigned)parameterSetForPayload:(int)arg1 ;
-(char)isStarted;
-(void)resetState;
-(int)signalStrength;
-(void)setSignalStrength:(int)arg1 ;
-(VCCapabilities *)capabilities;
-(void)setCapabilities:(VCCapabilities *)arg1 ;
-(VideoAttributes *)remoteVideoAttributes;
@end
