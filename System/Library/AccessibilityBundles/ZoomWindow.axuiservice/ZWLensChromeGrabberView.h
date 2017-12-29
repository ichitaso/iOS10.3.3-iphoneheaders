/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface ZWLensChromeGrabberView : UIView {

	char _expanded;
	int _grabberEdge;
	CAShapeLayer* _outerBorderLayer;
	CAShapeLayer* _etchLayer;

}

@property (assign,nonatomic) int grabberEdge;                              //@synthesize grabberEdge=_grabberEdge - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerBorderLayer;              //@synthesize outerBorderLayer=_outerBorderLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * etchLayer;                     //@synthesize etchLayer=_etchLayer - In the implementation block
@property (assign,getter=isExpanded,nonatomic) char expanded;              //@synthesize expanded=_expanded - In the implementation block
-(void)setEtchLayer:(CAShapeLayer *)arg1 ;
-(void)setGrabberEdge:(int)arg1 ;
-(int)grabberEdge;
-(CAShapeLayer *)etchLayer;
-(id)initWithEdge:(int)arg1 startExpanded:(char)arg2 ;
-(void)collapseGrabberAnimated:(char)arg1 ;
-(void)expandGrabberAnimated:(char)arg1 ;
-(void)setOuterBorderLayer:(CAShapeLayer *)arg1 ;
-(id)_grabberPathForCurrentEdgeIncludingFlatEdge:(char)arg1 ;
-(CAShapeLayer *)outerBorderLayer;
-(id)_grabberEtchPathForCurrentEdge;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
@end
