/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextInputPrivate.h>
#import <UIKit/UITextInput.h>

@protocol MFAtomTextViewDelegate;
@class UITextInteractionAssistant, UITextRange, NSDictionary, UITextPosition, UIView, UITextInputTraits, UIScrollView, _MFAtomFieldEditor, UILabel, UIButton, NSMutableArray, UIFont, NSString, NSArray, NSIndexSet, UIColor, UIImage, UIInputContextHistory;

@interface MFAtomTextView : UIControl <NSLayoutManagerDelegate, UITextViewDelegate, UITextInputPrivate, UITextInput> {

	UITextInputTraits* _textInputTraits;
	UIScrollView* _scrollView;
	_MFAtomFieldEditor* _textView;
	UILabel* _placeholderLabel;
	UIButton* _clearButton;
	NSMutableArray* _atomViews;
	struct {
		unsigned delegateDidChangeSelection : 1;
		unsigned delegateSupportedPasteboardTypes : 1;
		unsigned delegateRepresentedObjectsFromPasteboard : 1;
		unsigned delegateStoreRepresentedObjectsOnPasteboard : 1;
		unsigned inLayoutSubviews : 1;
	}  _flags;
	id<MFAtomTextViewDelegate> _delegate;
	UIFont* _font;
	NSString* _placeholder;
	UIView* _leadingView;
	int _leadingViewMode;
	UIView* _trailingView;
	int _trailingViewMode;
	int _clearButtonMode;

}

@property (nonatomic,retain,readonly) UILabel * placeholderLabel; 
@property (nonatomic,retain,readonly) UIButton * clearButton; 
@property (assign,nonatomic) id<MFAtomTextViewDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                                //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                                         //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) UIView * leadingView;                                                         //@synthesize leadingView=_leadingView - In the implementation block
@property (assign,nonatomic) int leadingViewMode;                                                          //@synthesize leadingViewMode=_leadingViewMode - In the implementation block
@property (nonatomic,retain) UIView * trailingView;                                                        //@synthesize trailingView=_trailingView - In the implementation block
@property (assign,nonatomic) int trailingViewMode;                                                         //@synthesize trailingViewMode=_trailingViewMode - In the implementation block
@property (assign,nonatomic) int clearButtonMode;                                                          //@synthesize clearButtonMode=_clearButtonMode - In the implementation block
@property (nonatomic,copy) NSArray * representedObjects; 
@property (nonatomic,copy,readonly) NSArray * selectedRepresentedObjects; 
@property (nonatomic,copy,readonly) NSString * currentEditingString; 
@property (nonatomic,readonly) char shouldCenterPlaceholder; 
@property (getter=_fieldEditor,nonatomic,retain,readonly) _MFAtomFieldEditor * fieldEditor; 
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
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) char isSingleLineDocument; 
@property (assign,nonatomic) char contentsIsSingleValue; 
@property (assign,nonatomic) char hasDefaultContents; 
@property (assign,nonatomic) char acceptsEmoji; 
@property (assign,nonatomic) char acceptsDictationSearchResults; 
@property (assign,nonatomic) char forceEnableDictation; 
@property (assign,nonatomic) char forceDisableDictation; 
@property (assign,nonatomic) char forceDefaultDictationInfo; 
@property (assign,nonatomic) int forceDictationKeyboardType; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) char returnKeyGoesToNextResponder; 
@property (assign,nonatomic) char acceptsFloatingKeyboard; 
@property (assign,nonatomic) char acceptsSplitKeyboard; 
@property (assign,nonatomic) char displaySecureTextUsingPlainText; 
@property (assign,nonatomic) char displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) char learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) char suppressReturnKeyStyling; 
@property (assign,nonatomic) char useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) char deferBecomingResponder; 
@property (assign,nonatomic) char enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) char disablePrediction; 
@property (assign,nonatomic) char disableInputBars; 
@property (assign,nonatomic) char isCarPlayIdiom; 
@property (assign,nonatomic) int textScriptType; 
@property (assign,getter=isDevicePasscodeEntry,nonatomic) char devicePasscodeEntry; 
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) int selectionGranularity; 
@property (nonatomic,readonly) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate; 
@property (assign,nonatomic) int _textInputSource; 
+(Class)_fieldEditorClass;
+(id)defaultFont;
-(UIView *)trailingView;
-(void)setTrailingView:(UIView *)arg1 ;
-(void)escKeyPressed:(id)arg1 ;
-(NSString *)currentEditingString;
-(void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1 autoSelect:(char)arg2 ;
-(NSArray *)selectedRepresentedObjects;
-(void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1 ;
-(UIView *)leadingView;
-(void)setLeadingView:(UIView *)arg1 ;
-(void)setLeadingViewMode:(int)arg1 ;
-(char)shouldCenterPlaceholder;
-(id)baseAttributes;
-(id)_atomLayoutViewForRepresentedObject:(id)arg1 ;
-(id)_representedObjectsInRange:(NSRange)arg1 ranges:(id*)arg2 ;
-(id)currentEditingString:(NSRange*)arg1 ;
-(id)_baseAttributedStringWithRepresentedObject:(id)arg1 ;
-(void)_deleteCharactersInStorage:(id)arg1 ranges:(id)arg2 rangeToAdjust:(NSRange*)arg3 ;
-(void)removeRepresentedObjectsAtIndexes:(id)arg1 ;
-(void)removeRepresentedObjects:(id)arg1 ;
-(UIEdgeInsets)_atomClippingInsets;
-(CGRect)_rectForBounds:(CGRect)arg1 size:(CGSize)arg2 isLeft:(char)arg3 ;
-(char)_showsPlaceholder;
-(char)_showViewWithMode:(int)arg1 alwaysDefinition:(char)arg2 ;
-(int)leadingViewMode;
-(char)_showsClearButton;
-(int)trailingViewMode;
-(CGRect)clearButtonFrame;
-(char)_showsLeadingView;
-(CGRect)leadingViewFrame;
-(char)_showsTrailingView;
-(CGRect)trailingViewFrame;
-(CGRect)placeholderFrame;
-(NSRange)_characterRangeForAtomView:(id)arg1 ;
-(CGRect)_usedRectWithLayoutManager:(id)arg1 textContainer:(id)arg2 ;
-(CGRect)_visibleAtomsRect;
-(void)_updateAtomMasksInRect:(CGRect)arg1 ;
-(id)_attachmentAtCharacterIndex:(unsigned)arg1 ;
-(void)insertRepresentedObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeRepresentedObjectAtIndex:(unsigned)arg1 ;
-(void)removeRepresentedObject:(id)arg1 ;
-(id)_supportedPasteboardTypes;
-(id)_representedObjectsFromPasteboard:(id)arg1 ;
-(void)_storeRepresentedObjects:(id)arg1 onPasteboard:(id)arg2 ;
-(void)_insertRepresentedObjects:(id)arg1 atCharacterRange:(NSRange)arg2 ;
-(void)_removeRepresentedObjectsInCharacterRange:(NSRange)arg1 ;
-(void)setTrailingViewMode:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MFAtomTextViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<MFAtomTextViewDelegate>)delegate;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(id)keyCommands;
-(void)setFont:(UIFont *)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(char)canBecomeFirstResponder;
-(char)isFirstResponder;
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
-(id)positionWithinRange:(id)arg1 atCharacterOffset:(int)arg2 ;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(char)hasText;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(UIFont *)font;
-(id)_fieldEditor;
-(char)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(id)textInputTraits;
-(void)takeTraitsFrom:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(char)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout CGRect*)arg2 lineFragmentUsedRect:(inout CGRect*)arg3 baselineOffset:(inout float*)arg4 inTextContainer:(id)arg5 forGlyphRange:(NSRange)arg6 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(char)arg3 ;
-(void)selectAll;
-(NSRange)selectionRange;
-(char)canResignFirstResponder;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)hasSelection;
-(char)hasContent;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3 ;
-(char)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3 ;
-(id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3 ;
-(char)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(void)__resumeBecomeFirstResponder;
-(void)setClearButtonMode:(int)arg1 ;
-(void)_setEnabled:(char)arg1 animated:(char)arg2 ;
-(id)_clearButtonImageForState:(unsigned)arg1 ;
-(CGSize)_clearButtonSize;
-(void)_layoutPlaceholder;
-(int)clearButtonMode;
-(UIButton *)clearButton;
-(char)_hasContent;
-(UILabel *)placeholderLabel;
-(NSArray *)representedObjects;
-(void)setRepresentedObjects:(NSArray *)arg1 ;
-(void)_layoutButtons;
-(void)addRepresentedObject:(id)arg1 ;
-(void)_tapRecognized:(id)arg1 ;
-(id)placeholderColor;
-(void)_clearButtonTapped:(id)arg1 ;
-(id)paragraphStyle;
@end

