/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FindMyiPhone/FindMyiPhone-Structs.h>
@class ServerInteractionController, NSDictionary, NSDate, NSString, FMIPDevice, CLLocation, FMIPAccount, NSTimer, NSMutableSet, NSMutableArray, NSArray;

@interface Session : NSObject {

	char _blockModelUpdates;
	char _isDevicePopoverVisible;
	char _isPreloadingComplete;
	char _isLoggedIn;
	char _haveSavedOffset;
	char _isUpdatingLocation;
	ServerInteractionController* _serverInteractionController;
	NSDictionary* _serverContext;
	NSDate* _serverTimestamp;
	NSString* _pushToken;
	FMIPDevice* _pendingSelectedDevice;
	NSDictionary* _locationDictionary;
	CLLocation* _lastPostedLocation;
	NSString* _sendLastLocationUserDecision;
	FMIPAccount* _account;
	NSDictionary* _clientContext;
	NSTimer* _refreshTimer;
	NSMutableSet* _notificationTokens;
	NSMutableSet* _noLocationHistoryAlertDeviceIDs;
	NSMutableArray* _pushMessages;
	CGPoint _savedOffset;
	double _lastRefreshTimestamp;

}

@property (nonatomic,retain) FMIPAccount * account;                                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ServerInteractionController * serverInteractionController;              //@synthesize serverInteractionController=_serverInteractionController - In the implementation block
@property (nonatomic,copy) NSDictionary * clientContext;                                             //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) NSDictionary * serverContext;                                             //@synthesize serverContext=_serverContext - In the implementation block
@property (nonatomic,retain) NSTimer * refreshTimer;                                                 //@synthesize refreshTimer=_refreshTimer - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationTokens;                                      //@synthesize notificationTokens=_notificationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * noLocationHistoryAlertDeviceIDs;                         //@synthesize noLocationHistoryAlertDeviceIDs=_noLocationHistoryAlertDeviceIDs - In the implementation block
@property (assign,nonatomic) char isPreloadingComplete;                                              //@synthesize isPreloadingComplete=_isPreloadingComplete - In the implementation block
@property (assign,nonatomic) double lastRefreshTimestamp;                                            //@synthesize lastRefreshTimestamp=_lastRefreshTimestamp - In the implementation block
@property (nonatomic,copy) NSString * pushToken;                                                     //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) NSMutableArray * pushMessages;                                          //@synthesize pushMessages=_pushMessages - In the implementation block
@property (assign,nonatomic) char isUpdatingLocation;                                                //@synthesize isUpdatingLocation=_isUpdatingLocation - In the implementation block
@property (assign,nonatomic) char blockModelUpdates;                                                 //@synthesize blockModelUpdates=_blockModelUpdates - In the implementation block
@property (assign,nonatomic) char isDevicePopoverVisible;                                            //@synthesize isDevicePopoverVisible=_isDevicePopoverVisible - In the implementation block
@property (nonatomic,readonly) char isValidRegion; 
@property (nonatomic,retain) NSDate * serverTimestamp;                                               //@synthesize serverTimestamp=_serverTimestamp - In the implementation block
@property (assign,nonatomic,__weak) FMIPDevice * pendingSelectedDevice;                              //@synthesize pendingSelectedDevice=_pendingSelectedDevice - In the implementation block
@property (copy) NSDictionary * locationDictionary;                                                  //@synthesize locationDictionary=_locationDictionary - In the implementation block
@property (nonatomic,retain) CLLocation * lastPostedLocation;                                        //@synthesize lastPostedLocation=_lastPostedLocation - In the implementation block
@property (nonatomic,retain) NSString * sendLastLocationUserDecision;                                //@synthesize sendLastLocationUserDecision=_sendLastLocationUserDecision - In the implementation block
@property (assign,nonatomic) char isLoggedIn;                                                        //@synthesize isLoggedIn=_isLoggedIn - In the implementation block
@property (assign,nonatomic) char haveSavedOffset;                                                   //@synthesize haveSavedOffset=_haveSavedOffset - In the implementation block
@property (assign,nonatomic) CGPoint savedOffset;                                                    //@synthesize savedOffset=_savedOffset - In the implementation block
@property (getter=isOwner,nonatomic,readonly) char owner; 
@property (getter=isActive,nonatomic,readonly) char active; 
@property (nonatomic,readonly) double pollInterval; 
@property (nonatomic,readonly) double minimumRefreshTime; 
@property (nonatomic,readonly) double maximumRefreshTime; 
@property (nonatomic,copy,readonly) NSArray * tapContext; 
-(void)processURL:(id)arg1 ;
-(void)setServerContext:(NSDictionary *)arg1 ;
-(NSDictionary *)serverContext;
-(NSArray *)tapContext;
-(char)isLoggedIn;
-(void)setLocationDictionary:(NSDictionary *)arg1 ;
-(void)thisDeviceLocationUpdated:(id)arg1 ;
-(void)removeNotifications;
-(void)pushNotificationReceived:(id)arg1 ;
-(void)pushTokenChanged:(id)arg1 ;
-(void)processOrbCommandContext:(id)arg1 ;
-(void)updateServerContextFromDictionary:(id)arg1 fromCommand:(id)arg2 ;
-(char)blockModelUpdates;
-(void)refreshDevice:(id)arg1 allDevices:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)loggedIn;
-(CLLocation *)lastPostedLocation;
-(void)setBlockModelUpdates:(char)arg1 ;
-(void)displayOfflineLostDeviceAlert:(id)arg1 ;
-(void)setSendLastLocationUserDecision:(NSString *)arg1 ;
-(void)generateStaticClientContext;
-(void)executeCommandWithContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(FMIPDevice *)pendingSelectedDevice;
-(void)setLastRefreshTimestamp:(double)arg1 ;
-(void)setIsLoggedIn:(char)arg1 ;
-(void)setIsUpdatingLocation:(char)arg1 ;
-(char)isUpdatingLocation;
-(void)setNoLocationHistoryAlertDeviceIDs:(NSMutableSet *)arg1 ;
-(void)_dismissAlertsAndExecuteBlock:(/*^block*/id)arg1 ;
-(double)maximumRefreshTime;
-(void)periodicFetch:(id)arg1 ;
-(double)lastRefreshTimestamp;
-(double)minimumRefreshTime;
-(void)scheduleNextRefreshWithInterval:(double)arg1 ;
-(NSMutableSet *)noLocationHistoryAlertDeviceIDs;
-(NSString *)sendLastLocationUserDecision;
-(void)prepareForGuestMode;
-(void)preloadingComplete;
-(void)purgeOldTrackedLocations;
-(void)setIsPreloadingComplete:(char)arg1 ;
-(void)setLastPostedLocation:(CLLocation *)arg1 ;
-(void)startTransient;
-(void)cancelPlaySoundCommandForDevice:(id)arg1 ;
-(void)flushTapContext;
-(char)isValidRegion;
-(void)manualModalFlowCancel:(id)arg1 ;
-(void)manualModalFlowDone:(id)arg1 ;
-(char)isDevicePopoverVisible;
-(void)setIsDevicePopoverVisible:(char)arg1 ;
-(char)isPreloadingComplete;
-(void)setPendingSelectedDevice:(FMIPDevice *)arg1 ;
-(char)haveSavedOffset;
-(void)setHaveSavedOffset:(char)arg1 ;
-(CGPoint)savedOffset;
-(void)setSavedOffset:(CGPoint)arg1 ;
-(double)pollInterval;
-(id)init;
-(void)dealloc;
-(char)isActive;
-(void)stop;
-(void)start;
-(NSDate *)serverTimestamp;
-(void)setServerTimestamp:(NSDate *)arg1 ;
-(void)scheduleRefresh;
-(char)isOwner;
-(void)login;
-(void)setClientContext:(NSDictionary *)arg1 ;
-(NSDictionary *)clientContext;
-(FMIPAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(FMIPAccount *)arg1 ;
-(ServerInteractionController *)serverInteractionController;
-(void)setServerInteractionController:(ServerInteractionController *)arg1 ;
-(NSMutableSet *)notificationTokens;
-(void)setNotificationTokens:(NSMutableSet *)arg1 ;
-(void)addNotificationToken:(id)arg1 ;
-(void)setupNotifications;
-(NSMutableArray *)pushMessages;
-(void)setPushMessages:(NSMutableArray *)arg1 ;
-(void)setPushToken:(NSString *)arg1 ;
-(NSTimer *)refreshTimer;
-(void)setRefreshTimer:(NSTimer *)arg1 ;
-(NSString *)pushToken;
-(NSDictionary *)locationDictionary;
@end

