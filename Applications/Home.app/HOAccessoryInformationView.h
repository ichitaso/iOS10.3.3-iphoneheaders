/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIStackView;

@interface HOAccessoryInformationView : UIView {

	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
-(void)addRowWithTitle:(id)arg1 value:(id)arg2 ;
-(void)createStackView;
-(id)init;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)clearRows;
@end

