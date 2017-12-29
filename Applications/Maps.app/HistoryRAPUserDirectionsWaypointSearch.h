/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPAuxiliaryControlsRecording.h>
#import <Maps/RAPUserSearch.h>
#import <Maps/HistoryRAPItem.h>
#import <Maps/RAPUserSearchGeoMapItemProvider.h>

@class RAPDirectionsRecording, HistoryEntryRecentsItem, NSArray, SearchResult, NSString;

@interface HistoryRAPUserDirectionsWaypointSearch : NSObject <RAPAuxiliaryControlsRecording, RAPUserSearch, HistoryRAPItem, RAPUserSearchGeoMapItemProvider> {

	RAPDirectionsRecording* _recording;
	char _hasOriginatingAuxiliaryControlIndex;
	HistoryEntryRecentsItem* _historyItem;
	unsigned _waypointIndex;
	NSArray* _auxiliaryControls;
	unsigned long long _originatingAuxiliaryControlIndex;

}

@property (nonatomic,readonly) SearchResult * searchResult; 
@property (nonatomic,readonly) HistoryEntryRecentsItem * historyItem;                                     //@synthesize historyItem=_historyItem - In the implementation block
@property (nonatomic,readonly) unsigned waypointIndex;                                                    //@synthesize waypointIndex=_waypointIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * auxiliaryControls;                                               //@synthesize auxiliaryControls=_auxiliaryControls - In the implementation block
@property (nonatomic,readonly) char hasOriginatingAuxiliaryControlIndex;                                  //@synthesize hasOriginatingAuxiliaryControlIndex=_hasOriginatingAuxiliaryControlIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long originatingAuxiliaryControlIndex;                       //@synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex - In the implementation block
@property (nonatomic,readonly) id<RAPAuxiliaryControlsRecording> auxiliaryControlsRecording; 
@property (nonatomic,readonly) NSString * searchText; 
@property (nonatomic,readonly) NSString * locationDisplayString; 
@property (nonatomic,readonly) unsigned long searchResultsCount; 
+(void)loadAllRequestsFromStorage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)geoMapItemForSearchResultAtIndex:(unsigned)arg1 ;
-(id<RAPAuxiliaryControlsRecording>)auxiliaryControlsRecording;
-(id)initWithHistoryItem:(id)arg1 recording:(id)arg2 waypointIndex:(unsigned)arg3 ;
-(id)correctedSearchTemplate;
-(unsigned)waypointIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchText;
-(SearchResult *)searchResult;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(char)hasOriginatingAuxiliaryControlIndex;
-(NSArray *)auxiliaryControls;
-(unsigned long long)originatingAuxiliaryControlIndex;
-(HistoryEntryRecentsItem *)historyItem;
-(unsigned long)searchResultsCount;
-(NSString *)locationDisplayString;
@end

