/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SSVPlayActivityEventContainerIDs, NSDate, NSTimeZone, SSVPlayActivityEventItemIDs, NSData;

@interface SSVPlayActivityEvent : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _buildVersion;
	NSString* _containerID;
	SSVPlayActivityEventContainerIDs* _containerIDs;
	unsigned _containerType;
	NSString* _deviceName;
	unsigned _endReasonType;
	NSDate* _eventDate;
	NSTimeZone* _eventTimeZone;
	unsigned _eventType;
	NSString* _externalID;
	NSString* _featureName;
	char _internalBuild;
	SSVPlayActivityEventItemIDs* _itemIDs;
	double _itemDuration;
	double _itemEndTime;
	double _itemStartTime;
	unsigned _itemType;
	unsigned _mediaType;
	char _offline;
	long long _persistentID;
	NSString* _personalizedContainerID;
	unsigned _reasonHintType;
	NSData* _recommendationData;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	char _SBEnabled;
	unsigned _sourceType;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;
	NSString* _storeID;
	NSData* _timedMetadata;
	NSData* _trackInfo;
	int _version;

}

@property (nonatomic,readonly) int version;                                                       //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * buildVersion;                                      //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) SSVPlayActivityEventContainerIDs * containerIDs;              //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,readonly) unsigned containerType;                                            //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,copy,readonly) NSString * deviceName;                                        //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) unsigned endReasonType;                                            //@synthesize endReasonType=_endReasonType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * eventDate;                                           //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) unsigned eventType;                                                //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * eventTimeZone;                                   //@synthesize eventTimeZone=_eventTimeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                                       //@synthesize featureName=_featureName - In the implementation block
@property (getter=isInternalBuild,nonatomic,readonly) char internalBuild;                         //@synthesize internalBuild=_internalBuild - In the implementation block
@property (nonatomic,copy,readonly) SSVPlayActivityEventItemIDs * itemIDs;                        //@synthesize itemIDs=_itemIDs - In the implementation block
@property (nonatomic,readonly) double itemDuration;                                               //@synthesize itemDuration=_itemDuration - In the implementation block
@property (nonatomic,readonly) double itemEndTime;                                                //@synthesize itemEndTime=_itemEndTime - In the implementation block
@property (nonatomic,readonly) double itemStartTime;                                              //@synthesize itemStartTime=_itemStartTime - In the implementation block
@property (nonatomic,readonly) unsigned itemType;                                                 //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                                                //@synthesize mediaType=_mediaType - In the implementation block
@property (getter=isOffline,nonatomic,readonly) char offline;                                     //@synthesize offline=_offline - In the implementation block
@property (nonatomic,readonly) long long persistentID; 
@property (nonatomic,readonly) unsigned reasonHintType;                                           //@synthesize reasonHintType=_reasonHintType - In the implementation block
@property (nonatomic,copy,readonly) NSData * recommendationData;                                  //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleIdentifier;                        //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleVersion;                           //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (setter=BEnabled,getter=isSBEnabled,nonatomic,readonly) char SBEnabled;                 //@synthesize SBEnabled=_SBEnabled - In the implementation block
@property (nonatomic,readonly) unsigned sourceType;                                               //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) unsigned long long storeAccountID;                                 //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeFrontID;                                      //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,copy,readonly) NSData * timedMetadata;                                       //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSData * trackInfo;                                           //@synthesize trackInfo=_trackInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerID;                                       //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                                        //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * personalizedContainerID;                           //@synthesize personalizedContainerID=_personalizedContainerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeID;                                           //@synthesize storeID=_storeID - In the implementation block
+(char)supportsSecureCoding;
-(NSData *)dataRepresentation;
-(double)itemEndTime;
-(double)itemDuration;
-(char)isSBEnabled;
-(double)itemStartTime;
-(NSData *)trackInfo;
-(NSTimeZone *)eventTimeZone;
-(char)isInternalBuild;
-(NSString *)personalizedContainerID;
-(unsigned)reasonHintType;
-(SSVPlayActivityEventItemIDs *)itemIDs;
-(SSVPlayActivityEventContainerIDs *)containerIDs;
-(Class)_mutableCopyClass;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)buildVersion;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)sourceType;
-(int)version;
-(unsigned)eventType;
-(NSString *)containerID;
-(NSDate *)eventDate;
-(unsigned)itemType;
-(NSData *)timedMetadata;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(unsigned long long)storeAccountID;
-(unsigned)endReasonType;
-(NSString *)externalID;
-(NSString *)featureName;
-(NSString *)storeID;
-(unsigned)mediaType;
-(long long)persistentID;
-(NSData *)recommendationData;
-(unsigned)containerType;
-(NSString *)deviceName;
-(id)initWithDataRepresentation:(id)arg1 ;
-(char)isOffline;
-(NSString *)storeFrontID;
@end

