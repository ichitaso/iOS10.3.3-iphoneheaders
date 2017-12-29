/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <UIKit/UIView.h>

@class MKMapView, UIImageView, FMFMapSearchedLocationAnnotation, CAShapeLayer;

@interface MapDragRadiusView : UIView {

	char _isDragging;
	char _isMinimum;
	char _isMaximum;
	MKMapView* _mapView;
	UIImageView* _handleImageView;
	FMFMapSearchedLocationAnnotation* _annotation;
	CAShapeLayer* _shapeLayer;

}

@property (nonatomic,retain) UIImageView * handleImageView;                              //@synthesize handleImageView=_handleImageView - In the implementation block
@property (nonatomic,retain) FMFMapSearchedLocationAnnotation * annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shapeLayer;                                  //@synthesize shapeLayer=_shapeLayer - In the implementation block
@property (assign,nonatomic) char isMinimum;                                             //@synthesize isMinimum=_isMinimum - In the implementation block
@property (assign,nonatomic) char isMaximum;                                             //@synthesize isMaximum=_isMaximum - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                        //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) char isDragging;                                            //@synthesize isDragging=_isDragging - In the implementation block
-(void)setHandleImageView:(UIImageView *)arg1 ;
-(UIImageView *)handleImageView;
-(void)setShapeLayer:(CAShapeLayer *)arg1 ;
-(id)bezierPathWithEndPoint:(CGPoint)arg1 ;
-(id)shapeLayerWithEndPoint:(CGPoint)arg1 ;
-(void)popAnimateHandle;
-(void)animateHandleIn:(char)arg1 ;
-(double)currentHandleDistanceNormalized;
-(char)isMinimum;
-(float)minimumRadiusNormalized;
-(char)isMaximum;
-(float)maximumRadiusNormalized;
-(char)usesMetric;
-(CGPoint)minPoint;
-(void)setIsMinimum:(char)arg1 ;
-(void)setIsMaximum:(char)arg1 ;
-(float)minimumInMeters;
-(double)currentHandleDistance;
-(void)hideCircleAfterDelay;
-(float)feetToMeters:(float)arg1 ;
-(void)addHandleForAnnotation:(id)arg1 ;
-(void)removeHandle:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)isDragging;
-(void)initialize;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CAShapeLayer *)shapeLayer;
-(FMFMapSearchedLocationAnnotation *)annotation;
-(void)setAnnotation:(FMFMapSearchedLocationAnnotation *)arg1 ;
-(CGPoint)maxPoint;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)setIsDragging:(char)arg1 ;
@end

