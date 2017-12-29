/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIImage, UINavigationBar, UIScrollView, UIImageView, NSString;

@interface FullscreenImageViewController : UIViewController <UIScrollViewDelegate> {

	UIImage* _image;
	UINavigationBar* _topBar;
	UIScrollView* _scrollView;
	UIImageView* _imageView;
	CGSize _lastContentSizeFrameSize;
	char _isZoomed;

}

@property (readonly) UIImageView * imageView;                       //@synthesize imageView=_imageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateMaxZoomScale;
-(void)_close:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(id)initWithImage:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(UIImageView *)imageView;
-(void)zoomToPoint:(id)arg1 ;
@end

