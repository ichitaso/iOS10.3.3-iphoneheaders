/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableSet, NSObject, NSString;

@interface IMFileWatcherPathGroup : NSObject {

	NSMutableSet* _entries;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	char _watchingDirectory;
	NSString* _filePath;

}

@property (nonatomic,readonly) NSString * filePath;                   //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) unsigned numberOfEntries; 
-(id)initWithFilePath:(id)arg1 targetQueue:(id)arg2 ;
-(char)setupSource;
-(void)handleDeleteOrRename;
-(void)handleWrite;
-(void)enqueueBlocksForEntries:(id)arg1 withChange:(int)arg2 ;
-(void)dealloc;
-(void)teardown;
-(NSString *)filePath;
-(char)addEntry:(id)arg1 ;
-(void)removeEntry:(id)arg1 ;
-(unsigned)numberOfEntries;
-(void)invalidateEntries;
@end

