/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLDevice.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MTLIOAccelDevice : _MTLDevice {

	IOAccelDeviceRef _deviceRef;
	IOAccelSharedRef _sharedRef;
	unsigned _acceleratorPort;
	SCD_Struct_MT18* _storageCreateParams;
	MTLIOAccelCommandBufferStoragePool* _commandBufferStoragePool;
	unsigned _configBits;
	unsigned _deviceBits;
	unsigned long long _textureRam;
	unsigned long long _videoRam;
	unsigned long long _sharedMemorySize;
	unsigned _accelID;
	unsigned long long _segmentByteThreshold;
	int _numCommandBuffers;
	MTLIOAccelBufferHeap* _bufferHeaps[16];
	NSObject*<OS_dispatch_queue> _device_dispatch_queue;
	unsigned _fenceAllocatedCount;
	unsigned _fenceMaximumCount;
	unsigned _fenceBitmapSearchStart;
	unsigned _fenceBitmapCount;
	unsigned long* _fenceAllocationBitmap;

}

@property (readonly) id* hwResourcePools; 
@property (readonly) unsigned hwResourcePoolCount; 
@property (readonly) int numCommandBuffers;                                        //@synthesize numCommandBuffers=_numCommandBuffers - In the implementation block
@property (readonly) unsigned acceleratorPort;                                     //@synthesize acceleratorPort=_acceleratorPort - In the implementation block
@property (readonly) unsigned long long sharedMemorySize; 
@property (readonly) unsigned long long dedicatedMemorySize; 
@property (readonly) unsigned long long recommendedMaxWorkingSetSize; 
+(void)registerDevices;
-(IOAccelSharedRef)sharedRef;
-(IOAccelDeviceRef)deviceRef;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(unsigned)acceleratorPort;
-(unsigned long long)sharedMemorySize;
-(unsigned long long)dedicatedMemorySize;
-(void)_purgeDevice;
-(void)releaseFenceIndex:(unsigned)arg1 ;
-(void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(int)arg5 ;
-(id)initWithAcceleratorPort:(unsigned)arg1 ;
-(unsigned)initialKernelCommandShmemSize;
-(unsigned)initialSegmentListShmemSize;
-(short)heapIndexWithOptions:(unsigned)arg1 ;
-(void)setSegmentListShmemSize:(unsigned)arg1 ;
-(void)setComputePipelineStateCommandShmemSize:(unsigned)arg1 ;
-(void)setHwResourcePool:(id*)arg1 count:(int)arg2 ;
-(id)akResourceListPool;
-(id)akPrivateResourceListPool;
-(id*)hwResourcePools;
-(unsigned)hwResourcePoolCount;
-(id)allocBufferSubDataWithLength:(unsigned)arg1 options:(unsigned)arg2 alignment:(int)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(int*)arg6 ;
-(int)numCommandBuffers;
-(void)dealloc;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned)arg1 ;
-(id)newFence;
-(unsigned long long)recommendedMaxWorkingSetSize;
@end

