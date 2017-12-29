/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, MKMapItem, PersonalizedItemSource, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemStyleAttributesAdornment, SearchResult, AddressBookAddress, NSArray, NSDate, ParkedCar, MapsLocationOfInterest;


@protocol PersonalizedItem <NSObject>
@property (nonatomic,readonly) NSSet * keys; 
@property (nonatomic,readonly) unsigned priority; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (assign,nonatomic,__weak) PersonalizedItemSource * source; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) PersonalizedItemPrioritizedStringAdornment * prefix; 
@property (nonatomic,readonly) PersonalizedItemPrioritizedStringAdornment * title; 
@property (nonatomic,readonly) PersonalizedItemPrioritizedStringAdornment * subtitle; 
@property (nonatomic,readonly) unsigned sortOrder; 
@property (nonatomic,readonly) PersonalizedItemStyleAttributesAdornment * styleAttributes; 
@property (nonatomic,readonly) char shouldBeClustered; 
@property (nonatomic,readonly) char showsBalloonCallout; 
@property (nonatomic,readonly) SearchResult * searchResult; 
@property (nonatomic,readonly) AddressBookAddress * address; 
@property (nonatomic,readonly) NSArray * searchableStrings; 
@property (nonatomic,readonly) char shouldBeHiddenFromMap; 
@property (nonatomic,readonly) char mustRefineMapItem; 
@property (nonatomic,readonly) char isRouteStartOrEnd; 
@property (nonatomic,readonly) char needsToPreserveSelection; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) ParkedCar * parkedCar; 
@property (nonatomic,readonly) MapsLocationOfInterest * locationOfInterest; 
@optional
-(char)isRouteStartOrEnd;
-(char)needsToPreserveSelection;
-(ParkedCar *)parkedCar;
-(NSDate *)eventDate;
-(MapsLocationOfInterest *)locationOfInterest;

@required
-(char)shouldBeClustered;
-(NSArray *)searchableStrings;
-(char)shouldBeHiddenFromMap;
-(char)mustRefineMapItem;
-(PersonalizedItemPrioritizedStringAdornment *)title;
-(void)setSource:(id)arg1;
-(unsigned)priority;
-(PersonalizedItemPrioritizedStringAdornment *)subtitle;
-(PersonalizedItemSource *)source;
-(NSSet *)keys;
-(unsigned)sortOrder;
-(SearchResult *)searchResult;
-(PersonalizedItemStyleAttributesAdornment *)styleAttributes;
-(PersonalizedItemPrioritizedStringAdornment *)prefix;
-(char)showsBalloonCallout;
-(MKMapItem *)mapItem;
-(CLLocationCoordinate2D)coordinate;
-(AddressBookAddress *)address;

@end
