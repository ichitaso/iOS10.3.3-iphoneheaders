/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>

@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {

	MTLRenderPipelineAttachmentDescriptorPrivate _private;

}
-(id)formattedDescription:(unsigned)arg1 ;
-(const MTLRenderPipelineAttachmentDescriptorPrivate*)_descriptorPrivate;
-(char)isBlendingEnabled;
-(unsigned)sourceRGBBlendFactor;
-(unsigned)destinationRGBBlendFactor;
-(unsigned)rgbBlendOperation;
-(unsigned)sourceAlphaBlendFactor;
-(unsigned)destinationAlphaBlendFactor;
-(unsigned)alphaBlendOperation;
-(unsigned)writeMask;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)pixelFormat;
-(void)setDestinationRGBBlendFactor:(unsigned)arg1 ;
-(void)setSourceAlphaBlendFactor:(unsigned)arg1 ;
-(void)setSourceRGBBlendFactor:(unsigned)arg1 ;
-(void)setPixelFormat:(unsigned)arg1 ;
-(void)setWriteMask:(unsigned)arg1 ;
-(void)setAlphaBlendOperation:(unsigned)arg1 ;
-(void)setRgbBlendOperation:(unsigned)arg1 ;
-(void)setDestinationAlphaBlendFactor:(unsigned)arg1 ;
-(void)setBlendingEnabled:(char)arg1 ;
@end

