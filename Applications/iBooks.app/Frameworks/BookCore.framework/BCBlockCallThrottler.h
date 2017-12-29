/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface BCBlockCallThrottler : NSObject {

	char _running;
	NSDate* _lastBlockCallDate;
	double _minimumTimeBetweenCalls;

}

@property (nonatomic,retain) NSDate * lastBlockCallDate;                  //@synthesize lastBlockCallDate=_lastBlockCallDate - In the implementation block
@property (assign,nonatomic) char running;                                //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) double minimumTimeBetweenCalls;              //@synthesize minimumTimeBetweenCalls=_minimumTimeBetweenCalls - In the implementation block
-(char)_runBlock:(/*^block*/id)arg1 withThrottling:(char)arg2 ;
-(char)runBlockThrottled:(/*^block*/id)arg1 ;
-(double)minimumTimeBetweenCalls;
-(void)setMinimumTimeBetweenCalls:(double)arg1 ;
-(NSDate *)lastBlockCallDate;
-(void)setLastBlockCallDate:(NSDate *)arg1 ;
-(id)init;
-(void)runBlock:(/*^block*/id)arg1 ;
-(char)running;
-(void)setRunning:(char)arg1 ;
@end

