/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface VCAudioManagerClient : NSObject {

	NSNumber* _sessionReference;
	int _inferredOperatingMode;
	int _clientPid;
	char _started;
	char _didStartAUIO;

}

@property (assign,nonatomic) int clientPid;                              //@synthesize clientPid=_clientPid - In the implementation block
@property (assign,nonatomic) char started;                               //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) NSNumber * sessionReference;              //@synthesize sessionReference=_sessionReference - In the implementation block
@property (assign,nonatomic) int inferredOperatingMode;                  //@synthesize inferredOperatingMode=_inferredOperatingMode - In the implementation block
-(void)dealloc;
-(int)inferredOperatingMode;
-(id)initWithClientPid:(int)arg1 ;
-(void)setInferredOperatingMode:(int)arg1 ;
-(NSNumber *)sessionReference;
-(void)setClientPid:(int)arg1 ;
-(void)setStarted:(char)arg1 ;
-(char)started;
-(int)clientPid;
@end

