/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/PlugIns/VideosTodayExtension.appex/VideosTodayExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosTodayExtension/VideosTodayExtension-Structs.h>
#import <UIKit/UIViewController.h>
#import <FMFTodayWidget/NCWidgetProviding.h>

@class _VideosTodayCollectionViewController, WLKContinueWatchingRequest, NSString;

@interface VideosTodayViewController : UIViewController <NCWidgetProviding> {

	_VideosTodayCollectionViewController* _collectionViewController;
	WLKContinueWatchingRequest* _continueWatchingRequest;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)_heightForWidgetDisplayMode:(int)arg1 itemCount:(unsigned)arg2 ;
-(id)_archivedItemsReturningTitleStyle:(int*)arg1 ;
-(void)_updatePreferredHeight;
-(void)_archiveItems:(id)arg1 titleStyle:(int)arg2 ;
-(void)_loadNowPlayingItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadLocalItemsWithCompletion:(/*^block*/id)arg1 ;
-(id)_localizedStringForContextString:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)widgetPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(int)arg1 withMaximumSize:(CGSize)arg2 ;
@end

