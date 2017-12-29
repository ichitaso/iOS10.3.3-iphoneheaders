/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	struct {
		unsigned alignment : 4;
		unsigned refCount : 24;
		unsigned unused : 4;
	}  _flags;
	float _location;
	id _reserved;

}

@property (nonatomic,readonly) int alignment; 
@property (nonatomic,readonly) float location; 
@property (nonatomic,readonly) NSDictionary * options; 
+(id)columnTerminatorsForLocale:(id)arg1 ;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithType:(unsigned)arg1 location:(float)arg2 ;
-(unsigned)tabStopType;
-(id)init;
-(oneway void)release;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(int)alignment;
-(float)location;
-(id)initWithTextAlignment:(int)arg1 location:(float)arg2 options:(id)arg3 ;
@end

