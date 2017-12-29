/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <MapsWidget/MapsSuggestionsSink.h>
#import <MapsWidget/MWWidgetProviding.h>
#import <MapsWidget/MapsSuggestionsObject.h>

@class NSTimer, NSString, NSDate, NSMutableDictionary, MapsWidgetView, NSArray;

@interface MWSuggestionsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MapsSuggestionsSink, MWWidgetProviding, MapsSuggestionsObject> {

	NSArray* _pendingEntries;
	int _largestWidgetDisplayMode;
	NSTimer* _ageUpdateTimer;
	int _tappedSuggestionIndex;
	NSString* _tappedSuggestionUniqueIdentifier;
	NSDate* _initTime;
	char _initiallyExpanded;
	char _everExpanded;
	char _initiallyExpandedToken;
	char _showFrequentLocationError;
	int _userExpandCount;
	NSMutableDictionary* _suggestionRecvTime;
	NSArray* _observedEntries;
	char _firstTimeModeChange;
	int _currentDisplayMode;
	MapsWidgetView* _widgetView;
	NSArray* _suggestionList;

}

@property (assign,nonatomic) int currentDisplayMode;                         //@synthesize currentDisplayMode=_currentDisplayMode - In the implementation block
@property (nonatomic,retain) MapsWidgetView * widgetView;                    //@synthesize widgetView=_widgetView - In the implementation block
@property (nonatomic,retain) NSArray * suggestionList;                       //@synthesize suggestionList=_suggestionList - In the implementation block
@property (assign,nonatomic) char firstTimeModeChange;                       //@synthesize firstTimeModeChange=_firstTimeModeChange - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (nonatomic,readonly) int largestAvailableDisplayMode; 
+(void)load;
-(void)refreshGlobalSettings;
-(void)updateObservedEntries:(NSArray*)arg1 ;
-(void)updateTableViewWithNewList:(NSArray*)arg1 fromOldList:(NSArray*)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)refreshList;
-(void)startReceivingMapsSuggestionsUpdates;
-(void)stopReceivingMapsSuggestionsUpdates;
-(char)firstTimeModeChange;
-(void)setFirstTimeModeChange:(char)arg1 ;
-(NSArray *)suggestionList;
-(void)setSuggestionList:(NSArray *)arg1 ;
-(void)invalidateForMapsSuggestionsManager:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)timerFired:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)uniqueName;
-(void)adjustPreferredContentSize;
-(void)setWidgetView:(MapsWidgetView *)arg1 ;
-(MapsWidgetView *)widgetView;
-(int)currentDisplayMode;
-(void)setCurrentDisplayMode:(int)arg1 ;
-(void)widgetPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(int)arg1 withMaximumSize:(CGSize)arg2 ;
-(int)largestAvailableDisplayMode;
@end

