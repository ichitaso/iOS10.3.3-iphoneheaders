/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardImplGeometryDelegate
@property (assign,getter=isMinimized,nonatomic) char minimized; 
@required
-(char)isActive;
-(char)isMinimized;
-(char)shouldSaveMinimizationState;
-(void)setMinimized:(char)arg1;
-(char)isAutomatic;
-(char)canDismiss;
-(void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(char)arg2;
-(void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(char)arg2;

@end

