/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKTransitLineItemViewControllerDelegate <NSObject>
@required
-(void)lineItemViewController:(id)arg1 removeFavoriteForLineItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)lineItemViewController:(id)arg1 addFavoriteForLineItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)lineItemViewControllerDidSelectReportAProblem:(id)arg1;
-(float)lineItemViewControllerHeaderTitleTrailingConstant:(id)arg1;
-(void)lineItemViewController:(id)arg1 didSelectDirectionsToNearestStation:(id)arg2 withTransportTypePreference:(id)arg3;
-(char)lineItemViewControllerShouldShowFavoriteButton:(id)arg1;
-(void)lineItemViewController:(id)arg1 didSelectDetailsForIncidents:(id)arg2;
-(void)lineItemViewController:(id)arg1 didSelectNearestStation:(id)arg2;
-(void)lineItemViewControllerDidAppear:(id)arg1;
-(void)lineItemViewControllerDidSelectViewOnMap:(id)arg1;
-(void)lineItemViewController:(id)arg1 hasFavoriteForLineItem:(id)arg2 result:(/*^block*/id)arg3;

@end
