/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSSecureCodingNSCopying;
@class NSArray, NSDictionary, NSObject;

@interface FTCatchUpOperationResults : NSObject <NSCopying> {

	NSArray* _headlines;
	NSDictionary* _headlineCacheExpirationDatesByArticleID;
	NSDictionary* _headlineEventTrackingElementsByArticleID;
	NSObject*<NSSecureCoding>*<NSCopying> _sectionEventTrackingElement;

}

@property (nonatomic,copy) NSArray * headlines;                                                            //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,copy) NSDictionary * headlineCacheExpirationDatesByArticleID;                         //@synthesize headlineCacheExpirationDatesByArticleID=_headlineCacheExpirationDatesByArticleID - In the implementation block
@property (nonatomic,copy) NSDictionary * headlineEventTrackingElementsByArticleID;                        //@synthesize headlineEventTrackingElementsByArticleID=_headlineEventTrackingElementsByArticleID - In the implementation block
@property (nonatomic,copy) NSObject*<NSSecureCoding>*<NSCopying> sectionEventTrackingElement;              //@synthesize sectionEventTrackingElement=_sectionEventTrackingElement - In the implementation block
-(id)copyWithHeadlines:(id)arg1 ;
-(NSDictionary *)headlineCacheExpirationDatesByArticleID;
-(NSDictionary *)headlineEventTrackingElementsByArticleID;
-(NSObject*<NSSecureCoding>*<NSCopying>)sectionEventTrackingElement;
-(void)setHeadlineCacheExpirationDatesByArticleID:(NSDictionary *)arg1 ;
-(void)setHeadlineEventTrackingElementsByArticleID:(NSDictionary *)arg1 ;
-(void)setSectionEventTrackingElement:(NSObject*<NSSecureCoding>*<NSCopying>)arg1 ;
-(id)initWithHeadlines:(id)arg1 headlineCacheExpirationDatesByArticleID:(id)arg2 headlineEventTrackingElementsByArticleID:(id)arg3 sectionEventTrackingElement:(id)arg4 ;
-(id)initWithHeadlines:(id)arg1 headlineEventTrackingElementsByArticleID:(id)arg2 sectionEventTrackingElement:(id)arg3 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)headlines;
-(void)setHeadlines:(NSArray *)arg1 ;
@end

