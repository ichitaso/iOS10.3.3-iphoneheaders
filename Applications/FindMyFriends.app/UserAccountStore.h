/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UserAccountStore : NSObject {

	char _authTokenAccessFailure;
	char _isProvisionedForLocationSharing;
	char _iCloudAccountLogged;
	char _isActiveiCloudAccount;
	char _triedLoadingLegacyFMFAccount;
	char _isAccountSwitching;
	char _shouldUpdate;
	NSString* _appleId;
	NSString* _personId;
	NSString* _fmfAppToken;
	NSString* _appHostName;

}

@property (nonatomic,retain) NSString * appleId;                                //@synthesize appleId=_appleId - In the implementation block
@property (nonatomic,retain) NSString * personId;                               //@synthesize personId=_personId - In the implementation block
@property (nonatomic,retain) NSString * fmfAppToken;                            //@synthesize fmfAppToken=_fmfAppToken - In the implementation block
@property (nonatomic,retain) NSString * appHostName;                            //@synthesize appHostName=_appHostName - In the implementation block
@property (assign,nonatomic) char authTokenAccessFailure;                       //@synthesize authTokenAccessFailure=_authTokenAccessFailure - In the implementation block
@property (assign,nonatomic) char triedLoadingLegacyFMFAccount;                 //@synthesize triedLoadingLegacyFMFAccount=_triedLoadingLegacyFMFAccount - In the implementation block
@property (assign,nonatomic) char isAccountSwitching;                           //@synthesize isAccountSwitching=_isAccountSwitching - In the implementation block
@property (assign,nonatomic) char shouldUpdate;                                 //@synthesize shouldUpdate=_shouldUpdate - In the implementation block
@property (assign,nonatomic) char isProvisionedForLocationSharing;              //@synthesize isProvisionedForLocationSharing=_isProvisionedForLocationSharing - In the implementation block
@property (assign,nonatomic) char isActiveiCloudAccount;                        //@synthesize isActiveiCloudAccount=_isActiveiCloudAccount - In the implementation block
@property (nonatomic,readonly) char iCloudAccountLogged;                        //@synthesize iCloudAccountLogged=_iCloudAccountLogged - In the implementation block
-(void)setShouldUpdate:(char)arg1 ;
-(void)iCloudAccountWillChange;
-(void)clearUserAccount;
-(void)loadFMFAccount;
-(void)setAppleId:(NSString *)arg1 ;
-(void)setFmfAppToken:(NSString *)arg1 ;
-(void)setAuthTokenAccessFailure:(char)arg1 ;
-(void)setTriedLoadingLegacyFMFAccount:(char)arg1 ;
-(void)renewAuth;
-(void)renewAuthWithoutAuthkit;
-(void)loadFMFAccountFromiCloud;
-(void)setIsProvisionedForLocationSharing:(char)arg1 ;
-(void)setIsActiveiCloudAccount:(char)arg1 ;
-(void)setAppHostName:(NSString *)arg1 ;
-(void)notifyAccountSwitching;
-(id)getAppleAccountId;
-(void)setIsAccountSwitching:(char)arg1 ;
-(void)reloadUserAccount;
-(char)isAccountSwitching;
-(NSString *)appleId;
-(void)refreshAccountAuth;
-(NSString *)appHostName;
-(char)authTokenAccessFailure;
-(char)iCloudAccountLogged;
-(char)isActiveiCloudAccount;
-(char)triedLoadingLegacyFMFAccount;
-(id)init;
-(void)dealloc;
-(NSString *)personId;
-(void)setPersonId:(NSString *)arg1 ;
-(NSString *)fmfAppToken;
-(char)isProvisionedForLocationSharing;
-(char)shouldUpdate;
@end

