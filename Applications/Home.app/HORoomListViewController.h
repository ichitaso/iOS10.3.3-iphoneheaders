/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <Home/HUEditRoomViewControllerPresentationDelegate.h>
#import <Home/HUEditRoomViewControllerAddRoomDelegate.h>

@protocol HORoomListViewControllerDelegate;
@class HUGridLayoutOptions, HORoomListItemManager, NSString;

@interface HORoomListViewController : HUItemTableViewController <HUEditRoomViewControllerPresentationDelegate, HUEditRoomViewControllerAddRoomDelegate> {

	id<HORoomListViewControllerDelegate> _delegate;
	HUGridLayoutOptions* _layoutOptions;

}

@property (nonatomic,readonly) HORoomListItemManager * itemManager; 
@property (assign,nonatomic,__weak) id<HORoomListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                               //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHome:(id)arg1 delegate:(id)arg2 layoutOptions:(id)arg3 ;
-(void)_updateMargins;
-(void)_editButtonPressed:(id)arg1 ;
-(id)_reorderableRoomItems;
-(void)_saveItemOrder:(id)arg1 forSection:(int)arg2 resort:(char)arg3 ;
-(id)_reorderableHomeKitItemListForSection:(int)arg1 ;
-(void)_setReorderableHomeKitItemList:(id)arg1 forSection:(int)arg2 ;
-(id)init;
-(void)setDelegate:(id<HORoomListViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<HORoomListViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)_addButtonPressed:(id)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(HUGridLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(char)arg4 ;
-(id)allCellClasses;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(char)automaticallyUpdatesViewControllerTitle;
-(void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2 ;
-(void)presentAddRoomViewControllerForEditRoomViewController:(id)arg1 ;
@end

