/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIMotionEffectEventConsumer;
@interface _UIMotionEffectEventProvider : NSObject {

	id<_UIMotionEffectEventConsumer> _consumer;

}

@property (assign) id<_UIMotionEffectEventConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(void)setConsumer:(id<_UIMotionEffectEventConsumer>)arg1 ;
-(char)shouldLogEvents;
-(double)fastUpdateIntervalForLogs;
-(double)slowUpdateIntervalForLogs;
-(void)setSlowUpdatesEnabled:(char)arg1 ;
-(char)wantsSynchronizedUpdates;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;
-(id)currentEvent;
-(id<_UIMotionEffectEventConsumer>)consumer;
@end

