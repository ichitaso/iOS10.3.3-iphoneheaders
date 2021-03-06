/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Calculator/Calculator-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyInput.h>

@class NSArray;

@interface Calculator.CalculatorKeypadView : UIView <UIKeyInput> {

	 keypadType;
	 delegate;
	 buttons;
	 alternateButtons;
	 activeButtonViews;
	 pressedView;
	 defaultFont;
	 smallTextFont;

}

@property (readonly,nonatomic) char hasText; 
@property (readonly,nonatomic) int keypadType; 
@property (readonly,nonatomic) int numberOfRows; 
@property (readonly,nonatomic) int numberOfColumns; 
@property (readonly,nonatomic) float activeBorderWidth; 
@property (copy,nonatomic) NSArray * buttons; 
@property (assign,nonatomic) CGRect frame; 
@property (readonly,nonatomic) char canBecomeFirstResponder; 
@property (readonly,nonatomic) char canResignFirstResponder; 
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(char)hasText;
-(void)voiceOverStatusChanged;
-(int)keypadType;
-(id)initWithFrame:(CGRect)arg1 keypadType:(int)arg2 ;
-(float)activeBorderWidth;
-(char)createButtonsIfNecessary;
-(void)setShowingAlternate:(char)arg1 button:(int)arg2 ;
-(void)setShowingActive:(char)arg1 button:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(CGRect)frame;
-(int)numberOfColumns;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)willMoveToSuperview:(id)arg1 ;
-(int)numberOfRows;
-(char)canResignFirstResponder;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
@end

