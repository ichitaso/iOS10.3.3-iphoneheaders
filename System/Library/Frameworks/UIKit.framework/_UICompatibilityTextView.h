/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UITextLinkInteraction.h>
#import <libobjc.A.dylib/WebEditingDelegate.h>
#import <libobjc.A.dylib/WebPolicyDelegate.h>
#import <UIKit/UIPreviewItemDelegate.h>
#import <UIKit/UITextInput.h>

@class UIView, NSString, UIFont, UIColor, NSAttributedString, NSDictionary, UITextRange, UITextPosition;

@interface _UICompatibilityTextView : UIScrollView <UITextLinkInteraction, WebEditingDelegate, WebPolicyDelegate, UIPreviewItemDelegate, UITextInput> {

	id _private;
	char m_editing;
	UIView* m_inputView;

}

@property (assign,getter=isEditing,nonatomic) char editing; 
@property (assign,nonatomic) id<UITextViewDelegate> delegate; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) int textAlignment; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,getter=isEditable,nonatomic) char editable; 
@property (assign,nonatomic) unsigned dataDetectorTypes; 
@property (assign,nonatomic) char allowsEditingTextAttributes; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSDictionary * typingAttributes; 
@property (retain) UIView * inputView; 
@property (retain) UIView * inputAccessoryView; 
@property (assign,nonatomic) char clearsOnInsertion; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,readonly) char hasText; 
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
+(void)initialize;
+(char)_isCompatibilityTextView;
+(id)excludedElementsForHTML;
+(id)_bestInterpretationForDictationResult:(id)arg1 ;
-(void)removeFromSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setScrollEnabled:(char)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)resignFirstResponder;
-(id)undoManager;
-(char)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(char)isEditable;
-(float)lineHeight;
-(void)setCenter:(CGPoint)arg1 ;
-(char)canBecomeFirstResponder;
-(char)isFirstResponder;
-(void)didMoveToSuperview;
-(CGImageRef)newSnapshotWithRect:(CGRect)arg1 ;
-(CGImageRef)createSnapshotWithRect:(CGRect)arg1 ;
-(char)_requiresKeyboardWhenFirstResponder;
-(char)_alwaysHandleScrollerMouseEvent;
-(id)textInRange:(id)arg1 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 ;
-(int)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2 ;
-(int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2 ;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(char)arg2 ;
-(UITextRange *)selectedTextRange;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(UITextRange *)markedTextRange;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id<UITextInputDelegate>)inputDelegate;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(UIView *)textInputView;
-(int)selectionAffinity;
-(void)setSelectionAffinity:(int)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(char)hasText;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setScrollingEnabled:(char)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(char)isEditing;
-(void)setEditing:(char)arg1 ;
-(id)interactionAssistant;
-(id)selectionView;
-(char)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(char)arg3 ;
-(char)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(char)keyboardInputShouldDelete:(id)arg1 ;
-(char)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)scrollSelectionToVisible:(char)arg1 ;
-(id)textInputTraits;
-(NSRange)selectedRange;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(int)textAlignment;
-(NSDictionary *)typingAttributes;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(CGRect)visibleRect;
-(void)selectAll;
-(char)_ownsInputAccessoryView;
-(char)canResignFirstResponder;
-(UIView *)inputAccessoryView;
-(id)_keyboardResponder;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)select:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(char)_restoreFirstResponder;
-(UIView *)inputView;
-(void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(char)arg2 ;
-(void)setAllowsEditingTextAttributes:(char)arg1 ;
-(void)setEditable:(char)arg1 ;
-(void)setLineHeight:(float)arg1 ;
-(void)setDataDetectorTypes:(unsigned)arg1 ;
-(char)allowsEditingTextAttributes;
-(unsigned)dataDetectorTypes;
-(id)webView;
-(id)styleString;
-(CGSize)tileSizeForSize:(CGSize)arg1 ;
-(id)_proxyTextInput;
-(void)updateWebViewObjects;
-(void)webViewDidChange:(id)arg1 ;
-(void)updateContentEditableAttribute:(char)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)cancelDataDetectorsWithWebLock;
-(void)_dealloc;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(void)delayedUpdateForKeyboardDidShow;
-(void)performBecomeEditableTasks;
-(char)shouldAutoscrollAboveBottom;
-(void)updateAutoscrollAboveBottom;
-(void)setSelectionToEnd;
-(CGRect)visibleTextRect;
-(void)setClearsOnInsertion:(char)arg1 ;
-(void)replace:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(id)undoManagerForWebView:(id)arg1 ;
-(char)shouldScrollEnclosingScrollView;
-(void)scrollRectToVisibleInContainingScrollView;
-(void)ensureSelection;
-(char)_freezeTextContainerSize;
-(void)_updateForNewSize:(CGSize)arg1 withOldSize:(CGSize)arg2 ;
-(char)shouldStartDataDetectors;
-(void)startDataDetectorsWithWebLock;
-(void)forwardInvocation:(id)arg1 ;
-(void)_transferAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4 ;
-(void)_transferTextViewPropertiesFromText:(id)arg1 ;
-(void)setContentToHTMLString:(id)arg1 ;
-(void)recalculateStyle;
-(void)resetDataDetectorsResultsWithWebLock;
-(unsigned)_allowedLinkTypes;
-(char)isPreviewing;
-(char)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(CGPoint)arg2 ;
-(id)_dataForPreviewItemController:(id)arg1 atPosition:(CGPoint)arg2 type:(int*)arg3 ;
-(id)_presentationRectsForPreviewItemController:(id)arg1 ;
-(id)_presentationSnapshotForPreviewItemController:(id)arg1 ;
-(void)cancelInteractionWithLink;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1 ;
-(void)_interactionStartedFromPreviewItemController:(id)arg1 ;
-(int)selectionGranularity;
-(void)setSelectionGranularity:(int)arg1 ;
-(char)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(char)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(char)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 font:(id)arg2 ;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(char)clearsOnInsertion;
-(void)disableClearsOnInsertion;
-(void)updateSelection;
-(id)selectedText;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(int)arg1 ;
-(void)setSelectionToStart;
-(CGRect)rectForSelection:(NSRange)arg1 ;
-(id)contentAsHTMLString;
-(char)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(char)arg1 ;
-(int)marginTop;
-(void)setMarginTop:(int)arg1 ;
-(void)setShouldAutoscrollAboveBottom:(char)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(id)automaticallySelectedOverlay;
-(void)setBottomBufferHeight:(float)arg1 ;
-(float)bottomBufferHeight;
-(void)setShowScrollerIndicators:(char)arg1 ;
-(char)showScrollerIndicators;
-(void)displayScrollerIndicators;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setAllowsRubberBanding:(char)arg1 ;
-(char)scrollingEnabled;
-(void)setAllowsFourWayRubberBanding:(char)arg1 ;
-(void)setScrollerIndicatorSubrect:(CGRect)arg1 ;
-(void)scrollToMakeCaretVisible:(char)arg1 ;
-(Class)_printFormatterClass;
-(void)setInputView:(UIView *)arg1 ;
-(void)_setFreezeTextContainerSize:(char)arg1 ;
@end

