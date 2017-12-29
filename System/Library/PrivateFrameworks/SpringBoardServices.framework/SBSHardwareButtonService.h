/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@class NSMutableArray;

@interface SBSHardwareButtonService : SBSAbstractSystemService {

	NSMutableArray* _consumers;
	unsigned _eventMask;
	int _maximumPriority;

}

@property (nonatomic,retain) NSMutableArray * consumers;              //@synthesize consumers=_consumers - In the implementation block
@property (assign,nonatomic) unsigned eventMask;                      //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) int maximumPriority;                     //@synthesize maximumPriority=_maximumPriority - In the implementation block
+(id)sharedInstance;
-(void)consumerInfoWillInvalidate:(id)arg1 ;
-(void)_setApplicationClientEventMask:(unsigned)arg1 priority:(int)arg2 ;
-(void)_resetEventMask;
-(id)_viableConsumerForEvent:(int)arg1 priority:(int)arg2 ;
-(void)_addEventConsumerInfo:(id)arg1 ;
-(void)_mainQueue_handleButtonPressMessage:(int)arg1 forButtonKind:(int)arg2 priority:(int)arg3 ;
-(void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleButtonPressMessage:(int)arg1 forButtonKind:(int)arg2 priority:(int)arg3 ;
-(void)setConsumers:(NSMutableArray *)arg1 ;
-(int)maximumPriority;
-(void)setMaximumPriority:(int)arg1 ;
-(id)description;
-(unsigned)eventMask;
-(void)setEventMask:(unsigned)arg1 ;
-(NSMutableArray *)consumers;
-(void)fetchHapticTypeForButtonKind:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHapticType:(int)arg1 forButtonKind:(int)arg2 ;
-(id)beginConsumingPressesForButtonKind:(int)arg1 eventConsumer:(id)arg2 priority:(int)arg3 ;
@end

