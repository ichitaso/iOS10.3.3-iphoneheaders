/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/HeightConstrainedView.h>
#import <Maps/CustomPresentationContaineeView.h>

@class CardCustomBorderView, UIView, UIVisualEffectView, NSString;

@interface CardView : HeightConstrainedView <CustomPresentationContaineeView> {

	CardCustomBorderView* _customBorderView;
	UIView* _grabberView;
	UIView* _shadowView;
	UIVisualEffectView* _blurView;
	char _disableResizing;
	char _canAddSubviews;
	char _hideGrabber;
	NSString* _blurGroupName;

}

@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) char hideGrabber;                      //@synthesize hideGrabber=_hideGrabber - In the implementation block
@property (nonatomic,copy) NSString * blurGroupName;                //@synthesize blurGroupName=_blurGroupName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char disableResizing;                  //@synthesize disableResizing=_disableResizing - In the implementation block
-(NSString *)blurGroupName;
-(void)updateTheme;
-(void)setBlurGroupName:(NSString *)arg1 ;
-(id)initAllowingBlurred:(char)arg1 ;
-(void)_setCornerRadiusWithMaskedCorners:(unsigned)arg1 maskImage:(id)arg2 ;
-(void)setDisableResizing:(char)arg1 ;
-(char)disableResizing;
-(void)setHideGrabber:(char)arg1 ;
-(void)showShadow:(char)arg1 animated:(char)arg2 ;
-(void)preservesSuperviewLayoutMarginsInAllSubviews;
-(char)hideGrabber;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)insertSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)setLayoutStyle:(unsigned)arg1 ;
@end
