/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/ASTask.h>

@class NSString, NSMutableDictionary, NSError;

@interface ASAutodiscoverTask : ASTask {

	NSString* _serverURL;
	NSString* _emailAddress;
	NSString* _redirectEmail;
	NSString* _authUsername;
	NSMutableDictionary* _accountInfo;
	NSError* _discoveryError;
	char _wasRedirectedThroughHTTP;
	NSString* _originalURLScheme;

}

@property (nonatomic,retain) NSString * originalURLScheme;               //@synthesize originalURLScheme=_originalURLScheme - In the implementation block
@property (assign,nonatomic) char wasRedirectedThroughHTTP;              //@synthesize wasRedirectedThroughHTTP=_wasRedirectedThroughHTTP - In the implementation block
-(double)timeoutInterval;
-(id)requestBody;
-(char)processContext:(id)arg1 ;
-(void)_handleErrorNode:(xmlNode*)arg1 ;
-(void)_handleServerNode:(xmlNode*)arg1 ;
-(void)_handleActionNode:(xmlNode*)arg1 ;
-(void)_handleUserNode:(xmlNode*)arg1 ;
-(void)_setAccountInfoFromAutoDiscoveryXML:(id)arg1 ;
-(void)didProcessContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 emailAddress:(id)arg2 authUsername:(id)arg3 ;
-(id)_url;
-(id)_easVersion;
-(id)_policyKey;
-(id)_HTTPMethodForRequest:(id)arg1 ;
-(char)_shouldSendAuthForRequest:(id)arg1 ;
-(void)_addAuthToRequest:(id)arg1 ;
-(char)_shouldRedirectToHTTPForRequest:(id)arg1 ;
-(id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2 ;
-(char)shouldHandlePasswordErrors;
-(char)shouldStallAfterConnectionLost;
-(char)requiresEASVersionInformaton;
-(char)shouldLogIncomingData;
-(NSString *)originalURLScheme;
-(void)setOriginalURLScheme:(NSString *)arg1 ;
-(char)wasRedirectedThroughHTTP;
-(void)setWasRedirectedThroughHTTP:(char)arg1 ;
-(id)contentType;
-(void)finishWithError:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
@end
