/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class NSObject, NSCache, NSHashTable;

@interface BSSqliteDatabaseConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	sqlite3Ref _queue_dbConnection;
	NSCache* _queue_queryCache;
	NSHashTable* _queue_observers;

}
+(int)_sqliteOpenFlagsForDataProtectionClass:(unsigned)arg1 ;
-(void)performSyncWithDatabase:(/*^block*/id)arg1 ;
-(id)_initWithSqlitePath:(id)arg1 dataProtectionClass:(unsigned)arg2 ;
-(id)_sqliteErrorForResult:(int)arg1 errorMessage:(id)arg2 ;
-(void)_queue_close;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)close;
-(void)performWithDatabase:(/*^block*/id)arg1 ;
-(id)prepareStatement:(id)arg1 ;
-(id)lastErrorMessage;
-(id)initWithInMemoryDatabase;
-(id)initWithFileURL:(id)arg1 dataProtectionClass:(unsigned)arg2 ;
-(char)truncateDatabaseAndReturnError:(out id*)arg1 ;
@end

