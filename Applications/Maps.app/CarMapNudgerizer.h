/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>

@protocol CarMapNudgerizerDelegate;
@class UIDynamicAnimator, UIDynamicBehavior, UIPushBehavior, UITapGestureRecognizer, UILongPressGestureRecognizer, UIView, MKMapView, CarImpulsePanningDynamicItem, NSDate, NSString;

@interface CarMapNudgerizer : NSObject <UIDynamicAnimatorDelegate> {

	char _hasBegunMomentaryImpulseInDirection[4];
	CGPoint _initialPanPoint;
	char _animating;
	UIDynamicAnimator* _animator;
	UIDynamicBehavior* _panBehavior;
	UIPushBehavior* _leftPush;
	UIPushBehavior* _rightPush;
	UIPushBehavior* _upPush;
	UIPushBehavior* _downPush;
	UITapGestureRecognizer* _leftTapRecognizer;
	UILongPressGestureRecognizer* _leftLongPressRecognizer;
	UITapGestureRecognizer* _rightTapRecognizer;
	UILongPressGestureRecognizer* _rightLongPressRecognizer;
	UITapGestureRecognizer* _upTapRecognizer;
	UILongPressGestureRecognizer* _upLongPressRecognizer;
	UITapGestureRecognizer* _downTapRecognizer;
	UILongPressGestureRecognizer* _downLongPressRecognizer;
	UIView* _gestureRecognizerView;
	char _active;
	MKMapView* _mapView;
	id<CarMapNudgerizerDelegate> _delegate;
	CarImpulsePanningDynamicItem* _item;
	int _lastImpulseDirection;
	NSDate* _lastImpulseDate;
	unsigned _impulseCount;
	SCD_Struct_Ca33 _panningMetrics;

}

@property (nonatomic,retain) CarImpulsePanningDynamicItem * item;                       //@synthesize item=_item - In the implementation block
@property (assign) SCD_Struct_Ca33 panningMetrics;                                      //@synthesize panningMetrics=_panningMetrics - In the implementation block
@property (assign) int lastImpulseDirection;                                            //@synthesize lastImpulseDirection=_lastImpulseDirection - In the implementation block
@property (retain) NSDate * lastImpulseDate;                                            //@synthesize lastImpulseDate=_lastImpulseDate - In the implementation block
@property (assign) unsigned impulseCount;                                               //@synthesize impulseCount=_impulseCount - In the implementation block
@property (assign,nonatomic,__weak) MKMapView * mapView;                                //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) id<CarMapNudgerizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char active;                                               //@synthesize active=_active - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_beginAnimatingIfNeeded;
-(void)_endAnimating;
-(void)_endAnimatingIfNeeded;
-(void)_beginImpulseUp;
-(void)_endImpulseUp;
-(void)_momentaryImpulseUp;
-(void)_beginImpulseDown;
-(void)_endImpulseDown;
-(void)_momentaryImpulseDown;
-(void)_beginImpulseLeft;
-(void)_endImpulseLeft;
-(void)_momentaryImpulseLeft;
-(void)_beginImpulseRight;
-(void)_endImpulseRight;
-(void)_momentaryImpulseRight;
-(float)holdMagnitudeForDirection:(int)arg1 ;
-(float)impulseMagnitudeForDirection:(int)arg1 ;
-(void)_beginImpulseInDirection:(int)arg1 withMagnitude:(float)arg2 ;
-(id)_behaviorForDirection:(int)arg1 ;
-(void)_setImpulseInDirection:(int)arg1 magnitude:(float)arg2 ;
-(char)_hasBegunMomentaryImpulseInDirection:(int)arg1 ;
-(void)_setHasBegunMomentaryImpulse:(char)arg1 inDirection:(int)arg2 ;
-(void)beginImpulseInDirection:(int)arg1 ;
-(void)endImpluseInDirection:(int)arg1 ;
-(void)momentaryImpulseInDirection:(int)arg1 ;
-(void)_addPanRecognizers;
-(void)_removePanRecognizers;
-(void)_clearGestureRecognizersInFlight;
-(int)_eventDirectionForButtonType:(int)arg1 ;
-(float)_userDefaultsCGFloatForKey:(id)arg1 defaultValue:(float)arg2 ;
-(double)_userDefaultsDoubleForKey:(id)arg1 defaultValue:(double)arg2 ;
-(SCD_Struct_Ca33)panningMetrics;
-(void)setPanningMetrics:(SCD_Struct_Ca33)arg1 ;
-(int)lastImpulseDirection;
-(void)setLastImpulseDirection:(int)arg1 ;
-(NSDate *)lastImpulseDate;
-(void)setLastImpulseDate:(NSDate *)arg1 ;
-(unsigned)impulseCount;
-(void)setImpulseCount:(unsigned)arg1 ;
-(id)init;
-(void)setDelegate:(id<CarMapNudgerizerDelegate>)arg1 ;
-(id<CarMapNudgerizerDelegate>)delegate;
-(CarImpulsePanningDynamicItem *)item;
-(char)active;
-(void)setActive:(char)arg1 ;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(void)setItem:(CarImpulsePanningDynamicItem *)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)_configureAnimator;
-(void)_clearGesturesAndAnimations;
-(void)_clearGesture:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
@end

