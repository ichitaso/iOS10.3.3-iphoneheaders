/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSSqliteDatabaseConnection;

@interface BSSqlitePreparedStatement : NSObject {

	BSSqliteDatabaseConnection* _dbConnection;

}
+(id)_newPreparedStatementForDatabaseConnection:(id)arg1 withSQLQuery:(id)arg2 ;
-(id)_initWithDatabaseConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
@end

