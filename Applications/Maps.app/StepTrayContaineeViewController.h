/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/ContaineeViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Maps/TrayHeaderDelegate.h>
#import <Maps/MapViewResponderHandling.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>

@protocol StepActionCoordination;
@class TrayGuidanceHeader, UICollectionView, Route, NSArray, NSString;

@interface StepTrayContaineeViewController : ContaineeViewController <UICollectionViewDelegate, UICollectionViewDataSource, TrayHeaderDelegate, MapViewResponderHandling, GEOLogContextDelegate> {

	char _showOverviewTrayItem;
	char _isRTL;
	char _needsTrayReload;
	id<StepActionCoordination> _delegate;
	TrayGuidanceHeader* _headerView;
	UICollectionView* _trayCollectionView;
	Route* _route;
	NSArray* _items;

}

@property (assign,nonatomic) char isRTL;                                              //@synthesize isRTL=_isRTL - In the implementation block
@property (nonatomic,retain) TrayGuidanceHeader * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UICollectionView * trayCollectionView;                   //@synthesize trayCollectionView=_trayCollectionView - In the implementation block
@property (nonatomic,retain) Route * route;                                           //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) char needsTrayReload;                                    //@synthesize needsTrayReload=_needsTrayReload - In the implementation block
@property (assign,nonatomic,__weak) id<StepActionCoordination> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showOverviewTrayItem;                               //@synthesize showOverviewTrayItem=_showOverviewTrayItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)allowsLongPressToMarkLocation;
-(char)allowsQuickActionMenuInMap;
-(void)didChangeLayout:(unsigned)arg1 ;
-(char)useDefaultLayout;
-(char)updateConstraintsForLayout:(unsigned)arg1 ;
-(char)updateHeightConstraintWithValue:(float)arg1 ;
-(float)heightForLayout:(unsigned)arg1 ;
-(void)didTapMapView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)trayHeaderButtonDidTouchUpInside:(id)arg1 ;
-(void)trayHeaderDidReceiveTap;
-(void)trayHeaderConfirmButtonWillAppear;
-(void)trayHeaderConfirmButtonWillDisappear;
-(void)arriveDestination;
-(void)setShowOverviewTrayItem:(char)arg1 ;
-(void)_configureHeaderWithRoute;
-(void)_reloadItems;
-(void)_configureTrayCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_reloadTray;
-(char)showOverviewTrayItem;
-(void)setIsRTL:(char)arg1 ;
-(UICollectionView *)trayCollectionView;
-(void)setTrayCollectionView:(UICollectionView *)arg1 ;
-(char)needsTrayReload;
-(void)setNeedsTrayReload:(char)arg1 ;
-(void)setDelegate:(id<StepActionCoordination>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<StepActionCoordination>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(TrayGuidanceHeader *)headerView;
-(void)setHeaderView:(TrayGuidanceHeader *)arg1 ;
-(Route *)route;
-(void)setRoute:(Route *)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(int)currentUITargetForAnalytics;
-(int)currentMapViewTargetForAnalytics;
-(char)isRTL;
-(void)_setupViews;
-(void)_setupConstraints;
@end

