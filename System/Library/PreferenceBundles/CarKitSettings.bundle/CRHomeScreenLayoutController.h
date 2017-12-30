/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <CarKitSettings/CRHomeScreenDelegate.h>

@class CRVehicle, CRHomeScreenManager, CRPairedVehicleManager, NSString;

@interface CRHomeScreenLayoutController : PSListController <CRHomeScreenDelegate> {

	char _carPlayEnabled;
	char _forceDisplayAppDrawer;
	CRVehicle* _vehicle;
	CRHomeScreenManager* _homeScreenManager;
	CRPairedVehicleManager* _vehicleManager;

}

@property (nonatomic,retain) CRVehicle * vehicle;                                  //@synthesize vehicle=_vehicle - In the implementation block
@property (nonatomic,retain) CRHomeScreenManager * homeScreenManager;              //@synthesize homeScreenManager=_homeScreenManager - In the implementation block
@property (nonatomic,retain) CRPairedVehicleManager * vehicleManager;              //@synthesize vehicleManager=_vehicleManager - In the implementation block
@property (assign,nonatomic) char carPlayEnabled;                                  //@synthesize carPlayEnabled=_carPlayEnabled - In the implementation block
@property (assign,nonatomic) char forceDisplayAppDrawer;                           //@synthesize forceDisplayAppDrawer=_forceDisplayAppDrawer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_popIfVisible;
-(void)deleteVehicle;
-(char)carPlayEnabled;
-(void)resetVehicleApplications;
-(CRHomeScreenManager *)homeScreenManager;
-(void)_resetVehicleApplications;
-(void)setForceDisplayAppDrawer:(char)arg1 ;
-(void)setHomeScreenManager:(CRHomeScreenManager *)arg1 ;
-(char)forceDisplayAppDrawer;
-(void)homeScreenManager:(id)arg1 didChangeVisibilityOfIcon:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)homeScreenManager:(id)arg1 willChangeVisibilityOfIcon:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)shouldReloadSpecifiersOnResume;
-(CRPairedVehicleManager *)vehicleManager;
-(void)setVehicleManager:(CRPairedVehicleManager *)arg1 ;
-(void)handlePairedVehiclesChanged:(id)arg1 ;
-(void)setCarPlayEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)carPlayEnabled:(id)arg1 ;
-(void)setCarPlayEnabled:(char)arg1 ;
-(CRVehicle *)vehicle;
-(void)setVehicle:(CRVehicle *)arg1 ;
-(id)specifiers;
-(char)canBeShownFromSuspendedState;
@end
