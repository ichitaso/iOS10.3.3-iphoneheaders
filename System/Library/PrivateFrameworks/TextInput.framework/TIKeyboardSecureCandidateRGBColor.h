/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding> {

	float _colorR;
	float _colorG;
	float _colorB;
	float _colorA;

}

@property (assign,nonatomic) float colorR;              //@synthesize colorR=_colorR - In the implementation block
@property (assign,nonatomic) float colorG;              //@synthesize colorG=_colorG - In the implementation block
@property (assign,nonatomic) float colorB;              //@synthesize colorB=_colorB - In the implementation block
@property (assign,nonatomic) float colorA;              //@synthesize colorA=_colorA - In the implementation block
+(id)blackColor;
+(id)whiteColor;
+(id)lightGrayColor;
+(char)supportsSecureCoding;
-(id)initWithR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4 ;
-(void)setColorR:(float)arg1 ;
-(void)setColorG:(float)arg1 ;
-(void)setColorB:(float)arg1 ;
-(void)setColorA:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)colorA;
-(float)colorB;
-(float)colorG;
-(float)colorR;
@end

