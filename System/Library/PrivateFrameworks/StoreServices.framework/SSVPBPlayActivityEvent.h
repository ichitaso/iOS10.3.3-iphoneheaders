/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface SSVPBPlayActivityEvent : PBCodable <NSCopying> {

	unsigned long long _cloudPlaylistID;
	long long _containerAdamID;
	long long _equivalencySourceAdamID;
	double _eventDateTimestamp;
	double _eventSecondsFromGMT;
	unsigned long long _itemCloudID;
	double _itemDuration;
	double _itemEndTime;
	double _itemStartTime;
	long long _persistentID;
	long long _purchasedAdamID;
	long long _radioAdamID;
	long long _stationID;
	unsigned long long _storeAccountID;
	long long _subscriptionAdamID;
	long long _tvShowPurchasedAdamID;
	long long _tvShowSubscriptionAdamID;
	NSString* _buildVersion;
	NSString* _cloudAlbumID;
	NSString* _containerID;
	int _containerType;
	NSString* _deviceName;
	int _endReasonType;
	int _eventType;
	NSString* _externalID;
	NSString* _featureName;
	NSString* _globalPlaylistID;
	int _itemType;
	NSString* _lyricsID;
	int _mediaType;
	NSString* _personalizedContainerID;
	NSString* _playlistVersionHash;
	int _reasonHintType;
	NSData* _recommendationData;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	int _sourceType;
	NSString* _stationHash;
	NSString* _stationStringID;
	NSString* _storeFrontID;
	NSString* _storeID;
	NSData* _timedMetadata;
	NSData* _trackInfo;
	char _internalBuild;
	char _offline;
	char _sBEnabled;
	SCD_Struct_SS19 _has;

}

@property (assign,nonatomic) char hasEventType; 
@property (assign,nonatomic) int eventType;                                      //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) char hasReasonHintType; 
@property (assign,nonatomic) int reasonHintType;                                 //@synthesize reasonHintType=_reasonHintType - In the implementation block
@property (assign,nonatomic) char hasSubscriptionAdamID; 
@property (assign,nonatomic) long long subscriptionAdamID;                       //@synthesize subscriptionAdamID=_subscriptionAdamID - In the implementation block
@property (assign,nonatomic) char hasPurchasedAdamID; 
@property (assign,nonatomic) long long purchasedAdamID;                          //@synthesize purchasedAdamID=_purchasedAdamID - In the implementation block
@property (assign,nonatomic) char hasRadioAdamID; 
@property (assign,nonatomic) long long radioAdamID;                              //@synthesize radioAdamID=_radioAdamID - In the implementation block
@property (assign,nonatomic) char hasItemCloudID; 
@property (assign,nonatomic) unsigned long long itemCloudID;                     //@synthesize itemCloudID=_itemCloudID - In the implementation block
@property (nonatomic,readonly) char hasLyricsID; 
@property (nonatomic,retain) NSString * lyricsID;                                //@synthesize lyricsID=_lyricsID - In the implementation block
@property (assign,nonatomic) char hasEquivalencySourceAdamID; 
@property (assign,nonatomic) long long equivalencySourceAdamID;                  //@synthesize equivalencySourceAdamID=_equivalencySourceAdamID - In the implementation block
@property (assign,nonatomic) char hasTvShowPurchasedAdamID; 
@property (assign,nonatomic) long long tvShowPurchasedAdamID;                    //@synthesize tvShowPurchasedAdamID=_tvShowPurchasedAdamID - In the implementation block
@property (assign,nonatomic) char hasTvShowSubscriptionAdamID; 
@property (assign,nonatomic) long long tvShowSubscriptionAdamID;                 //@synthesize tvShowSubscriptionAdamID=_tvShowSubscriptionAdamID - In the implementation block
@property (assign,nonatomic) char hasContainerAdamID; 
@property (assign,nonatomic) long long containerAdamID;                          //@synthesize containerAdamID=_containerAdamID - In the implementation block
@property (nonatomic,readonly) char hasGlobalPlaylistID; 
@property (nonatomic,retain) NSString * globalPlaylistID;                        //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (nonatomic,readonly) char hasStationHash; 
@property (nonatomic,retain) NSString * stationHash;                             //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) char hasStationStringID; 
@property (nonatomic,retain) NSString * stationStringID;                         //@synthesize stationStringID=_stationStringID - In the implementation block
@property (assign,nonatomic) char hasStationID; 
@property (assign,nonatomic) long long stationID;                                //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) char hasCloudAlbumID; 
@property (nonatomic,retain) NSString * cloudAlbumID;                            //@synthesize cloudAlbumID=_cloudAlbumID - In the implementation block
@property (assign,nonatomic) char hasCloudPlaylistID; 
@property (assign,nonatomic) unsigned long long cloudPlaylistID;                 //@synthesize cloudPlaylistID=_cloudPlaylistID - In the implementation block
@property (nonatomic,readonly) char hasPlaylistVersionHash; 
@property (nonatomic,retain) NSString * playlistVersionHash;                     //@synthesize playlistVersionHash=_playlistVersionHash - In the implementation block
@property (assign,nonatomic) char hasContainerType; 
@property (assign,nonatomic) int containerType;                                  //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,readonly) char hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                              //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) char hasEndReasonType; 
@property (assign,nonatomic) int endReasonType;                                  //@synthesize endReasonType=_endReasonType - In the implementation block
@property (assign,nonatomic) char hasEventDateTimestamp; 
@property (assign,nonatomic) double eventDateTimestamp;                          //@synthesize eventDateTimestamp=_eventDateTimestamp - In the implementation block
@property (assign,nonatomic) char hasEventSecondsFromGMT; 
@property (assign,nonatomic) double eventSecondsFromGMT;                         //@synthesize eventSecondsFromGMT=_eventSecondsFromGMT - In the implementation block
@property (nonatomic,readonly) char hasFeatureName; 
@property (nonatomic,retain) NSString * featureName;                             //@synthesize featureName=_featureName - In the implementation block
@property (assign,nonatomic) char hasItemDuration; 
@property (assign,nonatomic) double itemDuration;                                //@synthesize itemDuration=_itemDuration - In the implementation block
@property (assign,nonatomic) char hasItemEndTime; 
@property (assign,nonatomic) double itemEndTime;                                 //@synthesize itemEndTime=_itemEndTime - In the implementation block
@property (assign,nonatomic) char hasItemStartTime; 
@property (assign,nonatomic) double itemStartTime;                               //@synthesize itemStartTime=_itemStartTime - In the implementation block
@property (assign,nonatomic) char hasItemType; 
@property (assign,nonatomic) int itemType;                                       //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) char hasMediaType; 
@property (assign,nonatomic) int mediaType;                                      //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) char hasOffline; 
@property (assign,nonatomic) char offline;                                       //@synthesize offline=_offline - In the implementation block
@property (assign,nonatomic) char hasPersistentID; 
@property (assign,nonatomic) long long persistentID;                             //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) char hasSBEnabled; 
@property (assign,nonatomic) char sBEnabled;                                     //@synthesize sBEnabled=_sBEnabled - In the implementation block
@property (assign,nonatomic) char hasSourceType; 
@property (assign,nonatomic) int sourceType;                                     //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) char hasStoreAccountID; 
@property (assign,nonatomic) unsigned long long storeAccountID;                  //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,readonly) char hasTimedMetadata; 
@property (nonatomic,retain) NSData * timedMetadata;                             //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,readonly) char hasTrackInfo; 
@property (nonatomic,retain) NSData * trackInfo;                                 //@synthesize trackInfo=_trackInfo - In the implementation block
@property (nonatomic,readonly) char hasRecommendationData; 
@property (nonatomic,retain) NSData * recommendationData;                        //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,readonly) char hasStoreFrontID; 
@property (nonatomic,retain) NSString * storeFrontID;                            //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (assign,nonatomic) char hasInternalBuild; 
@property (assign,nonatomic) char internalBuild;                                 //@synthesize internalBuild=_internalBuild - In the implementation block
@property (nonatomic,readonly) char hasBuildVersion; 
@property (nonatomic,retain) NSString * buildVersion;                            //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) char hasRequestingBundleIdentifier; 
@property (nonatomic,retain) NSString * requestingBundleIdentifier;              //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,readonly) char hasRequestingBundleVersion; 
@property (nonatomic,retain) NSString * requestingBundleVersion;                 //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (nonatomic,readonly) char hasContainerID; 
@property (nonatomic,retain) NSString * containerID;                             //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) char hasPersonalizedContainerID; 
@property (nonatomic,retain) NSString * personalizedContainerID;                 //@synthesize personalizedContainerID=_personalizedContainerID - In the implementation block
@property (nonatomic,readonly) char hasStoreID; 
@property (nonatomic,retain) NSString * storeID;                                 //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) char hasExternalID; 
@property (nonatomic,retain) NSString * externalID;                              //@synthesize externalID=_externalID - In the implementation block
-(double)itemEndTime;
-(double)itemDuration;
-(double)itemStartTime;
-(NSData *)trackInfo;
-(NSString *)personalizedContainerID;
-(int)reasonHintType;
-(long long)radioAdamID;
-(long long)subscriptionAdamID;
-(long long)purchasedAdamID;
-(NSString *)cloudAlbumID;
-(NSString *)playlistVersionHash;
-(unsigned long long)cloudPlaylistID;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(char)hasContainerType;
-(char)hasEndReasonType;
-(char)hasEventDateTimestamp;
-(double)eventDateTimestamp;
-(char)hasEventSecondsFromGMT;
-(double)eventSecondsFromGMT;
-(char)hasFeatureName;
-(char)hasItemDuration;
-(char)hasItemEndTime;
-(char)hasItemStartTime;
-(char)hasItemType;
-(char)hasOffline;
-(char)offline;
-(char)hasPersistentID;
-(char)hasRecommendationData;
-(char)hasSBEnabled;
-(char)sBEnabled;
-(char)hasStoreAccountID;
-(char)hasStoreFrontID;
-(char)hasTimedMetadata;
-(char)hasTrackInfo;
-(char)hasReasonHintType;
-(char)hasBuildVersion;
-(char)hasRequestingBundleVersion;
-(char)hasRequestingBundleIdentifier;
-(char)hasInternalBuild;
-(char)hasContainerID;
-(char)hasExternalID;
-(char)hasPersonalizedContainerID;
-(char)hasStoreID;
-(char)hasContainerAdamID;
-(long long)containerAdamID;
-(char)hasGlobalPlaylistID;
-(char)hasPlaylistVersionHash;
-(void)setPlaylistVersionHash:(NSString *)arg1 ;
-(char)hasStationHash;
-(void)setStationHash:(NSString *)arg1 ;
-(char)hasStationStringID;
-(void)setStationStringID:(NSString *)arg1 ;
-(char)hasStationID;
-(void)setStationID:(long long)arg1 ;
-(char)hasCloudAlbumID;
-(void)setCloudAlbumID:(NSString *)arg1 ;
-(char)hasCloudPlaylistID;
-(void)setCloudPlaylistID:(unsigned long long)arg1 ;
-(char)hasSubscriptionAdamID;
-(void)setSubscriptionAdamID:(long long)arg1 ;
-(char)hasPurchasedAdamID;
-(void)setPurchasedAdamID:(long long)arg1 ;
-(char)hasRadioAdamID;
-(void)setRadioAdamID:(long long)arg1 ;
-(char)hasItemCloudID;
-(unsigned long long)itemCloudID;
-(char)hasLyricsID;
-(char)hasEquivalencySourceAdamID;
-(void)setEventDateTimestamp:(double)arg1 ;
-(void)setEventSecondsFromGMT:(double)arg1 ;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setItemDuration:(double)arg1 ;
-(void)setItemEndTime:(double)arg1 ;
-(void)setItemStartTime:(double)arg1 ;
-(void)setOffline:(char)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(void)setSBEnabled:(char)arg1 ;
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setTrackInfo:(NSData *)arg1 ;
-(void)setInternalBuild:(char)arg1 ;
-(void)setPersonalizedContainerID:(NSString *)arg1 ;
-(void)setReasonHintType:(int)arg1 ;
-(void)setContainerAdamID:(long long)arg1 ;
-(void)setItemCloudID:(unsigned long long)arg1 ;
-(void)setHasReasonHintType:(char)arg1 ;
-(id)reasonHintTypeAsString:(int)arg1 ;
-(int)StringAsReasonHintType:(id)arg1 ;
-(void)setHasSubscriptionAdamID:(char)arg1 ;
-(void)setHasPurchasedAdamID:(char)arg1 ;
-(void)setHasRadioAdamID:(char)arg1 ;
-(void)setHasItemCloudID:(char)arg1 ;
-(void)setHasEquivalencySourceAdamID:(char)arg1 ;
-(void)setTvShowPurchasedAdamID:(long long)arg1 ;
-(void)setHasTvShowPurchasedAdamID:(char)arg1 ;
-(char)hasTvShowPurchasedAdamID;
-(void)setTvShowSubscriptionAdamID:(long long)arg1 ;
-(void)setHasTvShowSubscriptionAdamID:(char)arg1 ;
-(char)hasTvShowSubscriptionAdamID;
-(void)setHasContainerAdamID:(char)arg1 ;
-(void)setHasStationID:(char)arg1 ;
-(void)setHasCloudPlaylistID:(char)arg1 ;
-(void)setHasContainerType:(char)arg1 ;
-(id)containerTypeAsString:(int)arg1 ;
-(int)StringAsContainerType:(id)arg1 ;
-(void)setHasEndReasonType:(char)arg1 ;
-(id)endReasonTypeAsString:(int)arg1 ;
-(int)StringAsEndReasonType:(id)arg1 ;
-(void)setHasEventDateTimestamp:(char)arg1 ;
-(void)setHasEventSecondsFromGMT:(char)arg1 ;
-(void)setHasItemDuration:(char)arg1 ;
-(void)setHasItemEndTime:(char)arg1 ;
-(void)setHasItemStartTime:(char)arg1 ;
-(void)setHasItemType:(char)arg1 ;
-(id)itemTypeAsString:(int)arg1 ;
-(int)StringAsItemType:(id)arg1 ;
-(void)setHasOffline:(char)arg1 ;
-(void)setHasPersistentID:(char)arg1 ;
-(void)setHasSBEnabled:(char)arg1 ;
-(id)sourceTypeAsString:(int)arg1 ;
-(int)StringAsSourceType:(id)arg1 ;
-(void)setHasStoreAccountID:(char)arg1 ;
-(void)setHasInternalBuild:(char)arg1 ;
-(long long)tvShowPurchasedAdamID;
-(long long)tvShowSubscriptionAdamID;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)buildVersion;
-(id)dictionaryRepresentation;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(int)eventType;
-(NSString *)containerID;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)stationID;
-(int)itemType;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(char)arg1 ;
-(char)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(NSData *)timedMetadata;
-(NSString *)requestingBundleIdentifier;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(NSString *)requestingBundleVersion;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(NSString *)stationStringID;
-(unsigned long long)storeAccountID;
-(long long)equivalencySourceAdamID;
-(void)setEquivalencySourceAdamID:(long long)arg1 ;
-(NSString *)globalPlaylistID;
-(void)setGlobalPlaylistID:(NSString *)arg1 ;
-(int)endReasonType;
-(void)setEndReasonType:(int)arg1 ;
-(void)setLyricsID:(NSString *)arg1 ;
-(NSString *)lyricsID;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(NSString *)featureName;
-(NSString *)stationHash;
-(NSString *)storeID;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setItemType:(int)arg1 ;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(long long)persistentID;
-(void)setDeviceName:(NSString *)arg1 ;
-(char)hasDeviceName;
-(void)setContainerID:(NSString *)arg1 ;
-(void)setContainerType:(int)arg1 ;
-(void)setRecommendationData:(NSData *)arg1 ;
-(NSData *)recommendationData;
-(int)containerType;
-(char)internalBuild;
-(void)setHasSourceType:(char)arg1 ;
-(char)hasSourceType;
-(NSString *)deviceName;
-(void)setBuildVersion:(NSString *)arg1 ;
-(NSString *)storeFrontID;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setHasMediaType:(char)arg1 ;
-(char)hasMediaType;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
@end

