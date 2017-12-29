/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIInputViewAnimationStyle;

@interface UIKeyboardRotationState : NSObject {

	int _state;
	char _requiresNewState;
	int _postRotationState;
	UIInputViewAnimationStyle* _animationStyle;
	int _targetOrientation;

}

@property (assign,nonatomic) int state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char requiresNewState;                                   //@synthesize requiresNewState=_requiresNewState - In the implementation block
@property (assign,nonatomic) int postRotationState;                                   //@synthesize postRotationState=_postRotationState - In the implementation block
@property (nonatomic,retain) UIInputViewAnimationStyle * animationStyle;              //@synthesize animationStyle=_animationStyle - In the implementation block
@property (assign,nonatomic) int targetOrientation;                                   //@synthesize targetOrientation=_targetOrientation - In the implementation block
+(id)stateWithState:(int)arg1 targetOrientation:(int)arg2 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(UIInputViewAnimationStyle *)animationStyle;
-(int)targetOrientation;
-(void)setPostRotationState:(int)arg1 animationStyle:(id)arg2 ;
-(void)setAnimationStyle:(UIInputViewAnimationStyle *)arg1 ;
-(void)setRequiresNewState:(char)arg1 ;
-(void)setPostRotationState:(int)arg1 ;
-(void)setTargetOrientation:(int)arg1 ;
-(char)requiresNewState;
-(int)postRotationState;
@end

