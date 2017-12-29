/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Diagnostics.Assertions : NSObject {

	 stateMonitorQueue;
	 statusBarStyleQueue;
	 preventTaskSuspendQueue;
	 statusBarStyleAssertion;
	 preventTaskSuspendAssertions;
	 isVoiceControlEnabled;

}

@property (assign,nonatomic) char isVoiceControlEnabled; 
+(id)shared;
-(void)acquireStatusBarStyleOverrideAssertionIfNeeded;
-(void)invalidateStatusBarStyleOverrideAssertion;
-(void)aquirePreventTaskSuspendAssertionForPID:(int)arg1 bundleIdentifier:(id)arg2 ;
-(void)invalidatePreventTaskSuspendAssertions;
-(char)isVoiceControlEnabled;
-(void)setIsVoiceControlEnabled:(char)arg1 ;
-(id)init;
@end
