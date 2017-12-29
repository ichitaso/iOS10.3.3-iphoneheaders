/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKEventGestureControllerDelegate <NSObject>
@optional
-(UIEdgeInsets*)pageChangeMarginsForEventGestureController:(id)arg1;
-(float)horizontalOffsetForPagingForEventGestureController:(id)arg1;
-(float)computeXDragOffsetForEventGestureController:(id)arg1 currentX:(float)arg2 startX:(float)arg3;
-(char)moreThanOneDayVisibleForEventGestureController:(id)arg1;
-(char)hasCorrectParentForDraggingView:(id)arg1 isAllDay:(char)arg2;
-(char)eventGestureControllerShouldAllowLongPress:(id)arg1;
-(float)eventGestureController:(id)arg1 convertXForMargin:(float)arg2;
-(CGRect*)marginFrameForEventGestureController:(id)arg1;
-(char)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1;
-(char)eventGestureController:(id)arg1 shouldFadeOccurrenceAfterFling:(id)arg2;

@required
-(id)currentPresentationController;
-(float)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned)arg2;
-(float)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(char)arg3;
-(CGPoint*)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(char)arg3;
-(id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(CGPoint)arg2;
-(id)touchTrackingViewForEventGestureController:(id)arg1;
-(id)occurrenceViewSuperviewForEventGestureController:(id)arg1;
-(float)timedRegionOriginForEventGestureController:(id)arg1;
-(id)createOccurrenceViewForEventGestureController:(id)arg1;
-(void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(char)arg2;
-(id)createEventForEventGestureController:(id)arg1;
-(id)eventGestureController:(id)arg1 occurrenceViewForOccurrence:(id)arg2;
-(float)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(CGPoint)arg3;
-(void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(char)arg3;
-(char)eventGestureController:(id)arg1 isAllDayAtPoint:(CGPoint)arg2 requireInsistence:(char)arg3;
-(double)eventGestureController:(id)arg1 dateAtPoint:(CGPoint)arg2;
-(void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(char)arg3;
-(void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(char)arg3;
-(char)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(char)arg4 span:(int)arg5;
-(void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(char)arg3;
-(void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2;
-(char)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(char)arg2 right:(char)arg3 vertically:(char)arg4 towardPoint:(CGPoint)arg5;

@end

