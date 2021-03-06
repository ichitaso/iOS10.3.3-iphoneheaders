/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIWindowAnimationController.h>

@interface _UIHostedWindowAnimationController : _UIWindowAnimationController {

	/*^block*/id _transitionActions;
	double _duration;

}

@property (nonatomic,copy) id transitionActions;              //@synthesize transitionActions=_transitionActions - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setTransitionActions:(id)arg1 ;
-(id)transitionActions;
@end

