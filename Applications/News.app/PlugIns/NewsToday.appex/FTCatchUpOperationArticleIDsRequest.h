/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSObject, NSOrderedSet, NSDictionary;

@interface FTCatchUpOperationArticleIDsRequest : NSObject <NSCopying> {

	NSObject*<NSCopying>*<NSSecureCoding> _identifier;
	NSOrderedSet* _articleIDs;
	NSDictionary* _overrideHeadlineMetadataByArticleID;

}

@property (nonatomic,copy) NSObject*<NSCopying>*<NSSecureCoding> identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSOrderedSet * articleIDs;                                       //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * overrideHeadlineMetadataByArticleID;              //@synthesize overrideHeadlineMetadataByArticleID=_overrideHeadlineMetadataByArticleID - In the implementation block
-(id)initWithArticleIDs:(id)arg1 overrideHeadlineMetadataByArticleID:(id)arg2 ;
-(NSDictionary *)overrideHeadlineMetadataByArticleID;
-(void)setOverrideHeadlineMetadataByArticleID:(NSDictionary *)arg1 ;
-(id)init;
-(NSObject*<NSCopying>*<NSSecureCoding>)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSObject*<NSCopying>*<NSSecureCoding>)arg1 ;
-(NSOrderedSet *)articleIDs;
-(void)setArticleIDs:(NSOrderedSet *)arg1 ;
@end

