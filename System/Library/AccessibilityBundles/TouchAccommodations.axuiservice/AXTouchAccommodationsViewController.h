/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/TouchAccommodations.axuiservice/TouchAccommodations
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchAccommodations/TouchAccommodations-Structs.h>
#import <UIKit/UIViewController.h>

@class CATransformLayer;

@interface AXTouchAccommodationsViewController : UIViewController {

	CATransformLayer* _transformLayer;

}
-(void)removeAllHandTouchMarkers;
-(void)updateLocationOfHandTouchMarkerAtPoints:(id)arg1 ;
-(void)resetProgressTrackOfHandTouchMarkerAtPoints:(id)arg1 ;
-(id)_createProgressLayerWithColor:(id)arg1 withFilterName:(id)arg2 forHoldDuration:(char)arg3 ;
-(id)_createLayerAtPoint:(CGPoint)arg1 ;
-(id)_createTransformLayerForHoldDuration:(char)arg1 ;
-(CGPathRef)_drawFullCircleWithRadius:(float)arg1 ;
-(void)viewDidLoad;
@end

