/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, NSArray, NSString;

@interface _UIPrintMessageAndSpinnerView : UIView {

	UILabel* _label;
	UIActivityIndicatorView* _spinner;
	NSArray* _currentHorizontalConstraints;

}

@property (nonatomic,retain) UILabel * label;                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                   //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSArray * currentHorizontalConstraints;              //@synthesize currentHorizontalConstraints=_currentHorizontalConstraints - In the implementation block
@property (nonatomic,retain) NSString * messageText; 
@property (assign,nonatomic) char spinSpinner; 
@property (assign,nonatomic) char spinnerHidden; 
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)messageText;
-(void)setMessageText:(NSString *)arg1 ;
-(void)updateConstraints;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setSpinnerHidden:(char)arg1 ;
-(void)setSpinSpinner:(char)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(char)spinnerHidden;
-(NSArray *)currentHorizontalConstraints;
-(void)setCurrentHorizontalConstraints:(NSArray *)arg1 ;
-(char)spinSpinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

