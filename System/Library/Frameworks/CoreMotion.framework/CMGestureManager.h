/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMGestureManager : NSObject {

	id _internal;

}

@property (copy) id gestureHandler; 
+(char)isGestureServiceEnabled;
+(void)setGestureServiceEnabled:(char)arg1 ;
+(char)isGestureServiceAvailable;
-(id)init;
-(void)dealloc;
-(void)setGestureHandler:(id)arg1 ;
-(id)initWithPriority:(int)arg1 ;
-(id)gestureHandler;
@end

