/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, _UIPreviewPresentationEffectView;

@interface _UIPreviewPresentationContainerView : UIView {

	char _shouldLayoutForCommitPhase;
	UIView* _contentView;
	float _cornerRadius;
	_UIPreviewPresentationEffectView* _platterClippingView;
	UIView* _platterShadowView;
	UIView* _contentTransformView;
	_UIPreviewPresentationEffectView* _platterView;
	CGSize _preferredContentSize;

}

@property (nonatomic,retain) _UIPreviewPresentationEffectView * platterClippingView;              //@synthesize platterClippingView=_platterClippingView - In the implementation block
@property (nonatomic,retain) UIView * platterShadowView;                                          //@synthesize platterShadowView=_platterShadowView - In the implementation block
@property (nonatomic,retain) UIView * contentTransformView;                                       //@synthesize contentTransformView=_contentTransformView - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationEffectView * platterView;                      //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                                         //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) float blurRadius; 
@property (assign,nonatomic) float cornerRadius;                                                  //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) char shouldRasterizeForTransition; 
@property (assign,nonatomic) char shouldLayoutForCommitPhase;                                     //@synthesize shouldLayoutForCommitPhase=_shouldLayoutForCommitPhase - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setBlurRadius:(float)arg1 ;
-(void)setContentTransformView:(UIView *)arg1 ;
-(UIView *)contentTransformView;
-(float)blurRadius;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)layoutSubviews;
-(UIView *)contentView;
-(char)_shouldEnclosedScrollViewFlashIndicators:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(_UIPreviewPresentationEffectView *)platterView;
-(void)setShouldLayoutForCommitPhase:(char)arg1 ;
-(void)initPlatterViewsIfNeeded;
-(char)shouldRasterizeForTransition;
-(void)setShouldRasterizeForTransition:(char)arg1 ;
-(CGSize)_standardPreferredContentSize;
-(char)shouldLayoutForCommitPhase;
-(_UIPreviewPresentationEffectView *)platterClippingView;
-(UIView *)platterShadowView;
-(void)setPlatterView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)setPlatterClippingView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)setPlatterShadowView:(UIView *)arg1 ;
@end

