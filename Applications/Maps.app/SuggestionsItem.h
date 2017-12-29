/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/PersonalizedItem.h>
#import <Maps/PersonalizedAutocompleteItem.h>

@class MapsSuggestionsEntry, MKMapItem, PersonalizedItemSource, ParkedCar, NSSet, NSString, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemStyleAttributesAdornment, SearchResult, AddressBookAddress, NSArray, NSDate, MapsLocationOfInterest;

@interface SuggestionsItem : NSObject <PersonalizedItem, PersonalizedAutocompleteItem> {

	MapsSuggestionsEntry* _suggestion;
	MKMapItem* _mapItem;
	unsigned short _order;
	PersonalizedItemSource* source;
	ParkedCar* parkedCar;
	NSSet* _keys;

}

@property (nonatomic,retain) ParkedCar * parkedCar; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * keys;                                                            //@synthesize keys=_keys - In the implementation block
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
@property (nonatomic,readonly) MapsLocationOfInterest * locationOfInterest; 
@property (nonatomic,readonly) int autocompleteCategoryPriority; 
@property (nonatomic,readonly) int autocompleteOrder; 
@property (nonatomic,readonly) id autocompleteObject; 
@property (nonatomic,readonly) NSArray * autocompletionStrings; 
-(ParkedCar *)parkedCar;
-(char)shouldBeClustered;
-(NSArray *)searchableStrings;
-(char)shouldBeHiddenFromMap;
-(char)mustRefineMapItem;
-(int)autocompleteCategoryPriority;
-(int)autocompleteOrder;
-(id)autocompleteObject;
-(NSArray *)autocompletionStrings;
-(id)initWithSuggestion:(id)arg1 order:(unsigned short)arg2 ;
-(void)setParkedCar:(ParkedCar *)arg1 ;
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
-(id)suggestion;
@end

