/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Magnifier.app/Magnifier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Magnifier/Magnifier-Structs.h>
#import <UIKit/UIViewController.h>
#import <Magnifier/MAGFilterSelectionPreviewDelegate.h>
#import <Magnifier/MAGFilterSelectionControlPanelDelegate.h>

@protocol MAGFilterSelectionViewControllerDelegate;
@class CALayer, MAGFilterSelectionPreviewView, MAGFilterSelectionControlPanel, NSArray, NSString;

@interface MAGFilterSelectionViewController : UIViewController <MAGFilterSelectionPreviewDelegate, MAGFilterSelectionControlPanelDelegate> {

	char _imageLayerRequiresOrientationCompensation;
	id<MAGFilterSelectionViewControllerDelegate> _delegate;
	CALayer* _imageLayer;
	MAGFilterSelectionPreviewView* _previewView;
	MAGFilterSelectionControlPanel* _controlPanel;
	NSArray* _normalLayoutConstraints;
	NSArray* _transitioningLayoutConstraints;

}

@property (nonatomic,retain) CALayer * imageLayer;                                                      //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,retain) MAGFilterSelectionPreviewView * previewView;                               //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) MAGFilterSelectionControlPanel * controlPanel;                             //@synthesize controlPanel=_controlPanel - In the implementation block
@property (assign,nonatomic) char imageLayerRequiresOrientationCompensation;                            //@synthesize imageLayerRequiresOrientationCompensation=_imageLayerRequiresOrientationCompensation - In the implementation block
@property (nonatomic,retain) NSArray * normalLayoutConstraints;                                         //@synthesize normalLayoutConstraints=_normalLayoutConstraints - In the implementation block
@property (nonatomic,retain) NSArray * transitioningLayoutConstraints;                                  //@synthesize transitioningLayoutConstraints=_transitioningLayoutConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<MAGFilterSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectImageLayer;
-(void)compensateForCurrentInterfaceOrientation;
-(void)positionSelectedFilterSetAnimated:(char)arg1 ;
-(char)imageLayerForPreviewRequiresOrientationCompensation:(id)arg1 ;
-(void)resumeFromTransitionWithRootVCAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepForTransitionWithRootVCWithControlPanelFrame:(CGRect)arg1 filtersButtonFrameInControlPanel:(CGRect)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)userDidScrollToFilterSet:(id)arg1 inPreview:(id)arg2 ;
-(void)setNormalLayoutConstraints:(NSArray *)arg1 ;
-(NSArray *)normalLayoutConstraints;
-(void)contrastSliderDraggedToValue:(float)arg1 forControlPanel:(id)arg2 ;
-(void)brightnessSliderDraggedToValue:(float)arg1 forControlPanel:(id)arg2 ;
-(void)invertButtonTappedForControlPanel:(id)arg1 ;
-(void)filtersButtonTappedForControlPanel:(id)arg1 ;
-(void)dialChangedToFilterSet:(id)arg1 forControlPanel:(id)arg2 ;
-(void)setTransitioningLayoutConstraints:(NSArray *)arg1 ;
-(NSArray *)transitioningLayoutConstraints;
-(id)brightnessSliderForUnitTesting;
-(id)contrastSliderForUnitTesting;
-(void)setImageLayerRequiresOrientationCompensation:(char)arg1 ;
-(void)setControlPanel:(MAGFilterSelectionControlPanel *)arg1 ;
-(MAGFilterSelectionControlPanel *)controlPanel;
-(float)sliderValueFromContrastValue:(float)arg1 ;
-(float)sliderValueFromBrightnessValue:(float)arg1 ;
-(char)imageLayerRequiresOrientationCompensation;
-(float)contrastValueFromSliderValue:(float)arg1 ;
-(float)brightnessValueFromSliderValue:(float)arg1 ;
-(id)initWithImageLayer:(id)arg1 imageLayerRequiresOrientationCompensation:(char)arg2 ;
-(void)updateBrightnessAndContrastForAmbientLightChange;
-(void)setDelegate:(id<MAGFilterSelectionViewControllerDelegate>)arg1 ;
-(id<MAGFilterSelectionViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(char)accessibilityPerformEscape;
-(CALayer *)imageLayer;
-(void)setImageLayer:(CALayer *)arg1 ;
-(MAGFilterSelectionPreviewView *)previewView;
-(void)setPreviewView:(MAGFilterSelectionPreviewView *)arg1 ;
@end
