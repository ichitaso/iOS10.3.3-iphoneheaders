/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@class MTLStructTypeInternal;

@interface MTLBufferArgument : MTLArgumentInternal {

	unsigned _dataType : 15;
	unsigned _vertexDescriptorBuffer : 1;
	unsigned short _alignment;
	unsigned _dataSize;
	MTLStructTypeInternal* _structType;

}
-(id)formattedDescription:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 access:(unsigned)arg3 isActive:(char)arg4 locationIndex:(unsigned)arg5 arraySize:(unsigned)arg6 dataType:(unsigned)arg7 dataSize:(unsigned)arg8 alignment:(unsigned)arg9 ;
-(void)setVertexDescriptorBuffer:(char)arg1 ;
-(char)isVertexDescriptorBuffer;
-(void)setStructType:(id)arg1 ;
-(unsigned)bufferAlignment;
-(void)dealloc;
-(unsigned)bufferDataSize;
-(unsigned)bufferDataType;
-(id)bufferStructType;
@end

