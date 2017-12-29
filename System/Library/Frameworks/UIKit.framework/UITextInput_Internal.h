/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInput_Internal
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@optional
-(UIView*<UITextInputPrivate>)_textSelectingContainer;
-(CGRect*)_lastRectForRange:(id)arg1;
-(char)_isInteractiveTextSelectionDisabled;
-(void)_setInternalGestureRecognizers;

@required
-(CGRect*)_selectionClipRect;
-(id)_proxyTextInput;
-(NSRange*)_selectedNSRange;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
-(void)_extendCurrentSelection:(int)arg1;
-(void)_setCaretSelectionAtEndOfSelection;
-(id)_moveToEndOfWord:(char)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfLine:(char)arg1 withHistory:(id)arg2;
-(id)_moveRight:(char)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfWord:(char)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfLine:(char)arg1 withHistory:(id)arg2;
-(id)_moveLeft:(char)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfParagraph:(char)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfDocument:(char)arg1 withHistory:(id)arg2;
-(id)_moveDown:(char)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfParagraph:(char)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfDocument:(char)arg1 withHistory:(id)arg2;
-(id)_moveUp:(char)arg1 withHistory:(id)arg2;
-(void)_deleteByWord;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfLine;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)_unmarkText;
-(void)_setGestureRecognizers;
-(unsigned long)_characterBeforeCaretSelection;
-(unsigned long)_characterInRelationToRangedSelection:(int)arg1;
-(void)_moveCurrentSelection:(int)arg1;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(char)arg1;
-(void)_deleteForwardAndNotify:(char)arg1;
-(unsigned long)_characterInRelationToCaretSelection:(int)arg1;
-(id)_wordContainingCaretSelection;
-(unsigned long)_characterAfterCaretSelection;
-(id)_rangeOfEnclosingWord:(id)arg1;
-(id)_positionAtStartOfWords:(unsigned)arg1 beforePosition:(id)arg2;
-(id)_fullText;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
-(void)_replaceCurrentWordWithText:(id)arg1;
-(void)_selectAll;
-(char)_selectionAtDocumentStart;
-(NSRange*)_nsrangeForTextRange:(id)arg1;
-(char)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(char)arg3;
-(char)_selectionAtDocumentEnd;
-(id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(char)arg4;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(char)arg2;
-(int)_selectionAffinity;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(int)arg2 inDirection:(int)arg3;
-(id)_rangeSpanningTextUnit:(int)arg1 andPosition:(id)arg2;
-(unsigned long)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
-(id)_rangeOfTextUnit:(int)arg1 enclosingPosition:(id)arg2;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(NSRange*)_selectedRangeWithinMarkedText;
-(id)_newPhraseBoundaryGestureRecognizer;
-(char)_usesAsynchronousProtocol;
-(char)_hasMarkedText;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(char)arg2;
-(char)_isEmptySelection;
-(void)_phraseBoundaryGesture:(id)arg1;
-(char)_selectionAtWordStart;
-(char)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(id)_rangeOfLineEnclosingPosition:(id)arg1;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1;

@end

