/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFTranslatedFileURLProtocol : NSURLProtocol {

	const CFURLProtocolInstanceCallbacks* _callbacks;
	CFURLProtocolClient* _cfurlClient;
	const void* _info;

}
+(char)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(char)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(const CFURLProtocolImplementation*)pimpl;
-(CFURLProtocolClient*)cfurlClient;
-(void)dealloc;
-(void)stopLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
@end

