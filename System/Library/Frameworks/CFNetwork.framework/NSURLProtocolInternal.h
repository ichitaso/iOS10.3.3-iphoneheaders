/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLProtocolClient;
@class NSURLRequest, NSCachedURLResponse, NSLock;

@interface NSURLProtocolInternal : NSObject {

	id<NSURLProtocolClient> client;
	NSURLRequest* request;
	NSCachedURLResponse* cachedResponse;
	NSLock* mutex;

}
-(id)init;
-(void)dealloc;
@end

