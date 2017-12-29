/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {

	char _connected;
	char _shouldAnimateConnection;

}
-(id)contentsImage;
-(void)setVisible:(char)arg1 ;
-(char)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)performPendedActions;
-(float)alphaForConnected:(char)arg1 ;
-(void)_blinkAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
@end

