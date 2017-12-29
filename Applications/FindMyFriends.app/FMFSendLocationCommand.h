/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FMFBaseCmd.h>

@class NSDictionary, NSNumber;

@interface FMFSendLocationCommand : FMFBaseCmd {

	NSDictionary* _locationDict;
	NSDictionary* _responseLocationDict;
	NSNumber* _myLocationDistanceThreshold;
	NSNumber* _myLocationAccuracyThreshold;

}

@property (nonatomic,copy) NSDictionary * locationDict;                         //@synthesize locationDict=_locationDict - In the implementation block
@property (nonatomic,copy) NSDictionary * responseLocationDict;                 //@synthesize responseLocationDict=_responseLocationDict - In the implementation block
@property (nonatomic,copy) NSNumber * myLocationDistanceThreshold;              //@synthesize myLocationDistanceThreshold=_myLocationDistanceThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * myLocationAccuracyThreshold;              //@synthesize myLocationAccuracyThreshold=_myLocationAccuracyThreshold - In the implementation block
-(char)responseContainsFullModelUpdate;
-(id)willSucceedNotification;
-(id)willFailNotification;
-(id)didSucceedNotification;
-(char)shouldClearDataContextAndRefreshOnFailure;
-(id)didFailNotification;
-(char)ignoreResponseErrors;
-(id)pathSuffix;
-(void)setLocationDict:(NSDictionary *)arg1 ;
-(NSDictionary *)locationDict;
-(NSDictionary *)responseLocationDict;
-(void)setResponseLocationDict:(NSDictionary *)arg1 ;
-(NSNumber *)myLocationDistanceThreshold;
-(void)setMyLocationDistanceThreshold:(NSNumber *)arg1 ;
-(NSNumber *)myLocationAccuracyThreshold;
-(void)setMyLocationAccuracyThreshold:(NSNumber *)arg1 ;
-(void)setLocation:(id)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(id)clientContext;
@end
