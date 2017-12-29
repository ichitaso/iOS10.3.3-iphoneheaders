/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@interface WebGLLayer : CAEAGLLayer {

	GraphicsContext3D* _context;
	float _devicePixelRatio;

}

@property (assign,nonatomic) GraphicsContext3D* context;              //@synthesize context=_context - In the implementation block
-(id)initWithGraphicsContext3D:(GraphicsContext3D*)arg1 ;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(void)display;
-(GraphicsContext3D*)context;
-(void)setContext:(GraphicsContext3D*)arg1 ;
@end
