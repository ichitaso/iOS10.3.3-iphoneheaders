/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITextRange, NSDictionary, UITextPosition, UIView;


@protocol UITextInput <UIKeyInput>
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) int selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@optional
-(char)shouldChangeTextInRange:(id)arg1 replacementText:(id)arg2;
-(id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
-(id)positionWithinRange:(id)arg1 atCharacterOffset:(int)arg2;
-(int)characterOffsetOfPosition:(id)arg1 withinRange:(id)arg2;
-(void)insertDictationResult:(id)arg1;
-(void)dictationRecordingDidEnd;
-(void)dictationRecognitionFailed;
-(CGRect*)frameForDictationResultPlaceholder:(id)arg1;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(char)arg2;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1;
-(void)endFloatingCursor;
-(UIView *)textInputView;
-(int)selectionAffinity;
-(void)setSelectionAffinity:(int)arg1;
-(id)insertDictationResultPlaceholder;

@required
-(id)textInRange:(id)arg1;
-(void)replaceRange:(id)arg1 withText:(id)arg2;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)unmarkText;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2;
-(id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
-(int)comparePosition:(id)arg1 toPosition:(id)arg2;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
-(int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
-(void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
-(CGRect*)firstRectForRange:(id)arg1;
-(CGRect*)caretRectForPosition:(id)arg1;
-(id)selectionRectsForRange:(id)arg1;
-(id)closestPositionToPoint:(CGPoint)arg1;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2;
-(id)characterRangeAtPoint:(CGPoint)arg1;
-(UITextRange *)selectedTextRange;
-(void)setSelectedTextRange:(id)arg1;
-(UITextRange *)markedTextRange;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(id)arg1;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id<UITextInputDelegate>)inputDelegate;
-(void)setInputDelegate:(id)arg1;
-(id<UITextInputTokenizer>)tokenizer;

@end

