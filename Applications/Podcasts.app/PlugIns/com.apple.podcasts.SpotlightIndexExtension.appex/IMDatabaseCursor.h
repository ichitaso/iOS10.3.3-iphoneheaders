/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
@class NSMutableArray;

@interface IMDatabaseCursor : NSObject {

	NSMutableArray* _results;
	int _numColumns;
	sqlite3_stmtRef _statement;
	id* _columnNames;
	id* _columnTypes;
	char _closed;

}
-(id)nextRowAsArray;
-(id)nextRowAsDictionary;
-(id)_undeclaredTypeForColumnIndex:(int)arg1 ;
-(id)initWithQuery:(id)arg1 databaseHandle:(id)arg2 ;
-(void)dealloc;
-(char)reset;
-(char)close;
-(id)results;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)columnTypeAtIndex:(int)arg1 ;
-(id)columnNameAtIndex:(int)arg1 ;
-(sqlite3_stmtRef)statement;
-(int)columnCount;
-(int)rowCount;
@end

