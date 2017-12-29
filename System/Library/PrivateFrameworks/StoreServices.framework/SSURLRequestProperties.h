/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSData, NSObject, NSInputStream, NSDictionary, NSArray, NSURL;

@interface SSURLRequestProperties : NSObject <SSXPCCoding, NSCoding, NSCopying, NSMutableCopying> {

	int _allowedRetryCount;
	char _allowsBootstrapCellularData;
	unsigned _cachePolicy;
	NSString* _clientAuditBundleIdentifier;
	NSData* _clientAuditTokenData;
	NSString* _clientIdentifier;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _expectedContentLength;
	NSData* _httpBody;
	NSInputStream* _httpBodyStream;
	NSDictionary* _httpHeaders;
	NSString* _httpMethod;
	char _isITunesStoreRequest;
	int _kbsyncType;
	char _largeDownload;
	int _machineDataStyle;
	unsigned _networkServiceType;
	NSDictionary* _requestParameters;
	char _requiresCellularDataNetwork;
	char _requiresExtendedValidationCertificates;
	char _requiresExternal;
	char _requiresHTTPS;
	char _shouldDecodeResponse;
	char _shouldDisableCellular;
	char _shouldDisableCellularFallback;
	char _shouldProcessProtocol;
	char _shouldSendSecureToken;
	char _shouldSetCookies;
	double _timeoutInterval;
	NSString* _urlBagKey;
	int _urlBagType;
	/*^block*/id _urlBagURLBlock;
	NSArray* _urls;
	NSArray* _userAgentComponents;

}

@property (readonly) char allowsBootstrapCellularData; 
@property (readonly) char canBeResolved; 
@property (copy,readonly) NSString * clientAuditBundleIdentifier; 
@property (copy,readonly) NSData * clientAuditTokenData; 
@property (readonly) NSString * clientBundleIdentifier; 
@property (retain,readonly) NSInputStream * HTTPBodyStream; 
@property (readonly) int KBSyncType; 
@property (getter=isLargeDownload,readonly) char largeDownload; 
@property (readonly) char requiresCellularDataNetwork; 
@property (readonly) char requiresExtendedValidationCertificates; 
@property (readonly) char requiresExternal; 
@property (readonly) char requiresHTTPS; 
@property (readonly) char shouldAddKBSyncData; 
@property (readonly) char shouldDecodeResponse; 
@property (readonly) char shouldDisableCellularFallback; 
@property (readonly) char shouldDisableCellular; 
@property (readonly) char shouldProcessProtocol; 
@property (readonly) char shouldSendSecureToken; 
@property (readonly) char shouldSetCookies; 
@property (readonly) int URLBagType; 
@property (copy,readonly) id URLBagURLBlock; 
@property (copy,readonly) NSArray * URLs; 
@property (readonly) int allowedRetryCount; 
@property (copy,readonly) NSString * clientIdentifier; 
@property (readonly) unsigned cachePolicy; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSData * HTTPBody; 
@property (copy,readonly) NSDictionary * HTTPHeaders; 
@property (copy,readonly) NSString * HTTPMethod; 
@property (getter=isITunesStoreRequest,readonly) char ITunesStoreRequest; 
@property (readonly) int machineDataStyle; 
@property (readonly) unsigned networkServiceType; 
@property (copy,readonly) NSDictionary * requestParameters; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSString * URLBagKey; 
@property (retain,readonly) NSURL * URL; 
@property (copy,readonly) NSArray * userAgentComponents; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isITunesStoreRequest;
-(char)shouldDecodeResponse;
-(int)machineDataStyle;
-(char)shouldDisableCellular;
-(char)shouldSetCookies;
-(char)allowsBootstrapCellularData;
-(NSArray *)userAgentComponents;
-(NSInputStream *)HTTPBodyStream;
-(NSString *)clientAuditBundleIdentifier;
-(NSData *)clientAuditTokenData;
-(int)allowedRetryCount;
-(char)shouldProcessProtocol;
-(char)shouldSendSecureToken;
-(char)isLargeDownload;
-(int)KBSyncType;
-(char)requiresCellularDataNetwork;
-(char)requiresExtendedValidationCertificates;
-(char)requiresExternal;
-(char)requiresHTTPS;
-(char)shouldAddKBSyncData;
-(char)shouldDisableCellularFallback;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSArray *)URLs;
-(id)initWithURL:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)timeoutInterval;
-(NSString *)clientBundleIdentifier;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(unsigned)networkServiceType;
-(char)canBeResolved;
-(NSDictionary *)requestParameters;
-(id)copyURLRequest;
-(id)URLBagURLBlock;
-(NSDictionary *)HTTPHeaders;
-(id)_initCommon;
-(NSString *)clientIdentifier;
-(id)initWithURLRequest:(id)arg1 ;
-(int)URLBagType;
-(NSString *)URLBagKey;
-(NSData *)HTTPBody;
-(NSString *)HTTPMethod;
-(long long)expectedContentLength;
-(unsigned)cachePolicy;
@end

