/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIBannerTargetImplementation.h>

@protocol SBStarkBannerTargetObserver;
@class NSHashTable, NSMutableSet, NSMutableArray, SBUIBannerContext, SBUISound, NSString;

@interface SBStarkBannerTarget : NSObject <SBUIBannerTargetImplementation> {

	id<SBStarkBannerTargetObserver> _observer;
	NSHashTable* _sources;
	char _invalidated;
	NSMutableSet* _suspensionReasons;
	NSMutableArray* _pendedContexts;
	SBUIBannerContext* _currentContext;
	SBUISound* _currentSound;
	int _displayAssertions;

}

@property (assign,nonatomic,__weak) id<SBStarkBannerTargetObserver> observer;                              //@synthesize observer=_observer - In the implementation block
@property (assign,getter=isPausedForUserInteraction,nonatomic) char pausedForUserInteraction; 
@property (nonatomic,readonly) SBUIBannerContext * currentContext;                                         //@synthesize currentContext=_currentContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bannerTargetIdentifier; 
@property (nonatomic,readonly) int bannerTargetIdiom; 
-(void)noteContextCanceled:(id)arg1 ;
-(void)setSuspended:(char)arg1 cancellingCurrent:(char)arg2 forReason:(id)arg3 ;
-(void)setPausedForUserInteraction:(char)arg1 ;
-(void)noteContext:(id)arg1 subActionSelected:(unsigned)arg2 ;
-(void)noteContextSelected:(id)arg1 ;
-(char)isPausedForUserInteraction;
-(void)_dequeueWithOptions:(int)arg1 dismissReason:(int)arg2 ;
-(char)_isSuspendedForAssistant;
-(void)_dismissContext:(id)arg1 withOptions:(int)arg2 dismissReason:(int)arg3 ;
-(void)_replaceIntervalElapsed:(id)arg1 ;
-(void)_dismissIntervalElapsed:(id)arg1 ;
-(void)_killIntervalElapsed:(id)arg1 ;
-(char)_canDismissWithOptions:(int)arg1 ;
-(char)_canDequeueWithOptions:(int)arg1 ;
-(char)isSuspendedForReason:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(char)isSuspended;
-(void)dealloc;
-(void)setObserver:(id<SBStarkBannerTargetObserver>)arg1 ;
-(id<SBStarkBannerTargetObserver>)observer;
-(void*)bannerTargetIdentifier;
-(int)bannerTargetIdiom;
-(void)registerSource:(id)arg1 ;
-(void)unregisterSource:(id)arg1 ;
-(void)modallyPresentBannerWithContext:(id)arg1 ;
-(char)isShowingModalBanner;
-(void)signalSource:(id)arg1 ;
-(id)currentBannerContextForSource:(id)arg1 ;
-(void)dismissCurrentBannerContextForSource:(id)arg1 ;
-(void)cacheBannerForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeCachedBannerForContext:(id)arg1 ;
-(SBUIBannerContext *)currentContext;
@end

