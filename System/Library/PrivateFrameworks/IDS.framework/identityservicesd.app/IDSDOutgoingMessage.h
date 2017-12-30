/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSData, NSString, NSArray, NSDate, NSNumber, NSMutableArray;

@interface IDSDOutgoingMessage : NSObject {

	NSDictionary* _message;
	NSData* _data;
	NSDictionary* _protobuf;
	NSString* _fromID;
	NSArray* _destinations;
	NSString* _accountGUID;
	char _useDictAsTopLevel;
	NSData* _dataToEncrypt;
	char _encryptPayload;
	char _compressPayload;
	char _wantsResponse;
	NSDate* _expirationDate;
	NSNumber* _command;
	char _wantsDeliveryStatus;
	NSDictionary* _deliveryStatusContext;
	NSData* _messageUUID;
	int _priority;
	NSString* _guid;
	NSString* _alternateGUID;
	NSString* _identifier;
	char _forcedLocal;
	NSString* _queueOneIdentifier;
	NSString* _peerResponseIdentifier;
	NSArray* _duetIdentifiersOverride;
	NSNumber* _storedSize;
	char _bypassDuet;
	char _expectsPeerResponse;
	char _wantsAppAck;
	char _fireAndForget;
	char _nonWaking;
	char _enforceRemoteTimeouts;
	NSString* _mainAccountGuid;
	NSString* _localDestinationDeviceUUID;
	NSDate* _enqueuedDate;
	NSNumber* _messageType;
	NSMutableArray* _combinedMessages;
	char _alwaysSkipSelf;

}

@property (copy) NSDictionary * message;                             //@synthesize message=_message - In the implementation block
@property (copy) NSData * data;                                      //@synthesize data=_data - In the implementation block
@property (copy) NSDictionary * protobuf;                            //@synthesize protobuf=_protobuf - In the implementation block
@property (copy) NSString * fromID;                                  //@synthesize fromID=_fromID - In the implementation block
@property (copy) NSArray * destinations;                             //@synthesize destinations=_destinations - In the implementation block
@property (copy) NSString * accountGUID;                             //@synthesize accountGUID=_accountGUID - In the implementation block
@property (assign) char useDictAsTopLevel;                           //@synthesize useDictAsTopLevel=_useDictAsTopLevel - In the implementation block
@property (copy) NSData * dataToEncrypt;                             //@synthesize dataToEncrypt=_dataToEncrypt - In the implementation block
@property (assign) char encryptPayload;                              //@synthesize encryptPayload=_encryptPayload - In the implementation block
@property (assign) char compressPayload;                             //@synthesize compressPayload=_compressPayload - In the implementation block
@property (assign) char wantsResponse;                               //@synthesize wantsResponse=_wantsResponse - In the implementation block
@property (retain) NSDate * expirationDate;                          //@synthesize expirationDate=_expirationDate - In the implementation block
@property (copy) NSNumber * command;                                 //@synthesize command=_command - In the implementation block
@property (assign) char wantsDeliveryStatus;                         //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
@property (copy) NSDictionary * deliveryStatusContext;               //@synthesize deliveryStatusContext=_deliveryStatusContext - In the implementation block
@property (copy) NSData * messageUUID;                               //@synthesize messageUUID=_messageUUID - In the implementation block
@property (assign) int priority;                                     //@synthesize priority=_priority - In the implementation block
@property (copy) NSString * guid;                                    //@synthesize guid=_guid - In the implementation block
@property (copy) NSString * alternateGUID;                           //@synthesize alternateGUID=_alternateGUID - In the implementation block
@property (copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign) char forcedLocal;                                 //@synthesize forcedLocal=_forcedLocal - In the implementation block
@property (copy) NSString * peerResponseIdentifier;                  //@synthesize peerResponseIdentifier=_peerResponseIdentifier - In the implementation block
@property (assign) char expectsPeerResponse;                         //@synthesize expectsPeerResponse=_expectsPeerResponse - In the implementation block
@property (assign) char wantsAppAck;                                 //@synthesize wantsAppAck=_wantsAppAck - In the implementation block
@property (assign) char fireAndForget;                               //@synthesize fireAndForget=_fireAndForget - In the implementation block
@property (assign) char nonWaking;                                   //@synthesize nonWaking=_nonWaking - In the implementation block
@property (copy) NSNumber * storedSize;                              //@synthesize storedSize=_storedSize - In the implementation block
@property (assign) char bypassDuet;                                  //@synthesize bypassDuet=_bypassDuet - In the implementation block
@property (copy) NSArray * duetIdentifiersOverride;                  //@synthesize duetIdentifiersOverride=_duetIdentifiersOverride - In the implementation block
@property (copy) NSString * queueOneIdentifier;                      //@synthesize queueOneIdentifier=_queueOneIdentifier - In the implementation block
@property (assign) char enforceRemoteTimeouts;                       //@synthesize enforceRemoteTimeouts=_enforceRemoteTimeouts - In the implementation block
@property (copy) NSString * mainAccountGuid;                         //@synthesize mainAccountGuid=_mainAccountGuid - In the implementation block
@property (copy) NSString * localDestinationDeviceUUID;              //@synthesize localDestinationDeviceUUID=_localDestinationDeviceUUID - In the implementation block
@property (copy) NSDate * enqueuedDate;                              //@synthesize enqueuedDate=_enqueuedDate - In the implementation block
@property (copy) NSNumber * messageType;                             //@synthesize messageType=_messageType - In the implementation block
@property (assign) char alwaysSkipSelf;                              //@synthesize alwaysSkipSelf=_alwaysSkipSelf - In the implementation block
@property (readonly) NSArray * combinedMessages;                     //@synthesize combinedMessages=_combinedMessages - In the implementation block
-(void)setForcedLocal:(char)arg1 ;
-(void)setStoredSize:(NSNumber *)arg1 ;
-(void)setMainAccountGuid:(NSString *)arg1 ;
-(char)forcedLocal;
-(NSString *)mainAccountGuid;
-(id)initWithMessage:(id)arg1 data:(id)arg2 protobuf:(id)arg3 fromID:(id)arg4 toDestinations:(id)arg5 accountGUID:(id)arg6 useDictAsTopLevel:(char)arg7 dataToEncrypt:(id)arg8 encryptPayload:(char)arg9 compressPayload:(char)arg10 wantsResponse:(char)arg11 expirationDate:(id)arg12 enforceRemoteTimeouts:(char)arg13 command:(id)arg14 wantsDeliveryStatus:(char)arg15 deliveryStatusContext:(id)arg16 messageUUID:(id)arg17 priority:(int)arg18 guid:(id)arg19 alternateGUID:(id)arg20 identifier:(id)arg21 forcedLocal:(char)arg22 peerResponseIdentifier:(id)arg23 expectsPeerResponse:(char)arg24 wantsAppAck:(char)arg25 fireAndForget:(char)arg26 nonWaking:(char)arg27 storedSize:(id)arg28 duetIdentifiersOverride:(id)arg29 bypassDuet:(char)arg30 mainAccountGuid:(id)arg31 localDestinationDeviceUUID:(id)arg32 enqueuedDate:(id)arg33 messageType:(id)arg34 alwaysSkipSelf:(char)arg35 queueOneIdentifier:(id)arg36 ;
-(char)canCombineWithMessage:(id)arg1 ;
-(void)combineWithMessage:(id)arg1 ;
-(id)copySendParameters;
-(NSArray *)combinedMessages;
-(NSNumber *)storedSize;
-(NSString *)accountGUID;
-(void)setAccountGUID:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setMessage:(NSDictionary *)arg1 ;
-(NSDictionary *)message;
-(NSArray *)destinations;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(char)wantsDeliveryStatus;
-(NSDictionary *)deliveryStatusContext;
-(NSString *)peerResponseIdentifier;
-(NSData *)dataToEncrypt;
-(NSString *)queueOneIdentifier;
-(NSArray *)duetIdentifiersOverride;
-(void)setLocalDestinationDeviceUUID:(NSString *)arg1 ;
-(NSString *)localDestinationDeviceUUID;
-(char)useDictAsTopLevel;
-(char)encryptPayload;
-(char)compressPayload;
-(char)wantsResponse;
-(char)bypassDuet;
-(char)nonWaking;
-(char)fireAndForget;
-(char)enforceRemoteTimeouts;
-(char)alwaysSkipSelf;
-(NSString *)alternateGUID;
-(void)setAlternateGUID:(NSString *)arg1 ;
-(void)setDataToEncrypt:(NSData *)arg1 ;
-(void)setWantsResponse:(char)arg1 ;
-(void)setFromID:(NSString *)arg1 ;
-(void)setEnforceRemoteTimeouts:(char)arg1 ;
-(void)setWantsAppAck:(char)arg1 ;
-(void)setWantsDeliveryStatus:(char)arg1 ;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(void)setMessageUUID:(NSData *)arg1 ;
-(void)setEncryptPayload:(char)arg1 ;
-(void)setCompressPayload:(char)arg1 ;
-(void)setUseDictAsTopLevel:(char)arg1 ;
-(void)setExpectsPeerResponse:(char)arg1 ;
-(void)setPeerResponseIdentifier:(NSString *)arg1 ;
-(void)setAlwaysSkipSelf:(char)arg1 ;
-(void)setBypassDuet:(char)arg1 ;
-(void)setNonWaking:(char)arg1 ;
-(void)setFireAndForget:(char)arg1 ;
-(void)setQueueOneIdentifier:(NSString *)arg1 ;
-(void)setDuetIdentifiersOverride:(NSArray *)arg1 ;
-(char)wantsAppAck;
-(NSString *)fromID;
-(void)setCommand:(NSNumber *)arg1 ;
-(NSNumber *)command;
-(void)setDestinations:(NSArray *)arg1 ;
-(NSDictionary *)protobuf;
-(void)setProtobuf:(NSDictionary *)arg1 ;
-(NSData *)messageUUID;
-(void)setEnqueuedDate:(NSDate *)arg1 ;
-(NSDate *)enqueuedDate;
-(char)expectsPeerResponse;
-(NSNumber *)messageType;
-(void)setMessageType:(NSNumber *)arg1 ;
@end
