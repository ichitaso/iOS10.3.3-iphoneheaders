/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
#import <Metal/Metal-Structs.h>
@class MTLIOAccelDevice, MTLIOAccelResource, NSString;

@interface MTLIOAccelHeap : NSObject {

	MTLIOAccelDevice*<MTLDevice> _device;
	MTLIOAccelResource* _resource;
	MTLRangeAllocator* _allocator;
	opaque_pthread_mutex_t _mutex;
	unsigned _size;
	NSString* _label;

}

@property (copy) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned size; 
@property (readonly) unsigned usedSize; 
@property (readonly) unsigned storageMode; 
@property (readonly) unsigned cpuCacheMode; 
-(id)formattedDescription:(unsigned)arg1 ;
-(void)deallocHeapSubResource;
-(void)unpinMemoryAtOffset:(unsigned)arg1 withLength:(unsigned)arg2 ;
-(unsigned)usedSize;
-(unsigned)maxAvailableSizeWithAlignment:(unsigned)arg1 ;
-(id)initWithDevice:(id)arg1 size:(unsigned)arg2 options:(unsigned)arg3 args:(IOAccelNewResourceArgs*)arg4 argsSize:(unsigned)arg5 ;
-(id)newSubResourceWithLength:(unsigned)arg1 alignment:(unsigned)arg2 options:(unsigned)arg3 offset:(unsigned*)arg4 ;
-(unsigned)size;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)storageMode;
-(unsigned)setPurgeableState:(unsigned)arg1 ;
-(unsigned)cpuCacheMode;
-(id<MTLDevice>)device;
@end

