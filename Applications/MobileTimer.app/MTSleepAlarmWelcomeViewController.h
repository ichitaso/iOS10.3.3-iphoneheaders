/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MTSleepAlarmOnboardingDelegate;
@class UIScrollView, UIImageView, UILabel, UIButton, NSLayoutConstraint;

@interface MTSleepAlarmWelcomeViewController : UIViewController {

	id<MTSleepAlarmOnboardingDelegate> _onboardingDelegate;
	UIScrollView* _scrollView;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _getStartedButton;
	NSLayoutConstraint* _iconTitleConstraint;
	NSLayoutConstraint* _titleMessageConstraint;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                                    //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIButton * getStartedButton;                                               //@synthesize getStartedButton=_getStartedButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iconTitleConstraint;                                  //@synthesize iconTitleConstraint=_iconTitleConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleMessageConstraint;                               //@synthesize titleMessageConstraint=_titleMessageConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<MTSleepAlarmOnboardingDelegate> onboardingDelegate;              //@synthesize onboardingDelegate=_onboardingDelegate - In the implementation block
-(UIButton *)getStartedButton;
-(void)getStarted:(id)arg1 ;
-(void)setGetStartedButton:(UIButton *)arg1 ;
-(id<MTSleepAlarmOnboardingDelegate>)onboardingDelegate;
-(void)setOnboardingDelegate:(id<MTSleepAlarmOnboardingDelegate>)arg1 ;
-(void)handleContentSizeChange:(id)arg1 ;
-(void)setIconTitleConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)iconTitleConstraint;
-(void)setTitleMessageConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleMessageConstraint;
-(id)init;
-(void)loadView;
-(UIScrollView *)scrollView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)messageLabel;
-(void)setupConstraints;
-(void)setMessageLabel:(UILabel *)arg1 ;
@end

