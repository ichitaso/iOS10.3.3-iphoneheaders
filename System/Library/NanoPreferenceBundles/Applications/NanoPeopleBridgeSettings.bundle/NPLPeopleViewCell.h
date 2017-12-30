/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPeopleBridgeSettings.bundle/NanoPeopleBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol NPLSettingsPeopleViewControllerDelegate;
@class UIPageViewController, FKFriendsManager, NPLSettingsPeopleViewController, UILongPressGestureRecognizer, NPLPersonView, NSTimer, FKPerson, NSString;

@interface NPLPeopleViewCell : PSTableCell <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIGestureRecognizerDelegate> {

	UIPageViewController* _pageViewController;
	char _shouldUsePageViewController;
	FKFriendsManager* _friendsManager;
	unsigned _currentPageIndex;
	NPLSettingsPeopleViewController* _currentPeopleViewController;
	UILongPressGestureRecognizer* _reorderGestureRecognizer;
	NPLPersonView* _draggedPersonView;
	float _draggedViewOffsetX;
	float _draggedViewOffsetY;
	NSTimer* _reorderDwellTimer;
	NSTimer* _marginDwellTimer;
	unsigned _lastValidMovePosition;
	NPLSettingsPeopleViewController* _lastValidMovePeopleController;
	FKPerson* _selectedPersonAtStartOfMove;
	id<NPLSettingsPeopleViewControllerDelegate> _peopleViewControllerDelegate;

}

@property (assign,nonatomic) id<NPLSettingsPeopleViewControllerDelegate> peopleViewControllerDelegate;              //@synthesize peopleViewControllerDelegate=_peopleViewControllerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)peopleViewCellHeight;
+(id)reuseIdentifierForClassAndType:(int)arg1 ;
-(id)_viewControllerForPageAtIndex:(unsigned)arg1 ;
-(void)_reorderGestureRecognized:(id)arg1 ;
-(void)_groupListChanged:(id)arg1 ;
-(id<NPLSettingsPeopleViewControllerDelegate>)peopleViewControllerDelegate;
-(unsigned)_convertToDialIndex:(unsigned)arg1 ;
-(unsigned)_closestOpenPositionToPosition:(unsigned)arg1 biasClockwise:(char)arg2 numberOfMoves:(unsigned*)arg3 clockwiseDirection:(char*)arg4 ;
-(void)_stopReorderDwellTimer;
-(void)_startMarginDwellTimerIfNecessary;
-(void)_startReorderDwellTimer;
-(void)_stopMarginDwellTimer;
-(char)_shouldStartMarginDwellTimer;
-(void)_marginDwellTimerFired;
-(void)_reorderDwellTimerFired;
-(void)_reorderPersonIfPossible:(id)arg1 biasClockwise:(char)arg2 ;
-(void)setPeopleViewControllerDelegate:(id<NPLSettingsPeopleViewControllerDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(char)arg2 previousViewControllers:(id)arg3 transitionCompleted:(char)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(int)presentationCountForPageViewController:(id)arg1 ;
-(int)presentationIndexForPageViewController:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end
