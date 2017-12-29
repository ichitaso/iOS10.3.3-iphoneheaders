/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/CarSearchTableViewCellDataSource.h>
#import <Maps/RAPAutocompleteSearchResult.h>
#import <Maps/RecentsItem.h>

@class SearchResult, NSString, AddressBookAddress;

@interface DirectionsWorkHistoryItem : NSObject <CarSearchTableViewCellDataSource, RAPAutocompleteSearchResult, RecentsItem> {

	SearchResult* _currentLocation;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SearchResult * currentLocation;                  //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) AddressBookAddress * workAddress; 
-(id)entryWithTicket:(id)arg1 ;
-(AddressBookAddress *)workAddress;
-(void)configureModel:(id)arg1 ;
-(id)init;
-(double)timestamp;
-(SearchResult *)currentLocation;
-(void)setCurrentLocation:(SearchResult *)arg1 ;
@end

