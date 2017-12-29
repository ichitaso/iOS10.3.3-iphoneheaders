/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/PlugIns/CalendarWidget.appex/CalendarWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKDayViewDelegate <NSObject>
@optional
-(void)dayViewDidFinishScrollingToOccurrence:(id)arg1;
-(void)dayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(void)dayView:(id)arg1 didUpdateScrollPosition:(CGPoint)arg2;
-(void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned)arg2;
-(void)dayView:(id)arg1 didScaleDayViewWithScale:(float)arg2;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2;
-(void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)dayViewDidTapEmptySpace:(id)arg1;
-(void)dayView:(id)arg1 isPinchingDayViewWithScale:(float)arg2;

@end

