/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TIPreferenceDomain : NSObject {

	char _needsGetSync;
	char _needsSetSync;
	NSString* _domain;
	NSString* _notification;
	double _lastSynchronizedTime;

}

@property (nonatomic,retain) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * notification;                  //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic) char needsGetSync;                        //@synthesize needsGetSync=_needsGetSync - In the implementation block
@property (assign,nonatomic) char needsSetSync;                        //@synthesize needsSetSync=_needsSetSync - In the implementation block
@property (assign,nonatomic) double lastSynchronizedTime;              //@synthesize lastSynchronizedTime=_lastSynchronizedTime - In the implementation block
+(id)domainWithName:(id)arg1 notification:(id)arg2 ;
-(char)needsGetSync;
-(void)setNeedsGetSync:(char)arg1 ;
-(char)needsSetSync;
-(void)setNeedsSetSync:(char)arg1 ;
-(double)lastSynchronizedTime;
-(void)setLastSynchronizedTime:(double)arg1 ;
-(void)dealloc;
-(NSString *)notification;
-(NSString *)domain;
-(void)setNotification:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
@end

