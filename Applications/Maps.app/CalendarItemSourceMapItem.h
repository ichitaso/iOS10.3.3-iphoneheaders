/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/PersonalizedItem.h>
#import <Maps/PersonalizedAutocompleteItem.h>

@protocol PersonalizedItemKey;
@class EKCalendarItem, MKMapItem, NSString, PersonalizedItemSource, NSSet, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemStyleAttributesAdornment, SearchResult, AddressBookAddress, NSArray, NSDate, ParkedCar, MapsLocationOfInterest;

@interface CalendarItemSourceMapItem : NSObject <PersonalizedItem, PersonalizedAutocompleteItem> {

	EKCalendarItem* _calendarItem;
	MKMapItem* _mapItem;
	id<PersonalizedItemKey> _key;
	NSString* _title;
	NSString* _subtitle;
	char _shouldBeHiddenFromMap;
	PersonalizedItemSource* source;
	int _autocompleteOrder;

}

@property (assign,nonatomic) char shouldBeHiddenFromMap;                                                //@synthesize shouldBeHiddenFromMap=_shouldBeHiddenFromMap - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (nonatomic,readonly) char mustRefineMapItem; 
@property (nonatomic,readonly) char isRouteStartOrEnd; 
@property (nonatomic,readonly) char needsToPreserveSelection; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) ParkedCar * parkedCar; 
@property (nonatomic,readonly) MapsLocationOfInterest * locationOfInterest; 
@property (nonatomic,readonly) int autocompleteCategoryPriority; 
@property (nonatomic,readonly) int autocompleteOrder;                                                   //@synthesize autocompleteOrder=_autocompleteOrder - In the implementation block
@property (nonatomic,readonly) id autocompleteObject; 
@property (nonatomic,readonly) NSArray * autocompletionStrings; 
-(char)shouldBeClustered;
-(NSArray *)searchableStrings;
-(char)shouldBeHiddenFromMap;
-(char)mustRefineMapItem;
-(int)autocompleteCategoryPriority;
-(int)autocompleteOrder;
-(id)autocompleteObject;
-(NSArray *)autocompletionStrings;
-(void)setShouldBeHiddenFromMap:(char)arg1 ;
-(id)initWithCalendarItem:(id)arg1 mapItem:(id)arg2 ;
-(id)init;
-(PersonalizedItemPrioritizedStringAdornment *)title;
-(void)setSource:(PersonalizedItemSource *)arg1 ;
-(unsigned)priority;
-(PersonalizedItemPrioritizedStringAdornment *)subtitle;
-(PersonalizedItemSource *)source;
-(NSSet *)keys;
-(unsigned)sortOrder;
-(SearchResult *)searchResult;
-(PersonalizedItemStyleAttributesAdornment *)styleAttributes;
-(NSDate *)eventDate;
-(PersonalizedItemPrioritizedStringAdornment *)prefix;
-(char)showsBalloonCallout;
-(MKMapItem *)mapItem;
-(CLLocationCoordinate2D)coordinate;
-(AddressBookAddress *)address;
@end

