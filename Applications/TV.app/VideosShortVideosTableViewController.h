/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TV/TV-Structs.h>
#import <MPUFoundation/MPUTableViewController.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>

@protocol UIViewControllerPreviewing;
@class MPUNotificationObserver, NSString, VideosQueryDataSource;

@interface VideosShortVideosTableViewController : MPUTableViewController <MCProfileConnectionObserver, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private> {

	MPUNotificationObserver* _deletionRestrictionObserver;
	MPUNotificationObserver* _enterBackgroundObserver;
	id<UIViewControllerPreviewing> _viewControllerPreviewingContext;
	NSString* _storeAction;

}

@property (nonatomic,readonly) VideosQueryDataSource * queryDataSource; 
@property (nonatomic,readonly) char canBrowseStore; 
@property (nonatomic,copy) NSString * storeAction;                                   //@synthesize storeAction=_storeAction - In the implementation block
@property (nonatomic,readonly) char canEditItems; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)usesCellConfigurations;
-(id)detailViewControllerForItemAtIndexPath:(id)arg1 ;
-(char)canEditItems;
-(char)canBrowseStore;
-(void)_storeButtonAction:(id)arg1 ;
-(void)showDetailViewForIndexPath:(id)arg1 ;
-(NSString *)storeAction;
-(void)dealloc;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewDidLoad;
-(id)previewViewControllerForRowAtIndexPath:(id)arg1 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)willPresentPreviewViewController:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)setStoreAction:(NSString *)arg1 ;
-(void)_toggleEditAction:(id)arg1 ;
-(void)_updateNavigationBar;
-(void)dataSourceDidInvalidate;
-(id)reuseIdentifierForCellAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4 ;
@end

