/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIControl.h>

@class NSLayoutConstraint, UILabel;

@interface PHCarPlayPhoneCallViewCell : UIControl {

	NSLayoutConstraint* _containerSpecificLeftConstraint;
	NSLayoutConstraint* _containerSpecificRightConstraint;
	UILabel* _mainLabel;
	UILabel* _subtitleLabel;

}

@property (retain) UILabel * mainLabel;                                                //@synthesize mainLabel=_mainLabel - In the implementation block
@property (retain) UILabel * subtitleLabel;                                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (retain) NSLayoutConstraint * containerSpecificLeftConstraint;               //@synthesize containerSpecificLeftConstraint=_containerSpecificLeftConstraint - In the implementation block
@property (retain) NSLayoutConstraint * containerSpecificRightConstraint;              //@synthesize containerSpecificRightConstraint=_containerSpecificRightConstraint - In the implementation block
-(void)setTitle:(id)arg1 subtitle:(id)arg2 animated:(char)arg3 ;
-(NSLayoutConstraint *)containerSpecificLeftConstraint;
-(void)setContainerSpecificLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerSpecificRightConstraint;
-(void)setContainerSpecificRightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)canBecomeFocused;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setMainLabel:(UILabel *)arg1 ;
-(UILabel *)mainLabel;
-(void)setDimmed:(char)arg1 animated:(char)arg2 ;
@end

