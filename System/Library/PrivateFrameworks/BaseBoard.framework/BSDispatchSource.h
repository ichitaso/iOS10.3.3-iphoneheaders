/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class NSObject;

@interface BSDispatchSource : NSObject {

	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _queue;
	char _invalidated;
	/*^block*/id _eventHandler;
	/*^block*/id _cancelHandler;

}

@property (nonatomic,copy) id eventHandler;                                            //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                           //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)initWithType:(dispatch_source_type_sRef)arg1 handle:(unsigned long)arg2 mask:(unsigned long)arg3 queue:(id)arg4 configureSourceBlock:(/*^block*/id)arg5 ;
-(void)invalidate;
-(void)dealloc;
-(void)setCancelHandler:(id)arg1 ;
-(void)resume;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)cancelHandler;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
@end

