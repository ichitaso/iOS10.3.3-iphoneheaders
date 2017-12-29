/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/CacheDeleteDaily
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OperationState : NSObject {

	BOOL _operationCancelled;
	NSObject*<OS_dispatch_queue> _queue;
	int _operationRefcount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL operationCancelled;                                   //@synthesize operationCancelled=_operationCancelled - In the implementation block
@property (assign) int operationRefcount;                                     //@synthesize operationRefcount=_operationRefcount - In the implementation block
-(BOOL)operationCancelled;
-(void)setOperationCancelled:(BOOL)arg1 ;
-(int)operationRefcount;
-(void)setOperationRefcount:(int)arg1 ;
-(id)init;
-(void)cancel;
-(void)end;
-(char)cancelled;
-(char)begin;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

