/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/MFMessageComposeViewControllerDelegate.h>
#import <Fitness/FIUIModelObserver.h>

@class UICollectionViewFlowLayout, UICollectionView, _HKFitnessFriend, NSDate, _HKFitnessFriendActivitySnapshot, NSMutableSet, FitnessDateCache, FIUIModel, CHWorkoutsListDataProvider, FFFriendListManager, CHFriendManager, CHFriendDetailThreeRingCell, CHFriendDetailDateCell, CHFriendDetailGoalCell, NSMutableArray, HorizontalScrollingAchievementsView, UILabel, NSString;

@interface CHFriendDetailCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, CNContactViewControllerDelegate, MFMessageComposeViewControllerDelegate, FIUIModelObserver> {

	UICollectionViewFlowLayout* _collectionViewLayout;
	UICollectionView* _collectionView;
	_HKFitnessFriend* _fitnessFriend;
	NSDate* _snapshotDate;
	_HKFitnessFriendActivitySnapshot* _activitySnapshot;
	NSMutableSet* _todaysFriendWorkouts;
	NSMutableSet* _todaysFriendAchievements;
	char _isMe;
	char _dataIsHidden;
	FitnessDateCache* _dateCache;
	FIUIModel* _model;
	CHWorkoutsListDataProvider* _workoutDataProvider;
	FFFriendListManager* _friendListManager;
	CHFriendManager* _friendManager;
	CHFriendDetailThreeRingCell* _threeRingCell;
	CHFriendDetailDateCell* _dateCell;
	CHFriendDetailGoalCell* _moveCell;
	CHFriendDetailGoalCell* _exerciseCell;
	CHFriendDetailGoalCell* _standCell;
	CHFriendDetailGoalCell* _stepCell;
	CHFriendDetailGoalCell* _distanceCell;
	NSMutableArray* _workoutCellsArray;
	HorizontalScrollingAchievementsView* _achievementsCell;
	NSMutableArray* _actionCellsArray;
	UILabel* _sharingInfoLabel;
	NSMutableArray* _itemsArray;
	NSMutableArray* _sizesArray;
	NSMutableArray* _numItemsInSectionArray;
	NSString* _sharingInfoText;
	int _fitnessFriendsGatewayStatusChangedToken;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reloadAchievements;
-(void)_friendDataWasUpdated:(id)arg1 ;
-(id)initWithFriendListManager:(id)arg1 friendManager:(id)arg2 friend:(id)arg3 snapshot:(id)arg4 snapshotDate:(id)arg5 model:(id)arg6 workoutDataProvider:(id)arg7 ;
-(char)_isDataHidden;
-(void)_showShareOptions:(id)arg1 ;
-(void)_updateSharingTextForMe;
-(void)_infoButtonTapped:(id)arg1 ;
-(void)_sendMessageButtonTapped:(id)arg1 ;
-(void)_setupNumberOfItemsInSection;
-(void)_setupCells;
-(void)_setupCellSizes;
-(CGSize)_sizeForGoalCell:(id)arg1 withPreferredWidth:(float)arg2 availableWidth:(float)arg3 ;
-(void)_logMessageComposeResult:(int)arg1 messageComposeViewController:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(void)viewWillLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3 ;
-(void)_reloadData;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)achievementsUpdated;
@end

