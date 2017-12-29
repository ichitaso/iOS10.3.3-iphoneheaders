/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/_UICompatibilityTextView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol NoteTextViewActionDelegate, NoteTextViewLayoutDelegate;
@class UILongPressGestureRecognizer, NSLayoutConstraint, NSString;

@interface NoteTextView : _UICompatibilityTextView <UIGestureRecognizerDelegate> {

	id<NoteTextViewActionDelegate> _actionDelegate;
	id<NoteTextViewLayoutDelegate> _layoutDelegate;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSLayoutConstraint* _contentSizeHeightConstraint;
	NSLayoutConstraint* _contentSizeWidthConstraint;

}

@property (assign,nonatomic,__weak) id<NoteTextViewActionDelegate> actionDelegate;                   //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NoteTextViewLayoutDelegate> layoutDelegate;                   //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentSizeHeightConstraint;                       //@synthesize contentSizeHeightConstraint=_contentSizeHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentSizeWidthConstraint;                        //@synthesize contentSizeWidthConstraint=_contentSizeWidthConstraint - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentAsPasteboardItems;
-(id)htmlDocument;
-(void)menuControllerWillHideNotification:(id)arg1 ;
-(void)insertImage:(id)arg1 ;
-(void)updateMenuController;
-(id)selectedContentAsPasteboardItems;
-(id)_contentAsPasteboardItemsForWebArchive:(id)arg1 selectionRange:(NSRange)arg2 ;
-(void)setGestureRecognizersPriorities;
-(NSLayoutConstraint *)contentSizeHeightConstraint;
-(void)setContentSizeHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentSizeWidthConstraint;
-(void)setContentSizeWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)dealloc;
-(void)addGestureRecognizer:(id)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(CGSize)intrinsicContentSize;
-(char)_forwardsToParentScroller;
-(id)_enclosingScrollerIncludingSelf;
-(id)_targetForAction:(SEL)arg1 withSender:(id)arg2 canPerformActionBlock:(/*^block*/id)arg3 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setEditable:(char)arg1 ;
-(id)selectedDOMRange;
-(id)initWithFrame:(CGRect)arg1 font:(id)arg2 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id)webArchive;
-(void)setActionDelegate:(id<NoteTextViewActionDelegate>)arg1 ;
-(id<NoteTextViewActionDelegate>)actionDelegate;
-(void)handleLongPressGesture:(id)arg1 ;
-(id)nodeAtPoint:(CGPoint*)arg1 ;
-(void)setLayoutDelegate:(id<NoteTextViewLayoutDelegate>)arg1 ;
-(id<NoteTextViewLayoutDelegate>)layoutDelegate;
-(id)_accessibilitySpeakSelectionAssociatedScrollView;
@end
