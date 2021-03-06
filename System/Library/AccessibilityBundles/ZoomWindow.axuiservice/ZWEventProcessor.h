/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <AccessibilityUtilities/AXEventProcessor.h>
#import <ZoomWindow/ZOTFullscreenEventHandlerDelegate.h>
#import <ZoomWindow/ZWLensAutopannerDataSource.h>

@protocol ZWEventProcessorDelegate;
@class ZOTFullscreenEventHandler, SCRCThread, NSString;

@interface ZWEventProcessor : AXEventProcessor <ZOTFullscreenEventHandlerDelegate, ZWLensAutopannerDataSource> {

	id<ZWEventProcessorDelegate> _delegate;
	ZOTFullscreenEventHandler* _fullscreenEventHandler;
	SCRCThread* _hidPostThread;
	CGPoint _currentTouchOffset;

}

@property (nonatomic,retain) SCRCThread * hidPostThread;                                        //@synthesize hidPostThread=_hidPostThread - In the implementation block
@property (assign,nonatomic) CGPoint currentTouchOffset;                                        //@synthesize currentTouchOffset=_currentTouchOffset - In the implementation block
@property (assign,nonatomic) id<ZWEventProcessorDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ZOTFullscreenEventHandler * fullscreenEventHandler;              //@synthesize fullscreenEventHandler=_fullscreenEventHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setCurrentTouchOffset:(CGPoint)arg1 ;
-(void)setHidPostThread:(SCRCThread *)arg1 ;
-(void)sendCancelEventToAppDirectlyWithSenderID:(unsigned long long)arg1 ;
-(CGPoint)currentTouchOffset;
-(void)_sendCancelEventToAppDirectlyWithSenderID:(id)arg1 ;
-(void)_adjustThreadPriority;
-(void)dispatchEntireEventQueue;
-(SCRCThread *)hidPostThread;
-(void)postHandCancelWithSenderID:(unsigned long long)arg1 ;
-(void)dispatchEventToSystem:(id)arg1 ;
-(void)resetEventQueue;
-(void)disableSleepTimer:(char)arg1 ;
-(CGPoint)offsetForAutopanner:(id)arg1 ;
-(char)offsetValuesAreNormalizedForAutopanner:(id)arg1 ;
-(ZOTFullscreenEventHandler *)fullscreenEventHandler;
-(id)init;
-(void)setDelegate:(id<ZWEventProcessorDelegate>)arg1 ;
-(void)dealloc;
-(id<ZWEventProcessorDelegate>)delegate;
-(id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4 ;
-(char)_handleEvent:(id)arg1 ;
@end

