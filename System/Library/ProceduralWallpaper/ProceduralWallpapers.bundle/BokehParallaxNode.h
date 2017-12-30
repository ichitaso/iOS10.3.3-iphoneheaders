/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <SpriteKit/SKSpriteNode.h>

@class SKTexture;

@interface BokehParallaxNode : SKSpriteNode {

	float _parallaxMultiplier;
	SKTexture* _blurTex;
	SKTexture* _regTex;
	float _regScaleX;
	float _regScaleY;
	float _regAlpha;
	CGPoint _layoutPosition;
	CGPoint _driftSpeed;

}

@property (assign) CGPoint layoutPosition;                //@synthesize layoutPosition=_layoutPosition - In the implementation block
@property (assign) float parallaxMultiplier; 
@property (assign) CGPoint driftSpeed;                    //@synthesize driftSpeed=_driftSpeed - In the implementation block
@property (retain) SKTexture * blurTex;                   //@synthesize blurTex=_blurTex - In the implementation block
@property (retain) SKTexture * regTex;                    //@synthesize regTex=_regTex - In the implementation block
@property (assign) float regScaleX;                       //@synthesize regScaleX=_regScaleX - In the implementation block
@property (assign) float regScaleY;                       //@synthesize regScaleY=_regScaleY - In the implementation block
@property (assign) float regAlpha;                        //@synthesize regAlpha=_regAlpha - In the implementation block
-(id)init;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setParallaxMultiplier:(float)arg1 ;
-(float)parallaxMultiplier;
-(CGPoint)layoutPosition;
-(void)setLayoutPosition:(CGPoint)arg1 ;
-(CGPoint)driftSpeed;
-(void)setDriftSpeed:(CGPoint)arg1 ;
-(SKTexture *)blurTex;
-(void)setBlurTex:(SKTexture *)arg1 ;
-(SKTexture *)regTex;
-(void)setRegTex:(SKTexture *)arg1 ;
-(float)regScaleX;
-(void)setRegScaleX:(float)arg1 ;
-(float)regScaleY;
-(void)setRegScaleY:(float)arg1 ;
-(float)regAlpha;
-(void)setRegAlpha:(float)arg1 ;
@end
