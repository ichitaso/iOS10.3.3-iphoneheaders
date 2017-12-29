/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _BCTransaction, NSMutableArray;

@interface BCTransactionQueue : NSObject {

	unsigned _options;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _sync;
	_BCTransaction* _activeTransaction;
	NSMutableArray* _pendingTransactions;
	NSMutableArray* _blocksToProcess;

}

@property (assign,nonatomic) unsigned options;                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sync;                 //@synthesize sync=_sync - In the implementation block
@property (nonatomic,retain) _BCTransaction * activeTransaction;                //@synthesize activeTransaction=_activeTransaction - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingTransactions;              //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * blocksToProcess;                  //@synthesize blocksToProcess=_blocksToProcess - In the implementation block
+(id)newWithOptions:(unsigned)arg1 queue:(id)arg2 ;
-(void)_processTransaction:(id)arg1 ;
-(id)initWithOptions:(unsigned)arg1 queue:(id)arg2 ;
-(id)newTransactionWithName:(id)arg1 info:(id)arg2 ;
-(NSMutableArray *)blocksToProcess;
-(void)_process;
-(void)sq_removeFinishedTransactions;
-(void)sq_activateTransactions;
-(id)newTransaction;
-(void)setBlocksToProcess:(NSMutableArray *)arg1 ;
-(unsigned)options;
-(void)setOptions:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSync:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)sync;
-(NSMutableArray *)pendingTransactions;
-(void)setPendingTransactions:(NSMutableArray *)arg1 ;
-(void)setActiveTransaction:(_BCTransaction *)arg1 ;
-(_BCTransaction *)activeTransaction;
@end

