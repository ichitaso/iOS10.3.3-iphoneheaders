/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface IDSAWDLogging : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _AWDServerConnection;

}
+(id)sharedInstance;
-(char)_shouldSubmit;
-(void)_registerForQueriableMetrics;
-(void)queryAndSubmitStatusForAccounts;
-(void)IDSDeviceConnectionForService:(id)arg1 wasSuccessful:(char)arg2 clientInitTime:(id)arg3 clientOpenSocketCompletionTime:(id)arg4 daemonOpenSocketTime:(id)arg5 daemonOpenSocketCompletionTime:(id)arg6 firstPacketReceiveTime:(id)arg7 connectionInitTime:(id)arg8 ;
-(void)registrationCompletedForRegistrationType:(int)arg1 serviceIdentifier:(id)arg2 wasSuccessful:(char)arg3 registrationError:(int)arg4 ;
-(void)socketOpenedForService:(id)arg1 isToDefaultPairedDevice:(char)arg2 openError:(unsigned long long)arg3 socketError:(unsigned long long)arg4 ;
-(void)socketClosedForService:(id)arg1 isToDefaultPairedDevice:(char)arg2 closeError:(unsigned long long)arg3 socketError:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 packetsSent:(unsigned long long)arg6 bytesReceived:(unsigned long long)arg7 packetsReceived:(unsigned long long)arg8 ;
-(void)_submitStatusForAccount:(id)arg1 ;
-(void)_submitStatusForNonexistentAccountType:(int)arg1 serviceIdentifier:(id)arg2 ;
-(void)_submitStatusForAccountType:(int)arg1 serviceIdentifier:(id)arg2 doesExist:(char)arg3 isEnabled:(char)arg4 isUserDisabled:(char)arg5 isiCloudSignedIn:(char)arg6 registrationStatus:(int)arg7 registrationError:(int)arg8 registrationErrorReason:(int)arg9 ;
-(char)_shouldSubmitRegistrationCompletedForServiceIdentifier:(id)arg1 ;
-(void)_submitIDSSessionAWDMetric:(id)arg1 withContainer:(id)arg2 ;
-(void)sessionStartedWithAWDGUID:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(int)arg4 ;
-(void)sessionInvitationSentWithAWDGUID:(id)arg1 numberOfRecipients:(id)arg2 ;
-(void)sessionInvitationReceivedWithAWDGUID:(id)arg1 ;
-(void)sessionCancelSentWithAWDGUID:(id)arg1 numberOfRecipients:(id)arg2 remoteSessionEndReason:(unsigned)arg3 ;
-(void)sessionCancelReceivedWithAWDGUID:(id)arg1 ;
-(void)sessionDeclineSentWithAWDGUID:(id)arg1 ;
-(void)sessionDeclineReceivedWithAWDGUID:(id)arg1 ;
-(void)sessionAcceptSentWithAWDGUID:(id)arg1 ;
-(void)sessionAcceptReceivedWithAWDGUID:(id)arg1 ;
-(void)sessionConnectedWithAWDGUID:(id)arg1 ;
-(void)sessionReinitiateRequestedWithAWDGUID:(id)arg1 ;
-(void)sessionReinitiateStartedWithAWDGUID:(id)arg1 ;
-(void)sessionReinitiateConnectedWithAWDGUID:(id)arg1 ;
-(void)sessionCompletedWithAWDGUID:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(int)arg4 isQREnabled:(char)arg5 isUsingQRDirectly:(char)arg6 isInitiator:(char)arg7 isLegacySessionType:(char)arg8 isWithDefaultPairedDevice:(char)arg9 transportType:(int)arg10 linkProtocol:(int)arg11 endedReason:(unsigned)arg12 durationOfSession:(id)arg13 durationToConnect:(id)arg14 isNetworkEnabled:(char)arg15 isNetworkActive:(char)arg16 isNetworkReachable:(char)arg17 isWifiInterfaceDisallowed:(char)arg18 isCellularInterfaceDisallowed:(char)arg19 ;
-(void)sessionEndedWithGuid:(id)arg1 endedReason:(unsigned)arg2 genericError:(unsigned)arg3 gameKitError:(unsigned)arg4 conferenceMiscError:(unsigned)arg5 callDuration:(id)arg6 isNetworkEnabled:(char)arg7 isNetworkActive:(char)arg8 isNetworkReachable:(char)arg9 networkCheckResult:(unsigned)arg10 dataRate:(id)arg11 gksError:(id)arg12 connectDuration:(id)arg13 remoteNetworkConnection:(unsigned)arg14 localNetworkConnection:(unsigned)arg15 connectionType:(unsigned)arg16 usesRelay:(char)arg17 currentNATType:(id)arg18 remoteNATType:(id)arg19 relayConnectDuration:(id)arg20 isInitiator:(char)arg21 linkQuality:(id)arg22 gksReturnCode:(id)arg23 ;
-(void)IDSQuickRelayEventType:(id)arg1 eventSubType:(id)arg2 duration:(id)arg3 resultCode:(id)arg4 transportType:(id)arg5 interfaceType:(id)arg6 skeEnabled:(id)arg7 isInitiator:(id)arg8 protocolVersion:(id)arg9 retryCount:(id)arg10 serviceName:(id)arg11 subServiceName:(id)arg12 ;
-(void)wifiSetupAttemptType:(unsigned long long)arg1 duration:(unsigned long long)arg2 result:(unsigned long long)arg3 client:(id)arg4 ;
-(void)WRMLinkRecommendation:(unsigned)arg1 primaryLinkType:(unsigned)arg2 magnetState:(unsigned)arg3 infraWiFiState:(unsigned)arg4 ;
-(void)messageDeliveredForService:(id)arg1 isToDefaultPairedDevice:(char)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 deliveryError:(unsigned long long)arg5 RTT:(unsigned long long)arg6 priority:(unsigned long long)arg7 ;
-(void)messageSentForService:(id)arg1 isToDefaultPairedDevice:(char)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 priority:(unsigned long long)arg5 ;
-(void)messageReceivedForService:(id)arg1 isFromDefaultPairedDevice:(char)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 ;
-(void)OTRSessionNegotiation:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 result:(unsigned)arg4 ;
-(void)IDSQRAllocation:(unsigned long long)arg1 result:(unsigned)arg2 hasRecipientAccepted:(unsigned)arg3 payloadSize:(unsigned)arg4 topic:(id)arg5 service:(id)arg6 ;
-(void)clientProcessReceivedMessage:(id)arg1 messageSize:(unsigned long long)arg2 deltaTime:(unsigned long long)arg3 priority:(unsigned long long)arg4 ;
-(void)noteMessageReceivedForService:(id)arg1 accountType:(id)arg2 fromStorage:(char)arg3 serverTimestamp:(double)arg4 localTimeDelta:(double)arg5 ;
-(id)init;
-(id)_metricContainerForMetricType:(unsigned)arg1 ;
-(void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2 ;
@end

