/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Magnifier.app/Magnifier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Magnifier/Magnifier-Structs.h>
#import <UIKit/UIViewController.h>
#import <Magnifier/MAGFilterSelectionViewControllerDelegate.h>
#import <Magnifier/MAGLiveViewControlPanelDelegate.h>
#import <Magnifier/MAGLiveMagnifierViewDelegate.h>
#import <Magnifier/MAGSnapshotViewDelegate.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol OS_dispatch_queue, NSObject, AVCapturePhotoCaptureDelegate;
@class NSObject, AVCaptureDevice, AVCaptureSession, AVCapturePhotoOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, MAGLiveMagnifierView, MAGControlPanel, NSLayoutConstraint, NSString, MAGSnapshotView, UITapGestureRecognizer, MAGFilterSelectionZoomTransitioningDelegate, MAGFilterSelectionViewController, MAGAutoBrightnessManager, AXDispatchTimer;

@interface MAGRootViewController : UIViewController <MAGFilterSelectionViewControllerDelegate, MAGLiveViewControlPanelDelegate, MAGLiveMagnifierViewDelegate, MAGSnapshotViewDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {

	char _torchOnWhenSnapshotTaken;
	char _cameraDeviceHasTorch;
	char _viewHasAppeared;
	char _proceedWithControlsHidingForSnapshotView;
	char _transitioningToSnapshotView;
	char _adjustingMagnificationFactorViaControlPanel;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	AVCaptureDevice* _cameraDevice;
	AVCaptureSession* _currentSession;
	AVCapturePhotoOutput* _photoOutput;
	AVCaptureVideoDataOutput* _videoDataOutput;
	AVCaptureVideoPreviewLayer* _previewLayer;
	MAGLiveMagnifierView* _liveMagnifierView;
	MAGControlPanel* _liveViewControlPanel;
	float _zoomFactorAtGestureStart;
	NSLayoutConstraint* _liveViewControlPanelOnscreenYConstraint;
	NSLayoutConstraint* _liveViewControlPanelOffscreenYConstraint;
	NSObject*<OS_dispatch_queue> _videoSampleQueue;
	id<NSObject> _lastVideoSample;
	NSString* _hqSnapshotFilesystemPath;
	id<AVCapturePhotoCaptureDelegate> _currentPhotoCaptureDelegate;
	MAGSnapshotView* _snapshotView;
	UITapGestureRecognizer* _snapshotViewTapGestureRecognizer;
	UITapGestureRecognizer* _snapshotViewDoubleTapGestureRecognizer;
	MAGFilterSelectionZoomTransitioningDelegate* _filterSelectionTransitioningDelegate;
	MAGFilterSelectionViewController* _presentedFilterSelectionVC;
	/*^block*/id _snapshotReplacementBlockForUnitTesting;
	/*^block*/id _finishedRampingVideoZoomCallback;
	MAGAutoBrightnessManager* _autoBrightnessManager;
	AXDispatchTimer* _activeInactiveTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sessionQueue;                                                       //@synthesize sessionQueue=_sessionQueue - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * cameraDevice;                                                                  //@synthesize cameraDevice=_cameraDevice - In the implementation block
@property (nonatomic,retain) AVCaptureSession * currentSession;                                                               //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,retain) AVCapturePhotoOutput * photoOutput;                                                              //@synthesize photoOutput=_photoOutput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoDataOutput * videoDataOutput;                                                      //@synthesize videoDataOutput=_videoDataOutput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * previewLayer;                                                       //@synthesize previewLayer=_previewLayer - In the implementation block
@property (nonatomic,retain) MAGLiveMagnifierView * liveMagnifierView;                                                        //@synthesize liveMagnifierView=_liveMagnifierView - In the implementation block
@property (nonatomic,retain) MAGControlPanel * liveViewControlPanel;                                                          //@synthesize liveViewControlPanel=_liveViewControlPanel - In the implementation block
@property (assign,nonatomic) float zoomFactorAtGestureStart;                                                                  //@synthesize zoomFactorAtGestureStart=_zoomFactorAtGestureStart - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * liveViewControlPanelOnscreenYConstraint;                                    //@synthesize liveViewControlPanelOnscreenYConstraint=_liveViewControlPanelOnscreenYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * liveViewControlPanelOffscreenYConstraint;                                   //@synthesize liveViewControlPanelOffscreenYConstraint=_liveViewControlPanelOffscreenYConstraint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> videoSampleQueue;                                                   //@synthesize videoSampleQueue=_videoSampleQueue - In the implementation block
@property (retain) id<NSObject> lastVideoSample;                                                                              //@synthesize lastVideoSample=_lastVideoSample - In the implementation block
@property (assign,nonatomic) char torchOnWhenSnapshotTaken;                                                                   //@synthesize torchOnWhenSnapshotTaken=_torchOnWhenSnapshotTaken - In the implementation block
@property (assign,nonatomic) char cameraDeviceHasTorch;                                                                       //@synthesize cameraDeviceHasTorch=_cameraDeviceHasTorch - In the implementation block
@property (assign,nonatomic) char viewHasAppeared;                                                                            //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (nonatomic,retain) NSString * hqSnapshotFilesystemPath;                                                             //@synthesize hqSnapshotFilesystemPath=_hqSnapshotFilesystemPath - In the implementation block
@property (nonatomic,retain) id<AVCapturePhotoCaptureDelegate> currentPhotoCaptureDelegate;                                   //@synthesize currentPhotoCaptureDelegate=_currentPhotoCaptureDelegate - In the implementation block
@property (nonatomic,retain) MAGSnapshotView * snapshotView;                                                                  //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) char proceedWithControlsHidingForSnapshotView;                                                   //@synthesize proceedWithControlsHidingForSnapshotView=_proceedWithControlsHidingForSnapshotView - In the implementation block
@property (assign,nonatomic) char transitioningToSnapshotView;                                                                //@synthesize transitioningToSnapshotView=_transitioningToSnapshotView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * snapshotViewTapGestureRecognizer;                                       //@synthesize snapshotViewTapGestureRecognizer=_snapshotViewTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * snapshotViewDoubleTapGestureRecognizer;                                 //@synthesize snapshotViewDoubleTapGestureRecognizer=_snapshotViewDoubleTapGestureRecognizer - In the implementation block
@property (assign,nonatomic) char adjustingMagnificationFactorViaControlPanel;                                                //@synthesize adjustingMagnificationFactorViaControlPanel=_adjustingMagnificationFactorViaControlPanel - In the implementation block
@property (nonatomic,retain) MAGFilterSelectionZoomTransitioningDelegate * filterSelectionTransitioningDelegate;              //@synthesize filterSelectionTransitioningDelegate=_filterSelectionTransitioningDelegate - In the implementation block
@property (nonatomic,retain) MAGFilterSelectionViewController * presentedFilterSelectionVC;                                   //@synthesize presentedFilterSelectionVC=_presentedFilterSelectionVC - In the implementation block
@property (nonatomic,copy) id snapshotReplacementBlockForUnitTesting;                                                         //@synthesize snapshotReplacementBlockForUnitTesting=_snapshotReplacementBlockForUnitTesting - In the implementation block
@property (nonatomic,copy) id finishedRampingVideoZoomCallback;                                                               //@synthesize finishedRampingVideoZoomCallback=_finishedRampingVideoZoomCallback - In the implementation block
@property (nonatomic,retain) MAGAutoBrightnessManager * autoBrightnessManager;                                                //@synthesize autoBrightnessManager=_autoBrightnessManager - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * activeInactiveTimer;                                                           //@synthesize activeInactiveTimer=_activeInactiveTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disconnectPreviewLayerForFilterSelectionTransitionIfNecessary;
-(void)pauseLiveMagnifierForInactive;
-(void)resumeLiveMagnifierForActive;
-(void)saveSnapshotToCameraRoll:(id)arg1 ;
-(void)snapshotViewPanned:(id)arg1 ;
-(void)snapshotViewZoomed:(id)arg1 ;
-(void)prepForTransitionWithFilterSelectionVCAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)reconnectPreviewLayerFromFilterSelectionTransitionIfNecessary;
-(void)zoomSliderValueChanged:(float)arg1 forControlPanel:(id)arg2 ;
-(void)torchModeChangedTo:(char)arg1 forControlPanel:(id)arg2 ;
-(void)snapshotButtonPressedForControlPanel:(id)arg1 ;
-(void)filtersButtonPressedForControlPanel:(id)arg1 ;
-(void)filtersButtonLongPressedForControlPanel:(id)arg1 ;
-(void)manualFocusChangedTo:(char)arg1 forControlPanel:(id)arg2 ;
-(void)resumeFromTransitionWithFilterSelectionVCAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)filterSelectionMadeInViewController:(id)arg1 ;
-(void)liveMagnifierViewAccessibilityIncremented:(id)arg1 ;
-(void)liveMagnifierViewAccessibilityDecremented:(id)arg1 ;
-(void)setAutoBrightnessManager:(MAGAutoBrightnessManager *)arg1 ;
-(void)setZoomFactorAtGestureStart:(float)arg1 ;
-(void)setVideoSampleQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_bestCaptureDevice;
-(void)setCameraDeviceHasTorch:(char)arg1 ;
-(void)setActiveInactiveTimer:(AXDispatchTimer *)arg1 ;
-(AXDispatchTimer *)activeInactiveTimer;
-(void)finishedRampingVideoZoom;
-(MAGAutoBrightnessManager *)autoBrightnessManager;
-(void)setLastVideoSample:(id<NSObject>)arg1 ;
-(id)_bestCaptureFormatForDevice:(id)arg1 ;
-(void)_executeBlockWithLockedCameraDevice:(/*^block*/id)arg1 ;
-(MAGLiveMagnifierView *)liveMagnifierView;
-(MAGControlPanel *)liveViewControlPanel;
-(void)executeBlockSynchronouslyWithLockedCameraDevice:(/*^block*/id)arg1 ;
-(float)_currentMagnificationFactor;
-(void)disconnectPreviewLayerFromSession;
-(void)setPhotoOutput:(AVCapturePhotoOutput *)arg1 ;
-(void)setVideoDataOutput:(AVCaptureVideoDataOutput *)arg1 ;
-(AVCapturePhotoOutput *)photoOutput;
-(AVCaptureVideoDataOutput *)videoDataOutput;
-(NSObject*<OS_dispatch_queue>)videoSampleQueue;
-(void)setLiveMagnificationFactor:(float)arg1 ;
-(void)_startSessionConnectingPreviewLayer:(id)arg1 ;
-(void)executeBlockAsynchronouslyWithLockedCameraDevice:(/*^block*/id)arg1 ;
-(void)switchToFocusMode:(int)arg1 ;
-(void)setFocusPointFromViewPoint:(CGPoint)arg1 ;
-(void)setLiveMagnifierView:(MAGLiveMagnifierView *)arg1 ;
-(void)fingerDidPan:(id)arg1 ;
-(void)fingersDidPinch:(id)arg1 ;
-(void)fingerDidDoubleTap:(id)arg1 ;
-(void)fingerDidTap:(id)arg1 ;
-(void)setLiveViewControlPanel:(MAGControlPanel *)arg1 ;
-(void)setLiveViewControlPanelOnscreenYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLiveViewControlPanelOffscreenYConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)liveViewControlPanelOffscreenYConstraint;
-(void)createSessionIfNeededConnectingPreviewLayer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSLayoutConstraint *)liveViewControlPanelOnscreenYConstraint;
-(char)showingSnapshot;
-(void)switchToAutofocusMode;
-(void)manualFocusOnViewPoint:(CGPoint)arg1 ;
-(float)zoomFactorAtGestureStart;
-(MAGFilterSelectionViewController *)presentedFilterSelectionVC;
-(void)currentMagnificationFactor:(/*^block*/id)arg1 ;
-(void)setTorchOn:(char)arg1 ;
-(void)setAdjustingMagnificationFactorViaControlPanel:(char)arg1 ;
-(void)setSnapshotMagnificationFactor:(float)arg1 animated:(char)arg2 ;
-(void)transitionToSnapshotFromLiveView;
-(void)transitionToLiveViewFromSnapshotView;
-(char)transitioningToSnapshotView;
-(void)transitionLiveMagnifierViewBackToNormal;
-(void)restartSessionFromSnapshot:(/*^block*/id)arg1 ;
-(char)torchOnWhenSnapshotTaken;
-(void)animateControlPanelIn:(/*^block*/id)arg1 ;
-(NSString *)hqSnapshotFilesystemPath;
-(void)setHqSnapshotFilesystemPath:(NSString *)arg1 ;
-(void)setProceedWithControlsHidingForSnapshotView:(char)arg1 ;
-(UITapGestureRecognizer *)snapshotViewTapGestureRecognizer;
-(UITapGestureRecognizer *)snapshotViewDoubleTapGestureRecognizer;
-(void)removeHQSnapshotFile;
-(void)updateZoomViewsAXHidden;
-(id)finishedRampingVideoZoomCallback;
-(id<NSObject>)lastVideoSample;
-(void)setTransitioningToSnapshotView:(char)arg1 ;
-(id)imageFromLastVideoSample;
-(void)setFinishedRampingVideoZoomCallback:(id)arg1 ;
-(void)setCurrentPhotoCaptureDelegate:(id<AVCapturePhotoCaptureDelegate>)arg1 ;
-(void)setTorchOnWhenSnapshotTaken:(char)arg1 ;
-(void)pauseSessionForSnapshot;
-(void)restartSessionAndTransitionLiveMagnifierBackToNormal;
-(id)snapshotReplacementBlockForUnitTesting;
-(id<AVCapturePhotoCaptureDelegate>)currentPhotoCaptureDelegate;
-(char)proceedWithControlsHidingForSnapshotView;
-(void)animateControlPanelOut:(/*^block*/id)arg1 ;
-(void)snapshotViewDoubleTapped:(id)arg1 ;
-(void)setSnapshotViewDoubleTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)snapshotViewTapped:(id)arg1 ;
-(void)setSnapshotViewTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(char)controlPanelActive;
-(char)adjustingMagnificationFactorViaControlPanel;
-(void)setPresentedFilterSelectionVC:(MAGFilterSelectionViewController *)arg1 ;
-(void)setFilterSelectionTransitioningDelegate:(MAGFilterSelectionZoomTransitioningDelegate *)arg1 ;
-(MAGFilterSelectionZoomTransitioningDelegate *)filterSelectionTransitioningDelegate;
-(void)updateFiltersForCurrentAmbientBrightness;
-(char)cameraDeviceHasTorch;
-(void)changeBlackoutStatusTo:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)volumeButtonPressed;
-(void)blackoutCurrentImageForReducedMotionFilterSelectionTransitionAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)unblackoutCurrentImageForReducedMotionFilterSelectionTransitionAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)controlPanelForUnitTesting;
-(id)cameraDeviceForUnitTesting;
-(id)snapshotViewForUnitTesting;
-(void)setSnapshotReplacementBlockForUnitTesting:(id)arg1 ;
-(void)lockFocus;
-(id)init;
-(MAGSnapshotView *)snapshotView;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVCaptureDevice *)cameraDevice;
-(void)setCameraDevice:(AVCaptureDevice *)arg1 ;
-(void)setSnapshotView:(MAGSnapshotView *)arg1 ;
-(void)endSession;
-(AVCaptureSession *)currentSession;
-(void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)sessionQueue;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)setCurrentSession:(AVCaptureSession *)arg1 ;
-(void)setSessionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setViewHasAppeared:(char)arg1 ;
-(char)viewHasAppeared;
-(AVCaptureVideoPreviewLayer *)previewLayer;
@end

