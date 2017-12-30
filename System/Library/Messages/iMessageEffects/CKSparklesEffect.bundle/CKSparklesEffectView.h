/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageEffects/CKSparklesEffect.bundle/CKSparklesEffect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CKSparklesEffect/CKSparklesEffect-Structs.h>
#import <UIKit/UIView.h>
#import <CKSparklesEffect/CKFullscreenEffectView.h>

@class CALayer;

@interface CKSparklesEffectView : UIView <CKFullscreenEffectView> {

	CALayer* _sparklesLayer;
	char messageOrientation;
	int zIndex;
	CGPoint focusPoint;
	CGRect messageRect;

}

@property (assign,nonatomic) int zIndex; 
@property (assign,nonatomic) CGPoint focusPoint; 
@property (assign,nonatomic) CGRect messageRect; 
@property (assign,nonatomic) char messageOrientation; 
-(CGRect)messageRect;
-(char)messageOrientation;
-(void)stopAnimation;
-(void)startAnimation;
-(void)setZIndex:(int)arg1 ;
-(int)zIndex;
-(CGPoint)focusPoint;
-(void)setFocusPoint:(CGPoint)arg1 ;
-(void)setMessageRect:(CGRect)arg1 ;
-(void)setMessageOrientation:(char)arg1 ;
@end
