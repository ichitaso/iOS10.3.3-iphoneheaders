/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIPopoverBackgroundView, UIImageView, UIActionSheet, UIPopoverController, UIColor;

@interface _UIPopoverView : UIView {

	UIView* _contentView;
	UIPopoverBackgroundView* _backgroundView;
	Class _backgroundViewClass;
	UIImageView* _toolbarShine;
	char _showsBackgroundComponentHighlights;
	char _showsBackgroundViewHighlight;
	char _showsContentViewHighlight;
	char _chromeHidden;
	UIActionSheet* _presentedActionSheet;
	UIPopoverController* _popoverController;

}

@property (assign,nonatomic) char showsBackgroundComponentHighlights;              //@synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights - In the implementation block
@property (assign,nonatomic) char showsBackgroundViewHighlight;                    //@synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight - In the implementation block
@property (assign,nonatomic) char showsContentViewHighlight;                       //@synthesize showsContentViewHighlight=_showsContentViewHighlight - In the implementation block
@property (assign,nonatomic) float arrowOffset; 
@property (assign,nonatomic) unsigned arrowDirection; 
@property (assign,nonatomic) int backgroundStyle; 
@property (nonatomic,copy) UIColor * popoverBackgroundColor; 
@property (assign,nonatomic) char chromeHidden;                                    //@synthesize chromeHidden=_chromeHidden - In the implementation block
@property (nonatomic,retain) UIActionSheet * presentedActionSheet;                 //@synthesize presentedActionSheet=_presentedActionSheet - In the implementation block
@property (assign,nonatomic) UIPopoverController * popoverController;              //@synthesize popoverController=_popoverController - In the implementation block
+(id)popoverViewContainingView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)contentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(int)backgroundStyle;
-(void)setBackgroundStyle:(int)arg1 ;
-(void)_setCornerRadius:(float)arg1 ;
-(char)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(int)_style;
-(id)backgroundView;
-(id)viewController;
-(void)setUseToolbarShine:(char)arg1 ;
-(id)toolbarShine;
-(char)_allowsCustomizationOfContent;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)setChromeHidden:(char)arg1 ;
-(unsigned)arrowDirection;
-(void)setArrowDirection:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 ;
-(void)setArrowOffset:(float)arg1 ;
-(CGRect)_snapshotBounds;
-(UIPopoverController *)popoverController;
-(float)arrowOffset;
-(UIColor *)popoverBackgroundColor;
-(void)setPopoverBackgroundColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(char)arg3 ;
-(id)standardChromeView;
-(void)_layoutToolbarShine;
-(void)_updateContentBlendingColor;
-(char)_backgroundNeedsSeperateBlending;
-(void)_showArrow;
-(void)_hideArrow;
-(void)_setPopoverContentView:(id)arg1 ;
-(void)_setFrame:(CGRect)arg1 arrowOffset:(float)arg2 ;
-(id)_viewForModalPresentationOfViewController:(id)arg1 ;
-(char)_isIgnoringTapsInDimmingView;
-(void)_setIgnoreTapsInDimmingView:(char)arg1 ;
-(char)toolbarIsVisible;
-(char)showsBackgroundComponentHighlights;
-(void)setShowsBackgroundComponentHighlights:(char)arg1 ;
-(char)showsBackgroundViewHighlight;
-(void)setShowsBackgroundViewHighlight:(char)arg1 ;
-(char)showsContentViewHighlight;
-(void)setShowsContentViewHighlight:(char)arg1 ;
-(UIActionSheet *)presentedActionSheet;
-(void)setPresentedActionSheet:(UIActionSheet *)arg1 ;
-(char)chromeHidden;
@end

