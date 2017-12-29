/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/OSLogPersistenceDelegate.h>

@class NSMutableArray, OSLogPersistence, NSURL, NSDate, NSString;

@interface FBAOSLogViewerDataSource : NSObject <OSLogPersistenceDelegate> {

	char _foundCorruptDate;
	NSMutableArray* _savedEvents;
	NSMutableArray* _cachedEventStrings;
	OSLogPersistence* _loggerLib;
	NSURL* _logArchivePath;
	NSDate* _lastReadDate;
	unsigned _currentFetchCount;
	/*^block*/id _pageFetchCompletion;
	/*^block*/id _fetchCompletion;
	/*^block*/id _fetchErrorBlock;
	int _pageSize;
	int _pendingNextPageRequest;
	int _eventsReadCount;
	int _pageWatchdog;
	unsigned long long _highestEventMach;

}

@property (retain) OSLogPersistence * loggerLib;                     //@synthesize loggerLib=_loggerLib - In the implementation block
@property (retain) NSURL * logArchivePath;                           //@synthesize logArchivePath=_logArchivePath - In the implementation block
@property (retain) NSDate * lastReadDate;                            //@synthesize lastReadDate=_lastReadDate - In the implementation block
@property (assign) unsigned currentFetchCount;                       //@synthesize currentFetchCount=_currentFetchCount - In the implementation block
@property (assign) unsigned long long highestEventMach;              //@synthesize highestEventMach=_highestEventMach - In the implementation block
@property (copy) id pageFetchCompletion;                             //@synthesize pageFetchCompletion=_pageFetchCompletion - In the implementation block
@property (copy) id fetchCompletion;                                 //@synthesize fetchCompletion=_fetchCompletion - In the implementation block
@property (copy) id fetchErrorBlock;                                 //@synthesize fetchErrorBlock=_fetchErrorBlock - In the implementation block
@property (assign) int pageSize;                                     //@synthesize pageSize=_pageSize - In the implementation block
@property (assign) int pendingNextPageRequest;                       //@synthesize pendingNextPageRequest=_pendingNextPageRequest - In the implementation block
@property (assign) int eventsReadCount;                              //@synthesize eventsReadCount=_eventsReadCount - In the implementation block
@property (assign) int pageWatchdog;                                 //@synthesize pageWatchdog=_pageWatchdog - In the implementation block
@property (retain) NSMutableArray * savedEvents;                     //@synthesize savedEvents=_savedEvents - In the implementation block
@property (retain) NSMutableArray * cachedEventStrings;              //@synthesize cachedEventStrings=_cachedEventStrings - In the implementation block
@property (assign) char foundCorruptDate;                            //@synthesize foundCorruptDate=_foundCorruptDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPageFetchCompletion:(id)arg1 ;
-(void)setFetchErrorBlock:(id)arg1 ;
-(void)setLogArchivePath:(NSURL *)arg1 ;
-(id)loggerLibWithArchive:(id)arg1 pageSize:(unsigned)arg2 ;
-(void)setLoggerLib:(OSLogPersistence *)arg1 ;
-(OSLogPersistence *)loggerLib;
-(void)setSavedEvents:(NSMutableArray *)arg1 ;
-(void)setCachedEventStrings:(NSMutableArray *)arg1 ;
-(void)setHighestEventMach:(unsigned long long)arg1 ;
-(void)setPendingNextPageRequest:(int)arg1 ;
-(void)setEventsReadCount:(int)arg1 ;
-(void)setFoundCorruptDate:(char)arg1 ;
-(void)setPageWatchdog:(int)arg1 ;
-(id)fetchErrorBlock;
-(NSURL *)logArchivePath;
-(void)setCurrentFetchCount:(unsigned)arg1 ;
-(int)pendingNextPageRequest;
-(NSMutableArray *)cachedEventStrings;
-(int)eventsReadCount;
-(unsigned)currentFetchCount;
-(char)isDateCorrupt:(id)arg1 ;
-(unsigned long long)highestEventMach;
-(NSMutableArray *)savedEvents;
-(int)pageWatchdog;
-(char)foundCorruptDate;
-(char)isCurrentPageComplete;
-(char)hasMoreLogs;
-(id)pageFetchCompletion;
-(id)initWithArchive:(id)arg1 fetchCompletion:(/*^block*/id)arg2 pageCompletion:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)setpageSize:(unsigned)arg1 ;
-(int)numberOfLogs;
-(id)logAtIndex:(int)arg1 ;
-(void)dealloc;
-(id)fetchCompletion;
-(void)setFetchCompletion:(id)arg1 ;
-(void)setLastReadDate:(NSDate *)arg1 ;
-(NSDate *)lastReadDate;
-(void)fetchNextBatch;
-(void)setPageSize:(int)arg1 ;
-(int)pageSize;
-(void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2 ;
-(char)persistence:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)nextPage;
@end
