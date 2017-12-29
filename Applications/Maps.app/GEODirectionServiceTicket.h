/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEODirectionsRequest, GEOComposedRoute, NSArray, NSDictionary;


@protocol GEODirectionServiceTicket <NSObject>
@property (nonatomic,readonly) GEODirectionsRequest * request; 
@property (nonatomic,readonly) char isReroute; 
@property (nonatomic,readonly) GEOComposedRoute * originalRoute; 
@property (nonatomic,readonly) NSArray * waypoints; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@required
-(void)cancel;
-(GEODirectionsRequest *)request;
-(GEOComposedRoute *)originalRoute;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(NSDictionary *)responseUserInfo;
-(NSArray *)waypoints;
-(char)isReroute;

@end

