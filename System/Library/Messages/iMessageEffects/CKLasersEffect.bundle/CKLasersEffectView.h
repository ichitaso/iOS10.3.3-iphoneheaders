/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageEffects/CKLasersEffect.bundle/CKLasersEffect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CKLasersEffect/CKLasersEffect-Structs.h>
#import <UIKit/UIView.h>
#import <CKLasersEffect/CKFullscreenEffectView.h>

@class CALayer;

@interface CKLasersEffectView : UIView <CKFullscreenEffectView> {

	CALayer* _lasersLayer;
	CALayer* _haloLayer;
	CALayer* _replicatorLayer;
	CALayer* _spotlightLayer;
	char messageOrientation;
	int zIndex;
	CGPoint _focusPoint;
	CGRect messageRect;

}

@property (assign,nonatomic) int zIndex; 
@property (assign,nonatomic) CGPoint focusPoint;                   //@synthesize focusPoint=_focusPoint - In the implementation block
@property (assign,nonatomic) CGRect messageRect; 
@property (assign,nonatomic) char messageOrientation; 
-(CGRect)messageRect;
-(char)messageOrientation;
-(CGPoint)_flippedFocusPoint;
-(void)stopAnimation;
-(void)startAnimation;
-(void)setZIndex:(int)arg1 ;
-(int)zIndex;
-(CGPoint)focusPoint;
-(void)setFocusPoint:(CGPoint)arg1 ;
-(void)setMessageRect:(CGRect)arg1 ;
-(void)setMessageOrientation:(char)arg1 ;
@end
