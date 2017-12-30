/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionPanExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionPan : OKAction <OKActionPanExports, NSSecureCoding> {

	unsigned _direction;
	CGPoint _translation;
	CGPoint _velocity;

}

@property (assign,nonatomic) CGPoint translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                 //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) unsigned direction;               //@synthesize direction=_direction - In the implementation block
+(char)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)panActionWithState:(unsigned)arg1 location:(CGPoint)arg2 touchCount:(unsigned)arg3 translation:(CGPoint)arg4 velocity:(CGPoint)arg5 direction:(unsigned)arg6 context:(id)arg7 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setVelocity:(CGPoint)arg1 ;
-(CGPoint)velocity;
-(void)setDirection:(unsigned)arg1 ;
-(unsigned)direction;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
@end
