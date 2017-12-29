/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMutableSet;

@interface SBReachabilityManager : NSObject {

	NSHashTable* _observers;
	char _reachabilityModeActive;
	unsigned _reachabilityExtensionGenerationCount;
	char _reachabilityModeEnabled;
	NSMutableSet* _temporaryDisabledReasons;

}

@property (nonatomic,readonly) char reachabilityModeActive;              //@synthesize reachabilityModeActive=_reachabilityModeActive - In the implementation block
@property (assign,nonatomic) char reachabilityEnabled; 
+(char)reachabilitySupported;
+(id)sharedInstance;
-(void)_handleReachabilityDeactivated;
-(void)_handleSignificantTimeChanged;
-(void)deactivateReachabilityModeForObserver:(id)arg1 ;
-(void)_pingKeepAliveWithDuration:(double)arg1 interactedBeforePing:(char)arg2 initialKeepAliveTime:(double)arg3 ;
-(void)_toggleReachabilityModeWithRequestingObserver:(id)arg1 ;
-(char)reachabilityEnabled;
-(void)toggleReachability;
-(void)setReachabilityEnabled:(char)arg1 ;
-(void)setReachabilityTemporarilyDisabled:(char)arg1 forReason:(id)arg2 ;
-(char)reachabilityModeActive;
-(void)_handleReachabilityActivated;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_notifyObserversReachabilityModeActive:(char)arg1 excludingObserver:(id)arg2 ;
-(void)_setKeepAliveTimer;
-(void)_updateReachabilityModeActive:(char)arg1 withRequestingObserver:(id)arg2 ;
@end

