/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSLocale, NSString, PSSpecifier, NSArray, NSMutableArray;

@interface InternationalSettingsController : PSListController {

	NSLocale* _locale;
	char _shouldReloadSpecifiers;
	unsigned _deviceLanguageIndex;
	NSString* _topMostLanguage;
	char _changePrimaryLanguage;
	PSSpecifier* _addLanguageSpecifier;
	NSArray* _deviceLanguageGroup;
	NSArray* _preferredLanguagesGroup;
	NSArray* _regionFormatGroup;
	NSArray* _regionFormatExampleGroup;
	NSMutableArray* _updatedAppleLanguages;
	PSSpecifier* _numberingSystemSpecifier;

}

@property (nonatomic,retain) PSSpecifier * addLanguageSpecifier;                  //@synthesize addLanguageSpecifier=_addLanguageSpecifier - In the implementation block
@property (nonatomic,retain) NSArray * deviceLanguageGroup;                       //@synthesize deviceLanguageGroup=_deviceLanguageGroup - In the implementation block
@property (nonatomic,retain) NSArray * preferredLanguagesGroup;                   //@synthesize preferredLanguagesGroup=_preferredLanguagesGroup - In the implementation block
@property (nonatomic,retain) NSArray * regionFormatGroup;                         //@synthesize regionFormatGroup=_regionFormatGroup - In the implementation block
@property (nonatomic,retain) NSArray * regionFormatExampleGroup;                  //@synthesize regionFormatExampleGroup=_regionFormatExampleGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedAppleLanguages;              //@synthesize updatedAppleLanguages=_updatedAppleLanguages - In the implementation block
@property (assign,nonatomic) char changePrimaryLanguage;                          //@synthesize changePrimaryLanguage=_changePrimaryLanguage - In the implementation block
@property (nonatomic,retain) PSSpecifier * numberingSystemSpecifier;              //@synthesize numberingSystemSpecifier=_numberingSystemSpecifier - In the implementation block
@property (assign,nonatomic) char shouldReloadSpecifiers;                         //@synthesize shouldReloadSpecifiers=_shouldReloadSpecifiers - In the implementation block
+(id)formattedTime:(id)arg1 ;
+(id)reloadLocale:(id)arg1 ;
+(id)effectiveSystemLanguagesWithUnsupportedVariant:(char)arg1 forPreferredLanguages:(id)arg2 ;
+(id)formattedMoneyAndNumbers:(id)arg1 country:(id)arg2 ;
+(char)capitalizeLanguageNames;
+(void)syncPreferencesAndPostNotificationForLanguageChange;
+(void)syncPreferencesForLanguageOrLocaleChange;
+(void)postNotificationForLanguageChange;
+(void)writeLanguageAndLocaleConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
+(id)baseLanguageIdentifierFromLanguageList:(id)arg1 ;
+(void)setLanguage:(id)arg1 ;
+(id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1 ;
+(id)formattedDate:(id)arg1 ;
+(double)sampleTime;
+(void)setPreferredLanguages:(id)arg1 ;
-(void)toggleEdit;
-(void)logStatistics;
-(void)changeLanguage:(id)arg1 ;
-(void)reloadLocale;
-(void)initializeUpdatedAppleLanguagesIfNeeded;
-(char)canEditLanguageAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(PSSpecifier *)numberingSystemSpecifier;
-(void)setNumberingSystemSpecifier:(PSSpecifier *)arg1 ;
-(unsigned)sectionIndexForTableView:(id)arg1 fromSuperSectionIndex:(unsigned)arg2 ;
-(char)shouldReloadSpecifiers;
-(NSMutableArray *)updatedAppleLanguages;
-(void)updateCell:(id)arg1 forPreferredLanguageAtIndex:(unsigned)arg2 ;
-(void)setUpdatedAppleLanguages:(NSMutableArray *)arg1 ;
-(id)numberingSystemsValues;
-(void)showOfficialLanguageSheet:(id)arg1 ;
-(void)cancelChangeLanguage:(id)arg1 ;
-(NSArray *)deviceLanguageGroup;
-(NSArray *)regionFormatGroup;
-(NSArray *)regionFormatExampleGroup;
-(PSSpecifier *)addLanguageSpecifier;
-(void)setDeviceLanguageGroup:(NSArray *)arg1 ;
-(void)setRegionFormatGroup:(NSArray *)arg1 ;
-(void)setRegionFormatExampleGroup:(NSArray *)arg1 ;
-(void)setPreferredLanguagesGroup:(NSArray *)arg1 ;
-(void)setAddLanguageSpecifier:(PSSpecifier *)arg1 ;
-(void)updateSelectionStyleForVisibleCells;
-(void)updateSpecifiersForLocaleRegionChange:(id)arg1 ;
-(id)calendar:(id)arg1 ;
-(id)language:(id)arg1 ;
-(id)locale:(id)arg1 ;
-(void)showLocaleSheet:(id)arg1 ;
-(void)showLanguageSheet:(id)arg1 ;
-(id)localizedLanguage:(id)arg1 ;
-(void)setCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)temperatureUnit:(id)arg1 ;
-(void)setTemperatureUnit:(id)arg1 specifier:(id)arg2 ;
-(id)numberingSystem:(id)arg1 ;
-(void)setNumberingSystem:(id)arg1 specifier:(id)arg2 ;
-(id)numberingSystemsTitles;
-(id)numberingSystemsShortTitles;
-(id)currentCalendarDisplayString;
-(void)setShouldReloadSpecifiers:(char)arg1 ;
-(NSArray *)preferredLanguagesGroup;
-(char)changePrimaryLanguage;
-(void)setChangePrimaryLanguage:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(char)shouldReloadSpecifiersOnResume;
-(void)cancelEdits;
-(id)specifiers;
@end

