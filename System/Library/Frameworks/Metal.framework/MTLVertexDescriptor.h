/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLVertexBufferLayoutDescriptorArray, MTLVertexAttributeDescriptorArray;

@interface MTLVertexDescriptor : NSObject <NSCopying>

@property (readonly) MTLVertexBufferLayoutDescriptorArray * layouts; 
@property (readonly) MTLVertexAttributeDescriptorArray * attributes; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)vertexDescriptor;
-(id)formattedDescription:(unsigned)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

