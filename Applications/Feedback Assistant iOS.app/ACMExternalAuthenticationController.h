/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACMExternalAuthenticationControllerDelegate, ACFLocalAuthenticationContextProtocol;
@class ACCComponents;

@interface ACMExternalAuthenticationController : NSObject {

	id<ACMExternalAuthenticationControllerDelegate> _delegate;
	id<ACFLocalAuthenticationContextProtocol> _localAuthenticationContext;

}

@property (nonatomic,readonly) ACCComponents * components; 
@property (nonatomic,readonly) id<ACFKeychainManagerProtocol> keychainManager; 
@property (nonatomic,readonly) id<ACCTicketManagerProtocol> ticketManager; 
@property (nonatomic,retain) id<ACFLocalAuthenticationContextProtocol> localAuthenticationContext;              //@synthesize localAuthenticationContext=_localAuthenticationContext - In the implementation block
@property (assign,nonatomic) id<ACMExternalAuthenticationControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ACMExternalAuthenticationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<ACMExternalAuthenticationControllerDelegate>)delegate;
-(ACCComponents *)components;
-(void)evaluateSSOWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authenticateWithRequest:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)verifyServiceTicketWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<ACFKeychainManagerProtocol>)keychainManager;
-(id<ACCTicketManagerProtocol>)ticketManager;
-(id)tgtStoragePolicy;
-(void)setLocalAuthenticationContext:(id<ACFLocalAuthenticationContextProtocol>)arg1 ;
-(id<ACFLocalAuthenticationContextProtocol>)localAuthenticationContext;
-(id)localizedReasonForUsername:(id)arg1 ;
-(id)convertLAError:(id)arg1 ;
-(char)isCriticalError:(id)arg1 ;
-(void)cleanSSOStorageWithRequest:(id)arg1 ;
-(char)isValidToken:(id)arg1 duration:(double)arg2 ;
-(void)evaluateTouchIDWithToken:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)verifyToken:(id)arg1 withRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)tokenWithRequest:(id)arg1 ;
-(void)evaluateTouchIDIfNeededWithSSOToken:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateAuthContext:(id)arg1 ;
-(void)saveSSOIfNeeded:(id)arg1 withRequest:(id)arg2 ;
-(void)authenticate2SVWithSSOTokenIfRequired:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

