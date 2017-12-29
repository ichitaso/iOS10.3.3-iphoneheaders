/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/PlugIns/MobileTimerNotificationExtension.appex/MobileTimerNotificationExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimerNotificationExtension/MobileTimerNotificationExtension-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/UNNotificationContentExtension.h>

@class UIColor, NSDate, MTNotificationView, CADisplayLink, NSString;

@interface MTNotificationViewController : UIViewController <UNNotificationContentExtension> {

	NSDate* _countDownDate;
	MTNotificationView* _noteView;
	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) MTNotificationView * noteView;                               //@synthesize noteView=_noteView - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                 //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) NSDate * countDownDate;                                      //@synthesize countDownDate=_countDownDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned mediaPlayPauseButtonType; 
@property (nonatomic,readonly) CGRect mediaPlayPauseButtonFrame; 
@property (nonatomic,copy,readonly) UIColor * mediaPlayPauseButtonTintColor; 
-(MTNotificationView *)noteView;
-(void)_teardownDisplayLink;
-(void)setCountDownDate:(NSDate *)arg1 ;
-(NSDate *)countDownDate;
-(void)_updateCountDown:(id)arg1 ;
-(void)setNoteView:(MTNotificationView *)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)_setupDisplayLink;
-(void)didReceiveNotification:(id)arg1 ;
@end

