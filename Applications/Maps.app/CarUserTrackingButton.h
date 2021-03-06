/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/_MKUserTrackingButton.h>

@class UITapGestureRecognizer, CALayer;

@interface CarUserTrackingButton : _MKUserTrackingButton {

	UITapGestureRecognizer* _recognizer;
	CALayer* _knobFocusLayer;

}
+(id)buttonWithUserTrackingView:(id)arg1 ;
-(void)tappedButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)canBecomeFocused;
-(void)didUpdateFocusFromView:(id)arg1 ;
-(void)sizeToFit;
-(unsigned)behavior;
-(int)_activityIndicatorStyle;
-(char)_isHighlightedForState:(int)arg1 ;
-(void)_repositionViews;
@end

