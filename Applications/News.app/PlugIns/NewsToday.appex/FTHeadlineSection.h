/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSSecureCodingNSCopying;
@class NSString, NSOrderedSet, NSObject;

@interface FTHeadlineSection : NSObject <NSCopying, NSCoding> {

	NSString* _identifier;
	NSString* _name;
	NSOrderedSet* _headlines;
	NSObject*<NSSecureCoding>*<NSCopying> _eventTrackingElement;

}

@property (nonatomic,copy) NSString * identifier;                                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSOrderedSet * headlines;                                                //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,copy) NSObject*<NSSecureCoding>*<NSCopying> eventTrackingElement;              //@synthesize eventTrackingElement=_eventTrackingElement - In the implementation block
-(void)setEventTrackingElement:(NSObject*<NSSecureCoding>*<NSCopying>)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 headlines:(id)arg3 eventTrackingElement:(id)arg4 ;
-(NSObject*<NSSecureCoding>*<NSCopying>)eventTrackingElement;
-(char)hasEqualContents:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSOrderedSet *)headlines;
-(void)setHeadlines:(NSOrderedSet *)arg1 ;
@end

