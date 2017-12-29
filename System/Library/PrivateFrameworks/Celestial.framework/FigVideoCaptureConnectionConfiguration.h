/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	int _outputFormat;
	int _outputWidth;
	int _outputHeight;
	int _videoStabilizationMethod;
	char _mirroringEnabled;
	int _orientation;
	int _retainedBufferCount;

}

@property (assign,nonatomic) int outputFormat;                          //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) int outputWidth;                           //@synthesize outputWidth=_outputWidth - In the implementation block
@property (assign,nonatomic) int outputHeight;                          //@synthesize outputHeight=_outputHeight - In the implementation block
@property (assign,nonatomic) int videoStabilizationMethod;              //@synthesize videoStabilizationMethod=_videoStabilizationMethod - In the implementation block
@property (assign,nonatomic) char mirroringEnabled;                     //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign,nonatomic) int orientation;                           //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) int retainedBufferCount;                   //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
-(int)outputFormat;
-(void)setOutputFormat:(int)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)retainedBufferCount;
-(char)mirroringEnabled;
-(int)videoStabilizationMethod;
-(void)setVideoStabilizationMethod:(int)arg1 ;
-(void)setOutputWidth:(int)arg1 ;
-(void)setOutputHeight:(int)arg1 ;
-(void)setMirroringEnabled:(char)arg1 ;
-(void)setRetainedBufferCount:(int)arg1 ;
-(int)outputWidth;
-(int)outputHeight;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
@end

