/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:32:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.tencentweibo.xpc/com.apple.tencentweibo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.tencentweibo/com.apple.tencentweibo-Structs.h>
#import <Social/SLRemoteSession.h>
#import <libobjc.A.dylib/SLTencentWeiboRemoteSessionProtocol.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source;
@class ACAccount, ACAccountStore, NSLock, NSObject, CLLocationManager, SLPlace, TEDUserRecordStore, NSDictionary, NSMutableArray, CLLocation, NSString;

@interface TEDSession : SLRemoteSession <SLTencentWeiboRemoteSessionProtocol, CLLocationManagerDelegate> {

	ACAccount* _activeAccount;
	ACAccountStore* _accountStore;
	NSLock* _locationStatusLock;
	NSObject*<OS_dispatch_source> _locationTimer;
	int _geotagStatus;
	CLLocationManager* _locationManager;
	CLLocationCoordinate2D _currentLocation;
	SLPlace* _currentPlace;
	TEDUserRecordStore* _userRecordStore;
	NSDictionary* _clientInfo;
	NSLock* _sendCompletionsLock;
	NSMutableArray* _sendCompletions;
	unsigned _warningAboutLocationAuth : 1;
	CLLocation* _location;
	NSString* _permaLinkOfLastSuccessfulStatusUpdate;
	NSString* _updateIdentifier;
	NSString* _userIdentifier;
	NSString* _postIdentifier;
	CLLocation* _shiftedLocation;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_migrateTencentWeiboDataWithMigrationController:(id)arg1 ;
+(id)_tencentWeiboImagesFolderPath;
+(id)_tencentWeiboDatabasePath;
+(id)_tencentWeiboDatabaseFileName;
+(void)migrateDaemonDataIfNecessary;
-(void)_startUpdatingLocation;
-(void)_warnAboutNetworksIfNeeded;
-(void)_stopUpdatingLocation:(char)arg1 ;
-(id)_sessionInfo;
-(int)_lastFetchedShortenedURLLength:(char*)arg1 ;
-(int)_lastFetchedUrlMaxLength:(char*)arg1 ;
-(void)_recordFetchedShortenedURLLength:(int)arg1 ;
-(void)_recordFetchedUrlMaxLength:(int)arg1 ;
-(int)_lastFetchedImageSizeLimit:(char*)arg1 ;
-(void)_recordFetchedImageSizeLimit:(int)arg1 ;
-(char)_nts_geotagFetchingDeniedByUser;
-(void)_notifyUserAboutDisallowedLocation;
-(void)_setGeotagStatus:(int)arg1 notifyClient:(char)arg2 ;
-(void)_completeSendBlock:(/*^block*/id)arg1 ;
-(void)_handleRetryTencentWeibo:(id)arg1 location:(id)arg2 response:(id)arg3 responseObject:(id)arg4 copiedCompletion:(/*^block*/id)arg5 error:(id)arg6 ;
-(char)_statusRequiresMultiPart:(id)arg1 ;
-(void)_sendMultiPartStatus:(id)arg1 location:(id)arg2 copiedCompletion:(/*^block*/id)arg3 ;
-(void)_sendSimpleStatus:(id)arg1 location:(id)arg2 copiedCompletion:(/*^block*/id)arg3 ;
-(id)locationOrShift;
-(void)_sendStatus:(id)arg1 location:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_buildUserStore;
-(char)_weiboWasADuplicate:(id)arg1 apiErrorObject:(id)arg2 ;
-(char)_wasTencentWeiboLimitReached:(id)arg1 apiErrorObject:(id)arg2 ;
-(char)_tencentWeiboAuthenticationFailure:(id)arg1 apiErrorObject:(id)arg2 ;
-(id)tencentWeiboIconURL;
-(int)_callingPID;
-(void)handleReturnedJSONRequestResults:(id)arg1 withHTTPURLResponse:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_currentLocation;
-(void)_nts_startUpdatingLocation;
-(void)_nts_stopUpdatingLocation:(char)arg1 ;
-(void)_notifyClientOfLocationInfoChange;
-(id)_nts_locationManager;
-(void)_updateLocationStateWithCLPlacemarks:(id)arg1 ;
-(id)_currentLocationInfo;
-(void)_fetchNearbyPlacesWithCoreLocation:(id)arg1 ;
-(void)_updateLocationStateWithTencentWeiboPlace:(id)arg1 ;
-(void)_fetchNearbyPlace:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)validateRevokeReturnDict:(id)arg1 ;
-(id)_errorForRevokeErrorCode:(id)arg1 ;
-(char)validateRevokeAllReturnDict:(id)arg1 ;
-(float)_nts_clientScale;
-(CGSize)_nts_clientLocationViewSize;
-(void)dealloc;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)checkIn:(id)arg1 ;
-(void)fetchSessionInfo:(/*^block*/id)arg1 ;
-(void)ensureUserRecordStore;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCurrentUrlLimits:(/*^block*/id)arg1 ;
-(void)fetchCurrentImageLimits:(/*^block*/id)arg1 ;
-(void)setGeotagStatus:(id)arg1 ;
-(void)fetchGeotagStatus:(/*^block*/id)arg1 ;
-(void)setGeotagAccountSetting:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPermaLinkFromLastStatusUpdate:(/*^block*/id)arg1 ;
-(void)revokeAllAccessTokensForDeviceWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 database:(id)arg2 ;
-(void)revokeAccessTokenForAppWithOauthToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showTencentWeiboSettingsIfNeeded:(/*^block*/id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(id)_accountStore;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)_accountStoreChanged:(id)arg1 ;
@end

