/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CSLObjCHex : NSObject <NSCopying, NSSecureCoding> {

	int _q;
	int _r;

}

@property (assign,q,nonatomic) int q;              //@synthesize q=_q - In the implementation block
@property (assign,r,nonatomic) int r;              //@synthesize r=_r - In the implementation block
@property (assign,nonatomic) Hex hex; 
+(char)supportsSecureCoding;
-(void)setHex:(Hex)arg1 ;
-(id)initWithHex:(Hex)arg1 ;
-(void)setQ:(int)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setR:(int)arg1 ;
-(int)r;
-(Hex)hex;
-(int)q;
@end

