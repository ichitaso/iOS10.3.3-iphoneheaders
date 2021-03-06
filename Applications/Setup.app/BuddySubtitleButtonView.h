/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddySubtitleView.h>

@class UIButton;

@interface BuddySubtitleButtonView : BuddySubtitleView {

	UIButton* _doneButton;

}

@property (nonatomic,retain) UIButton * doneButton;              //@synthesize doneButton=_doneButton - In the implementation block
-(void)setButtonFontSize:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(void)setButtonText:(id)arg1 ;
@end

