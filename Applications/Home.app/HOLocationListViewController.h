/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HFHomeObserver.h>
#import <Home/HOEditLocationViewControllerPresentationDelegate.h>
#import <Home/HOAddLocationViewControllerDelegate.h>
#import <libobjc.A.dylib/HMHomeManagerDelegatePrivate.h>
#import <Home/HUSwitchCellDelegate.h>
#import <Home/HOEditLocationViewControllerAddLocationDelegate.h>

@protocol HOLocationListViewControllerDelegate;
@class NSMutableArray, NSString;

@interface HOLocationListViewController : UITableViewController <HFHomeManagerObserver, HFHomeObserver, HOEditLocationViewControllerPresentationDelegate, HOAddLocationViewControllerDelegate, HMHomeManagerDelegatePrivate, HUSwitchCellDelegate, HOEditLocationViewControllerAddLocationDelegate> {

	char _tableViewReady;
	char _locationSensingAvailable;
	id<HOLocationListViewControllerDelegate> _delegate;
	NSMutableArray* _homes;
	NSMutableArray* _acceptedAndPendingInvitations;
	NSMutableArray* _pendingInvitations;

}

@property (nonatomic,retain) NSMutableArray * homes;                                                //@synthesize homes=_homes - In the implementation block
@property (nonatomic,retain) NSMutableArray * acceptedAndPendingInvitations;                        //@synthesize acceptedAndPendingInvitations=_acceptedAndPendingInvitations - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingInvitations;                                   //@synthesize pendingInvitations=_pendingInvitations - In the implementation block
@property (assign,nonatomic) char tableViewReady;                                                   //@synthesize tableViewReady=_tableViewReady - In the implementation block
@property (assign,nonatomic) char locationSensingAvailable;                                         //@synthesize locationSensingAvailable=_locationSensingAvailable - In the implementation block
@property (assign,nonatomic,__weak) id<HOLocationListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_currentSectionIdentifiers;
-(void)addLocationViewController:(id)arg1 didFinishWithHome:(id)arg2 ;
-(void)editLocationViewControllerWouldPresentAddController:(id)arg1 ;
-(void)editLocationViewControllerDidFinish:(id)arg1 ;
-(void)updateLocationSensingAvailability;
-(void)editButtonPressed:(id)arg1 ;
-(void)setTableViewReady:(char)arg1 ;
-(NSMutableArray *)acceptedAndPendingInvitations;
-(char)showAddLocationButton;
-(NSMutableArray *)pendingInvitations;
-(id)_indexPathForAcceptedAndPendingInvitationAtIndex:(int)arg1 ;
-(id)_indexPathForPendingInvitationAtIndex:(int)arg1 ;
-(int)_indexOfSectionWithIdentifier:(id)arg1 ;
-(char)locationSensingAvailable;
-(char)tableViewReady;
-(void)setLocationSensingAvailable:(char)arg1 ;
-(void)setAcceptedAndPendingInvitations:(NSMutableArray *)arg1 ;
-(void)setPendingInvitations:(NSMutableArray *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HOLocationListViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<HOLocationListViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(id)initWithStyle:(int)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)_identifierForSection:(unsigned)arg1 ;
-(void)doneButtonPressed:(id)arg1 ;
-(NSMutableArray *)homes;
-(void)setHomes:(NSMutableArray *)arg1 ;
-(void)homeDidUpdateName:(id)arg1 ;
-(void)switchCell:(id)arg1 didTurnOn:(char)arg2 ;
-(void)homeManagerDidFinishUnknownChange:(id)arg1 ;
-(void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2 ;
-(void)homeManager:(id)arg1 didUpdateLocationSensingAvailability:(char)arg2 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
@end

