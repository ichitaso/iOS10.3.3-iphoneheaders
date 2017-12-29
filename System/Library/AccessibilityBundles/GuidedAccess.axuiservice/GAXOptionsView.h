/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIView, UIScrollView, NSLayoutConstraint, NSArray, GAXStyleProvider, GAXUIServer, NSString;

@interface GAXOptionsView : UIView <UIScrollViewDelegate> {

	char _optionsVisible;
	UIView* _backgroundDimmingView;
	UIView* _featuresContentView;
	UIScrollView* _featuresScrollView;
	UIView* _modalView;
	NSLayoutConstraint* _modalViewBottomConstraint;
	NSLayoutConstraint* _featuresScrollViewHeightConstraint;
	NSArray* _optionsViewPresentationConstraints;
	GAXStyleProvider* _styleProvider;
	GAXUIServer* _userInterfaceServer;
	NSArray* _featureViews;

}

@property (nonatomic,readonly) int applicationInterfaceOrientation; 
@property (nonatomic,retain) UIView * backgroundDimmingView;                                       //@synthesize backgroundDimmingView=_backgroundDimmingView - In the implementation block
@property (nonatomic,retain) UIView * featuresContentView;                                         //@synthesize featuresContentView=_featuresContentView - In the implementation block
@property (nonatomic,retain) UIScrollView * featuresScrollView;                                    //@synthesize featuresScrollView=_featuresScrollView - In the implementation block
@property (nonatomic,retain) UIView * modalView;                                                   //@synthesize modalView=_modalView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * modalViewBottomConstraint;                       //@synthesize modalViewBottomConstraint=_modalViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * featuresScrollViewHeightConstraint;              //@synthesize featuresScrollViewHeightConstraint=_featuresScrollViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * optionsViewPresentationConstraints;                         //@synthesize optionsViewPresentationConstraints=_optionsViewPresentationConstraints - In the implementation block
@property (assign,getter=isOptionsVisible,nonatomic) char optionsVisible;                          //@synthesize optionsVisible=_optionsVisible - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                                     //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) GAXUIServer * userInterfaceServer;                                    //@synthesize userInterfaceServer=_userInterfaceServer - In the implementation block
@property (nonatomic,copy) NSArray * featureViews;                                                 //@synthesize featureViews=_featureViews - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInterfaceServer:(GAXUIServer *)arg1 ;
-(GAXUIServer *)userInterfaceServer;
-(void)dismissOptionsAnimated:(char)arg1 ;
-(id)initWithFeatureViews:(id)arg1 styleProvider:(id)arg2 userInterfaceServer:(id)arg3 ;
-(void)presentOptionsInView:(id)arg1 animated:(char)arg2 ;
-(UIScrollView *)featuresScrollView;
-(void)setBackgroundDimmingView:(UIView *)arg1 ;
-(void)setFeaturesContentView:(UIView *)arg1 ;
-(void)setFeaturesScrollView:(UIScrollView *)arg1 ;
-(void)setModalViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFeaturesScrollViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setOptionsViewPresentationConstraints:(NSArray *)arg1 ;
-(void)setFeatureViews:(NSArray *)arg1 ;
-(id)_separatorViewsWithCount:(unsigned)arg1 styleProvider:(id)arg2 ;
-(UIView *)featuresContentView;
-(NSLayoutConstraint *)featuresScrollViewHeightConstraint;
-(char)isOptionsVisible;
-(UIView *)backgroundDimmingView;
-(NSLayoutConstraint *)modalViewBottomConstraint;
-(NSArray *)optionsViewPresentationConstraints;
-(void)setOptionsVisible:(char)arg1 ;
-(void)updateFeatureMasks;
-(int)applicationInterfaceOrientation;
-(UIView *)modalView;
-(NSArray *)featureViews;
-(void)setModalView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)updateConstraints;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
@end
