/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsURLHandlerDelegate <NSObject>
@required
-(void)reportCurrentLocationFailure;
-(void)createCustomSearchResultForDroppedPinAtPoint:(CLLocationCoordinate2D)arg1 animated:(char)arg2;
-(void)showAnnouncementForFlyover:(id)arg1;
-(void)setViewMode:(int)arg1 animated:(char)arg2;
-(void)debugController:(id)arg1 choseTracePlayer:(id)arg2 startNav:(char)arg3;
-(void)searchForSearchItem:(id)arg1 traits:(id)arg2 source:(int)arg3;
-(void)resetForLaunchURLWithOptions:(id)arg1;
-(void)searchForAddress:(id)arg1 source:(int)arg2;
-(void)searchForAddressString:(id)arg1 source:(int)arg2;
-(void)searchForRouteFromAddress:(id)arg1 toAddress:(id)arg2 directionsMode:(unsigned)arg3 source:(int)arg4;
-(void)searchForExternalURLQuery:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
-(void)searchForString:(id)arg1 traits:(id)arg2 scrollToResults:(char)arg3 source:(int)arg4;
-(void)searchWithSearchInfo:(id)arg1 source:(int)arg2;
-(void)cleanUIandHideSearch:(char)arg1;
-(void)directionsTypeForMapItem:(id)arg1 handler:(/*^block*/id)arg2;
-(void)routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 directionsType:(unsigned)arg3 drivePreferences:(id)arg4 routeHandle:(id)arg5 timePoint:(id)arg6 withFeedback:(id)arg7 origin:(int)arg8;
-(void)routeUsingDirectionsFrom:(id)arg1 to:(id)arg2 withFeedback:(id)arg3;
-(void)showRoutingAppsFromSearchResult:(id)arg1 toSearchResult:(id)arg2;
-(void)displayNearbySearch;
-(void)selectParkedCarAndPerformAction:(int)arg1;
-(void)showTransitLine:(unsigned long long)arg1 withName:(id)arg2;
-(void)showFavoritesType:(int)arg1;
-(id)settingsController;

@end

