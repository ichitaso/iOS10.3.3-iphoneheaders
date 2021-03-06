/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAccount;

@interface LogoutOperation : ISOperation {

	SSAccount* _account;

}

@property (readonly) SSAccount * account; 
-(void)_disableAutomaticDownloadKinds;
-(void)_disableBookkeeper;
-(void)_sendLogoutRequest;
-(id)_sbsyncData;
-(void)run;
-(id)_copyAuthenticationContext;
-(SSAccount *)account;
-(id)initWithAccount:(id)arg1 ;
@end

