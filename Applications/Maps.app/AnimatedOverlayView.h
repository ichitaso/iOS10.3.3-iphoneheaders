/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UITextField, UIView;

@interface AnimatedOverlayView : UIView {

	UITextField* _associatedTextField;
	UIView* _clippingView;
	UITextField* _textField;
	char _isAnimating;

}

@property (nonatomic,retain) UITextField * associatedTextField;              //@synthesize associatedTextField=_associatedTextField - In the implementation block
@property (nonatomic,retain) UIView * clippingView;                          //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UITextField * textField;                        //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) char isAnimating;                               //@synthesize isAnimating=_isAnimating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 associatedTextField:(id)arg2 ;
-(void)orientationWillChangeToInterfaceOrientation:(int)arg1 ;
-(UITextField *)associatedTextField;
-(void)setAssociatedTextField:(UITextField *)arg1 ;
-(char)isAnimating;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
-(UIView *)clippingView;
-(void)setClippingView:(UIView *)arg1 ;
-(void)setIsAnimating:(char)arg1 ;
@end

