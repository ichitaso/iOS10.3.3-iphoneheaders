/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class AXSwitchRecipe, AXSwitchRecipeMapping;

@interface SCATRecipeSwitchesController : AccessibilityBaseListController {

	AXSwitchRecipe* _recipe;
	AXSwitchRecipeMapping* _mapping;

}

@property (nonatomic,retain) AXSwitchRecipe * recipe;                      //@synthesize recipe=_recipe - In the implementation block
@property (nonatomic,retain) AXSwitchRecipeMapping * mapping;              //@synthesize mapping=_mapping - In the implementation block
-(char)_isForExistingMappingWithMissingSwitch;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(AXSwitchRecipeMapping *)mapping;
-(void)setRecipe:(AXSwitchRecipe *)arg1 ;
-(AXSwitchRecipe *)recipe;
-(void)setMapping:(AXSwitchRecipeMapping *)arg1 ;
-(id)specifiers;
@end

