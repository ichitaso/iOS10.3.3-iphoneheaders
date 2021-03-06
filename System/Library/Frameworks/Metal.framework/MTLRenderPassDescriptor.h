/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor;

@interface MTLRenderPassDescriptor : NSObject <NSCopying> {

	unsigned _renderTargetArrayLength;

}

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray * colorAttachments; 
@property (nonatomic,copy) MTLRenderPassDepthAttachmentDescriptor * depthAttachment; 
@property (nonatomic,copy) MTLRenderPassStencilAttachmentDescriptor * stencilAttachment; 
@property (nonatomic,retain) id<MTLBuffer> visibilityResultBuffer; 
@property (assign,nonatomic) unsigned renderTargetArrayLength;                                        //@synthesize renderTargetArrayLength=_renderTargetArrayLength - In the implementation block
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)renderPassDescriptor;
-(unsigned)renderTargetArrayLength;
-(void)setRenderTargetArrayLength:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

