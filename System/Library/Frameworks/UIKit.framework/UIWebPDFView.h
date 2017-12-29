/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPDFPageViewDelegate.h>
#import <UIKit/UIPDFAnnotationControllerDelegate.h>
#import <libobjc.A.dylib/WebPDFViewPlaceholderDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIWebPDFViewDelegate;
@class NSMutableArray, UIPDFDocument, NSObject, UITapGestureRecognizer, NSURL, NSArray, WebPDFViewPlaceholder, UIColor, NSString, NSData;

@interface UIWebPDFView : UIView <UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate> {

	NSMutableArray* _backingLayerImageViews;
	CGPDFDocumentRef _cgPDFDocument;
	UIPDFDocument* _document;
	char _hasScheduledCacheUpdate;
	CGRect _documentBounds;
	NSObject*<UIWebPDFViewDelegate> _pdfDelegate;
	char _delegateRespondsToDidScroll;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSURL* _documentURL;
	char _rotating;
	char _zooming;
	float _initialZoomScale;
	CGAffineTransform _documentTransform;
	float _documentScale;
	int _ignoreContentOffsetChanges;
	CGPoint _contentOffsetAtScrollStart;
	NSMutableArray* _pageViews;
	NSArray* _pageMinYs;
	char hidePageViewsUntilReadyToRender;
	char hideActivityIndicatorForUnRenderedContent;
	char readyForSnapshot;
	WebPDFViewPlaceholder* pdfPlaceHolderView;
	UIColor* backgroundColorForUnRenderedContent;
	NSString* documentPassword;
	NSArray* pageRects;

}

@property (assign) WebPDFViewPlaceholder * pdfPlaceHolderView; 
@property (nonatomic,retain) NSURL * documentURL;                                         //@synthesize documentURL=_documentURL - In the implementation block
@property (assign,nonatomic) float initialZoomScale;                                      //@synthesize initialZoomScale=_initialZoomScale - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorForUnRenderedContent; 
@property (assign,nonatomic) char hideActivityIndicatorForUnRenderedContent; 
@property (assign,nonatomic) char hidePageViewsUntilReadyToRender; 
@property (assign,nonatomic) int ignoreContentOffsetChanges;                              //@synthesize ignoreContentOffsetChanges=_ignoreContentOffsetChanges - In the implementation block
@property (assign,nonatomic) CGAffineTransform documentTransform;                         //@synthesize documentTransform=_documentTransform - In the implementation block
@property (nonatomic,retain) NSString * documentPassword; 
@property (nonatomic,readonly) float documentScale;                                       //@synthesize documentScale=_documentScale - In the implementation block
@property (nonatomic,retain) NSArray * pageRects; 
@property (assign,nonatomic) char readyForSnapshot; 
@property (nonatomic,retain) NSArray * pageMinYs;                                         //@synthesize pageMinYs=_pageMinYs - In the implementation block
@property (assign,nonatomic) NSObject*<UIWebPDFViewDelegate> pdfDelegate;                 //@synthesize pdfDelegate=_pdfDelegate - In the implementation block
@property (nonatomic,readonly) CGRect documentBounds;                                     //@synthesize documentBounds=_documentBounds - In the implementation block
@property (nonatomic,readonly) unsigned totalPages; 
@property (nonatomic,readonly) CGPDFDocumentRef cgPDFDocument; 
@property (nonatomic,readonly) UIPDFDocument * document; 
@property (nonatomic,readonly) NSData * documentData; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setAsPDFDocRepAndView;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(CGRect)documentBounds;
-(void)_didScroll;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)clearSelection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned)totalPages;
-(NSArray *)pageRects;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(UIPDFDocument *)document;
-(id)_selection;
-(id)uiPDFDocument;
-(void)setBackgroundColorForUnRenderedContent:(UIColor *)arg1 ;
-(void)setPdfPlaceHolderView:(WebPDFViewPlaceholder *)arg1 ;
-(WebPDFViewPlaceholder *)pdfPlaceHolderView;
-(void)didCompleteLayout;
-(void)_tapGestureRecognized:(id)arg1 ;
-(void)willZoom:(id)arg1 ;
-(void)didZoom:(id)arg1 ;
-(void)willScroll:(id)arg1 ;
-(void)setPageRects:(NSArray *)arg1 ;
-(void)setPageMinYs:(NSArray *)arg1 ;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(void)setDocumentPassword:(NSString *)arg1 ;
-(void)_removeBackgroundImageObserverIfNeeded:(id)arg1 ;
-(id)viewportView;
-(CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)arg1 ;
-(void)setReadyForSnapshot:(char)arg1 ;
-(id)viewAtIndex:(int)arg1 ;
-(id)_installViewAtIndex:(int)arg1 inFrame:(CGRect)arg2 ;
-(CGRect)_viewCachingBoundsInUIViewCoords;
-(void)_removePageViewsNotInViewCoordsRect:(CGRect)arg1 ;
-(void)_removePageViewsNotInCurrentViewCoordsRect;
-(void)_addSubViewsInViewCoordsBounds:(CGRect)arg1 force:(char)arg2 ;
-(void)_scheduleRemovePageViewsNotInViewCoordsRect;
-(void)ensureCorrectPagesAreInstalled:(char)arg1 ;
-(CGRect)_viewportBoundsInUIViewCoords;
-(void)_recreateUIPDFDocument;
-(NSString *)documentPassword;
-(char)_checkIfDocumentNeedsUnlock;
-(void)resetZoom:(id)arg1 ;
-(void)_didTouch:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToURL:(id)arg4 ;
-(void)_didTouch:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToPageIndex:(unsigned)arg4 ;
-(void)_didLongPress:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToURL:(id)arg4 ;
-(void)_didLongPress:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToPageIndex:(unsigned)arg4 ;
-(id)_pageWithSelection;
-(unsigned)_pageNumberForRect:(CGRect)arg1 ;
-(CGPDFDocumentRef)cgPDFDocument;
-(void)zoom:(id)arg1 to:(CGRect)arg2 atPoint:(CGPoint)arg3 kind:(int)arg4 ;
-(void)annotation:(id)arg1 wasTouchedAtPoint:(CGPoint)arg2 controller:(id)arg3 ;
-(void)annotation:(id)arg1 isBeingPressedAtPoint:(CGPoint)arg2 controller:(id)arg3 ;
-(void)viewWillClose;
-(void)setIgnoreContentOffsetChanges:(int)arg1 ;
-(void)setPdfDelegate:(NSObject*<UIWebPDFViewDelegate>)arg1 ;
-(char)_hasPageRects;
-(NSData *)documentData;
-(id)initWithWebPDFViewPlaceholder:(id)arg1 ;
-(id)_addPageAtIndex:(unsigned)arg1 ;
-(unsigned)firstVisiblePageNumber;
-(void)prepareForSnapshot:(char)arg1 ;
-(void)snapshotComplete;
-(char)_tryToUnlockDocumentWithPassword:(id)arg1 ;
-(id)imageForContactRect:(CGRect)arg1 onPageInViewRect:(CGRect)arg2 destinationRect:(CGRect)arg3 ;
-(NSURL *)documentURL;
-(NSObject*<UIWebPDFViewDelegate>)pdfDelegate;
-(float)initialZoomScale;
-(void)setInitialZoomScale:(float)arg1 ;
-(CGAffineTransform)documentTransform;
-(void)setDocumentTransform:(CGAffineTransform)arg1 ;
-(float)documentScale;
-(int)ignoreContentOffsetChanges;
-(char)hidePageViewsUntilReadyToRender;
-(void)setHidePageViewsUntilReadyToRender:(char)arg1 ;
-(UIColor *)backgroundColorForUnRenderedContent;
-(char)hideActivityIndicatorForUnRenderedContent;
-(void)setHideActivityIndicatorForUnRenderedContent:(char)arg1 ;
-(char)readyForSnapshot;
-(NSArray *)pageMinYs;
@end

