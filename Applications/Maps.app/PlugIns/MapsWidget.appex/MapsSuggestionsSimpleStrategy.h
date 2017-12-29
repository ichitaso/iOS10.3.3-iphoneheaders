/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <MapsWidget/MapsSuggestionsStrategy.h>

@class MapsSuggestionsManager, NSMutableArray, NSString;

@interface MapsSuggestionsSimpleStrategy : NSObject <MapsSuggestionsStrategy> {

	NSMutableArray* _filters;
	NSMutableArray* _improvers;
	NSMutableArray* _dedupers;
	NSMutableArray* _previousResults;
	MapsSuggestionsManager* _manager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager;              //@synthesize manager=_manager - In the implementation block
+(void)load;
-(NSArray*)topSuggestionsWithSourceEntries:(NSDictionary*)arg1 error:(id*)arg2 ;
-(char)shouldKeepEntry:(id)arg1 ;
-(void)removeFilter:(id)arg1 ;
-(void)removeAllFilters;
-(void)addImprover:(id)arg1 ;
-(void)removeAllImprovers;
-(void)addDeduper:(id)arg1 ;
-(void)removeAllDedupers;
-(char)_improveEntry:(id)arg1 ;
-(char)_dedupeByEnrichingEntries:(NSArray*)arg1 withEntry:(id)arg2 ;
-(char)_entry:(id)arg1 existsInStorage:(NSDictionary*)arg2 ;
-(NSMutableArray*)_filteredPreviousResultsCrosscheckingStorage:(NSDictionary*)arg1 ;
-(NSString *)uniqueName;
-(void)addFilter:(id)arg1 ;
-(MapsSuggestionsManager *)manager;
-(void)setManager:(MapsSuggestionsManager *)arg1 ;
-(void)clearData;
@end
