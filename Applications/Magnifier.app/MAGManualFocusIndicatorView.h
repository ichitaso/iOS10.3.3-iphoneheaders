/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Magnifier.app/Magnifier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Magnifier/Magnifier-Structs.h>
#import <Magnifier/MAGFocusIndicatorView.h>

@class MAGManualFocusIndicatorReticleView;

@interface MAGManualFocusIndicatorView : MAGFocusIndicatorView {

	MAGManualFocusIndicatorReticleView* _reticle;

}

@property (nonatomic,retain) MAGManualFocusIndicatorReticleView * reticle;              //@synthesize reticle=_reticle - In the implementation block
-(void)setReticle:(MAGManualFocusIndicatorReticleView *)arg1 ;
-(MAGManualFocusIndicatorReticleView *)reticle;
-(float)baseAnimationDuration;
-(void)willBeShown;
-(void)willBeHidden;
-(void)animateToShown;
-(void)animateToHidden;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
@end

