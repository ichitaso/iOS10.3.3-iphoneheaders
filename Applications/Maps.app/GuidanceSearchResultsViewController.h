/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/NavContaineeViewController.h>
#import <Maps/GuidanceSearchResultsViewModelDelegate.h>
#import <Maps/SARSearchResultTableViewCellDelegate.h>
#import <Maps/DataSourceDelegate.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>
#import <Maps/NavContaineeProtocol.h>

@class GuidanceSearchResultsViewModel, GuidanceSearchResultsView, SearchResultsDataSource, NSString;

@interface GuidanceSearchResultsViewController : NavContaineeViewController <GuidanceSearchResultsViewModelDelegate, SARSearchResultTableViewCellDelegate, DataSourceDelegate, GEOLogContextDelegate, NavContaineeProtocol> {

	GuidanceSearchResultsViewModel* _viewModel;
	GuidanceSearchResultsView* _resultsView;
	SearchResultsDataSource* _dataSource;

}

@property (nonatomic,readonly) GuidanceSearchResultsViewModel * viewModel;                                     //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) GuidanceSearchResultsView * resultsView;                                          //@synthesize resultsView=_resultsView - In the implementation block
@property (nonatomic,retain) SearchResultsDataSource * dataSource;                                             //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char allowsLimitedInteractionOnly; 
@property (assign,nonatomic,__weak) UIViewController*<ContainerProtocol> containerViewController; 
@property (assign,nonatomic) char presentedModally; 
@property (assign,nonatomic) char takesAvailableHeight; 
-(void)willChangeContainerStyle:(unsigned)arg1 ;
-(char)updateConstraintsForLayout:(unsigned)arg1 ;
-(float)heightForLayout:(unsigned)arg1 ;
-(void)headerViewTapped:(id)arg1 ;
-(char)shouldUpdateMapEdgeInsets;
-(unsigned)defaultLayoutForContainerStyle:(unsigned)arg1 traitCollection:(id)arg2 ;
-(int)listForDataSource:(id)arg1 ;
-(void)dataSource:(id)arg1 itemTapped:(id)arg2 ;
-(void)searchResultTableViewCellDidTapActionButton:(id)arg1 ;
-(void)viewModelWillStartLoading:(id)arg1 ;
-(void)viewModelDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(void)_updateLayoutWithContainerStyle:(unsigned)arg1 traitCollection:(id)arg2 ;
-(void)headerViewDoneTapped:(id)arg1 ;
-(void)dataSourceUpdated:(id)arg1 ;
-(void)setDataSource:(SearchResultsDataSource *)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(SearchResultsDataSource *)dataSource;
-(void)viewWillAppear:(char)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(char)_isEmpty;
-(int)currentUITargetForAnalytics;
-(int)currentMapViewTargetForAnalytics;
-(GuidanceSearchResultsView *)resultsView;
-(void)setResultsView:(GuidanceSearchResultsView *)arg1 ;
-(GuidanceSearchResultsViewModel *)viewModel;
-(id)initWithViewModel:(id)arg1 ;
@end

