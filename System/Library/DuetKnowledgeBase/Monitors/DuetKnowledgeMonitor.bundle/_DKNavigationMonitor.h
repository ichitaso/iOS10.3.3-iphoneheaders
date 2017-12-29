/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@interface _DKNavigationMonitor : _DKMonitor {

	char _enabled;
	char _navigating;
	int _startedToken;
	int _stoppedToken;

}

@property (assign,nonatomic) char enabled;                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char navigating;               //@synthesize navigating=_navigating - In the implementation block
@property (assign,nonatomic) int startedToken;              //@synthesize startedToken=_startedToken - In the implementation block
@property (assign,nonatomic) int stoppedToken;              //@synthesize stoppedToken=_stoppedToken - In the implementation block
+(id)eventStream;
+(id)entitlements;
+(void)setIsNavigating:(char)arg1 ;
-(void)setNavigationStatus:(char)arg1 ;
-(int)stoppedToken;
-(int)startedToken;
-(void)setStartedToken:(int)arg1 ;
-(void)setStoppedToken:(int)arg1 ;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)setNavigating:(char)arg1 ;
-(char)navigating;
-(id)loadState;
-(void)saveState;
@end

