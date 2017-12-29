/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/RecentsItem.h>

@class SearchResult, AddressBookAddress, NSString;

@interface DirectionsWorkHistoryItem : NSObject <RecentsItem> {

	SearchResult* _currentLocation;

}

@property (nonatomic,retain) SearchResult * currentLocation;                  //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) AddressBookAddress * workAddress; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AddressBookAddress *)workAddress;
-(id)init;
-(double)timestamp;
-(SearchResult *)currentLocation;
-(void)setCurrentLocation:(SearchResult *)arg1 ;
@end

