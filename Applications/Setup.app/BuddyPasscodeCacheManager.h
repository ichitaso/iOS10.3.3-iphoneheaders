/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BuddyPasscodeCacheManager : NSObject {

	char _isCached;

}

@property (assign) char isCached;              //@synthesize isCached=_isCached - In the implementation block
+(id)sharedManager;
-(void)uncachePasscode;
-(void)cachePasscode:(id)arg1 ;
-(char)isCached;
-(void)setIsCached:(char)arg1 ;
@end

