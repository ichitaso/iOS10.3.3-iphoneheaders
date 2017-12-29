/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATElementManager.h>

@class SCATGestureDrawingViewController;

@interface SCATGestureDrawingElementManager : SCATElementManager

@property (nonatomic,readonly) SCATGestureDrawingViewController * drawingViewController; 
-(id)firstElementWithOptions:(int*)arg1 ;
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)elementBefore:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(id)elementAfter:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3 ;
-(void)driver:(id)arg1 willUnfocusFromContext:(id)arg2 ;
-(char)shouldKeepScannerAwake;
-(char)allowsDwellSelection;
-(char)allowsDwellScanningToAbortAfterTimeout;
-(SCATGestureDrawingViewController *)drawingViewController;
-(id)initWithStartingFingerPositions:(id)arg1 menu:(id)arg2 ;
-(void)scannerWillMakeManagerActive:(id)arg1 ;
-(void)scannerWillMakeManagerInactive:(id)arg1 ;
-(id)identifier;
@end

