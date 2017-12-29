/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIButton, UIControl;

@interface ASNearMeOptInView : UIView {

	UILabel* _disclaimerLabel;
	UILabel* _featureDescriptionLabel;
	UIImageView* _logoImageView;
	UIButton* _turnOnNearMeButton;

}

@property (nonatomic,readonly) UIControl * turnOnNearMeButton;              //@synthesize turnOnNearMeButton=_turnOnNearMeButton - In the implementation block
-(UIControl *)turnOnNearMeButton;
-(void)setDisclaimerText:(id)arg1 ;
-(void)setTurnOnNearMeButtonTitle:(id)arg1 ;
-(void)setFeatureDescription:(id)arg1 ;
-(void)_layoutLandscape;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
@end

