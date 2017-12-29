/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, NSIndexPath;

@interface UIViewAnimation : NSObject {

	UIView* _view;
	NSIndexPath* _indexPath;
	CGRect _endRect;
	float _endAlpha;
	float _startFraction;
	float _endFraction;
	int _curve;
	char _animateFromCurrentPosition;
	char _shouldDeleteAfterAnimation;
	char _editing;
	char _shouldAnimateShadow;
	char _shouldResetGroupOpacityAfterAnimation;
	char _shouldAllowGroupOpacityAfterAnimation;
	char _shouldClipToBoundsAfterAnimation;
	int _viewType;

}

@property (nonatomic,readonly) UIView * view;                                         //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                               //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) int viewType;                                          //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) CGRect endRect;                                        //@synthesize endRect=_endRect - In the implementation block
@property (nonatomic,readonly) float endAlpha;                                        //@synthesize endAlpha=_endAlpha - In the implementation block
@property (nonatomic,readonly) float startFraction;                                   //@synthesize startFraction=_startFraction - In the implementation block
@property (nonatomic,readonly) float endFraction;                                     //@synthesize endFraction=_endFraction - In the implementation block
@property (nonatomic,readonly) int curve;                                             //@synthesize curve=_curve - In the implementation block
@property (nonatomic,readonly) char animateFromCurrentPosition;                       //@synthesize animateFromCurrentPosition=_animateFromCurrentPosition - In the implementation block
@property (nonatomic,readonly) char shouldDeleteAfterAnimation;                       //@synthesize shouldDeleteAfterAnimation=_shouldDeleteAfterAnimation - In the implementation block
@property (nonatomic,readonly) char editing;                                          //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) char shouldAnimateShadow;                                //@synthesize shouldAnimateShadow=_shouldAnimateShadow - In the implementation block
@property (assign,nonatomic) char shouldResetGroupOpacityAfterAnimation;              //@synthesize shouldResetGroupOpacityAfterAnimation=_shouldResetGroupOpacityAfterAnimation - In the implementation block
@property (assign,nonatomic) char shouldAllowGroupOpacityAfterAnimation;              //@synthesize shouldAllowGroupOpacityAfterAnimation=_shouldAllowGroupOpacityAfterAnimation - In the implementation block
@property (assign,nonatomic) char shouldClipToBoundsAfterAnimation;                   //@synthesize shouldClipToBoundsAfterAnimation=_shouldClipToBoundsAfterAnimation - In the implementation block
-(id)description;
-(UIView *)view;
-(NSIndexPath *)indexPath;
-(int)curve;
-(float)startFraction;
-(float)endFraction;
-(char)animateFromCurrentPosition;
-(float)endAlpha;
-(void)setShouldAllowGroupOpacityAfterAnimation:(char)arg1 ;
-(void)setShouldResetGroupOpacityAfterAnimation:(char)arg1 ;
-(void)setShouldClipToBoundsAfterAnimation:(char)arg1 ;
-(char)shouldAnimateShadow;
-(char)shouldDeleteAfterAnimation;
-(CGRect)endRect;
-(char)editing;
-(int)viewType;
-(char)shouldResetGroupOpacityAfterAnimation;
-(char)shouldAllowGroupOpacityAfterAnimation;
-(char)shouldClipToBoundsAfterAnimation;
-(id)initWithView:(id)arg1 indexPath:(id)arg2 viewType:(int)arg3 endRect:(CGRect)arg4 endAlpha:(float)arg5 startFraction:(float)arg6 endFraction:(float)arg7 curve:(int)arg8 animateFromCurrentPosition:(char)arg9 shouldDeleteAfterAnimation:(char)arg10 editing:(char)arg11 ;
-(void)setShouldAnimateShadow:(char)arg1 ;
@end

