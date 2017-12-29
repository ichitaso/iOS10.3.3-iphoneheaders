/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/PlugIns/activity-widget.appex/activity-widget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <activity-widget/activity-widget-Structs.h>
#import <UIKit/UIViewController.h>
#import <FMFTodayWidget/NCWidgetProviding.h>

@class HKActivityRingView, UIImageView, UILabel, UILayoutGuide, UIFont, UIView, CHActivityWidgetDataProvider, _CHActivityWidgetDeviceUnlockStateListener, NSArray, UIButton, NSString;

@interface CHActivityTodayWidgetViewController : UIViewController <NCWidgetProviding> {

	char _viewHasAppeared;
	char _deviceLocked;
	HKActivityRingView* _ringView;
	UIImageView* _ringViewSnapshot;
	UILabel* _moveTitleLabel;
	UILabel* _moveValueLabel;
	UILabel* _exerciseTitleLabel;
	UILabel* _exerciseValueLabel;
	UILabel* _standTitleLabel;
	UILabel* _standValueLabel;
	UILayoutGuide* _labelsTopLayoutGuide;
	UILayoutGuide* _labelsBottomLayoutGuide;
	UILabel* _deviceLockedLabel;
	UIFont* _smallCapsValueFont;
	UIView* _textContainerView;
	CHActivityWidgetDataProvider* _dataProvider;
	_CHActivityWidgetDeviceUnlockStateListener* _deviceUnlockedStateListener;
	NSArray* _labelConstraints;
	UIButton* _launchAppButton;
	CGSize _compactSize;
	CGSize _fullSize;

}

@property (assign,nonatomic,__weak) HKActivityRingView * ringView;                                                  //@synthesize ringView=_ringView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * ringViewSnapshot;                                                 //@synthesize ringViewSnapshot=_ringViewSnapshot - In the implementation block
@property (assign,nonatomic,__weak) UILabel * moveTitleLabel;                                                       //@synthesize moveTitleLabel=_moveTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * moveValueLabel;                                                       //@synthesize moveValueLabel=_moveValueLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * exerciseTitleLabel;                                                   //@synthesize exerciseTitleLabel=_exerciseTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * exerciseValueLabel;                                                   //@synthesize exerciseValueLabel=_exerciseValueLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * standTitleLabel;                                                      //@synthesize standTitleLabel=_standTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * standValueLabel;                                                      //@synthesize standValueLabel=_standValueLabel - In the implementation block
@property (nonatomic,retain) UILayoutGuide * labelsTopLayoutGuide;                                                  //@synthesize labelsTopLayoutGuide=_labelsTopLayoutGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * labelsBottomLayoutGuide;                                               //@synthesize labelsBottomLayoutGuide=_labelsBottomLayoutGuide - In the implementation block
@property (assign,nonatomic,__weak) UILabel * deviceLockedLabel;                                                    //@synthesize deviceLockedLabel=_deviceLockedLabel - In the implementation block
@property (nonatomic,retain) UIFont * smallCapsValueFont;                                                           //@synthesize smallCapsValueFont=_smallCapsValueFont - In the implementation block
@property (assign,nonatomic,__weak) UIView * textContainerView;                                                     //@synthesize textContainerView=_textContainerView - In the implementation block
@property (nonatomic,retain) CHActivityWidgetDataProvider * dataProvider;                                           //@synthesize dataProvider=_dataProvider - In the implementation block
@property (assign,nonatomic) char viewHasAppeared;                                                                  //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (assign,nonatomic) CGSize compactSize;                                                                    //@synthesize compactSize=_compactSize - In the implementation block
@property (assign,nonatomic) CGSize fullSize;                                                                       //@synthesize fullSize=_fullSize - In the implementation block
@property (assign,getter=isDeviceLocked,nonatomic) char deviceLocked;                                               //@synthesize deviceLocked=_deviceLocked - In the implementation block
@property (nonatomic,retain) _CHActivityWidgetDeviceUnlockStateListener * deviceUnlockedStateListener;              //@synthesize deviceUnlockedStateListener=_deviceUnlockedStateListener - In the implementation block
@property (nonatomic,retain) NSArray * labelConstraints;                                                            //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,retain) UIButton * launchAppButton;                                                            //@synthesize launchAppButton=_launchAppButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_healthStore;
+(id)_integerFormatter;
-(UILabel *)moveTitleLabel;
-(UILabel *)exerciseTitleLabel;
-(UILabel *)standTitleLabel;
-(_CHActivityWidgetDeviceUnlockStateListener *)deviceUnlockedStateListener;
-(UILabel *)deviceLockedLabel;
-(void)_updateTextWithNewActivitySummary:(id)arg1 ;
-(void)setLaunchAppButton:(UIButton *)arg1 ;
-(UIButton *)launchAppButton;
-(void)_launchTodaySummary:(id)arg1 ;
-(UILabel *)moveValueLabel;
-(UILabel *)exerciseValueLabel;
-(UILabel *)standValueLabel;
-(UILayoutGuide *)labelsTopLayoutGuide;
-(UILayoutGuide *)labelsBottomLayoutGuide;
-(UIImageView *)ringViewSnapshot;
-(UIFont *)smallCapsValueFont;
-(void)setDeviceLocked:(char)arg1 ;
-(void)setRingViewSnapshot:(UIImageView *)arg1 ;
-(void)setMoveTitleLabel:(UILabel *)arg1 ;
-(void)setMoveValueLabel:(UILabel *)arg1 ;
-(void)setExerciseTitleLabel:(UILabel *)arg1 ;
-(void)setExerciseValueLabel:(UILabel *)arg1 ;
-(void)setStandTitleLabel:(UILabel *)arg1 ;
-(void)setStandValueLabel:(UILabel *)arg1 ;
-(void)setLabelsTopLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setLabelsBottomLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setDeviceLockedLabel:(UILabel *)arg1 ;
-(void)setSmallCapsValueFont:(UIFont *)arg1 ;
-(CGSize)compactSize;
-(void)setCompactSize:(CGSize)arg1 ;
-(void)setFullSize:(CGSize)arg1 ;
-(void)setDeviceUnlockedStateListener:(_CHActivityWidgetDeviceUnlockStateListener *)arg1 ;
-(HKActivityRingView *)ringView;
-(void)setRingView:(HKActivityRingView *)arg1 ;
-(char)isDeviceLocked;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)setDataProvider:(CHActivityWidgetDataProvider *)arg1 ;
-(CHActivityWidgetDataProvider *)dataProvider;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(CGSize)fullSize;
-(void)widgetPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setViewHasAppeared:(char)arg1 ;
-(char)viewHasAppeared;
-(void)_textSizeDidUpdate:(id)arg1 ;
-(void)_constrainLabels;
-(void)_animateCurrentActivitySummary;
-(void)_updateStandTitleLabelWithSummary:(id)arg1 ;
-(void)_renderRingImage;
-(void)setTextContainerView:(UIView *)arg1 ;
-(UIView *)textContainerView;
@end
