/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/CarMapsSuggestionsObserver.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@protocol CarRouteGeniusManagerDelegate;
@class MapsSuggestionsEntry, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface CarRouteGeniusManager : NSObject <CarMapsSuggestionsObserver, MKLocationManagerObserver> {

	char _allowLowFuelSuggestion;
	MapsSuggestionsEntry* _bestSuggestionEntry;
	NSMapTable* _hypothesizersBySuggestion;
	id<CarRouteGeniusManagerDelegate> _delegate;
	NSMutableArray* _activeSuggestionEntries;
	NSMutableArray* _suggestionEntries;
	NSMutableDictionary* _trackedLowFuelSuggestion;

}

@property (__weak) id<CarRouteGeniusManagerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableArray * activeSuggestionEntries;                                 //@synthesize activeSuggestionEntries=_activeSuggestionEntries - In the implementation block
@property (retain) NSMutableArray * suggestionEntries;                                       //@synthesize suggestionEntries=_suggestionEntries - In the implementation block
@property (assign,nonatomic,__weak) MapsSuggestionsEntry * bestSuggestionEntry;              //@synthesize bestSuggestionEntry=_bestSuggestionEntry - In the implementation block
@property (nonatomic,retain) NSMapTable * hypothesizersBySuggestion;                         //@synthesize hypothesizersBySuggestion=_hypothesizersBySuggestion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * trackedLowFuelSuggestion;                 //@synthesize trackedLowFuelSuggestion=_trackedLowFuelSuggestion - In the implementation block
@property (assign) char allowLowFuelSuggestion;                                              //@synthesize allowLowFuelSuggestion=_allowLowFuelSuggestion - In the implementation block
@property (readonly) unsigned suggestionCount; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)allowLowFuelSuggestion;
-(void)setAllowLowFuelSuggestion:(char)arg1 ;
-(void)carMapsSuggestionControllerDidRefresh:(id)arg1 ;
-(unsigned)suggestionCount;
-(void)rankRouteHypothesizers;
-(id)routeHypothesizerForSuggestion:(id)arg1 ;
-(double)_scoreForSuggestionEntry:(id)arg1 ;
-(void)setBestSuggestionEntry:(MapsSuggestionsEntry *)arg1 ;
-(MapsSuggestionsEntry *)bestSuggestionEntry;
-(NSMapTable *)hypothesizersBySuggestion;
-(void)setHypothesizersBySuggestion:(NSMapTable *)arg1 ;
-(NSMutableArray *)activeSuggestionEntries;
-(void)setActiveSuggestionEntries:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)trackedLowFuelSuggestion;
-(void)setTrackedLowFuelSuggestion:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<CarRouteGeniusManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<CarRouteGeniusManagerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)addSuggestionEntries:(NSArray*)arg1 ;
-(NSMutableArray *)suggestionEntries;
-(void)setSuggestionEntries:(NSMutableArray *)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end

