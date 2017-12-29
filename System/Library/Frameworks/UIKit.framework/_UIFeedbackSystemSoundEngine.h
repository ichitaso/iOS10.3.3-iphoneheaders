/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIFeedbackEngine.h>
#import <UIKit/_UIFeedbackPlayer.h>

@class NSCountedSet;

@interface _UIFeedbackSystemSoundEngine : _UIFeedbackEngine <_UIFeedbackPlayer> {

	/*^block*/id _invalidationBlock;
	NSCountedSet* _warmSSIDs;
	NSCountedSet* _suspendedSSIDs;

}

@property (nonatomic,readonly) NSCountedSet * suspendedSSIDs;              //@synthesize suspendedSSIDs=_suspendedSSIDs - In the implementation block
@property (nonatomic,readonly) NSCountedSet * warmSSIDs;                   //@synthesize warmSSIDs=_warmSSIDs - In the implementation block
@property (nonatomic,copy) id invalidationBlock;                           //@synthesize invalidationBlock=_invalidationBlock - In the implementation block
+(id)sharedEngine;
+(char)_supportsPlayingFeedback:(id)arg1 ;
-(id)_stats_key;
-(id)invalidationBlock;
-(void)_updateSuspension;
-(void)setInvalidationBlock:(id)arg1 ;
-(void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateValueForParameters:(id)arg1 withKey:(id)arg2 ;
-(void)_playFeedback:(id)arg1 atTime:(double)arg2 ;
-(void)_stopFeedback:(id)arg1 ;
-(char)_prepareSystemSoundID:(unsigned long)arg1 forBeingActive:(char)arg2 ;
-(void)_performForEachSSIDsInFeedbacks:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_playFeedbackNow:(id)arg1 withOptions:(id)arg2 ;
-(void)_startPreparingToUseFeedbacks:(id)arg1 ;
-(void)_stopPreparingToUseFeedbacks:(id)arg1 ;
-(NSCountedSet *)warmSSIDs;
-(NSCountedSet *)suspendedSSIDs;
@end

