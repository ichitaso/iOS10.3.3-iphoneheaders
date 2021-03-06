/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICFreeTransformableViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@protocol ICAttachmentPresentationDelegate;
@class UIImage, ICNoTransformImageView, UIScrollView, ICFreeTransformGestureRecognizer, NotesBackgroundView, NSString;

@interface ICImageViewController : ICFreeTransformableViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, UIDocumentInteractionControllerDelegate> {

	char _inSizeChange;
	char _inDoubleTapZoom;
	char _imageIsSmallerThanView;
	char _didUpdatePinchGestureRecognizer;
	char _pinchingFromSmallestState;
	char _didDismissViewController;
	UIImage* _image;
	ICNoTransformImageView* _imageView;
	id<ICAttachmentPresentationDelegate> _attachmentPresentationDelegate;
	UIScrollView* _scrollView;
	float _minZoomScale;
	float _maxZoomScale;
	float _pinchMaxZoomScale;
	ICFreeTransformGestureRecognizer* _freeTransformGestureRecognizer;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                                      //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) char inSizeChange;                                                              //@synthesize inSizeChange=_inSizeChange - In the implementation block
@property (assign,nonatomic) char inDoubleTapZoom;                                                           //@synthesize inDoubleTapZoom=_inDoubleTapZoom - In the implementation block
@property (assign,nonatomic) float minZoomScale;                                                             //@synthesize minZoomScale=_minZoomScale - In the implementation block
@property (assign,nonatomic) float maxZoomScale;                                                             //@synthesize maxZoomScale=_maxZoomScale - In the implementation block
@property (assign,nonatomic) float pinchMaxZoomScale;                                                        //@synthesize pinchMaxZoomScale=_pinchMaxZoomScale - In the implementation block
@property (assign,nonatomic) char imageIsSmallerThanView;                                                    //@synthesize imageIsSmallerThanView=_imageIsSmallerThanView - In the implementation block
@property (assign,nonatomic) char didUpdatePinchGestureRecognizer;                                           //@synthesize didUpdatePinchGestureRecognizer=_didUpdatePinchGestureRecognizer - In the implementation block
@property (assign,nonatomic) char pinchingFromSmallestState;                                                 //@synthesize pinchingFromSmallestState=_pinchingFromSmallestState - In the implementation block
@property (assign,nonatomic) char didDismissViewController;                                                  //@synthesize didDismissViewController=_didDismissViewController - In the implementation block
@property (nonatomic,readonly) NotesBackgroundView * backgroundView; 
@property (nonatomic,retain) ICFreeTransformGestureRecognizer * freeTransformGestureRecognizer;              //@synthesize freeTransformGestureRecognizer=_freeTransformGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) ICNoTransformImageView * imageView;                                             //@synthesize imageView=_imageView - In the implementation block
@property (__weak) id<ICAttachmentPresentationDelegate> attachmentPresentationDelegate;                      //@synthesize attachmentPresentationDelegate=_attachmentPresentationDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ICAttachmentPresentationDelegate>)attachmentPresentationDelegate;
-(void)setAttachmentPresentationDelegate:(id<ICAttachmentPresentationDelegate>)arg1 ;
-(void)setFreeTransformGestureRecognizer:(ICFreeTransformGestureRecognizer *)arg1 ;
-(ICFreeTransformGestureRecognizer *)freeTransformGestureRecognizer;
-(char)contentHidden;
-(void)setContentHidden:(char)arg1 ;
-(void)shareAction:(id)arg1 ;
-(void)pinchGesture:(id)arg1 ;
-(char)didDismissViewController;
-(void)setPinchingFromSmallestState:(char)arg1 ;
-(void)setDidDismissViewController:(char)arg1 ;
-(char)pinchingFromSmallestState;
-(void)setImage:(id)arg1 resetView:(char)arg2 ;
-(void)imageDoubleTapGesture:(id)arg1 ;
-(void)singleTapGesture:(id)arg1 ;
-(id)backgroundTextureView;
-(void)updateToolbars;
-(void)toggleNavigationBarHidden;
-(char)imageIsSmallerThanView;
-(void)setInSizeChange:(char)arg1 ;
-(float)maxZoomScaleForImageSize:(CGSize)arg1 ;
-(void)setImageIsSmallerThanView:(char)arg1 ;
-(void)setPinchMaxZoomScale:(float)arg1 ;
-(void)setMaxZoomScale:(float)arg1 ;
-(void)setMinZoomScale:(float)arg1 ;
-(char)didUpdatePinchGestureRecognizer;
-(void)setDidUpdatePinchGestureRecognizer:(char)arg1 ;
-(char)inSizeChange;
-(void)resetScaleToMinimum;
-(id)scrimColor;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(UIScrollView *)scrollView;
-(UIImage *)image;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(NotesBackgroundView *)backgroundView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(ICNoTransformImageView *)imageView;
-(void)dismiss;
-(char)accessibilityPerformEscape;
-(void)setImageView:(ICNoTransformImageView *)arg1 ;
-(float)minZoomScale;
-(float)maxZoomScale;
-(CGRect)zoomRectForScale:(float)arg1 withCenter:(CGPoint)arg2 ;
-(float)pinchMaxZoomScale;
-(void)updateZoomScales;
-(void)resetZoomScale;
-(char)inDoubleTapZoom;
-(void)setInDoubleTapZoom:(char)arg1 ;
-(void)doneAction:(id)arg1 ;
@end

