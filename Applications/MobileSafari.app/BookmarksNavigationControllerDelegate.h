/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BookmarksNavigationControllerDelegate <NSObject>
@optional
-(id)containingBookmarkForNavigationController:(id)arg1;
-(void)bookmarksNavigationControllerReloadDidFail:(id)arg1;
-(void)bookmarksNavigationControllerDidReload:(id)arg1;
-(void)bookmarksNavigationControllerDidPressDoneButton:(id)arg1;
-(void)bookmarksNavigationControllerDidTapOutsideFavorites:(id)arg1;
-(id)bookmarksNavigationControllerCurrentWebFeedURL:(id)arg1;
-(void)bookmarksNavigationControllerSubscribeToCurrentWebFeed:(id)arg1;
-(id)bookmarksNavigationControllerCurrentContinuousReadingItem:(id)arg1;
-(void)bookmarksNavigationController:(id)arg1 updateReadingListUnreadFilterShowingAllBookmarks:(char)arg2;
-(int)bookmarksNavigationControllerFavoritesGridViewLayoutType:(id)arg1;
-(void)bookmarksNavigationController:(id)arg1 editFavoritesGridViewBookmark:(id)arg2;
-(void)bookmarksNavigationControllerViewDidAppear:(id)arg1;
-(void)bookmarksNavigationControllerViewDidDisappear:(id)arg1;
-(void)bookmarksNavigationController:(id)arg1 showLockedBookmarksDatabaseAlertForBookmarkAddition:(char)arg2;
-(id)bookmarksNavigationController:(id)arg1 previewViewControllerForBookmark:(id)arg2;
-(void)bookmarksNavigationController:(id)arg1 commitPreviewedViewController:(id)arg2;

@required
-(void)bookmarksNavigationController:(id)arg1 didSelectNavigationDestination:(id)arg2;

@end

