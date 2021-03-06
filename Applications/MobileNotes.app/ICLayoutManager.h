/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIFoundation/NSLayoutManager.h>
#import <MobileNotes/ICTrackedAttributeDelegate.h>

@class UITextView, NSMutableDictionary, ICSelectorDelayer, NSTextContainer, ICTextController;

@interface ICLayoutManager : NSLayoutManager <ICTrackedAttributeDelegate> {

	char _isZooming;
	char _isUpdatingForAttachmentViewTypeChange;
	char _lineHeightIncludeParagraphSpacing;
	char _shouldManuallyRenderSeparateSubviews;
	char _needsClearRemovedAttachments;
	UITextView* _textView;
	NSMutableDictionary* _todoButtonsByTrackingUUID;
	NSMutableDictionary* _activeSupplementalViews;
	NSMutableDictionary* _hiddenSupplementalViews;
	ICSelectorDelayer* _updateHiddenViewsSelectorDelayer;
	NSMutableDictionary* _delayedScrollOutViewDictionary;
	CGPoint _cachedOrigin;
	CGSize _cachedTextContainerSize;
	CGRect _layoutEnsuredBounds;

}

@property (nonatomic,readonly) NSTextContainer * textContainer; 
@property (nonatomic,readonly) ICTextController * textController; 
@property (nonatomic,retain) NSMutableDictionary * todoButtonsByTrackingUUID;                   //@synthesize todoButtonsByTrackingUUID=_todoButtonsByTrackingUUID - In the implementation block
@property (assign,nonatomic) CGPoint cachedOrigin;                                              //@synthesize cachedOrigin=_cachedOrigin - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeSupplementalViews;                     //@synthesize activeSupplementalViews=_activeSupplementalViews - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hiddenSupplementalViews;                     //@synthesize hiddenSupplementalViews=_hiddenSupplementalViews - In the implementation block
@property (assign,nonatomic) CGSize cachedTextContainerSize;                                    //@synthesize cachedTextContainerSize=_cachedTextContainerSize - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * updateHiddenViewsSelectorDelayer;              //@synthesize updateHiddenViewsSelectorDelayer=_updateHiddenViewsSelectorDelayer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * delayedScrollOutViewDictionary;              //@synthesize delayedScrollOutViewDictionary=_delayedScrollOutViewDictionary - In the implementation block
@property (assign,nonatomic) CGRect layoutEnsuredBounds;                                        //@synthesize layoutEnsuredBounds=_layoutEnsuredBounds - In the implementation block
@property (assign,nonatomic) char isZooming;                                                    //@synthesize isZooming=_isZooming - In the implementation block
@property (assign,nonatomic) char isUpdatingForAttachmentViewTypeChange;                        //@synthesize isUpdatingForAttachmentViewTypeChange=_isUpdatingForAttachmentViewTypeChange - In the implementation block
@property (assign,nonatomic) char lineHeightIncludeParagraphSpacing;                            //@synthesize lineHeightIncludeParagraphSpacing=_lineHeightIncludeParagraphSpacing - In the implementation block
@property (assign,nonatomic) char shouldManuallyRenderSeparateSubviews;                         //@synthesize shouldManuallyRenderSeparateSubviews=_shouldManuallyRenderSeparateSubviews - In the implementation block
@property (assign,nonatomic,__weak) UITextView * textView;                                      //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) char needsClearRemovedAttachments;                                 //@synthesize needsClearRemovedAttachments=_needsClearRemovedAttachments - In the implementation block
-(void)clearViewsForAllTextAttachmentsThatSupportThumbnailMode;
-(void)setIsUpdatingForAttachmentViewTypeChange:(char)arg1 ;
-(void)invalidateLayoutAfterAttachmentViewTypeChangeIfNecessary;
-(UIView*)viewForTextAttachment:(id)arg1 ;
-(NSRange)rangeForAttachment:(id)arg1 withTextAttachment:(id*)arg2 ;
-(void)updateSubviewsForCharacterRange:(NSRange)arg1 ;
-(ICTextController *)textController;
-(void)updateVisibleSupplementalViews;
-(void)clearLayoutEnsuredBounds;
-(void)setTodoButtonsByTrackingUUID:(NSMutableDictionary *)arg1 ;
-(void)setActiveSupplementalViews:(NSMutableDictionary *)arg1 ;
-(void)setHiddenSupplementalViews:(NSMutableDictionary *)arg1 ;
-(void)setDelayedScrollOutViewDictionary:(NSMutableDictionary *)arg1 ;
-(void)updateHiddenSupplementalViews;
-(void)setUpdateHiddenViewsSelectorDelayer:(ICSelectorDelayer *)arg1 ;
-(ICSelectorDelayer *)updateHiddenViewsSelectorDelayer;
-(void)clearAllSupplementalViews;
-(void)setLineHeightIncludeParagraphSpacing:(char)arg1 ;
-(void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 updateAttachments:(char)arg3 ;
-(CGPoint)cachedOrigin;
-(void)updateSubviewsForCharacterRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)drawListStylesForCharacterRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(char)shouldManuallyRenderSeparateSubviews;
-(void)manuallyRenderSubviewsForCharacterRange:(NSRange)arg1 ;
-(void)setNeedsClearRemovedAttachments:(char)arg1 ;
-(CGSize)cachedTextContainerSize;
-(void)setCachedTextContainerSize:(CGSize)arg1 ;
-(char)lineHeightIncludeParagraphSpacing;
-(NSMutableDictionary *)todoButtonsByTrackingUUID;
-(void)clearSupplementalViewForIdentifier:(id)arg1 ;
-(void)drawBulletsForListRange:(NSRange)arg1 paragraphStyle:(id)arg2 atPoint:(CGPoint)arg3 ;
-(NSMutableDictionary *)activeSupplementalViews;
-(void)didPressTodoButton:(id)arg1 ;
-(id)icTextView;
-(char)selectedRangesIntersectWithRange:(NSRange)arg1 ;
-(float)bulletYOffsetForCharacterAtIndex:(unsigned)arg1 ;
-(void)setCachedOrigin:(CGPoint)arg1 ;
-(void)updateFrameOfViewForAttachment:(id)arg1 inCharacterRange:(NSRange)arg2 atPoint:(CGPoint)arg3 ;
-(void)ensureViewIsAddedForAttachment:(id)arg1 inCharacterRange:(NSRange)arg2 ;
-(id)drawTodoViewForListRange:(NSRange)arg1 paragraphStyle:(id)arg2 atPoint:(CGPoint)arg3 ;
-(NSMutableDictionary *)hiddenSupplementalViews;
-(NSMutableDictionary *)delayedScrollOutViewDictionary;
-(void)clearRemovedAttachmentsIfNeeded;
-(char)needsClearRemovedAttachments;
-(void)_clearRemovedAttachments;
-(char)unhideSupplementalView:(UIView*)arg1 forIdentifier:(id)arg2 ;
-(UIView*)supplementalViewForIdentifier:(id)arg1 allowHiddenViews:(char)arg2 ;
-(CGRect)layoutEnsuredBounds;
-(void)setLayoutEnsuredBounds:(CGRect)arg1 ;
-(void)enumerateAttachmentViewsInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)hideSupplementalView:(UIView*)arg1 forIdentifier:(id)arg2 ;
-(void)invalidateLayoutForAttachment:(id)arg1 ;
-(void)clearViewForTextAttachment:(id)arg1 ;
-(char)isUpdatingForAttachmentViewTypeChange;
-(void)invalidateLayoutAfterAttachmentViewTypeChange;
-(CGRect)lineRectForRange:(NSRange)arg1 ;
-(CGRect)usedLineRectForRange:(NSRange)arg1 ;
-(void)clearAllTodos;
-(void)ensureLayoutForSurroundingPages;
-(id)icaxTodoButtonForParagraphStyle:(id)arg1 ;
-(void)setIsZooming:(char)arg1 ;
-(void)setShouldManuallyRenderSeparateSubviews:(char)arg1 ;
-(void)fillBackgroundRectArray:(const CGRect*)arg1 count:(unsigned)arg2 forCharacterRange:(NSRange)arg3 color:(UIColor*)arg4 ;
-(id)init;
-(void)dealloc;
-(char)isZooming;
-(void)setTextView:(UITextView *)arg1 ;
-(void)ensureLayoutForTextContainer:(id)arg1 ;
-(id)textContainerForGlyphAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)invalidateLayoutForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
-(NSTextContainer *)textContainer;
-(UITextView *)textView;
-(CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)textContainerChangedGeometry:(id)arg1 ;
-(void)processEditingForTextStorage:(id)arg1 edited:(unsigned)arg2 range:(NSRange)arg3 changeInLength:(int)arg4 invalidatedRange:(NSRange)arg5 ;
-(void)textStorageDidEndEditingNotification:(id)arg1 ;
-(UIView*)viewForTextAttachmentNoCreate:(id)arg1 ;
-(void)icReplaceTextStorage:(id)arg1 ;
-(void)textController:(id)arg1 updatedTrackedAttribute:(id)arg2 ;
-(void)textController:(id)arg1 removedTrackedAttribute:(id)arg2 ;
-(void)textController:(id)arg1 addedTrackedAttribute:(id)arg2 ;
-(void)receivedMemoryWarning:(id)arg1 ;
-(void)attachmentDidLoad:(id)arg1 ;
-(void)mediaDidLoad:(id)arg1 ;
-(void)contentSizeCategoryDidChange;
@end

