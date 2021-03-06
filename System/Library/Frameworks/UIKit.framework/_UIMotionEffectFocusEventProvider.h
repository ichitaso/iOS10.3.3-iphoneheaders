/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIMotionEffectEventProvider.h>

@interface _UIMotionEffectFocusEventProvider : _UIMotionEffectEventProvider {

	char _isGeneratingEvents;
	CGPoint _focusPosition;
	CGPoint _lastReportedPosition;

}

@property (assign,nonatomic) CGPoint focusPosition; 
+(id)sharedInstance;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setFocusPosition:(CGPoint)arg1 ;
-(char)wantsSynchronizedUpdates;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;
-(id)currentEvent;
-(CGPoint)focusPosition;
@end

