/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RidesharingAppSelectionProvider.h>

@protocol _RidesharingSupportedApplication;
@class MKMapItem, NSArray, RidesharingAnalyticsBookingSession, NSMapTable, NSString;

@interface _RidesharingAppSelectionProvider : NSObject <RidesharingAppSelectionProvider> {

	NSMapTable* _observers;
	id<_RidesharingSupportedApplication> _selectedApplication;
	NSArray* _apps;
	NSMapTable* _applicationToChoiceProviderMap;
	char _lookedForSelectedAppFromDefaults;
	char _loadingExtensions;
	char _loadingAppSuggestions;
	char _needsSorting;
	NSArray* _installedSuggestions;
	MKMapItem* _origin;
	MKMapItem* _destination;
	NSArray* _appSuggestions;
	NSArray* _applications;
	RidesharingAnalyticsBookingSession* _analyticsBookingSession;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MKMapItem * origin;                                                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) MKMapItem * destination;                                                 //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) id<RidesharingApplication> selectedApplication;                          //@synthesize selectedApplication=_selectedApplication - In the implementation block
@property (nonatomic,readonly) NSArray * applications;                                                  //@synthesize applications=_applications - In the implementation block
@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (nonatomic,readonly) NSArray * appSuggestions;                                                //@synthesize appSuggestions=_appSuggestions - In the implementation block
@property (nonatomic,retain) RidesharingAnalyticsBookingSession * analyticsBookingSession;              //@synthesize analyticsBookingSession=_analyticsBookingSession - In the implementation block
-(id)_currentLocation;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)_invokeChangeHandlers;
-(void)switchSelectedApplicationToEnabledApplication:(id)arg1 ;
-(void)enableApplication:(id)arg1 ;
-(id)choicesProviderForEnabledApplication:(id)arg1 ;
-(NSArray *)appSuggestions;
-(RidesharingAnalyticsBookingSession *)analyticsBookingSession;
-(void)setAnalyticsBookingSession:(RidesharingAnalyticsBookingSession *)arg1 ;
-(id)initWithOrigin:(id)arg1 destination:(id)arg2 analyticsSession:(id)arg3 ;
-(void)_updateSelectedApplicationIfNecessary;
-(void)_sortApplicationsIfPossible;
-(id)newAppChoicesProviderForApplication:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(MKMapItem *)origin;
-(char)isLoading;
-(MKMapItem *)destination;
-(void)setInstalledApplications:(id)arg1 ;
-(NSArray *)applications;
-(id<RidesharingApplication>)selectedApplication;
@end

