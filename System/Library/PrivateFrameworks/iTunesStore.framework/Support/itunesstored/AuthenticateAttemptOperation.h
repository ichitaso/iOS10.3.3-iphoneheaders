/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <itunesstored/AKAppleIDAuthenticationDelegate.h>

@class SSAuthenticationContext, SSAuthenticationResponse, NSData, NSString, SignInResponse, NSMutableArray;

@interface AuthenticateAttemptOperation : ISOperation <ISStoreURLOperationDelegate, AKAppleIDAuthenticationDelegate> {

	int _attemptNumber;
	SSAuthenticationContext* _authenticationContext;
	SSAuthenticationResponse* _authenticationResponse;
	NSData* _biometricToken;
	NSString* _clientIdentifier;
	char _didFallbackToPassword;
	NSString* _setStoreFrontIdentifier;
	SignInResponse* _signInResponse;
	NSMutableArray* _accumulatedMetricsEvents;
	/*^block*/id _willBeginProcessingAuthenticationResponseHandler;
	char _hasInvokedWillBeginProcessingAuthenticationResponseHandler;

}

@property (readonly) int attemptNumber; 
@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (copy) NSString * clientIdentifier; 
@property (readonly) SSAuthenticationResponse * authenticationResponse; 
@property (readonly) NSData * biometricToken; 
@property (readonly) char didFallbackToPassword;                                     //@synthesize didFallbackToPassword=_didFallbackToPassword - In the implementation block
@property (readonly) SignInResponse * signInResponse; 
@property (copy) id willBeginProcessingAuthenticationResponseHandler; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_newURLOperation;
-(void)_setSignInResponse:(id)arg1 ;
-(int)attemptNumber;
-(SignInResponse *)signInResponse;
-(id)initWithAttemptNumber:(int)arg1 context:(id)arg2 ;
-(int)_biometricAvailability;
-(id)_promptForBiometricMatchWithReason:(int)arg1 error:(id*)arg2 ;
-(char)_shouldPromptAfterBiometricMatch:(id)arg1 ;
-(char)_promptForCredentialsWithReason:(id)arg1 error:(id*)arg2 ;
-(char)_sendAuthenticateRequest:(id*)arg1 ;
-(void)_updateBiometricsWithAccountID:(id)arg1 token:(id)arg2 canPromptUser:(char)arg3 ;
-(void)_updateBiometricsWithAccountID:(id)arg1 ;
-(void)_invokeWillBeginProcessingAuthenticationResponseHandlerIfAppropriate;
-(void)_setAuthenticationResponse:(id)arg1 ;
-(void)_setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2 ;
-(id)_newAccountPasswordSettingsDictionary;
-(id)_newURLRequestProperties;
-(id)_newAuthenticateAccountRequestParameters;
-(id)_newAuthenticateSrvRequestBody;
-(id)_loggableClientIdentifier;
-(char)_authKitPromptForCredentialsWithReason:(id)arg1 error:(id*)arg2 ;
-(char)_shouldUseHeadlessRequest;
-(id)_newAuthenticateSrvURLOperation;
-(id)_newAuthenticateAccountURLOperation;
-(char)_handleResponseFromOperation:(id)arg1 error:(id*)arg2 ;
-(NSData *)biometricToken;
-(void)setWillBeginProcessingAuthenticationResponseHandler:(id)arg1 ;
-(id)willBeginProcessingAuthenticationResponseHandler;
-(char)didFallbackToPassword;
-(id)_account;
-(id)init;
-(void)run;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(id)operation:(id)arg1 sanitizedStringForString:(id)arg2 ;
-(char)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2 ;
-(NSString *)clientIdentifier;
-(char)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(SSAuthenticationResponse *)authenticationResponse;
@end

