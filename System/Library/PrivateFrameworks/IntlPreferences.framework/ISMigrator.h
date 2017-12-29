/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface ISMigrator : NSObject {

	unsigned _platform;
	NSString* _previousVersion;
	NSString* _currentVersion;
	NSDictionary* _preferencesBeforeMigration;
	NSDictionary* _preferencesAfterMigration;

}

@property (assign,nonatomic) unsigned platform;                                    //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSString * previousVersion;                             //@synthesize previousVersion=_previousVersion - In the implementation block
@property (nonatomic,copy) NSString * currentVersion;                              //@synthesize currentVersion=_currentVersion - In the implementation block
@property (nonatomic,copy) NSDictionary * preferencesBeforeMigration;              //@synthesize preferencesBeforeMigration=_preferencesBeforeMigration - In the implementation block
@property (nonatomic,copy) NSDictionary * preferencesAfterMigration;               //@synthesize preferencesAfterMigration=_preferencesAfterMigration - In the implementation block
+(id)migratorFromVersion:(id)arg1 toVersion:(id)arg2 platform:(unsigned)arg3 ;
+(id)migratorFromVersion:(id)arg1 toVersion:(id)arg2 ;
+(unsigned)currentPlatform;
-(NSString *)previousVersion;
-(void)setPreviousVersion:(NSString *)arg1 ;
-(void)dealloc;
-(void)setPreferencesBeforeMigration:(NSDictionary *)arg1 ;
-(id)performMigrationForPreferences:(id)arg1 ;
-(void)setPreferencesAfterMigration:(NSDictionary *)arg1 ;
-(id)importPreferredLanguagesForPreferences:(id)arg1 ;
-(id)appendRegionalVariantsToLanguageIdentifiers:(id)arg1 regionCode:(id)arg2 ;
-(id)importPreferredLanguages_macOS_10_9_forPreferences:(id)arg1 ;
-(NSDictionary *)preferencesBeforeMigration;
-(NSDictionary *)preferencesAfterMigration;
-(void)setCurrentVersion:(NSString *)arg1 ;
-(void)setPlatform:(unsigned)arg1 ;
-(NSString *)currentVersion;
-(unsigned)platform;
-(char)performMigration;
@end

