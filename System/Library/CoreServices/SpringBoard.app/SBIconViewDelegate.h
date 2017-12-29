/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconViewDelegate <NSObject>
@optional
-(void)iconHandleLongPress:(id)arg1 withFeedbackBehavior:(id)arg2;
-(void)icon:(id)arg1 touchMoved:(id)arg2;
-(void)icon:(id)arg1 touchEnded:(char)arg2;
-(char)iconShouldAllowTap:(id)arg1;
-(char)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
-(void)iconCloseBoxTapped:(id)arg1;
-(char)iconViewDisplaysBadges:(id)arg1;
-(char)iconViewDisplaysCloseBox:(id)arg1;
-(float)iconLabelWidth;
-(void)iconTapped:(id)arg1;
-(void)iconTouchBegan:(id)arg1;
-(void)icon:(id)arg1 openFolder:(id)arg2 animated:(char)arg3;
-(float)scale;

@end
