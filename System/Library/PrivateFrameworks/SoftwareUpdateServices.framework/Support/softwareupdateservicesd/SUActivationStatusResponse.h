/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:41 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SUActivationStatusResponse : NSObject {

	char _alive;
	int _messageType;
	NSString* _message;

}

@property (assign,getter=isAlive,nonatomic) char alive;              //@synthesize alive=_alive - In the implementation block
@property (assign,nonatomic) int messageType;                        //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) NSString * message;                     //@synthesize message=_message - In the implementation block
-(void)setAlive:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(char)isAlive;
@end

