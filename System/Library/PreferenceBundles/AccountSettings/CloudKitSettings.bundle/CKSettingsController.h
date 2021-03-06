/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/CloudKitSettings.bundle/CloudKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSMutableDictionary, PSTableCell, NSString;

@interface CKSettingsController : PSListController <UINavigationControllerDelegate> {

	NSMutableDictionary* _enabledByAppID;
	PSTableCell* _serviceSectionCell;

}

@property (nonatomic,retain) NSMutableDictionary * enabledByAppID;              //@synthesize enabledByAppID=_enabledByAppID - In the implementation block
@property (nonatomic,retain) PSTableCell * serviceSectionCell;                  //@synthesize serviceSectionCell=_serviceSectionCell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudKitNumAppGroups;
-(NSMutableDictionary *)enabledByAppID;
-(void)setAppPermissionEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setEnabledByAppID:(NSMutableDictionary *)arg1 ;
-(id)appPermissionEnabledForSpecifier:(id)arg1 ;
-(PSTableCell *)serviceSectionCell;
-(void)setServiceSectionCell:(PSTableCell *)arg1 ;
-(char)_isApplicationHiddenFromSettings:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(id)specifiers;
@end

