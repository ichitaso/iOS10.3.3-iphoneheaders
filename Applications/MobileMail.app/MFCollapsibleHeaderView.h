/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>
#import <MobileMail/MFCollapsibleHeaderContentViewDelegate.h>
#import <MobileMail/MFAccessorizedNavigationBarAccessoryView.h>

@protocol MFCollapsibleHeaderViewDelegate;
@class NSString, UIView, MFCollapsibleHeaderContentView, MFAccessorizedNavigationBar, UIScrollView, UILabel, CADisplayLink;

@interface MFCollapsibleHeaderView : UIView <MFCollapsibleHeaderContentViewDelegate, MFAccessorizedNavigationBarAccessoryView> {

	char _titleDidChange;
	char _collapsed;
	id<MFCollapsibleHeaderViewDelegate> _delegate;
	NSString* _title;
	UIView* _superTitleView;
	MFCollapsibleHeaderContentView* _contentView;
	MFCollapsibleHeaderContentView* _collapsedContentView;
	MFAccessorizedNavigationBar* _hostNavBar;
	UIScrollView* _hostScrollView;
	UILabel* _superTitleLabel;
	float _initialScrollPosition;
	CADisplayLink* _displayLink;
	float _previousProgress;
	float _currentProgress;
	float _targetProgress;
	float _xScale;

}

@property (nonatomic,retain) MFCollapsibleHeaderContentView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) MFCollapsibleHeaderContentView * collapsedContentView;              //@synthesize collapsedContentView=_collapsedContentView - In the implementation block
@property (assign,nonatomic) MFAccessorizedNavigationBar * hostNavBar;                           //@synthesize hostNavBar=_hostNavBar - In the implementation block
@property (assign,nonatomic) UIScrollView * hostScrollView;                                      //@synthesize hostScrollView=_hostScrollView - In the implementation block
@property (nonatomic,retain) UILabel * superTitleLabel;                                          //@synthesize superTitleLabel=_superTitleLabel - In the implementation block
@property (nonatomic,retain) UIView * superTitleView;                                            //@synthesize superTitleView=_superTitleView - In the implementation block
@property (assign,nonatomic) float initialScrollPosition;                                        //@synthesize initialScrollPosition=_initialScrollPosition - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                        //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) float previousProgress;                                             //@synthesize previousProgress=_previousProgress - In the implementation block
@property (assign,nonatomic) float currentProgress;                                              //@synthesize currentProgress=_currentProgress - In the implementation block
@property (assign,nonatomic) float targetProgress;                                               //@synthesize targetProgress=_targetProgress - In the implementation block
@property (assign,nonatomic) float xScale;                                                       //@synthesize xScale=_xScale - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) char collapsed;                                  //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,nonatomic,__weak) id<MFCollapsibleHeaderViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) float contentHeight; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_createPrimaryViews;
-(void)contentView:(id)arg1 didLayoutWithContentHeight:(float)arg2 ;
-(void)contentViewDidCompleteTextLayout:(id)arg1 ;
-(void)_fontMetricCacheDidInvalidate:(id)arg1 ;
-(void)setSuperTitleText:(id)arg1 ;
-(UIView *)superTitleView;
-(void)hostScrollViewDidScroll:(id)arg1 ;
-(void)hostScrollViewWillBeginDragging:(id)arg1 ;
-(void)hostScrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setInitialScrollPosition:(float)arg1 ;
-(void)setHostScrollView:(UIScrollView *)arg1 ;
-(void)_updateFontBasedAttributes;
-(id)_expandedFont;
-(MFCollapsibleHeaderContentView *)collapsedContentView;
-(id)_collapsedFont;
-(void)setCollapsedContentView:(MFCollapsibleHeaderContentView *)arg1 ;
-(void)setSuperTitleView:(UIView *)arg1 ;
-(void)setSuperTitleLabel:(UILabel *)arg1 ;
-(UILabel *)superTitleLabel;
-(void)_updateContentViewMargins;
-(MFAccessorizedNavigationBar *)hostNavBar;
-(UIEdgeInsets)_buttonMarginsForNavBar:(id)arg1 layoutMargins:(UIEdgeInsets)arg2 ;
-(CGRect)_unifiedRectForBarButtonItems:(id)arg1 ;
-(char)_barButtonItemIsVisuallyEmpty:(id)arg1 ;
-(void)_updateAnchorPointForContentView:(id)arg1 ;
-(float)_maximumTravel;
-(void)_pinContentViewsAroundText;
-(void)setTargetProgress:(float)arg1 ;
-(float)targetProgress;
-(float)initialScrollPosition;
-(UIScrollView *)hostScrollView;
-(void)setCollapsed:(char)arg1 animated:(char)arg2 ;
-(void)setHostNavBar:(MFAccessorizedNavigationBar *)arg1 ;
-(void)willMoveToAccessorizedNavigationBar:(id)arg1 ;
-(void)accessorizedNavigationBarWasTapped:(id)arg1 ;
-(void)accessorizedNavigationBarDidLayoutSubviews:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(MFCollapsibleHeaderContentView *)arg1 ;
-(void)layoutSubviews;
-(MFCollapsibleHeaderContentView *)contentView;
-(void)setDelegate:(id<MFCollapsibleHeaderViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<MFCollapsibleHeaderViewDelegate>)delegate;
-(NSString *)title;
-(void)layoutMarginsDidChange;
-(void)willMoveToSuperview:(id)arg1 ;
-(char)isCollapsed;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)_displayLinkDidFire:(id)arg1 ;
-(void)setPreviousProgress:(float)arg1 ;
-(float)previousProgress;
-(float)contentHeight;
-(void)setCurrentProgress:(float)arg1 ;
-(float)currentProgress;
-(void)setCollapsed:(char)arg1 ;
-(void)setXScale:(float)arg1 ;
-(float)xScale;
@end

