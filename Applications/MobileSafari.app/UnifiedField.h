/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITextField.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CompletionItem;
@class NSString, TopHitCompletionView, TopHitCompletionPromotionRecognizer, NSArray, NSMapTable, UIColor;

@interface UnifiedField : UITextField <UIGestureRecognizerDelegate> {

	char _lastEditWasADeletion;
	NSString* _pendingTopHitNavigationText;
	id<CompletionItem> _topHit;
	TopHitCompletionView* _topHitCompletionView;
	TopHitCompletionPromotionRecognizer* _topHitCompletionPromotionRecognizer;
	NSArray* _keyCommands;
	NSMapTable* _keyCommandActions;
	NSString* _userTypedText;
	id<CompletionItem> _reflectedItem;

}

@property (assign,nonatomic,__weak) id<UnifiedFieldDelegate> delegate; 
@property (nonatomic,readonly) float placeholderHorizontalInset; 
@property (nonatomic,copy) UIColor * placeholderColor; 
@property (nonatomic,retain) id<CompletionItem> reflectedItem;                      //@synthesize reflectedItem=_reflectedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setReflectedItem:(id<CompletionItem>)arg1 ;
-(void)_textDidChangeFromTyping;
-(void)_endEditingWithCurrentText;
-(void)_updatePasteAndNavigate;
-(void)_handlePasteboardChangedNotification:(id)arg1 ;
-(unsigned)_unifiedFieldInputType;
-(id)_textWithoutWhitespace;
-(char)_waitingForTopHitForCurrentText;
-(void)_cancelPendingTopHitNavigation;
-(id)_topHitForCurrentText;
-(void)_setTopHit:(id)arg1 ;
-(id)_textForPasteboard;
-(void)_promoteCompletionToSelection:(char)arg1 andMoveForward:(char)arg2 ;
-(void)_setReflectedItem:(id)arg1 updateUserTypedPrefix:(char)arg2 ;
-(void)_restoreUserTypedText;
-(void)_removeTopHitCompletionView;
-(void)_promoteCompletionToSelection;
-(id)_reflectedItemCompletionString;
-(void)_layoutTopHitCompletionView;
-(void)_moveRight;
-(void)_moveLeft;
-(void)_keyPressed:(id)arg1 forEvent:(id)arg2 ;
-(void)topHitDidBecomeReady;
-(id<CompletionItem>)reflectedItem;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setAttributedText:(id)arg1 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(id)keyCommands;
-(void)setText:(id)arg1 ;
-(char)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(char)arg3 ;
-(char)keyboardInputShouldDelete:(id)arg1 ;
-(CGRect)editRect;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(id)textInputContextIdentifier;
-(id)_clearButtonImageForState:(unsigned)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(char)_hasContent;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)pasteAndNavigate:(id)arg1 ;
-(float)placeholderHorizontalInset;
-(void)_updateReturnKey;
@end

