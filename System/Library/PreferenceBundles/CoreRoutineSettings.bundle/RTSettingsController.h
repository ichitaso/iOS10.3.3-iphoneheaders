/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class RTRoutineManager, PSListController;

@interface RTSettingsController : PSListController {

	char _previousRoutineAuthorization;
	RTRoutineManager* _routineManager;
	PSListController* _parentListController;

}

@property (assign,nonatomic) char previousRoutineAuthorization;                           //@synthesize previousRoutineAuthorization=_previousRoutineAuthorization - In the implementation block
@property (assign,nonatomic,__weak) RTRoutineManager * routineManager;                    //@synthesize routineManager=_routineManager - In the implementation block
@property (assign,nonatomic,__weak) PSListController * parentListController;              //@synthesize parentListController=_parentListController - In the implementation block
-(void)setPreviousRoutineAuthorization:(char)arg1 ;
-(char)previousRoutineAuthorization;
-(void)_dumpLogs;
-(void)_clearHistory;
-(void)_stopSpinner;
-(void)_disableDumpLogsButton;
-(void)_enableDumpLogsButton;
-(void)_startSpinner;
-(void)_updateInterfaceForLogDump:(char)arg1 ;
-(void)_showPrivacyCluster:(id)arg1 ;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(id)initWithRoutineManager:(id)arg1 andParentListController:(id)arg2 ;
-(void)setParentListController:(PSListController *)arg1 ;
-(PSListController *)parentListController;
-(id)specifiers;
@end

