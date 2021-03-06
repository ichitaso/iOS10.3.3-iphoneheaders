/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/PlugIns/TipsWidgetExtension.appex/TipsWidgetExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILayoutGuide, TPSURLSession, UILabel, UIImageView, NSLayoutConstraint, TPSWidgetTip, TPSAppController;

@interface TPSWidgetTipView : UIView {

	UILayoutGuide* _contentLayoutGuide;
	TPSURLSession* _relatedAppURLSession;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIImageView* _relatedAppImageView;
	NSLayoutConstraint* _titleLabelFirstBaselineConstraint;
	NSLayoutConstraint* _bodyLabelFirstBaselineConstraint;
	TPSWidgetTip* _tip;
	TPSAppController* _appController;

}

@property (nonatomic,retain) TPSWidgetTip * tip;                            //@synthesize tip=_tip - In the implementation block
@property (nonatomic,retain) TPSAppController * appController;              //@synthesize appController=_appController - In the implementation block
-(void)createViews;
-(id)initWithAppController:(id)arg1 ;
-(void)updateRelatedAppImageSynchrnously;
-(void)setTip:(id)arg1 synchronous:(char)arg2 ;
-(void)setTip:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRelatedAppImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setImage:(id)arg1 forImageView:(id)arg2 ;
-(void)dealloc;
-(void)updateConstraints;
-(TPSWidgetTip *)tip;
-(void)setTip:(TPSWidgetTip *)arg1 ;
-(void)updateTitleLabel;
-(TPSAppController *)appController;
-(void)setAppController:(TPSAppController *)arg1 ;
@end

