/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray;

@interface TransitAppRanker : NSObject <NSCoding> {

	NSMutableArray* _rankings;

}

@property (nonatomic,retain) NSMutableArray * rankings;              //@synthesize rankings=_rankings - In the implementation block
-(void)recordAppLaunch:(id)arg1 ;
-(id)rankedTransitAppsProxiesWithProxies:(id)arg1 ;
-(id)initWithRecentlyLaunchedApps:(id)arg1 ;
-(id)rankApps:(id)arg1 ;
-(id)recentlyLaunchedApps;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableArray *)rankings;
-(void)setRankings:(NSMutableArray *)arg1 ;
@end
