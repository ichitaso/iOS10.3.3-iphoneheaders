/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <Maps/HeaderViewDelegate.h>
#import <Maps/SettingsTableViewControllerObserver.h>
#import <Maps/CustomPresentationContaineeViewController.h>

@class CardView, ContainerHeaderView, SettingsTableViewController, SettingsController, NSString;

@interface SettingsViewController : UIViewController <HeaderViewDelegate, SettingsTableViewControllerObserver, CustomPresentationContaineeViewController> {

	float _currentHeight;
	CardView* _cardView;
	ContainerHeaderView* _headerView;
	SettingsTableViewController* _settingsTableViewController;
	/*^block*/id _dismissSettingsViewControllerHandler;
	SettingsController* _settingsController;

}

@property (nonatomic,copy) id dismissSettingsViewControllerHandler;                       //@synthesize dismissSettingsViewControllerHandler=_dismissSettingsViewControllerHandler - In the implementation block
@property (assign,nonatomic,__weak) SettingsController * settingsController;              //@synthesize settingsController=_settingsController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)headerViewButtonTapped:(id)arg1 ;
-(void)updateTheme;
-(void)dismissCustomPresentationContainee;
-(void)settingsTableViewControllerDidReloadData:(id)arg1 ;
-(id)dismissSettingsViewControllerHandler;
-(void)setDismissSettingsViewControllerHandler:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)setupConstraints;
-(SettingsController *)settingsController;
-(void)setSettingsController:(SettingsController *)arg1 ;
-(id)tableViewController;
@end

