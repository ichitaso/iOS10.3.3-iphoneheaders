/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FMFBaseCmd.h>

@class NSString;

@interface FMFInitCommand : FMFBaseCmd {

	int _fetchStatus;
	NSString* _legacyFMFUserDSID;

}

@property (assign,nonatomic) int fetchStatus;                           //@synthesize fetchStatus=_fetchStatus - In the implementation block
@property (nonatomic,retain) NSString * legacyFMFUserDSID;              //@synthesize legacyFMFUserDSID=_legacyFMFUserDSID - In the implementation block
-(void)processCommandResponse:(id)arg1 ;
-(char)allowsEmptyResponse;
-(id)willSucceedNotification;
-(id)willFailNotification;
-(id)didSucceedNotification;
-(id)didFailNotification;
-(id)pathSuffix;
-(void)setLegacyFMFUserDSID:(NSString *)arg1 ;
-(id)clientInfoString;
-(NSString *)legacyFMFUserDSID;
-(void)setFetchStatus:(int)arg1 ;
-(int)fetchStatus;
-(id)init;
-(void)sendRequest;
-(id)clientContext;
-(id)jsonBodyDictionary;
-(id)headers;
@end
