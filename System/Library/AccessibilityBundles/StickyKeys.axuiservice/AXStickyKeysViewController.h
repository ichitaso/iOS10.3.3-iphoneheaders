/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/StickyKeys.axuiservice/StickyKeys
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@interface AXStickyKeysViewController : UIViewController
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(char)updateWithKeycode:(unsigned short)arg1 usagePage:(unsigned)arg2 state:(int)arg3 ;
-(void)_removeCapsLockIfNeeded;
-(id)_stringForKeycode:(unsigned short)arg1 usagePage:(unsigned)arg2 ;
-(id)_stickyKeysView;
-(id)init;
-(void)dealloc;
-(void)loadView;
@end
