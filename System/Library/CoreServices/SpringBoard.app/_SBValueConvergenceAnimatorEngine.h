/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CADisplayLink;

@interface _SBValueConvergenceAnimatorEngine : NSObject {

	NSMutableSet* _animators;
	CADisplayLink* _displayLink;
	NSMutableSet* _finishedAnimators;

}
+(id)sharedEngine;
-(void)updateAnimator:(id)arg1 ;
-(void)startAnimator:(id)arg1 ;
-(void)stopAnimator:(id)arg1 ;
-(char)isRunningAnimator:(id)arg1 ;
-(id)init;
-(void)_tearDownDisplayLink;
-(void)_updateDisplayLink;
-(void)_onDisplayLink:(id)arg1 ;
-(void)_ensureDisplayLink;
@end
