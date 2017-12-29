/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Calculator/Calculator-Structs.h>
#import <UIKit/UIViewController.h>

@class NSString;

@interface Calculator.DisplayViewController : UIViewController {

	 displayViewDelegate;
	 minimumDisplayHeight;
	 maximumResultDigits;
	 displayView.storage;
	 highlightOverlayView;
	 highlighted;

}

@property (assign,nonatomic) float minimumDisplayHeight; 
@property (assign,nonatomic) int maximumResultDigits; 
@property (copy,nonatomic) NSString * modeLabelText; 
@property (readonly,nonatomic) char canBecomeFirstResponder; 
-(NSString *)modeLabelText;
-(void)setModeLabelText:(NSString *)arg1 ;
-(int)maximumResultDigits;
-(void)setMaximumResultDigits:(int)arg1 ;
-(void)swipe:(id)arg1 ;
-(void)doubleTap:(id)arg1 ;
-(float)minimumDisplayHeight;
-(void)setMinimumDisplayHeight:(float)arg1 ;
-(void)flashDisplay;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)becomeFirstResponder;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)longPress:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)menuDidHide;
@end

