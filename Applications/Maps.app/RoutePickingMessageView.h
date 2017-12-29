/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class NSLayoutConstraint, _MKUILabel, UIButton, NSString;

@interface RoutePickingMessageView : UIView {

	NSLayoutConstraint* _buttonCenterXConstraint;
	_MKUILabel* _titleLabel;
	_MKUILabel* _subtitleLabel;
	NSLayoutConstraint* _titleLabelToButtonConstraint;
	NSLayoutConstraint* _titleToSubtitleLabelConstraint;
	NSLayoutConstraint* _subtitleLabelToButtonConstraint;
	NSLayoutConstraint* _topToTitleLabelConstraint;
	UIButton* _button;
	/*^block*/id _messageViewTapped;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,readonly) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id messageViewTapped;               //@synthesize messageViewTapped=_messageViewTapped - In the implementation block
+(char)requiresConstraintBasedLayout;
-(void)_setupInitialConstraints;
-(float)_topToMessageLabelDistance;
-(float)_titleToSubtitleDistance;
-(float)_distanceToButton;
-(id)messageViewTapped;
-(void)setMessageViewTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)button;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)_commonInit;
-(void)updateConstraints;
-(void)buttonTapped:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)_updateConstraintValues;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_updateFonts;
-(id)_messageLabel;
@end
