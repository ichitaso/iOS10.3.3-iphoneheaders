/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface _CSIRenditionBlockData : NSObject {

	unsigned _dataPixelFormat;
	int _pixelFormat;
	char* _data;
	unsigned _nrows;
	unsigned long _rowbytes;
	unsigned long _imageBytes;
	char _name[128];
	unsigned char _imageBlockReleaseCount;
	unsigned long _sourceRowbytes;
	unsigned _allocateMemory : 1;
	unsigned _mmappedData : 1;

}
+(id)sharedCache;
-(unsigned long)rowbytes;
-(void)_allocateImageBytes;
-(void)_freeImageBytes;
-(void)_makeReadOnly;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 sourceRowbytes:(unsigned long)arg3 pixelFormat:(int)arg4 ;
-(id)initWithBytes:(void*)arg1 pixelWidth:(unsigned)arg2 pixelHeight:(unsigned)arg3 sourceRowbytes:(unsigned long)arg4 pixelFormat:(int)arg5 ;
-(void)updateFromCSIHeader:(const csiheader*)arg1 ;
-(void)setRowBytes:(unsigned long)arg1 ;
-(unsigned long)imageBytes;
-(unsigned)nrows;
-(char)wasUsedTransiently;
-(void)tallyImageBlockRelease;
-(void)expandCSIBitmapData:(csibitmap*)arg1 fromSlice:(slice)arg2 makeReadOnly:(char)arg3 ;
-(void)dealloc;
-(const char*)bytes;
-(int)pixelFormat;
@end
