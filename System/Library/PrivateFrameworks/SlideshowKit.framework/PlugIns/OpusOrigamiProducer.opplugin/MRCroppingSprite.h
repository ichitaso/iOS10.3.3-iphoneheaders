/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@interface MRCroppingSprite : NSObject {

	float mModelViewProjectionMatrix[16];
	char mPreservesImageAspectRatio;
	char mHitIsActive;
	char mNeedsInSpriteCoordinates;
	char _usesOwnMatrixForHitTest;
	unsigned char mMeshType;
	float mRotation;
	CGPoint mPosition;
	CGSize mHalfSize;
	CGSize mSpriteCoordinatesFactor;
	CGPoint mSpriteCoordinatesOffset;
	CGRect mInnerRect;
	CGRect mOuterRect;

}

@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGSize halfSize; 
@property (nonatomic,readonly) float rotation; 
@property (assign,nonatomic) CGRect innerRect; 
@property (assign,nonatomic) CGRect outerRect; 
@property (assign,nonatomic) char preservesImageAspectRatio; 
@property (assign,nonatomic) char hitIsActive; 
@property (assign,nonatomic) char needsInSpriteCoordinates; 
@property (assign,nonatomic) CGSize spriteCoordinatesFactor; 
@property (assign,nonatomic) CGPoint spriteCoordinatesOffset; 
@property (assign,nonatomic) unsigned char meshType; 
@property (assign,nonatomic) char usesOwnMatrixForHitTest;                 //@synthesize usesOwnMatrixForHitTest=_usesOwnMatrixForHitTest - In the implementation block
+(void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 ;
+(void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 ;
+(void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 zRotation:(float)arg5 ;
+(void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 zRotation:(float)arg5 ;
+(void)renderImage:(id)arg1 withMask:(id)arg2 inContext:(id)arg3 atPosition:(CGPoint)arg4 andSize:(CGSize)arg5 zRotation:(float)arg6 ;
+(void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 withReferenceAspectRatio:(float)arg5 andJustifications:(CGPoint)arg6 ;
-(void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 ;
-(void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 ;
-(void)fakeRenderInContext:(id)arg1 atPosition:(CGPoint)arg2 andSize:(CGSize)arg3 zRotation:(float)arg4 ;
-(void)setNeedsInSpriteCoordinates:(char)arg1 ;
-(void)setInnerRect:(CGRect)arg1 ;
-(void)renderImageOuter:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 zRotation:(float)arg5 ;
-(void)renderImageInner:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 zRotation:(float)arg5 ;
-(void)setOuterRect:(CGRect)arg1 ;
-(void)renderImageInner:(id)arg1 inContext:(id)arg2 ;
-(void)renderImageMiddle:(id)arg1 inContext:(id)arg2 ;
-(void)renderImageOuter:(id)arg1 inContext:(id)arg2 ;
-(void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 zRotation:(float)arg5 ;
-(char)hitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 ;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 zRotation:(float)arg3 innerRect:(CGRect)arg4 outerRect:(CGRect)arg5 context:(id)arg6 ;
-(void)getOpaquePosition:(CGPoint*)arg1 andHalfSize:(CGSize*)arg2 ;
-(CGPoint)spriteCoordinatesOffset;
-(void)setSpriteCoordinatesOffset:(CGPoint)arg1 ;
-(void)setUsesOwnMatrixForHitTest:(char)arg1 ;
-(CGSize)spriteCoordinatesFactor;
-(char)usesOwnMatrixForHitTest;
-(void)renderImageMiddle:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 zRotation:(float)arg5 ;
-(void)setMeshType:(unsigned char)arg1 ;
-(void)setSpriteCoordinatesFactor:(CGSize)arg1 ;
-(unsigned char)meshType;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 zRotation:(float)arg3 context:(id)arg4 ;
-(void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 zRotation:(float)arg5 ;
-(void)renderImage:(id)arg1 withMask:(id)arg2 inContext:(id)arg3 atPosition:(CGPoint)arg4 andSize:(CGSize)arg5 zRotation:(float)arg6 ;
-(void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 withReferenceAspectRatio:(float)arg5 andJustifications:(CGPoint)arg6 ;
-(void)setHitIsActive:(char)arg1 ;
-(CGSize)halfSize;
-(CGRect)innerRect;
-(char)needsInSpriteCoordinates;
-(char)preservesImageAspectRatio;
-(void)setPreservesImageAspectRatio:(char)arg1 ;
-(char)hitIsActive;
-(CGRect)outerRect;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 zRotation:(float)arg3 innerRect:(CGRect)arg4 context:(id)arg5 ;
-(id)init;
-(void)reset;
-(CGPoint)position;
-(float)rotation;
@end

