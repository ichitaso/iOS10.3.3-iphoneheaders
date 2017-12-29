/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <TV/VideosMoviesViewController.h>
#import <Videos/VideosRentalsQueryControllerDelegate.h>

@class MPWeakTimer, VideosRentalsQueryController, NSString;

@interface VideosRentalsViewController : VideosMoviesViewController <VideosRentalsQueryControllerDelegate> {

	MPWeakTimer* _expirationTimer;
	char _hasPendingUpdateCellExpirationTimers;
	char _needsUpdateCellExpirationTimers;
	VideosRentalsQueryController* _queryHelper;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)invalidationContextClass;
-(void)_rentalDataDidLoadNotification:(id)arg1 ;
-(id)deleteConfirmationMessageBodyForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewItemExpansionSize;
-(void)collectionView:(id)arg1 commitEditingActionForIndexPath:(id)arg2 ;
-(void)_rentalImagesBatchFinishedNotification:(id)arg1 ;
-(void)_updateVisibleCellExpirationTimers;
-(void)accountChanged:(char)arg1 useDataSource:(id)arg2 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(id)initWithDataSource:(id)arg1 ;
-(id)reuseIdentifierForCellAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4 ;
@end
