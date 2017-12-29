/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIContext : NSObject {

	void* _priv;

}

@property (readonly) Context* _internalContext; 
@property (nonatomic,readonly) CGColorSpaceRef workingColorSpace; 
@property (nonatomic,readonly) int workingFormat; 
+(CGColorSpaceRef)defaultWorkingColorSpace;
+(Context*)internalCLContextWithOptions:(id)arg1 ;
+(Context*)internalContextWithMTLDevice:(id)arg1 options:(id)arg2 ;
+(Context*)internalGLContextWithOptions:(id)arg1 ;
+(Context*)internalContextWithEAGLContext:(id)arg1 options:(id)arg2 ;
+(int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(int)arg3 bounds:(CGRect)arg4 format:(int)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
+(CGColorSpaceRef)defaultRGBColorSpace;
+(CGColorSpaceRef)defaultGrayColorSpace;
+(id)_singletonContext;
+(id)contextWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
+(id)contextWithMTLDevice:(id)arg1 options:(id)arg2 ;
+(Context*)internalCLContextWithOptions:(id)arg1 glContext:(void*)arg2 ;
+(id)contextWithOptions:(id)arg1 ;
+(id)context;
+(id)contextWithEAGLContext:(id)arg1 options:(id)arg2 ;
+(id)contextWithMTLDevice:(id)arg1 ;
+(id)contextWithEAGLContext:(id)arg1 ;
-(Context*)_internalContext;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(id)initWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
-(id)initWithEAGLContext:(id)arg1 ;
-(id)initWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(id)initWithMTLDevice:(id)arg1 options:(id)arg2 ;
-(void)_gpuContextCheck;
-(void)render:(id)arg1 toCVPixelBuffer:(CVBufferRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(BOOL)_isEAGLBackedContext;
-(BOOL)_isCGBackedContext;
-(void)render:(id)arg1 toTexture:(unsigned)arg2 target:(unsigned)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(CGColorSpaceRef)_outputColorSpace;
-(CGImageRef)_createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 deferred:(char)arg5 textureLimit:(unsigned long)arg6 ;
-(CGColorSpaceRef)workingColorSpace;
-(CGAffineTransform)CTM;
-(void)_insertEventMarker:(const char*)arg1 ;
-(void)drawImage:(id)arg1 atPoint:(CGPoint)arg2 fromRect:(CGRect)arg3 ;
-(void)render:(id)arg1 toTexture:(unsigned)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(IOSurfaceRef)createIOSurface:(id)arg1 ;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 ;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 deferred:(char)arg5 ;
-(CGLayerRef)createCGLayerWithSize:(CGSize)arg1 info:(CFDictionaryRef)arg2 ;
-(unsigned long)maximumInputImageSize;
-(unsigned long)maximumOutputImageSize;
-(CGSize)inputImageMaximumSize;
-(CGSize)outputImageMaximumSize;
-(int)workingFormat;
-(void)reclaimResources;
-(id)flatten:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(char)measureRequirementsOf:(id)arg1 query:(int)arg2 :(id*)arg3 results:(CGRect*)arg4 ;
-(void)setCTM:(CGAffineTransform)arg1 ;
-(id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2 ;
-(id)TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 options:(id)arg4 ;
-(id)JPEGRepresentationOfImage:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 options:(id)arg3 ;
-(char)writeTIFFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 options:(id)arg5 error:(id*)arg6 ;
-(char)writeJPEGRepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(CGColorSpaceRef)arg3 options:(id)arg4 error:(id*)arg5 ;
-(void)render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(int)arg3 bounds:(CGRect)arg4 format:(int)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
-(id)init;
-(void)invalidate;
-(CGRect)bounds;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)lock;
-(void)unlock;
-(void)render:(id)arg1 toIOSurface:(IOSurfaceRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)initWithOptions:(id)arg1 ;
-(void)render:(id)arg1 toCVPixelBuffer:(CVBufferRef)arg2 ;
-(IOSurfaceRef)createIOSurface:(id)arg1 fromRect:(CGRect)arg2 ;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)drawImage:(id)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
-(void)clearCaches;
-(void)render:(id)arg1 toMTLTexture:(id)arg2 commandBuffer:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(void)render:(id)arg1 ;
-(void)abort;
@end

