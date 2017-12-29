/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInput_Internal.h>
#import <UIKit/UITextInputAdditions.h>
#import <UIKit/_UIStateRestorationContinuation.h>
#import <UIKit/_UITouchable.h>
#import <UIKit/UIResponderStandardEditActions.h>

@class UIView, UITextInputAssistantItem, UIInputViewController, UITextInputMode, NSString, NSArray, NSUserActivity, NSUndoManager;

@interface UIResponder : NSObject <UITextInput_Internal, UITextInputAdditions, _UIStateRestorationContinuation, _UITouchable, UIResponderStandardEditActions> {

	char _hasOverrideClient;
	char _hasOverrideHost;
	char _hasInputAssistantItem;

}

@property (nonatomic,readonly) UIView * inputView; 
@property (nonatomic,readonly) UIView * inputAccessoryView; 
@property (nonatomic,readonly) UITextInputAssistantItem * inputAssistantItem; 
@property (nonatomic,readonly) UIInputViewController * inputViewController; 
@property (nonatomic,readonly) UIInputViewController * inputAccessoryViewController; 
@property (nonatomic,readonly) UITextInputMode * textInputMode; 
@property (nonatomic,readonly) NSString * textInputContextIdentifier; 
@property (nonatomic,readonly) NSArray * keyCommands; 
@property (nonatomic,retain) NSUserActivity * userActivity; 
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@property (getter=isEditable,nonatomic,readonly) char editable; 
@property (getter=isEditing,nonatomic,readonly) char editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@property (nonatomic,copy) NSString * restorationIdentifier; 
@property (nonatomic,readonly) UIResponder * _editingDelegate; 
@property (nonatomic,readonly) UIResponder * _responderForEditing; 
@property (nonatomic,readonly) UIResponder * nextResponder; 
@property (nonatomic,readonly) char canBecomeFirstResponder; 
@property (nonatomic,readonly) char canResignFirstResponder; 
@property (nonatomic,readonly) char isFirstResponder; 
@property (nonatomic,readonly) NSUndoManager * undoManager; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_startDeferredTrackingObjectsWithIdentifiers;
+(void)_cleanupAllStateRestorationTables;
+(void)_updateStateRestorationIdentifierMap;
+(id)objectWithRestorationIdentifierPath:(id)arg1 ;
+(void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2 ;
+(void)_prepareForSecondPassStateRestoration;
+(void)_finishStateRestoration;
+(void)clearTextInputContextIdentifier:(id)arg1 ;
+(void)_stopDeferredTrackingObjectsWithIdentifiers;
+(void)_cleanupStateRestorationObjectIdentifierTrackingTables;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(UIResponder *)nextResponder;
-(id)firstResponder;
-(UIResponder *)_responderForEditing;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)resignFirstResponder;
-(NSUndoManager *)undoManager;
-(id)_deepestUnambiguousResponder;
-(id)_keyCommandForEvent:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(id)_keyCommandForEvent:(id)arg1 target:(id*)arg2 ;
-(char)_containedInAbsoluteResponderChain;
-(char)_containsResponder:(id)arg1 ;
-(id)_keyCommandsInChainPassingTest:(/*^block*/id)arg1 ;
-(void)_handleKeyEvent:(GSEventRef)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)motionBegan:(int)arg1 withEvent:(id)arg2 ;
-(void)motionEnded:(int)arg1 withEvent:(id)arg2 ;
-(void)motionCancelled:(int)arg1 withEvent:(id)arg2 ;
-(NSArray *)keyCommands;
-(void)_handleGameControllerEvent:(id)arg1 ;
-(UITextInputMode *)textInputMode;
-(char)_canShowTextServices;
-(id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(id)_showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(int)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(id)_window;
-(void)_rebuildStateRestorationIdentifierPath;
-(NSString *)restorationIdentifier;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)_restorationIdentifierPath;
-(char)isEditable;
-(void)_setFirstResponder:(id)arg1 ;
-(void)_didChangeDeepestUnambiguousResponder;
-(id)_firstResponder;
-(void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)_windowResignedKey;
-(void)_windowBecameKey;
-(void)gestureEnded:(GSEventRef)arg1 ;
-(void)_moveWithEvent:(id)arg1 ;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(char)_disableAutomaticKeyboardBehavior;
-(char)_disableAutomaticKeyboardUI;
-(char)_becomeFirstResponderWhenPossible;
-(char)_supportsBecomeFirstResponderWhenPossible;
-(id)_responderWindow;
-(id)_responderSelectionContainerViewForResponder:(id)arg1 ;
-(id)_responderForBecomeFirstResponder;
-(id)_nextResponderOverride;
-(char)canBecomeFirstResponder;
-(CGRect)_responderSelectionRectForWindow:(id)arg1 ;
-(id)_nextKeyResponder;
-(id)_previousKeyResponder;
-(void)_clearBecomeFirstResponderWhenCapable;
-(char)_canBecomeFirstResponderWhenPossible;
-(CGRect)_responderExternalTouchRectForWindow:(id)arg1 ;
-(id)nextFirstResponder;
-(void)_clearOverrideNextResponder;
-(void)_clearRestorableResponderStatus;
-(char)_resignIfContainsFirstResponder;
-(char)isFirstResponder;
-(char)_isRootForKeyResponderCycle;
-(char)_requiresKeyboardWhenFirstResponder;
-(id)textInputView;
-(int)selectionAffinity;
-(void)updateUserActivityState:(id)arg1 ;
-(char)isEditing;
-(char)_isTransitioningFromView:(id)arg1 ;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(id)interactionAssistant;
-(CGRect)_selectionClipRect;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(UIView*<UITextInputPrivate>)_textSelectingContainer;
-(char)_canBecomeFirstResponder;
-(char)_ownsInputAccessoryView;
-(void)_beginPinningInputViews;
-(void)_endPinningInputViews;
-(char)_isViewController;
-(char)_canResignIfContainsFirstResponder;
-(id)_keyCommands;
-(NSUserActivity *)userActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(id)_userActivity;
-(UIResponder *)_editingDelegate;
-(char)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2 ;
-(char)_finishResignFirstResponder;
-(void)_becomeFirstResponder;
-(void)reloadInputViews;
-(void)_resignFirstResponder;
-(char)canResignFirstResponder;
-(id)_targetForAction:(SEL)arg1 withSender:(id)arg2 canPerformActionBlock:(/*^block*/id)arg3 ;
-(id)_currentOverrideClient;
-(UIView *)inputAccessoryView;
-(UIInputViewController *)inputAccessoryViewController;
-(id)recentsAccessoryView;
-(char)_enableAutomaticKeyboardPressDone;
-(id)_keyboardResponder;
-(void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3 index:(unsigned)arg4 ;
-(id)_primaryContentResponder;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)scrollWheel:(GSEventRef)arg1 ;
-(void)gestureStarted:(GSEventRef)arg1 ;
-(void)gestureChanged:(GSEventRef)arg1 ;
-(char)_restoreFirstResponder;
-(id)_currentOverrideHost;
-(id)_overrideHost;
-(void)_clearOverrideHost;
-(void)_preserveResponderOverridesWhilePerforming:(/*^block*/id)arg1 ;
-(void)_overrideInputViewNextResponderWithResponder:(id)arg1 ;
-(void)_overrideInputAccessoryViewNextResponderWithResponder:(id)arg1 ;
-(void)_tagAsRestorableResponder;
-(char)_requiresKeyboardWindowWhenFirstResponder;
-(char)_requiresKeyboardResetOnReload;
-(void)_nonDestructivelyResignFirstResponder;
-(void)_becomeFirstResponderAndMakeVisible;
-(char)_isPinningInputViews;
-(id)_responderSelectionImage;
-(UIView *)inputView;
-(UIInputViewController *)inputViewController;
-(NSString *)textInputContextIdentifier;
-(char)sholdReloadInputViews;
-(void)reloadInputViewsWithoutReset;
-(UITextInputAssistantItem *)inputAssistantItem;
-(id)_proxyTextInput;
-(NSRange)_selectedNSRange;
-(char)_usesDeemphasizedTextAppearance;
-(id)textInputSuggestionDelegate;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1 ;
-(void)_extendCurrentSelection:(int)arg1 ;
-(void)_setCaretSelectionAtEndOfSelection;
-(id)_moveToEndOfWord:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfLine:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfWord:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfLine:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveLeft:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfParagraph:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfDocument:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveDown:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfParagraph:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfDocument:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveUp:(char)arg1 withHistory:(id)arg2 ;
-(void)_deleteByWord;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfLine;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_unmarkText;
-(void)_setGestureRecognizers;
-(unsigned long)_characterBeforeCaretSelection;
-(unsigned long)_characterInRelationToRangedSelection:(int)arg1 ;
-(void)_moveCurrentSelection:(int)arg1 ;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(char)arg1 ;
-(void)_deleteForwardAndNotify:(char)arg1 ;
-(unsigned long)_characterInRelationToCaretSelection:(int)arg1 ;
-(id)_wordContainingCaretSelection;
-(unsigned long)_characterAfterCaretSelection;
-(id)_rangeOfEnclosingWord:(id)arg1 ;
-(id)_positionAtStartOfWords:(unsigned)arg1 beforePosition:(id)arg2 ;
-(id)_fullText;
-(CGRect)_lastRectForRange:(id)arg1 ;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2 ;
-(void)_replaceCurrentWordWithText:(id)arg1 ;
-(void)_selectAll;
-(char)_selectionAtDocumentStart;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(char)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(char)arg3 ;
-(char)_selectionAtDocumentEnd;
-(id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(char)arg4 ;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(char)arg2 ;
-(int)_selectionAffinity;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(int)arg2 ;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(int)arg2 inDirection:(int)arg3 ;
-(id)_rangeSpanningTextUnit:(int)arg1 andPosition:(id)arg2 ;
-(unsigned long)_characterInRelationToPosition:(id)arg1 amount:(int)arg2 ;
-(id)_rangeOfTextUnit:(int)arg1 enclosingPosition:(id)arg2 ;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(NSRange)_selectedRangeWithinMarkedText;
-(id)_newPhraseBoundaryGestureRecognizer;
-(char)_usesAsynchronousProtocol;
-(char)_hasMarkedText;
-(id)_selectableText;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1 ;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2 ;
-(int)_opposingDirectionFromDirection:(int)arg1 ;
-(id)_keyInput;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(char)arg2 ;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(char)arg2 ;
-(char)_isEmptySelection;
-(id)_setHistory:(id)arg1 withExtending:(char)arg2 withAnchor:(int)arg3 withAffinityDownstream:(char)arg4 ;
-(id)_setSelectionRangeWithHistory:(id)arg1 ;
-(void)_phraseBoundaryGesture:(id)arg1 ;
-(char)_selectionAtWordStart;
-(char)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(id)_rangeOfLineEnclosingPosition:(id)arg1 ;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1 ;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1 ;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1 ;
-(id)_asTextSelection;
-(CGRect)_caretRect;
@end

