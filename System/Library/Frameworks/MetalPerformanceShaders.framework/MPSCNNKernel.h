/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSKernel.h>

@interface MPSCNNKernel : MPSKernel {

	SCD_Struct_MP4 _offset;
	SCD_Struct_MP6 _clipRect;
	unsigned destinationFeatureChannelOffset;
	unsigned _edgeMode;
	int _checkFlags;
	/*function pointer*/void* _encode;
	void* _encodeData;
	unsigned _destinationFeatureChannelOffset;

}

@property (assign,nonatomic) SCD_Struct_MP4 offset;                                 //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP6 clipRect;                               //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) unsigned destinationFeatureChannelOffset;              //@synthesize destinationFeatureChannelOffset=_destinationFeatureChannelOffset - In the implementation block
@property (assign,nonatomic) unsigned edgeMode;                                     //@synthesize edgeMode=_edgeMode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP5)arg1 ;
-(void)setDestinationFeatureChannelOffset:(unsigned)arg1 ;
-(unsigned)edgeMode;
-(unsigned)destinationFeatureChannelOffset;
-(void)setEdgeMode:(unsigned)arg1 ;
-(id)init;
-(id)debugDescription;
-(void)setOffset:(SCD_Struct_MP4)arg1 ;
-(SCD_Struct_MP4)offset;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
-(SCD_Struct_MP6)clipRect;
-(void)setClipRect:(SCD_Struct_MP6)arg1 ;
-(id)initWithDevice:(id)arg1 ;
@end
