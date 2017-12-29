/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface FMFShareTimeRemainingRefresher : NSObject {

	NSTimer* _timeRemainingTimer;

}

@property (nonatomic,retain) NSTimer * timeRemainingTimer;              //@synthesize timeRemainingTimer=_timeRemainingTimer - In the implementation block
+(id)sharedInstance;
-(void)refreshItems;
-(void)startRefreshingItems;
-(NSTimer *)timeRemainingTimer;
-(void)setTimeRemainingTimer:(NSTimer *)arg1 ;
-(void)stopRefreshingItems;
@end

