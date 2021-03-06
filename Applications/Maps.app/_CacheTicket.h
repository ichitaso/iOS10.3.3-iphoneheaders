/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEODirectionServiceTicket.h>

@class GEODirectionsRequest, GEOComposedRoute, NSArray, NSDictionary, NSString;

@interface _CacheTicket : NSObject <GEODirectionServiceTicket> {

	GEODirectionsRequest* _request;
	char _isReroute;
	GEOComposedRoute* _originalRoute;
	NSArray* _waypoints;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEODirectionsRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) char isReroute;                                //@synthesize isReroute=_isReroute - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * originalRoute;              //@synthesize originalRoute=_originalRoute - In the implementation block
@property (nonatomic,readonly) NSArray * waypoints;                           //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(id)initWithRequest:(id)arg1 isReroute:(char)arg2 ;
-(void)cancel;
-(GEODirectionsRequest *)request;
-(GEOComposedRoute *)originalRoute;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(NSDictionary *)responseUserInfo;
-(NSArray *)waypoints;
-(char)isReroute;
@end

