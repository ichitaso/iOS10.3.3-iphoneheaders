/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RouteManagerDelegate <GEORouteManagerDelegate>
@required
-(void)routeManager:(id)arg1 didSwitchToNewRoute:(id)arg2 alreadyOnRoute:(char)arg3;
-(void)routeManagerDidChangeActiveRouteSet:(id)arg1;
-(void)routeManager:(id)arg1 didChangeRoutePreloadSession:(id)arg2;
-(void)routeManager:(id)arg1 failedWithError:(id)arg2;

@end

