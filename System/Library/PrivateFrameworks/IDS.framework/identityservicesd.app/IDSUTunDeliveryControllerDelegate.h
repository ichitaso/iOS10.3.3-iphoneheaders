/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSUTunDeliveryControllerDelegate <NSObject>
@optional
-(void)deliveryController:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(char)arg8 expectsPeerResponse:(char)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(int)arg12 isCompressed:(char)arg13 connectionType:(long long)arg14;
-(void)deliveryController:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(char)arg8 expectsPeerResponse:(char)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(int)arg12 isCompressed:(char)arg13 connectionType:(long long)arg14;
-(void)deliveryController:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(char)arg8 expectsPeerResponse:(char)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(int)arg12 isCompressed:(char)arg13 connectionType:(long long)arg14;
-(void)deliveryController:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 deviceID:(id)arg3 btUUID:(id)arg4 messageID:(id)arg5 peerResponseIdentifier:(id)arg6 priority:(int)arg7 connectionType:(long long)arg8;
-(void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(int)arg2 dataProtectionClass:(unsigned)arg3;
-(void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(int)arg2 dataProtectionClass:(unsigned)arg3 ofTypes:(id)arg4;
-(void)deliveryControllerHasSpaceforUrgentMessages:(id)arg1 dataProtectionClass:(unsigned)arg2 ofTypes:(id)arg3;
-(id)deliveryControllerQueuedIncomingMessageDictionary:(id)arg1;

@end

