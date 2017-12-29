/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@class VOTOutputRequest, NSArray, SCRCThread;

@interface VOTOutputRequestRunner : NSObject {

	char _isActive;
	unsigned long _currentActionIndex;
	VOTOutputRequest* _currentRequest;
	NSArray* _currentActions;
	char _didProcessNoSyncActions;
	NSRange _currentRange;
	SCRCThread* _runnerThread;
	char _onHold;

}

@property (assign,nonatomic) char onHold;                                      //@synthesize onHold=_onHold - In the implementation block
@property (nonatomic,readonly) VOTOutputRequest * currentRequest;              //@synthesize currentRequest=_currentRequest - In the implementation block
-(void)runOutputRequest:(id)arg1 ;
-(void)_adjustRunnerThreadPriority;
-(char)onHold;
-(void)_handleProcessActions:(id)arg1 ;
-(void)_handleNotifications:(id)arg1 ;
-(void)_processActions;
-(id)init;
-(void)dealloc;
-(id)description;
-(char)isActive;
-(void)handleEvent:(id)arg1 ;
-(void)setIsActive:(char)arg1 ;
-(void)resume;
-(void)sendNotification:(unsigned long)arg1 ;
-(double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned long)arg4 count:(unsigned long)arg5 objects:(id)arg6 ;
-(double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned long)arg3 objects:(id)arg4 ;
-(VOTOutputRequest *)currentRequest;
-(void)setOnHold:(char)arg1 ;
@end

