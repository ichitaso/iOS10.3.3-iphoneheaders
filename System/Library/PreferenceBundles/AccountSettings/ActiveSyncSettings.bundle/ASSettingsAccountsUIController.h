/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsAccountsUIController.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/DAAutoDiscoveryConsumer.h>

@class ASExchangeIdView, NSURLSession, NSString;

@interface ASSettingsAccountsUIController : DASettingsAccountsUIController <NSURLSessionDelegate, DAAutoDiscoveryConsumer> {

	int _autodiscoveryState;
	unsigned _diagsVisibleValue;
	ASExchangeIdView* _exchangeIdView;
	NSURLSession* _autoDV2RedirectSession;

}

@property (nonatomic,retain) ASExchangeIdView * exchangeIdView;                  //@synthesize exchangeIdView=_exchangeIdView - In the implementation block
@property (nonatomic,retain) NSURLSession * autoDV2RedirectSession;              //@synthesize autoDV2RedirectSession=_autoDV2RedirectSession - In the implementation block
@property (assign,nonatomic) int autodiscoveryState;                             //@synthesize autodiscoveryState=_autodiscoveryState - In the implementation block
@property (assign,nonatomic) unsigned diagsVisibleValue;                         //@synthesize diagsVisibleValue=_diagsVisibleValue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isHotmailAccount;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)account:(id)arg1 isValid:(char)arg2 validationError:(id)arg3 ;
-(void)OAuthAccount:(id)arg1 authorizationURI:(id)arg2 error:(id)arg3 ;
-(void)account:(id)arg1 wasAutoDiscovered:(char)arg2 error:(id)arg3 ;
-(id)account;
-(id)accountSpecifiers;
-(void)setAutodiscoveryState:(int)arg1 ;
-(ASExchangeIdView *)exchangeIdView;
-(void)setExchangeIdView:(ASExchangeIdView *)arg1 ;
-(id)_specifiersForMinimalAutodiscoveryRemovingIDs:(id)arg1 ;
-(id)_specifiersForOptionalServerAutodiscovery;
-(id)_specifiersForCompletedAutodiscovery;
-(id)localizedAccountTitleString;
-(char)_storeHasDuplicateForUsername:(id)arg1 ;
-(void)_autodiscoverOAuthAccountAfterInitialRedirect;
-(void)_showAlertWithTitle:(id)arg1 body:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setViewsEnabled;
-(void)setAutoDV2RedirectSession:(NSURLSession *)arg1 ;
-(NSURLSession *)autoDV2RedirectSession;
-(void)_fallBackToAutoDiscvoerV1;
-(void)_transitionToOptionalServerAutodiscovery;
-(void)_transitionToCompletedAutodiscovery;
-(void)_bringUpOAuthEndPointWithURL:(id)arg1 ;
-(void)_validateUniquenessAndAddAccount:(id)arg1 username:(id)arg2 token:(id)arg3 refreshToken:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_defaultAccountDescription;
-(char)autodiscoverAccount;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)_tryUpdatingCompositeValueWithId:(id)arg1 fromValue:(id)arg2 forKey:(id)arg3 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(char)validateAccount;
-(char)transitionsAfterInitialSetup;
-(id)localizedConfirmSaveUnvalidatedAccountTitleString;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(int)autodiscoveryState;
-(unsigned)diagsVisibleValue;
-(void)setDiagsVisibleValue:(unsigned)arg1 ;
-(char)haveEnoughValues;
-(void)doneButtonTapped:(id)arg1 ;
@end
