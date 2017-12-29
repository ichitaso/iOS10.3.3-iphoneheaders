/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusTest.h>

@class UIWindow;

@interface _UIFocusSwipeTest : _UIFocusTest {

	unsigned _eventCount;
	SCD_Struct_UI87* _events;
	UIWindow* _window;
	int _swipeAxis;

}

@property (assign,nonatomic,__weak) UIWindow * window;              //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) int swipeAxis;                         //@synthesize swipeAxis=_swipeAxis - In the implementation block
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)main;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)swipeAxis;
-(void)setSwipeAxis:(int)arg1 ;
@end

