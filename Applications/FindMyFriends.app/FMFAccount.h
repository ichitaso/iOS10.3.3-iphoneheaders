/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FMFEntity.h>

@class NSDictionary, FMFSessionInfo, FMFEntity, NSString, NSNumber, NSArray, UIImage, NSSet, FMFAccountPreferences, FMFConfig, FMFFeatures, FMFDiscovery, FMFLocationShare;

@interface FMFAccount : FMFEntity {

	NSDictionary* serverContext;
	FMFSessionInfo* sessionInfo;
	FMFEntity* _selectedEntity;
	NSString* migrationId;
	NSNumber* migrationStatus;
	NSString* migrationDesc;

}

@property (nonatomic,retain) NSString * appVersion; 
@property (nonatomic,retain) NSString * modelVersion; 
@property (nonatomic,retain) NSString * username; 
@property (nonatomic,retain) NSString * realmRedirectedHost; 
@property (nonatomic,retain) NSArray * emails; 
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) UIImage * familyImage; 
@property (nonatomic,retain) NSNumber * accountType; 
@property (assign,nonatomic) int accountTypeRaw; 
@property (nonatomic,retain) NSNumber * isSignedOut; 
@property (nonatomic,retain) NSNumber * friendRequestCount; 
@property (nonatomic,retain) NSNumber * lastSelectedTab; 
@property (nonatomic,retain) NSSet * followers; 
@property (nonatomic,retain) NSSet * pendingFollowers; 
@property (nonatomic,retain) NSSet * friends; 
@property (nonatomic,retain) NSSet * futureFriends; 
@property (nonatomic,retain) NSSet * friendRequests; 
@property (nonatomic,retain) NSSet * devices; 
@property (nonatomic,retain) NSSet * events; 
@property (nonatomic,retain) NSSet * fences; 
@property (nonatomic,retain) NSSet * fencesNotifyOthers; 
@property (nonatomic,retain) NSSet * fencesOnMeByOthers; 
@property (nonatomic,retain) NSSet * fencesOnFriendsByOthers; 
@property (nonatomic,retain) NSSet * futureEvents; 
@property (nonatomic,retain) NSSet * labelledLocations; 
@property (nonatomic,retain) FMFAccountPreferences * preferences; 
@property (nonatomic,retain) FMFConfig * config; 
@property (nonatomic,retain) FMFFeatures * features; 
@property (nonatomic,retain) NSNumber * imessageSupported; 
@property (nonatomic,retain) FMFDiscovery * discoveryInfo; 
@property (nonatomic,retain) FMFLocationShare * locationShare; 
@property (nonatomic,retain) NSString * thisDeviceId; 
@property (nonatomic,retain) NSString * meDeviceId; 
@property (nonatomic,retain) NSArray * locationLabels; 
@property (nonatomic,retain) id dataContext; 
@property (nonatomic,readonly) NSString * meDeviceName; 
@property (nonatomic,retain) NSDictionary * serverContext; 
@property (nonatomic,retain) FMFSessionInfo * sessionInfo; 
@property (nonatomic,retain) FMFEntity * selectedEntity;                       //@synthesize selectedEntity=_selectedEntity - In the implementation block
@property (nonatomic,retain) NSString * migrationId; 
@property (nonatomic,retain) NSNumber * migrationStatus; 
@property (nonatomic,retain) NSString * migrationDesc; 
-(void)setServerContext:(NSDictionary *)arg1 ;
-(void)initiated;
-(id)onlyPermanentFriends;
-(id)allFriendsAndFutureFriends;
-(id)allLocations;
-(id)allLocationsSortedByDistance;
-(id)nearbyAnnotationsForLocations:(id)arg1 ;
-(id)allTemporaryFriends;
-(void)calculateAllFollowerIsFriendStatus;
-(id)friendWithId:(id)arg1 ;
-(id)favoriteFriendsAndFutureFriendsSorted;
-(id)nonFavoriteFriendsAndFutureFriendsSorted;
-(id)followersAndTemporaryFriends;
-(id)temporaryFriendWithPersonId:(id)arg1 ;
-(void)setSelectedEntity:(FMFEntity *)arg1 ;
-(void)setAccountTypeRaw:(int)arg1 ;
-(int)accountTypeRaw;
-(char)hasMaxFriends;
-(char)hasMaxFollowers;
-(char)hasMaxEvents;
-(NSString *)meDeviceName;
-(id)deviceArray;
-(id)friendRequestsSorted;
-(id)onlyFriendRequestsSorted_TEMPORARY;
-(char)anyFriendHasLocation;
-(id)nearbyAnnotationsForEvent:(id)arg1 ;
-(id)allAnnotationsForEvent:(id)arg1 ;
-(id)eventFriendForUid:(id)arg1 ;
-(id)eventFriendsForUid:(id)arg1 ;
-(id)sortedEvents;
-(void)clearFollowerIsFriendStatus;
-(id)friendsWithCurrentLocationSorted;
-(id)nonFavoriteFriendsAndFutureFriendsSortedByDistance;
-(id)notifyOthersLabelledLocations;
-(char)thisDeviceIsMeDevice;
-(char)thereIsAMeDevice;
-(void)clearAllFavoritesOrders;
-(id)onlyInEventFriends;
-(char)personIsFollowerAndInvited:(id)arg1 ;
-(id)nonFavoriteFriendsFollowersEventsAndFutureFriendsSorted;
-(id)fencesOnMeByOthersSorted;
-(char)meDeviceFencable;
-(char)hasAnyPersonItems;
-(NSDictionary *)serverContext;
-(FMFEntity *)selectedEntity;
-(NSString *)migrationId;
-(void)setMigrationId:(NSString *)arg1 ;
-(NSNumber *)migrationStatus;
-(void)setMigrationStatus:(NSNumber *)arg1 ;
-(NSString *)migrationDesc;
-(void)setMigrationDesc:(NSString *)arg1 ;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
-(void)didTurnIntoFault;
-(FMFSessionInfo *)sessionInfo;
-(void)setSessionInfo:(FMFSessionInfo *)arg1 ;
-(id)nearbyAnnotations;
@end

