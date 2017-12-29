/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <MapsWidget/MapsSuggestionsObject.h>

@protocol MapsSuggestionsStrategy, OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, MapsSuggestionsTracker, MapsSuggestionsCurrentLocationUpdater, NSDate, NSObject, CLLocation, GEOAutomobileOptions, NSString;

@interface MapsSuggestionsManager : NSObject <MapsSuggestionsObject> {

	id<MapsSuggestionsStrategy> _strategy;
	NSMutableArray* _additionalFilters;
	unsigned long _countToRequest;
	MapsSuggestionsTracker* _tracker;
	MapsSuggestionsCurrentLocationUpdater* _locationUpdater;
	NSDate* _etaValidUntil;
	NSMutableSet* _sources;
	NSMutableSet* _sinks;
	NSMutableDictionary* _storage;
	NSArray* _latestResults;
	NSObject*<OS_dispatch_queue> _gatheringQueue;
	NSObject*<OS_dispatch_queue> _storageQueue;
	char _dirtyFlag;
	unsigned _defaultTansportType;
	NSObject*<OS_dispatch_source> _invalidateSinksOnExpiredTimer;
	NSObject*<OS_dispatch_source> _wipeStaleETATimer;
	NSObject*<OS_dispatch_source> _updateAllSourcesDeferTimer;
	double _updateAllSourcesDeferTime;
	int _style;
	CLLocation* _currentLocation;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;

}

@property (retain) CLLocation * currentLocation;                                    //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsStrategy> strategy;                  //@synthesize strategy=_strategy - In the implementation block
@property (assign,nonatomic) int mapType;                                           //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;              //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (assign,nonatomic) int style;                                             //@synthesize style=_style - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(void)load;
-(char)attachSink:(id)arg1 ;
-(char)detachSink:(id)arg1 ;
-(char)topSuggestionsForSink:(id)arg1 count:(unsigned long)arg2 transportType:(unsigned)arg3 callback:(/*^block*/id)arg4 onQueue:(id)arg5 ;
-(void)addAdditionalFilter:(id)arg1 ;
-(void)removeAdditionalFilter:(id)arg1 ;
-(char)saveStorageToFile:(id)arg1 ;
-(char)loadStorageFromFile:(id)arg1 ;
-(void)_updateCurrentLocation:(id)arg1 ;
-(void)_updateSource:(id)arg1 repeat:(char)arg2 ;
-(void)_updateAllSourcesOnce;
-(void)scheduleUpdateAllSourcesOnce;
-(void)_unscheduleUpdateAllSourcesOnce;
-(void)_pruneExpiredSourceEntries;
-(NSArray*)_pruneExpiredFromEntries:(NSArray*)arg1 ;
-(void)_sendInvalidateToAllSinks;
-(void)_scheduleInvalidateSinksOnFirstExpiredOfEntries:(NSArray*)arg1 ;
-(char)_updateResult;
-(char)attachSource:(id)arg1 ;
-(char)detachSource:(id)arg1 ;
-(void)_wipeStaleETAs;
-(char)_additionalFiltersAllowEntry:(id)arg1 ;
-(void)_pruneAdditionallyFilteredResults;
-(unsigned long)addOrUpdateSuggestionEntries:(NSArray*)arg1 source:(id)arg2 ;
-(unsigned long)_addOrUpdateSuggestionEntries:(NSArray*)arg1 source:(id)arg2 ;
-(unsigned long)addOrUpdateSuggestionEntries:(NSArray*)arg1 source:(id)arg2 deleteMissing:(char)arg3 ;
-(char)_removeEntry:(id)arg1 sourceName:(NSString*)arg2 ;
-(unsigned long)deleteEntries:(NSArray*)arg1 source:(id)arg2 ;
-(unsigned long)_deleteEntries:(NSArray*)arg1 source:(id)arg2 ;
-(unsigned long)clearAllEntriesFromSource:(id)arg1 ;
-(unsigned long)deleteAllEntriesFromSource:(id)arg1 ;
-(void)trackerRefreshedETAsUntil:(id)arg1 ;
-(id)dumpStorage;
-(NSArray*)storageForSource:(id)arg1 ;
-(NSSet*)sinks;
-(void)sendInvalidateToAllSinks;
-(void)scheduleRefereshForType:(unsigned char)arg1 ;
-(void)dealloc;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(NSString *)uniqueName;
-(NSSet*)sources;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(id)initWithStrategy:(id)arg1 ;
-(id<MapsSuggestionsStrategy>)strategy;
-(void)setStrategy:(id<MapsSuggestionsStrategy>)arg1 ;
-(void)clearResults;
-(NSDictionary*)storage;
@end

