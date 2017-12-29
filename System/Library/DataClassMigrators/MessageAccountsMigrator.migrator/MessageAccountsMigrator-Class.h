/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MessageAccountsMigrator.migrator/MessageAccountsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ACAccountStore;

@interface MessageAccountsMigrator : DataClassMigrator {

	ACAccountStore* _accountStore;

}
-(char)_saveAccounts:(id)arg1 ;
-(char)_removeAccounts:(id)arg1 ;
-(char)removeSMTPAccountsThatShouldBeDynamic;
-(float)migrationProgress;
-(id)init;
-(void)dealloc;
-(id)initWithAccountStore:(id)arg1 ;
-(float)estimatedDuration;
-(id)dataClassName;
-(char)performMigration;
@end
