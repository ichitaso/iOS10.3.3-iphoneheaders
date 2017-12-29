/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class _VideosSharedLibrariesViewController, UINavigationController, NSString;

@interface VideosHomeSharingViewController : UIViewController <MCProfileConnectionObserver> {

	_VideosSharedLibrariesViewController* _sharedLibariesViewController;
	UINavigationController* _navigationController;
	char _showsCancelButton;

}

@property (assign,nonatomic) char showsCancelButton;                //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic) char showsLocalLibrary; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_storeButtonAction:(id)arg1 ;
-(void)presentSharedLibrariesViewController:(char)arg1 ;
-(void)setShowsLocalLibrary:(char)arg1 ;
-(char)showsLocalLibrary;
-(char)_canBrowseStore;
-(void)dismissSharedLibrariesViewController:(char)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_updateNavigationBar;
@end

