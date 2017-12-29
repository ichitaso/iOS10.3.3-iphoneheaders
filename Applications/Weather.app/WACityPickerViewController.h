/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/MKLocalSearchCompleterDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol WACityPickerViewDelegate;
@class UILabel, UISearchBar, NSTimer, UITableView, MKLocalSearchCompleter, NSMutableArray, NSArray, NSString;

@interface WACityPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, MKLocalSearchCompleterDelegate, UINavigationControllerDelegate> {

	UILabel* _tablePlaceholderLabel;
	UISearchBar* _searchField;
	char _isShowing;
	char _networkReachable;
	char _keyboardShowing;
	unsigned _autocompleteValidationState;
	unsigned _geocodeValidationState;
	NSTimer* _geocoderTimer;
	id<WACityPickerViewDelegate> _delegate;
	UITableView* _completionTable;
	MKLocalSearchCompleter* _localSearchCompleter;
	NSMutableArray* _displayedLocations;
	NSArray* _autocompletedLocations;
	NSArray* _offlineLocations;

}

@property (nonatomic,retain) UITableView * completionTable;                              //@synthesize completionTable=_completionTable - In the implementation block
@property (nonatomic,retain) MKLocalSearchCompleter * localSearchCompleter;              //@synthesize localSearchCompleter=_localSearchCompleter - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayedLocations;                        //@synthesize displayedLocations=_displayedLocations - In the implementation block
@property (nonatomic,retain) NSArray * autocompletedLocations;                           //@synthesize autocompletedLocations=_autocompletedLocations - In the implementation block
@property (nonatomic,retain) NSArray * offlineLocations;                                 //@synthesize offlineLocations=_offlineLocations - In the implementation block
@property (assign,nonatomic,__weak) id<WACityPickerViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)cellLeadingPadding;
-(void)_automaticKeyboardWillShow:(id)arg1 ;
-(void)_cancelValidation;
-(void)setLocalSearchCompleter:(MKLocalSearchCompleter *)arg1 ;
-(MKLocalSearchCompleter *)localSearchCompleter;
-(void)_updateCompletionTablePlacehoder;
-(void)_updatePlaceholderLabel;
-(void)_executeAutocompleteLocation;
-(void)_setAutocompleteValidationState:(unsigned)arg1 ;
-(void)_setGeocodeValidationState:(unsigned)arg1 ;
-(NSMutableArray *)displayedLocations;
-(UITableView *)completionTable;
-(void)_executeALCityManagerSearch;
-(void)geocoderTimerFired:(id)arg1 ;
-(void)setAutocompletedLocations:(NSArray *)arg1 ;
-(void)setOfflineLocations:(NSArray *)arg1 ;
-(void)_updateDisplayedLocations;
-(NSArray *)autocompletedLocations;
-(NSArray *)offlineLocations;
-(void)_showLoadingPlaceholderText;
-(void)setCompletionTable:(UITableView *)arg1 ;
-(void)setDisplayedLocations:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setDelegate:(id<WACityPickerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<WACityPickerViewDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(char)isLoading;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)cancelTimer;
-(void)completer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)completerDidUpdateResults:(id)arg1 finished:(char)arg2 ;
-(void)_searchFieldTextDidChange:(id)arg1 ;
-(void)didShow;
-(void)willHide;
-(void)setNetworkReachable:(char)arg1 ;
-(void)_automaticKeyboardDidHide:(id)arg1 ;
@end

