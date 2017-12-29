/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSURLQueryItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _value;

}

@property (readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (readonly) NSString * value;              //@synthesize value=_value - In the implementation block
+(char)supportsSecureCoding;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)queryItemWithName:(id)arg1 value:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(NSString *)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
@end

