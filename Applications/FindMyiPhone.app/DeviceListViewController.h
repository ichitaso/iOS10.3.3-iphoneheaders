/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyiPhone/FindMyiPhone-Structs.h>
#import <FindMyiPhone/DeviceObservingViewController.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Deprecated.h>
#import <UIKit/UITableViewDelegate.h>

@protocol DeviceListDelegate;
@class NSDictionary, UITableView, NSLayoutConstraint, DeviceListDataSource, NSIndexPath, UITableViewCell, NSString;

@interface DeviceListViewController : DeviceObservingViewController <UIViewControllerPreviewingDelegate_Deprecated, UITableViewDelegate> {

	char _isDismissingMasterPane;
	char _isSelectingRow;
	NSDictionary* _familyMemberDetails;
	id<DeviceListDelegate> _deviceListDelegate;
	UITableView* _tableView;
	NSLayoutConstraint* _tableViewHeightConstraint;
	DeviceListDataSource* _dataSource;
	NSIndexPath* _selectionIndexPath;
	UITableViewCell* _orbSourceCell;
	NSIndexPath* _menuIndexPath;

}

@property (nonatomic,readonly) NSDictionary * familyMemberDetails;                          //@synthesize familyMemberDetails=_familyMemberDetails - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableViewHeightConstraint;                //@synthesize tableViewHeightConstraint=_tableViewHeightConstraint - In the implementation block
@property (nonatomic,retain) DeviceListDataSource * dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) char isDismissingMasterPane;                                   //@synthesize isDismissingMasterPane=_isDismissingMasterPane - In the implementation block
@property (assign,nonatomic) char isSelectingRow;                                           //@synthesize isSelectingRow=_isSelectingRow - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectionIndexPath;                              //@synthesize selectionIndexPath=_selectionIndexPath - In the implementation block
@property (assign,nonatomic,__weak) UITableViewCell * orbSourceCell;                        //@synthesize orbSourceCell=_orbSourceCell - In the implementation block
@property (nonatomic,retain) NSIndexPath * menuIndexPath;                                   //@synthesize menuIndexPath=_menuIndexPath - In the implementation block
@property (assign,nonatomic,__weak) id<DeviceListDelegate> deviceListDelegate;              //@synthesize deviceListDelegate=_deviceListDelegate - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelectionIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectionIndexPath;
-(void)setIsSelectingRow:(char)arg1 ;
-(char)isDismissingMasterPane;
-(void)setIsDismissingMasterPane:(char)arg1 ;
-(char)isSelectingRow;
-(char)shouldUpdateNavigationBar;
-(NSDictionary *)familyMemberDetails;
-(void)setDeviceListDelegate:(id<DeviceListDelegate>)arg1 ;
-(void)selectedDeviceChanged:(id)arg1 ;
-(id<DeviceListDelegate>)deviceListDelegate;
-(void)updateAllDevicesImage;
-(NSLayoutConstraint *)tableViewHeightConstraint;
-(void)_workaroundRadar21908231;
-(void)setOrbSourceCell:(UITableViewCell *)arg1 ;
-(UITableViewCell *)orbSourceCell;
-(void)setTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSIndexPath *)menuIndexPath;
-(void)setMenuIndexPath:(NSIndexPath *)arg1 ;
-(void)setDataSource:(DeviceListDataSource *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(DeviceListDataSource *)dataSource;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(char)arg2 ;
-(void)refresh:(id)arg1 ;
-(void)reloadTableView;
-(void)allDevices:(id)arg1 ;
@end

