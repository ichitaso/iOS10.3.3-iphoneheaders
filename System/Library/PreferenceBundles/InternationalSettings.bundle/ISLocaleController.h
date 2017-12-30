/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InternationalSettings/InternationalSettings-Structs.h>
#import <Preferences/PSViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@class UITableView, UIView, UISearchBar, NSArray, ISRegion, NSString;

@interface ISLocaleController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {

	UITableView* _tableView;
	UIView* _contentView;
	UISearchBar* _searchBar;
	char _searchMode;
	char _hideKeyboardInSearchMode;
	NSArray* _filteredListContent;
	NSArray* _sections;
	NSArray* _regionsList;
	ISRegion* _currentRegion;

}

@property (nonatomic,retain) NSArray * filteredListContent;              //@synthesize filteredListContent=_filteredListContent - In the implementation block
@property (nonatomic,retain) NSArray * sections;                         //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * regionsList;                      //@synthesize regionsList=_regionsList - In the implementation block
@property (nonatomic,retain) ISRegion * currentRegion;                   //@synthesize currentRegion=_currentRegion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)cancelButtonTapped;
-(id)_mainContentView;
-(void)doneButtonTapped;
-(NSArray *)regionsList;
-(void)reloadDataAndScrollToCheckedRegionAnimated:(char)arg1 ;
-(void)setCurrentRegion:(ISRegion *)arg1 ;
-(void)setRegionsList:(NSArray *)arg1 ;
-(void)loadRegions;
-(void)reloadSections;
-(NSArray *)filteredListContent;
-(ISRegion *)currentRegion;
-(void)updateChecked:(id)arg1 ;
-(void)setFilteredListContent:(NSArray *)arg1 ;
-(id)filteredRegionsForRegionList:(id)arg1 searchString:(id)arg2 ;
@end
