/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/DaemonProtocolDataProvider.h>

@class NSURL;

@interface GratisClaimProtocolDataProvider : DaemonProtocolDataProvider {

	NSURL* _redirectedClaimURL;

}

@property (copy) NSURL * redirectedClaimURL;              //@synthesize redirectedClaimURL=_redirectedClaimURL - In the implementation block
-(NSURL *)redirectedClaimURL;
-(void)setRedirectedClaimURL:(NSURL *)arg1 ;
-(void)dealloc;
-(char)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2 ;
@end
