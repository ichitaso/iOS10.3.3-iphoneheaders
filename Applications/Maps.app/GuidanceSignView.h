/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class SignStyle;

@interface GuidanceSignView : UIView {

	char _wantsManeuverPeekingAdjustment;
	char _delayLayout;
	SignStyle* _style;
	int _variant;
	char _displayedOnLockscreen;
	char _inactive;
	char _wantsManueverPeekingAdjustment;
	char _shouldHideDivider;

}

@property (assign,nonatomic) char wantsManueverPeekingAdjustment;              //@synthesize wantsManueverPeekingAdjustment=_wantsManueverPeekingAdjustment - In the implementation block
@property (assign,nonatomic) char shouldHideDivider;                           //@synthesize shouldHideDivider=_shouldHideDivider - In the implementation block
@property (assign,nonatomic) char delayLayout;                                 //@synthesize delayLayout=_delayLayout - In the implementation block
@property (assign,nonatomic) char displayedOnLockscreen;                       //@synthesize displayedOnLockscreen=_displayedOnLockscreen - In the implementation block
@property (assign,nonatomic) char inactive;                                    //@synthesize inactive=_inactive - In the implementation block
@property (nonatomic,retain) SignStyle * style;                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int variant;                                      //@synthesize variant=_variant - In the implementation block
-(void)willAnimateStyleValuesFromTheme;
-(void)didAnimateStyleValuesFromTheme;
-(void)updateStyleValuesFromTheme;
-(void)updateManueverOriginXForScrollPosition:(float)arg1 ;
-(void)setInstructionsText:(id)arg1 ;
-(void)transformSublayersByPercentComplete:(float)arg1 ;
-(void)textLinesShouldAnimateFromHeight:(float)arg1 ;
-(void)updateDividerHeightForRect:(CGRect)arg1 ;
-(char)delayLayout;
-(void)setDelayLayout:(char)arg1 ;
-(char)shouldHideDivider;
-(char)displayedOnLockscreen;
-(void)updateSignAlpha:(float)arg1 ;
-(float)deltaForScrollChange:(id)arg1 ;
-(void)updateAlpha:(id)arg1 ;
-(void)updateManueverPeekingPosition:(id)arg1 ;
-(char)wantsManueverPeekingAdjustment;
-(void)setWantsManueverPeekingAdjustment:(char)arg1 ;
-(void)setShouldHideDivider:(char)arg1 ;
-(void)setDisplayedOnLockscreen:(char)arg1 ;
-(void)setNeedsLayout;
-(SignStyle *)style;
-(void)setStyle:(SignStyle *)arg1 ;
-(void)setMaximumWidth:(float)arg1 ;
-(void)setInactive:(char)arg1 ;
-(char)inactive;
-(int)variant;
-(void)setVariant:(int)arg1 ;
@end

