/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DragGestureTracking;
@class UIPanGestureRecognizer, CADisplayLink;

@interface MapGestureCardDismissalPanMediator : NSObject {

	UIPanGestureRecognizer* _gesture;
	id<DragGestureTracking> _tracker;
	CADisplayLink* _displayLink;
	float _translation;
	float _previousVelocity;
	float _peakVelocity;

}
-(id)initWithPanGesture:(id)arg1 dragTracker:(id)arg2 ;
-(void)invalidate;
-(void)dealloc;
-(void)handleDisplayLink:(id)arg1 ;
@end

