/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAlertView.h>

@interface _UIUserNotificationAlertView : UIAlertView {

	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _userNotificationRunLoopSource;
	char _runsModal;
	char _runningModal;
	id _strongDelegate;
	id _retainedSelf;

}
+(void)initialize;
-(void)show;
-(void)dealloc;
-(void)dismissWithClickedButtonIndex:(int)arg1 animated:(char)arg2 ;
-(int)addButtonWithTitle:(id)arg1 ;
-(char)isVisible;
-(char)runsModal;
-(id)textFieldAtIndex:(int)arg1 ;
-(void)setRunsModal:(char)arg1 ;
-(void)setRemoteViewController:(id)arg1 ;
-(void)_removeObservervations;
-(void)cancelAlertView;
-(void)_cancelUserNotification;
-(void)setHostedWindow:(id)arg1 ;
@end

