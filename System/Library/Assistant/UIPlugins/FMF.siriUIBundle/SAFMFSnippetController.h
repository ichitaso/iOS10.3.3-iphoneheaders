/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <FMF/RefreshControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, NSString, RefreshController, NSDictionary, UITableView, NSTimer;

@interface SAFMFSnippetController : SiriUISnippetViewController <RefreshControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	char refreshingCancelled;
	char displayShowAllRow;
	NSArray* locations;
	NSString* proximity;
	NSString* clientId;
	RefreshController* refreshController;
	float zoomLevel;
	NSDictionary* contextDict;
	UITableView* _tableView;
	NSTimer* _reloadTimer;

}

@property (assign,nonatomic) char refreshingCancelled; 
@property (assign,nonatomic) char displayShowAllRow; 
@property (nonatomic,retain) RefreshController * refreshController; 
@property (assign,nonatomic) float zoomLevel; 
@property (nonatomic,retain) NSTimer * reloadTimer;                              //@synthesize reloadTimer=_reloadTimer - In the implementation block
@property (nonatomic,retain) NSDictionary * contextDict; 
@property (nonatomic,copy) NSString * clientId; 
@property (nonatomic,copy) NSArray * locations; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,retain) UITableView * tableView;                            //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snippetViewController:(id)arg1 ;
-(id)locationForEmail:(id)arg1 ;
-(char)allEmptyLocations;
-(void)locationsUpdated:(id)arg1 ;
-(void)refreshCancelled;
-(id)proximityLocationsWithCoordinates;
-(char)displayShowAllRow;
-(char)isShowAllDisplayCell:(id)arg1 ;
-(char)refreshingCancelled;
-(void)setRefreshingCancelled:(char)arg1 ;
-(RefreshController *)refreshController;
-(char)showLocatingFriends;
-(CGSize)sizeForTable;
-(char)hideMapInCell;
-(void)setReloadTimer:(NSTimer *)arg1 ;
-(NSTimer *)reloadTimer;
-(void)reloadTableData;
-(NSDictionary *)contextDict;
-(void)setContextDict:(NSDictionary *)arg1 ;
-(void)setDisplayShowAllRow:(char)arg1 ;
-(void)setRefreshController:(RefreshController *)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(NSArray *)locations;
-(void)setZoomLevel:(float)arg1 ;
-(void)setProximity:(NSString *)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
-(NSString *)proximity;
-(float)zoomLevel;
-(float)desiredHeight;
-(id)friends;
@end
