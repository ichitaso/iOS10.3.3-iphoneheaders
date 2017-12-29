/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAlertController.h>

@protocol UIPopoverPresentationControllerDelegate, _UIRotatingAlertControllerDelegate;
@class UIViewController;

@interface _UIRotatingAlertController : UIAlertController {

	unsigned _arrowDirections;
	char _isRotating;
	char _readyToPresentAfterRotation;
	UIViewController* _presentedViewControllerWhileRotating;
	id<UIPopoverPresentationControllerDelegate> _popoverPresentationControllerDelegateWhileRotating;
	id<_UIRotatingAlertControllerDelegate> _rotatingSheetDelegate;

}

@property (assign,nonatomic,__weak) id<_UIRotatingAlertControllerDelegate> rotatingSheetDelegate;              //@synthesize rotatingSheetDelegate=_rotatingSheetDelegate - In the implementation block
@property (assign,nonatomic) unsigned arrowDirections;                                                         //@synthesize arrowDirections=_arrowDirections - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_presentingViewControllerDidChange:(id)arg1 ;
-(void)_presentingViewControllerWillChange:(id)arg1 ;
-(char)_shouldAbortAdaptationFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)doneWithSheet;
-(void)setRotatingSheetDelegate:(id<_UIRotatingAlertControllerDelegate>)arg1 ;
-(char)presentSheet;
-(void)setArrowDirections:(unsigned)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(char)presentSheetFromRect:(CGRect)arg1 ;
-(void)_didRotateAndLayout;
-(id<_UIRotatingAlertControllerDelegate>)rotatingSheetDelegate;
-(void)_updateSheetPositionAfterRotation;
-(unsigned)arrowDirections;
@end

