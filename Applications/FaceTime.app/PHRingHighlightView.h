/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIView.h>

@class CALayer;

@interface PHRingHighlightView : UIView {

	CALayer* _luminanceRingLayer;
	CALayer* _dodgeRingLayer;
	CALayer* _highlightDodgeLayer;
	CALayer* _highlightLuminanceLayer;
	CALayer* _selectionLayer;

}

@property (retain) CALayer * luminanceRingLayer;                   //@synthesize luminanceRingLayer=_luminanceRingLayer - In the implementation block
@property (retain) CALayer * dodgeRingLayer;                       //@synthesize dodgeRingLayer=_dodgeRingLayer - In the implementation block
@property (retain) CALayer * highlightDodgeLayer;                  //@synthesize highlightDodgeLayer=_highlightDodgeLayer - In the implementation block
@property (retain) CALayer * highlightLuminanceLayer;              //@synthesize highlightLuminanceLayer=_highlightLuminanceLayer - In the implementation block
@property (retain) CALayer * selectionLayer;                       //@synthesize selectionLayer=_selectionLayer - In the implementation block
+(float)ringStroke;
+(id)colorForLuminance;
+(id)createRingImageWithSize:(CGSize)arg1 strokeWidth:(float)arg2 color:(id)arg3 ;
+(id)colorForDodge;
+(float)ringCornerRadius;
+(id)ringImageForLuminance;
+(id)ringImageForDodge;
+(CGSize)ringSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(CALayer *)luminanceRingLayer;
-(void)setLuminanceRingLayer:(CALayer *)arg1 ;
-(CALayer *)dodgeRingLayer;
-(void)setDodgeRingLayer:(CALayer *)arg1 ;
-(CALayer *)highlightDodgeLayer;
-(void)setHighlightDodgeLayer:(CALayer *)arg1 ;
-(CALayer *)highlightLuminanceLayer;
-(void)setHighlightLuminanceLayer:(CALayer *)arg1 ;
-(CALayer *)selectionLayer;
-(void)setSelectionLayer:(CALayer *)arg1 ;
@end

