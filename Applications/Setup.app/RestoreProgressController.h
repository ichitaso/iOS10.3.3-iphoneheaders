/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class RestoreFromBackupController, NSString;

@interface RestoreProgressController : UIViewController <BuddyController> {

	RestoreFromBackupController* _restoreFromBackupController;
	id<BuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) RestoreFromBackupController * restoreFromBackupController;              //@synthesize restoreFromBackupController=_restoreFromBackupController - In the implementation block
@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RestoreFromBackupController *)restoreFromBackupController;
-(void)setRestoreFromBackupController:(RestoreFromBackupController *)arg1 ;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(id<BuddyControllerDelegate>)delegate;
-(void)viewDidAppear:(char)arg1 ;
@end

