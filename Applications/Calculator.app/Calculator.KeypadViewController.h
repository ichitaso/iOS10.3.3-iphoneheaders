/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Calculator/Calculator-Structs.h>
#import <UIKit/UIViewController.h>

@class _TtC10Calculator20CalculatorKeypadView;

@interface Calculator.KeypadViewController : UIViewController {

	 basicKeypad;
	 scientificKeypad;
	 keypadDelegate;
	 showingScientificKeypad;
	 usingCommaForDecimal;
	 keypadInteractionEnabled;
	 initialLayout;

}

@property (retain,nonatomic) _TtC10Calculator20CalculatorKeypadView * basicKeypad; 
@property (retain,nonatomic) _TtC10Calculator20CalculatorKeypadView * scientificKeypad; 
@property (assign,nonatomic) char showingScientificKeypad; 
@property (readonly,nonatomic) _TtC10Calculator20CalculatorKeypadView * activeKeypad; 
@property (assign,nonatomic) char usingCommaForDecimal; 
@property (assign,nonatomic) char keypadInteractionEnabled; 
-(void)setShowingAlternate:(char)arg1 forButton:(int)arg2 ;
-(void)setShowingActive:(char)arg1 forButton:(int)arg2 ;
-(_TtC10Calculator20CalculatorKeypadView *)basicKeypad;
-(void)setBasicKeypad:(_TtC10Calculator20CalculatorKeypadView *)arg1 ;
-(_TtC10Calculator20CalculatorKeypadView *)scientificKeypad;
-(void)setScientificKeypad:(_TtC10Calculator20CalculatorKeypadView *)arg1 ;
-(char)showingScientificKeypad;
-(void)setShowingScientificKeypad:(char)arg1 ;
-(_TtC10Calculator20CalculatorKeypadView *)activeKeypad;
-(char)usingCommaForDecimal;
-(void)setUsingCommaForDecimal:(char)arg1 ;
-(char)keypadInteractionEnabled;
-(void)setKeypadInteractionEnabled:(char)arg1 ;
-(CGSize)keypadSizeForAvailableSize:(CGSize)arg1 inKeypad:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
@end

