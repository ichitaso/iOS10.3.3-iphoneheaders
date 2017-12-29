/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4003.appex/Diagnostic-4003
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DAHIDEventMonitorDelegate, OS_dispatch_queue;
#import <Diagnostic-4003/Diagnostic-4003-Structs.h>
@class NSObject, NSMutableArray;

@interface DAHIDEventMonitor : NSObject {

	IOHIDEventSystemClientRef _HIDSystemClient;
	char _currentlyMonitoring;
	id<DAHIDEventMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _mHIDEventQueue;
	NSMutableArray* _HIDEvents;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mHIDEventQueue;                //@synthesize mHIDEventQueue=_mHIDEventQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * HIDEvents;                                 //@synthesize HIDEvents=_HIDEvents - In the implementation block
@property (assign,nonatomic) char currentlyMonitoring;                                   //@synthesize currentlyMonitoring=_currentlyMonitoring - In the implementation block
@property (assign,nonatomic,__weak) id<DAHIDEventMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(char)currentlyMonitoring;
-(char)startMonitoringWithHIDEvents:(id)arg1 ;
-(char)serviceClientSetPropertyValue:(void*)arg1 forKey:(CFStringRef)arg2 forHIDEvent:(unsigned)arg3 ;
-(NSMutableArray *)HIDEvents;
-(NSObject*<OS_dispatch_queue>)mHIDEventQueue;
-(char)systemClientSetupWithHIDEvents:(id)arg1 ;
-(char)findServiceClientForHIDEvent:(id)arg1 ;
-(void)setMHIDEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCurrentlyMonitoring:(char)arg1 ;
-(void)cleanUpSystemClient;
-(void)setHIDEvents:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setDelegate:(id<DAHIDEventMonitorDelegate>)arg1 ;
-(id<DAHIDEventMonitorDelegate>)delegate;
-(void)stopMonitoring;
@end

