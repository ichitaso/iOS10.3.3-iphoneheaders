/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VOTAXNotificationRouterDelegate;
@class AXAccessQueue, VOTAXNotificationTimer, NSArray;

@interface VOTAXNotificationRouter : NSObject {

	id<VOTAXNotificationRouterDelegate> _delegate;
	AXAccessQueue* _noteQueue;
	VOTAXNotificationTimer* _firstResponderChangedTimer;
	VOTAXNotificationTimer* _nativeFocusItemChangedTimer;
	VOTAXNotificationTimer* _screenChangedTimer;
	VOTAXNotificationTimer* _layoutChangedTimer;
	VOTAXNotificationTimer* _applicationActivatedTimer;
	VOTAXNotificationTimer* _valueChangedTimer;
	NSArray* _coalesceTimers;

}

@property (nonatomic,retain) AXAccessQueue * noteQueue;                                         //@synthesize noteQueue=_noteQueue - In the implementation block
@property (nonatomic,retain) VOTAXNotificationTimer * firstResponderChangedTimer;               //@synthesize firstResponderChangedTimer=_firstResponderChangedTimer - In the implementation block
@property (nonatomic,retain) VOTAXNotificationTimer * nativeFocusItemChangedTimer;              //@synthesize nativeFocusItemChangedTimer=_nativeFocusItemChangedTimer - In the implementation block
@property (nonatomic,retain) VOTAXNotificationTimer * screenChangedTimer;                       //@synthesize screenChangedTimer=_screenChangedTimer - In the implementation block
@property (nonatomic,retain) VOTAXNotificationTimer * layoutChangedTimer;                       //@synthesize layoutChangedTimer=_layoutChangedTimer - In the implementation block
@property (nonatomic,retain) VOTAXNotificationTimer * applicationActivatedTimer;                //@synthesize applicationActivatedTimer=_applicationActivatedTimer - In the implementation block
@property (nonatomic,retain) VOTAXNotificationTimer * valueChangedTimer;                        //@synthesize valueChangedTimer=_valueChangedTimer - In the implementation block
@property (nonatomic,retain) NSArray * coalesceTimers;                                          //@synthesize coalesceTimers=_coalesceTimers - In the implementation block
@property (assign,nonatomic) id<VOTAXNotificationRouterDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
-(void)handleNotification:(int)arg1 withData:(id)arg2 ;
-(void)setNativeFocusItemChangedTimer:(VOTAXNotificationTimer *)arg1 ;
-(void)setApplicationActivatedTimer:(VOTAXNotificationTimer *)arg1 ;
-(void)setValueChangedTimer:(VOTAXNotificationTimer *)arg1 ;
-(void)setScreenChangedTimer:(VOTAXNotificationTimer *)arg1 ;
-(void)setLayoutChangedTimer:(VOTAXNotificationTimer *)arg1 ;
-(void)setFirstResponderChangedTimer:(VOTAXNotificationTimer *)arg1 ;
-(void)setCoalesceTimers:(NSArray *)arg1 ;
-(void)setNoteQueue:(AXAccessQueue *)arg1 ;
-(void)_scheduleAXNotification:(int)arg1 withData:(id)arg2 ;
-(id)_timerForAXNotification:(int)arg1 ;
-(NSArray *)coalesceTimers;
-(id)initWithThreadKey:(id)arg1 ;
-(AXAccessQueue *)noteQueue;
-(VOTAXNotificationTimer *)firstResponderChangedTimer;
-(VOTAXNotificationTimer *)nativeFocusItemChangedTimer;
-(VOTAXNotificationTimer *)screenChangedTimer;
-(VOTAXNotificationTimer *)layoutChangedTimer;
-(VOTAXNotificationTimer *)applicationActivatedTimer;
-(VOTAXNotificationTimer *)valueChangedTimer;
-(void)setDelegate:(id<VOTAXNotificationRouterDelegate>)arg1 ;
-(void)dealloc;
-(id<VOTAXNotificationRouterDelegate>)delegate;
@end

