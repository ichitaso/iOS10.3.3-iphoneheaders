/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Magnifier.app/Magnifier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MAGLiveViewControlPanelDelegate;
@class UIView, UIButton, UISlider, UIImageView;

@interface MAGControlPanel : UIView {

	unsigned _panelState;
	unsigned _panelStyle;
	id<MAGLiveViewControlPanelDelegate> _delegate;
	UIView* _backgroundView;
	UIButton* _manualFocusButton;
	UIButton* _snapshotButton;
	UIButton* _filtersButton;
	UIButton* _torchButton;
	UISlider* _zoomSlider;
	UIImageView* _zoomOutView;
	UIImageView* _zoomInView;

}

@property (nonatomic,retain) UIView * backgroundView;                                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIButton * manualFocusButton;                                     //@synthesize manualFocusButton=_manualFocusButton - In the implementation block
@property (nonatomic,retain) UIButton * snapshotButton;                                        //@synthesize snapshotButton=_snapshotButton - In the implementation block
@property (nonatomic,retain) UIButton * filtersButton;                                         //@synthesize filtersButton=_filtersButton - In the implementation block
@property (nonatomic,retain) UIButton * torchButton;                                           //@synthesize torchButton=_torchButton - In the implementation block
@property (nonatomic,retain) UISlider * zoomSlider;                                            //@synthesize zoomSlider=_zoomSlider - In the implementation block
@property (nonatomic,retain) UIImageView * zoomOutView;                                        //@synthesize zoomOutView=_zoomOutView - In the implementation block
@property (nonatomic,retain) UIImageView * zoomInView;                                         //@synthesize zoomInView=_zoomInView - In the implementation block
@property (assign,nonatomic,__weak) id<MAGLiveViewControlPanelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned panelState; 
-(void)prepForTransitionWithFilterSelectionVCAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFiltersButton:(UIButton *)arg1 ;
-(UIButton *)filtersButton;
-(void)applyControlRotationForDeviceOrientation;
-(void)_colorBackgroundView;
-(void)zoomSliderDragged:(id)arg1 ;
-(void)setZoomOutView:(UIImageView *)arg1 ;
-(void)setZoomInView:(UIImageView *)arg1 ;
-(UIImageView *)zoomOutView;
-(UIImageView *)zoomInView;
-(char)showAccessibilityExtendedControls;
-(void)setManualFocusButton:(UIButton *)arg1 ;
-(UIButton *)manualFocusButton;
-(void)setSnapshotButton:(UIButton *)arg1 ;
-(UIButton *)snapshotButton;
-(void)setTorchButton:(UIButton *)arg1 ;
-(UIButton *)torchButton;
-(void)userTextSizeChanged:(id)arg1 ;
-(void)manualFocusButtonPressed:(id)arg1 ;
-(void)torchButtonPressed:(id)arg1 ;
-(void)snapshotButtonPressed:(id)arg1 ;
-(void)filtersButtonPressed:(id)arg1 ;
-(void)_handleFilterButtonLongPress:(id)arg1 ;
-(void)reduceTransparencyChanged:(id)arg1 ;
-(void)updateZoomSliderAXLabel;
-(void)setZoomSliderValue:(float)arg1 animated:(char)arg2 ;
-(void)setTorchSwitchValue:(char)arg1 ;
-(void)setZoomSliderValue:(float)arg1 ;
-(void)setSnapshotButtonSelected:(char)arg1 ;
-(void)setManualFocusSwitchValue:(char)arg1 ;
-(unsigned)panelState;
-(void)setPanelState:(unsigned)arg1 ;
-(void)resumeFromTransitionWithFilterSelectionVCAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)torchButtonForUnitTesting;
-(id)manualFocusButtonForUnitTesting;
-(id)zoomSliderForUnitTesting;
-(id)snapshotbuttonForUnitTesting;
-(id)filtersButtonForUnitTesting;
-(void)setDelegate:(id<MAGLiveViewControlPanelDelegate>)arg1 ;
-(void)dealloc;
-(id<MAGLiveViewControlPanelDelegate>)delegate;
-(void)tintColorDidChange;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(id)initWithStyle:(unsigned)arg1 ;
-(id)accessibilityElements;
-(void)orientationChanged:(id)arg1 ;
-(void)setZoomSlider:(UISlider *)arg1 ;
-(UISlider *)zoomSlider;
@end

