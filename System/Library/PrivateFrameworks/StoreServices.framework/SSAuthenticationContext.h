/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDictionary, NSNumber, NSArray, SSURLBagContext;

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {

	NSString* _accountName;
	char _accountNameEditable;
	int _accountScope;
	char _allowsBioAuthentication;
	char _allowsBootstrapCellularData;
	char _allowsRetry;
	NSString* _altDSID;
	NSString* _cancelButtonLabel;
	char _canCreateNewAccount;
	char _canSetActiveAccount;
	NSString* _clientIdentifierHeader;
	char _demoAccount;
	char _displaysOnLockScreen;
	NSDictionary* _httpHeaders;
	NSString* _initialPassword;
	NSString* _okButtonLabel;
	char _persistsAcrossDeviceLock;
	char _persistsPasswordFallback;
	NSString* _preferredITunesStoreClient;
	NSString* _promptTitle;
	int _promptStyle;
	NSString* _reasonDescription;
	NSDictionary* _requestParameters;
	NSNumber* _requiredUniqueIdentifier;
	char _shouldCreateNewSession;
	char _shouldFollowAccountButtons;
	char _shouldIgnoreProtocol;
	char _shouldSuppressDialogs;
	NSDictionary* _signupRequestParameters;
	int _tokenType;
	NSArray* _userAgentComponents;

}

@property (nonatomic,readonly) char allowsBioAuthentication;                                       //@synthesize allowsBioAuthentication=_allowsBioAuthentication - In the implementation block
@property (nonatomic,readonly) char allowsBootstrapCellularData;                                   //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (nonatomic,copy,readonly) NSString * cancelButtonLabel;                                  //@synthesize cancelButtonLabel=_cancelButtonLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifierHeader;                             //@synthesize clientIdentifierHeader=_clientIdentifierHeader - In the implementation block
@property (nonatomic,readonly) char displaysOnLockScreen;                                          //@synthesize displaysOnLockScreen=_displaysOnLockScreen - In the implementation block
@property (getter=isDemoAccount,nonatomic,readonly) char demoAccount;                              //@synthesize demoAccount=_demoAccount - In the implementation block
@property (nonatomic,copy,readonly) NSString * okButtonLabel;                                      //@synthesize okButtonLabel=_okButtonLabel - In the implementation block
@property (nonatomic,readonly) char persistsAcrossDeviceLock;                                      //@synthesize persistsAcrossDeviceLock=_persistsAcrossDeviceLock - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptTitle;                                        //@synthesize promptTitle=_promptTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * reasonDescription;                                  //@synthesize reasonDescription=_reasonDescription - In the implementation block
@property (nonatomic,readonly) char shouldIgnoreProtocol;                                          //@synthesize shouldIgnoreProtocol=_shouldIgnoreProtocol - In the implementation block
@property (nonatomic,readonly) int tokenType;                                                      //@synthesize tokenType=_tokenType - In the implementation block
@property (nonatomic,readonly) SSURLBagContext * URLBagContext; 
@property (nonatomic,copy,readonly) NSString * accountName;                                        //@synthesize accountName=_accountName - In the implementation block
@property (readonly) int accountScope;                                                             //@synthesize accountScope=_accountScope - In the implementation block
@property (getter=isAccountNameEditable,nonatomic,readonly) char accountNameEditable;              //@synthesize accountNameEditable=_accountNameEditable - In the implementation block
@property (nonatomic,readonly) char allowsRetry;                                                   //@synthesize allowsRetry=_allowsRetry - In the implementation block
@property (nonatomic,copy,readonly) NSString * altDSID;                                            //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) char canCreateNewAccount;                                           //@synthesize canCreateNewAccount=_canCreateNewAccount - In the implementation block
@property (nonatomic,readonly) char canSetActiveAccount;                                           //@synthesize canSetActiveAccount=_canSetActiveAccount - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * HTTPHeaders;                                    //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialPassword;                                    //@synthesize initialPassword=_initialPassword - In the implementation block
@property (nonatomic,readonly) char persistsPasswordFallback;                                      //@synthesize persistsPasswordFallback=_persistsPasswordFallback - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredITunesStoreClient;                         //@synthesize preferredITunesStoreClient=_preferredITunesStoreClient - In the implementation block
@property (nonatomic,readonly) int promptStyle;                                                    //@synthesize promptStyle=_promptStyle - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requestParameters;                              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * requiredUniqueIdentifier;                         //@synthesize requiredUniqueIdentifier=_requiredUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) char shouldCreateNewSession;                                        //@synthesize shouldCreateNewSession=_shouldCreateNewSession - In the implementation block
@property (nonatomic,readonly) char shouldFollowAccountButtons;                                    //@synthesize shouldFollowAccountButtons=_shouldFollowAccountButtons - In the implementation block
@property (nonatomic,readonly) char shouldSuppressDialogs;                                         //@synthesize shouldSuppressDialogs=_shouldSuppressDialogs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * signupRequestParameters;                        //@synthesize signupRequestParameters=_signupRequestParameters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userAgentComponents;                                 //@synthesize userAgentComponents=_userAgentComponents - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextForSignIn;
-(char)displaysOnLockScreen;
-(char)isDemoAccount;
-(char)_allowCreateAccount;
-(id)_initSSAuthenticationContext;
-(char)allowsBootstrapCellularData;
-(void)_copyIvarsToCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(char)allowsBioAuthentication;
-(char)allowsRetry;
-(NSString *)cancelButtonLabel;
-(char)canCreateNewAccount;
-(char)canSetActiveAccount;
-(NSString *)clientIdentifierHeader;
-(char)isAccountNameEditable;
-(NSString *)okButtonLabel;
-(char)persistsAcrossDeviceLock;
-(char)persistsPasswordFallback;
-(NSString *)preferredITunesStoreClient;
-(NSString *)promptTitle;
-(char)shouldCreateNewSession;
-(char)shouldFollowAccountButtons;
-(char)shouldIgnoreProtocol;
-(char)shouldSuppressDialogs;
-(NSDictionary *)signupRequestParameters;
-(NSArray *)userAgentComponents;
-(NSString *)initialPassword;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)reasonDescription;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSDictionary *)requestParameters;
-(NSDictionary *)HTTPHeaders;
-(int)accountScope;
-(NSString *)accountName;
-(int)tokenType;
-(id)initWithAccount:(id)arg1 ;
-(NSNumber *)requiredUniqueIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(int)promptStyle;
-(NSString *)altDSID;
@end

