/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMMapViewDelegate <NSObject>
@optional
-(UIEdgeInsets*)edgeInsetsForState:(int)arg1;
-(UIEdgeInsets*)attributionInsetsForState:(int)arg1;
-(void)didSelectAnnotation:(id)arg1;
-(void)didDoubleSelectAnnotation:(id)arg1;
-(void)didDeselectAnnotationView:(id)arg1;
-(SCD_Struct_Ma3*)mapPositionForAnnotation:(id)arg1;
-(float)annotationOnScreenTopThresholdForState:(int)arg1;
-(id)customViewForAnnotation:(id)arg1;
-(void)updateTitlesForAnnotation:(id)arg1;
-(void)annotationViewOfferedForLocationPreview:(id)arg1;
-(id)customRendererForOverlay:(id)arg1;
-(void)userDidMoveMap;
-(void)userDidTapUserLocationCallOut;
-(char)shouldTapDeselectAnnotation;
-(void)userDidTapMap;
-(void)userDidSwipeMapWithPercent:(float)arg1;
-(void)userDidSwipeCancel;

@end

