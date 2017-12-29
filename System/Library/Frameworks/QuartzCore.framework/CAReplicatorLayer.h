/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAReplicatorLayer : CALayer

@property (assign) int instanceCount; 
@property (assign) char preservesDepth; 
@property (assign) double instanceDelay; 
@property (assign) CATransform3D instanceTransform; 
@property (assign) CGColorRef instanceColor; 
@property (assign) float instanceRedOffset; 
@property (assign) float instanceGreenOffset; 
@property (assign) float instanceBlueOffset; 
@property (assign) float instanceAlphaOffset; 
+(id)defaultValueForKey:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)_hasRenderLayerSubclass;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(char)preservesDepth;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)setPreservesDepth:(char)arg1 ;
-(void)_renderSublayersInContext:(CGContextRef)arg1 ;
-(double)instanceDelay;
-(CGColorRef)instanceColor;
-(float)instanceRedOffset;
-(float)instanceGreenOffset;
-(float)instanceBlueOffset;
-(float)instanceAlphaOffset;
-(void)setInstanceRedOffset:(float)arg1 ;
-(void)setInstanceGreenOffset:(float)arg1 ;
-(void)setInstanceBlueOffset:(float)arg1 ;
-(id)init;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setInstanceCount:(int)arg1 ;
-(void)setInstanceTransform:(CATransform3D)arg1 ;
-(void)setInstanceAlphaOffset:(float)arg1 ;
-(void)setInstanceColor:(CGColorRef)arg1 ;
-(void)setInstanceDelay:(double)arg1 ;
-(CATransform3D)instanceTransform;
-(int)instanceCount;
@end

