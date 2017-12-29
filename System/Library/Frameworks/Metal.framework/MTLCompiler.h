/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Metal/Metal-Structs.h>
@class _MTLDevice, NSString, NSObject;

@interface MTLCompiler : NSObject {

	_MTLDevice* _device;
	NSString* _pluginPath;
	SCD_Struct_MT32 _cacheUUID;
	NSObject*<OS_dispatch_queue> _compilerQueue;
	MTLCompilerConnectionManager* _compilerConnectionManager;
	unsigned _compilerId;
	unsigned _compilerFlags;
	MTLCompilerCache* _functionCache;

}

@property (copy,readonly) NSString * pluginPath;                                         //@synthesize pluginPath=_pluginPath - In the implementation block
@property (readonly) SCD_Struct_MT32 cacheUUID;                                          //@synthesize cacheUUID=_cacheUUID - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> compilerQueue;                         //@synthesize compilerQueue=_compilerQueue - In the implementation block
@property (assign) MTLCompilerConnectionManager* compilerConnectionManager;              //@synthesize compilerConnectionManager=_compilerConnectionManager - In the implementation block
@property (assign) unsigned compilerId;                                                  //@synthesize compilerId=_compilerId - In the implementation block
@property (readonly) unsigned compilerFlags;                                             //@synthesize compilerFlags=_compilerFlags - In the implementation block
@property (readonly) MTLCompilerCache* functionCache;                                    //@synthesize functionCache=_functionCache - In the implementation block
-(void*)getShaderCacheKeys;
-(void)unloadShaderCaches;
-(SCD_Struct_MT8)libraryCacheStats;
-(SCD_Struct_MT8)pipelineCacheStats;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(MTLCompilerConnectionManager*)compilerConnectionManager;
-(MTLCompilerCache*)functionCache;
-(void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long)arg4 frameworkLinking:(char)arg5 options:(unsigned)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)reflectionWithFunction:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetData:(id)arg1 cacheUUID:(SCD_Struct_MT32*)arg2 pluginPath:(id)arg3 device:(id)arg4 compilerFlags:(unsigned)arg5 ;
-(void)compileRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)compileFunction:(id)arg1 serializedData:(id)arg2 stateData:(id)arg3 options:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)compileVertexFunction:(id)arg1 serializedPipelineDescriptorData:(id)arg2 stateData:(id)arg3 options:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)compileFragmentFunction:(id)arg1 serializedPixelFormat:(id)arg2 stateData:(id)arg3 options:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)compileFunction:(id)arg1 stateData:(id)arg2 options:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(SCD_Struct_MT32)cacheUUID;
-(NSObject*<OS_dispatch_queue>)compilerQueue;
-(void)setCompilerConnectionManager:(MTLCompilerConnectionManager*)arg1 ;
-(unsigned)compilerId;
-(void)setCompilerId:(unsigned)arg1 ;
-(unsigned)compilerFlags;
-(void)dealloc;
-(NSString *)pluginPath;
@end

