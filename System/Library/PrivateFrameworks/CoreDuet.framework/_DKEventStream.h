/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CDEventStreamProperties, NSString, _DKObjectType;

@interface _DKEventStream : NSObject <NSSecureCoding> {

	_CDEventStreamProperties* _eventProperties;
	NSString* _name;
	_DKObjectType* _eventValueType;

}

@property (readonly) _CDEventStreamProperties * eventProperties;              //@synthesize eventProperties=_eventProperties - In the implementation block
@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (readonly) _DKObjectType * eventValueType;                          //@synthesize eventValueType=_eventValueType - In the implementation block
+(char)supportsSecureCoding;
+(id)eventStreamWithName:(id)arg1 ;
+(id)eventStreamWithName:(id)arg1 valueType:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 valueType:(id)arg2 cache:(id)arg3 ;
-(_CDEventStreamProperties *)eventProperties;
-(_DKObjectType *)eventValueType;
@end

