/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol COSAppleIDAuthControllerDelegate, OS_dispatch_source;
@class ACAccountStore, ACAccount, NSString, NSObject, NRDevice, AKAnisetteData, AKAppleIDAuthenticationController, AKDevice;

@interface COSAppleIDAuthController : NSObject {

	char _needsCredentialRecovery;
	char _didComplete;
	char _hasStartedFallbackFlow;
	char _pairedWatchSupportsAutoAnisetteProvisioning;
	ACAccountStore* _accountStore;
	ACAccount* _account;
	NSString* _password;
	id<COSAppleIDAuthControllerDelegate> _delegate;
	NSObject*<OS_dispatch_source> _timerSource;
	ACAccount* _idmsAccount;
	NRDevice* _watchDevice;
	AKAnisetteData* _phoneAnisetteData;
	AKAppleIDAuthenticationController* _authController;
	AKDevice* _watchAKDevice;
	AKAnisetteData* _watchAnisetteData;
	double _timeout;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                     //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * password;                                               //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) double timeout;                                                    //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;                         //@synthesize timerSource=_timerSource - In the implementation block
@property (assign,nonatomic) char didComplete;                                                  //@synthesize didComplete=_didComplete - In the implementation block
@property (nonatomic,retain) ACAccount * idmsAccount;                                           //@synthesize idmsAccount=_idmsAccount - In the implementation block
@property (nonatomic,retain) NRDevice * watchDevice;                                            //@synthesize watchDevice=_watchDevice - In the implementation block
@property (nonatomic,retain) AKAnisetteData * phoneAnisetteData;                                //@synthesize phoneAnisetteData=_phoneAnisetteData - In the implementation block
@property (assign,nonatomic) char hasStartedFallbackFlow;                                       //@synthesize hasStartedFallbackFlow=_hasStartedFallbackFlow - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationController * authController;                //@synthesize authController=_authController - In the implementation block
@property (nonatomic,retain) AKDevice * watchAKDevice;                                          //@synthesize watchAKDevice=_watchAKDevice - In the implementation block
@property (nonatomic,retain) AKAnisetteData * watchAnisetteData;                                //@synthesize watchAnisetteData=_watchAnisetteData - In the implementation block
@property (assign,nonatomic) char pairedWatchSupportsAutoAnisetteProvisioning;                  //@synthesize pairedWatchSupportsAutoAnisetteProvisioning=_pairedWatchSupportsAutoAnisetteProvisioning - In the implementation block
@property (assign,nonatomic) char needsCredentialRecovery;                                      //@synthesize needsCredentialRecovery=_needsCredentialRecovery - In the implementation block
@property (assign,nonatomic,__weak) id<COSAppleIDAuthControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(char)shouldAttemptPasswordLessSignInForAccount:(id)arg1 inAccountStore:(id)arg2 ;
+(id)lookupIDMSAccountWithAccountStore:(id)arg1 matchingAccount:(id)arg2 ;
+(void)saveVerifiedRawPassword:(id)arg1 forAccountIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithAccountStore:(id)arg1 account:(id)arg2 timeout:(double)arg3 device:(id)arg4 ;
-(void)startSigningInWithPassword:(id)arg1 ;
-(void)startSigningInWithoutPassword;
-(void)startRecoveringCredentials;
-(AKAppleIDAuthenticationController *)authController;
-(void)setAuthController:(AKAppleIDAuthenticationController *)arg1 ;
-(void)cancelSignInTimer;
-(void)startSignInTimer;
-(void)attemptMagicSignIn;
-(void)fetchAnisetteDataForPhone;
-(void)signInTimerFired;
-(void)reportSignInCompletionWithSuccess:(char)arg1 error:(id)arg2 ;
-(void)fetchedAnisetteDataForPhone:(id)arg1 error:(id)arg2 ;
-(void)saveAccountToPairedDeviceWithOptions:(id)arg1 ;
-(void)savedAccountToPairedDeviceWithSuccess:(char)arg1 error:(id)arg2 ;
-(void)performProxiedAuthentication;
-(id)httpHeadersForRemoteAuthUI;
-(void)authenticatedWithResults:(id)arg1 error:(id)arg2 ;
-(void)saveAccountToPairedDeviceWithRawPassword:(id)arg1 ;
-(char)didComplete;
-(void)setDidComplete:(char)arg1 ;
-(ACAccount *)idmsAccount;
-(void)setIdmsAccount:(ACAccount *)arg1 ;
-(NRDevice *)watchDevice;
-(void)setWatchDevice:(NRDevice *)arg1 ;
-(AKAnisetteData *)phoneAnisetteData;
-(void)setPhoneAnisetteData:(AKAnisetteData *)arg1 ;
-(char)hasStartedFallbackFlow;
-(void)setHasStartedFallbackFlow:(char)arg1 ;
-(AKDevice *)watchAKDevice;
-(void)setWatchAKDevice:(AKDevice *)arg1 ;
-(AKAnisetteData *)watchAnisetteData;
-(void)setWatchAnisetteData:(AKAnisetteData *)arg1 ;
-(char)pairedWatchSupportsAutoAnisetteProvisioning;
-(void)setPairedWatchSupportsAutoAnisetteProvisioning:(char)arg1 ;
-(void)setDelegate:(id<COSAppleIDAuthControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<COSAppleIDAuthControllerDelegate>)delegate;
-(void)setTimeout:(double)arg1 ;
-(char)needsCredentialRecovery;
-(void)setNeedsCredentialRecovery:(char)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(double)timeout;
-(NSObject*<OS_dispatch_source>)timerSource;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
@end

