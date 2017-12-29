/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMDatabaseHandle;

@interface IMAdminTable : NSObject {

	IMDatabaseHandle* _db;

}
-(id)initWithDatabaseHandle:(id)arg1 ;
-(char)hasDatabaseVersion;
-(void)setProperty:(id)arg1 forKey:(id)arg2 domain:(id)arg3 ;
-(id)numberValueForKey:(id)arg1 domain:(id)arg2 ;
-(id)blobValueForKey:(id)arg1 domain:(id)arg2 ;
-(id)stringValueForKey:(id)arg1 domain:(id)arg2 ;
-(void)setDatabaseVersion:(int)arg1 ;
-(int)databaseVersion;
-(void)setLastAccessDate:(id)arg1 ;
-(id)lastAccessDate;
@end

