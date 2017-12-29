/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

@interface _UISpringBehavior : UIDynamicBehavior {

	UIAttachmentBehavior* _topLeft;
	UIAttachmentBehavior* _topRight;
	UIAttachmentBehavior* _bottomRight;
	UIAttachmentBehavior* _bottomLeft;
	float _damping;
	float _frequency;
	CGPoint _anchorPoint;

}

@property (assign,nonatomic) CGPoint anchorPoint;              //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,nonatomic) float damping;                    //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) float frequency;                  //@synthesize frequency=_frequency - In the implementation block
-(id)init;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setDamping:(float)arg1 ;
-(CGPoint)anchorPoint;
-(float)damping;
-(float)frequency;
-(void)setFrequency:(float)arg1 ;
-(id)initWithItem:(id)arg1 anchorPoint:(CGPoint)arg2 ;
@end

