/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSFuture.h>

@protocol BSFuture <NSObject>
@property (getter=isFinished,readonly) char finished; 
@property (getter=isCancelled,readonly) char cancelled; 
@required
-(char)cancel;
-(char)isCancelled;
-(char)isFinished;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(id)result:(id*)arg1;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;

@end


@class NSConditionLock, NSError, NSMutableArray, NSString;

@interface BSFuture : NSObject <BSFuture> {

	NSConditionLock* _stateLock;
	id _result;
	NSError* _error;
	NSMutableArray* _completionBlocks;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) char finished; 
@property (getter=isCancelled,readonly) char cancelled; 
-(char)_nts_isFinished;
-(void)_flushCompletionBlocks;
-(void)_addCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(char)cancel;
-(void)dealloc;
-(char)isCancelled;
-(char)isFinished;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)result:(id*)arg1 ;
-(char)finishWithResult:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)didCancel;
-(char)finishWithResult:(id)arg1 error:(id)arg2 ;
-(char)finishWithError:(id)arg1 ;
@end

