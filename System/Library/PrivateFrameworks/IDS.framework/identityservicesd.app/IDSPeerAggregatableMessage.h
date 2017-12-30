/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSNumber;

@interface IDSPeerAggregatableMessage : NSObject <NSCopying> {

	NSData* _targetToken;
	NSData* _targetSessionToken;
	NSString* _targetPeerID;
	NSData* _encryptedData;
	NSNumber* _wantsDeliveryStatus;
	/*^block*/id _completionBlock;
	/*^block*/id _ackBlock;

}

@property (copy) NSData * targetToken;                        //@synthesize targetToken=_targetToken - In the implementation block
@property (copy) NSData * targetSessionToken;                 //@synthesize targetSessionToken=_targetSessionToken - In the implementation block
@property (copy) NSString * targetPeerID;                     //@synthesize targetPeerID=_targetPeerID - In the implementation block
@property (copy) NSData * encryptedData;                      //@synthesize encryptedData=_encryptedData - In the implementation block
@property (copy) NSNumber * wantsDeliveryStatus;              //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
@property (copy) id completionBlock;                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (copy) id ackBlock;                                 //@synthesize ackBlock=_ackBlock - In the implementation block
-(unsigned)sizeOfKeysWithValues;
-(NSData *)targetToken;
-(id)ackBlock;
-(NSString *)targetPeerID;
-(NSData *)targetSessionToken;
-(void)setTargetPeerID:(NSString *)arg1 ;
-(void)setTargetToken:(NSData *)arg1 ;
-(void)setTargetSessionToken:(NSData *)arg1 ;
-(void)setAckBlock:(id)arg1 ;
-(id)initWithTargetToken:(id)arg1 sessionToken:(id)arg2 targetPeerID:(id)arg3 encryptedData:(id)arg4 wantsDeliveryStatus:(char)arg5 ackBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSNumber *)wantsDeliveryStatus;
-(void)setWantsDeliveryStatus:(NSNumber *)arg1 ;
-(NSData *)encryptedData;
-(void)setEncryptedData:(NSData *)arg1 ;
@end
