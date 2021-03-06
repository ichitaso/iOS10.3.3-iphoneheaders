/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKLocalSearchCompleterDelegate.h>
#import <Maps/SearchBarSearchManagerDelegate.h>
#import <libobjc.A.dylib/MKLocalSearchCompleterDelegatePrivate.h>
#import <Maps/PersonalizedItemManagerObserver.h>
#import <Maps/SearchDataProviding.h>

@protocol GEOMapServiceCompletionTicket, SearchDataProviderDelegate;
@class GEOSearchCategory, UserLocationSearchResult, RAPAutoCompleteSearchManager, PersonalizedItemManager, NSArray, NSString, AutocompleteContext, GEOMapServiceTraits, MKLocalSearchCompleter, SearchBarSearchManager, SearchBarSearchResults, AutocompleteItemManager, AutocompleteItemSource, PersonalizedItemAutocompleteFilter;

@interface SearchDataProvider : NSObject <MKLocalSearchCompleterDelegate, SearchBarSearchManagerDelegate, MKLocalSearchCompleterDelegatePrivate, PersonalizedItemManagerObserver, SearchDataProviding> {

	NSArray* _localSearchResults;
	NSArray* _serverSearchResults;
	NSArray* _content;
	NSString* _inputText;
	NSString* _trimmedInputText;
	AutocompleteContext* _autocompleteInputContext;
	GEOMapServiceTraits* _traits;
	MKLocalSearchCompleter* _searchCompleter;
	SearchBarSearchManager* _localSearchManager;
	SearchBarSearchResults* _localSearchResultsSet;
	char _finishedLocalCompletions;
	char _finishedServerCompletions;
	AutocompleteItemManager* _deduplicator;
	AutocompleteItemSource* _serverCompletionsItemSource;
	AutocompleteItemSource* _localCompletionsItemSource;
	int _autocompleteChangeCounter;
	NSArray* _sortedCombinedResults;
	AutocompleteContext* _autocompleteContext;
	char _usePersonalizedMapsAutocomplete;
	PersonalizedItemAutocompleteFilter* _personalizedItemsFilter;
	unsigned _searchRequestAnalyticsSequenceNumber;
	char _active;
	char _enableRAPIfAvailable;
	int _searchMode;
	GEOSearchCategory* _inputCategory;
	UserLocationSearchResult* _userLocationSearchResult;
	RAPAutoCompleteSearchManager* _autoCompleteSearchRAPManager;
	PersonalizedItemManager* _mapPersonalizedItems;
	id<GEOMapServiceCompletionTicket> _lastTicket;
	id<SearchDataProviderDelegate> _delegate;

}

@property (nonatomic,retain) AutocompleteItemSource * serverCompletionsItemSource;                     //@synthesize serverCompletionsItemSource=_serverCompletionsItemSource - In the implementation block
@property (nonatomic,retain) AutocompleteItemSource * localCompletionsItemSource;                      //@synthesize localCompletionsItemSource=_localCompletionsItemSource - In the implementation block
@property (assign,nonatomic) char usePersonalizedMapsAutocomplete;                                     //@synthesize usePersonalizedMapsAutocomplete=_usePersonalizedMapsAutocomplete - In the implementation block
@property (assign,nonatomic,__weak) id<SearchDataProviderDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * content;                                                      //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) AutocompleteContext * autocompleteContext;                              //@synthesize autocompleteContext=_autocompleteContext - In the implementation block
@property (nonatomic,readonly) AutocompleteContext * autocompleteInputContext;                         //@synthesize autocompleteInputContext=_autocompleteInputContext - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                                              //@synthesize active=_active - In the implementation block
@property (assign,getter=shouldEnableRAPIfAvailable,nonatomic) char enableRAPIfAvailable;              //@synthesize enableRAPIfAvailable=_enableRAPIfAvailable - In the implementation block
@property (nonatomic,readonly) unsigned searchRequestAnalyticsSequenceNumber;                          //@synthesize searchRequestAnalyticsSequenceNumber=_searchRequestAnalyticsSequenceNumber - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<GEOMapServiceCompletionTicket> lastTicket;                             //@synthesize lastTicket=_lastTicket - In the implementation block
@property (assign,nonatomic) int searchMode;                                                           //@synthesize searchMode=_searchMode - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * inputCategory;                                        //@synthesize inputCategory=_inputCategory - In the implementation block
@property (nonatomic,retain) UserLocationSearchResult * userLocationSearchResult;                      //@synthesize userLocationSearchResult=_userLocationSearchResult - In the implementation block
@property (nonatomic,retain) RAPAutoCompleteSearchManager * autoCompleteSearchRAPManager;              //@synthesize autoCompleteSearchRAPManager=_autoCompleteSearchRAPManager - In the implementation block
@property (nonatomic,retain) PersonalizedItemManager * mapPersonalizedItems;                           //@synthesize mapPersonalizedItems=_mapPersonalizedItems - In the implementation block
+(void)initialize;
-(void)setInputText:(id)arg1 traits:(id)arg2 source:(int)arg3 ;
-(void)clearAutocompleteResults;
-(int)searchMode;
-(void)setSearchMode:(int)arg1 ;
-(GEOSearchCategory *)inputCategory;
-(void)setInputCategory:(GEOSearchCategory *)arg1 ;
-(UserLocationSearchResult *)userLocationSearchResult;
-(void)setUserLocationSearchResult:(UserLocationSearchResult *)arg1 ;
-(RAPAutoCompleteSearchManager *)autoCompleteSearchRAPManager;
-(void)setAutoCompleteSearchRAPManager:(RAPAutoCompleteSearchManager *)arg1 ;
-(PersonalizedItemManager *)mapPersonalizedItems;
-(void)setMapPersonalizedItems:(PersonalizedItemManager *)arg1 ;
-(void)personalizedItemManagerWillChangeItems:(id)arg1 ;
-(void)personalizedItemManager:(id)arg1 didChangeItems:(id)arg2 ;
-(void)receivedSearchResults:(id)arg1 forContext:(id)arg2 ;
-(void)setUsePersonalizedMapsAutocomplete:(char)arg1 ;
-(id)buildContent;
-(id)buildContentNewWay;
-(id)buildContentOldWay;
-(void)updateDeduper;
-(void)setServerCompletionsItemSource:(AutocompleteItemSource *)arg1 ;
-(void)setLocalCompletionsItemSource:(AutocompleteItemSource *)arg1 ;
-(char)shouldShowRap;
-(void)recordRAPResults:(id)arg1 ;
-(void)resetRAPRecorder;
-(void)_processNewAutocompleteList;
-(unsigned)searchRequestAnalyticsSequenceNumber;
-(AutocompleteContext *)autocompleteContext;
-(AutocompleteContext *)autocompleteInputContext;
-(char)shouldEnableRAPIfAvailable;
-(void)setEnableRAPIfAvailable:(char)arg1 ;
-(AutocompleteItemSource *)serverCompletionsItemSource;
-(AutocompleteItemSource *)localCompletionsItemSource;
-(char)usePersonalizedMapsAutocomplete;
-(id)init;
-(void)setDelegate:(id<SearchDataProviderDelegate>)arg1 ;
-(id<SearchDataProviderDelegate>)delegate;
-(char)isActive;
-(NSArray *)content;
-(void)userDefaultsDidChange:(id)arg1 ;
-(void)reset;
-(void)setActive:(char)arg1 ;
-(void)_dataChanged;
-(void)completer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)completerDidUpdateResults:(id)arg1 ;
-(void)setLastTicket:(id<GEOMapServiceCompletionTicket>)arg1 ;
-(id<GEOMapServiceCompletionTicket>)lastTicket;
-(char)hasResults;
@end

