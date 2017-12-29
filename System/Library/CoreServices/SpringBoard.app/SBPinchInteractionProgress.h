/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIInteractionProgress.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPinchGestureRecognizer, NSString;

@interface SBPinchInteractionProgress : UIInteractionProgress <UIGestureRecognizerDelegate> {

	SCD_Struct_SB10 _pinchInterval;
	UIPinchGestureRecognizer* _pinchGesture;

}

@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGesture;              //@synthesize pinchGesture=_pinchGesture - In the implementation block
@property (nonatomic,readonly) float minPinchScale; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)minPinchScale;
-(id)initWithPinchGesture:(id)arg1 minPinchScale:(float)arg2 ;
-(void)_updatePinchScale:(float)arg1 ;
-(UIPinchGestureRecognizer *)pinchGesture;
-(void)_handlePinchGesture:(id)arg1 ;
@end

