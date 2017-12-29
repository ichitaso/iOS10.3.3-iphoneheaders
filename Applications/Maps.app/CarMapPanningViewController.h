/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/PassThroughViewController.h>
#import <UIKit/UIFocusEnvironment.h>
#import <Maps/CarMapNudgerizerDelegate.h>

@class CarPanButtonContainer, MKMapView, CarMapNudgerizer, NSString, NSArray, UIView;

@interface CarMapPanningViewController : PassThroughViewController <UIFocusEnvironment, CarMapNudgerizerDelegate> {

	CarPanButtonContainer* _panButtonContainer;
	MKMapView* _mapView;
	CarMapNudgerizer* _nudgerizer;
	UIEdgeInsets _obscuredInsets;

}

@property (assign,nonatomic,__weak) MKMapView * mapView;                                           //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) CarMapNudgerizer * nudgerizer;                                 //@synthesize nudgerizer=_nudgerizer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets obscuredInsets;                                          //@synthesize obscuredInsets=_obscuredInsets - In the implementation block
@property (assign,nonatomic,__weak) id<CarMapPanningViewControllerDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
-(CarMapNudgerizer *)nudgerizer;
-(void)setNudgerizer:(CarMapNudgerizer *)arg1 ;
-(id)carFocusOrderSequences;
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
-(void)nudgerizer:(id)arg1 didGestureMapView:(id)arg2 inDirection:(int)arg3 ;
-(UIEdgeInsets)obscuredInsets;
-(NSArray *)preferredFocusEnvironments;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)_createViewsIfNeeded;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)setObscuredInsets:(UIEdgeInsets)arg1 ;
@end

