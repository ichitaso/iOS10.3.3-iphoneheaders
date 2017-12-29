/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@interface ICUndoSwipeGestureRecognizer : UIGestureRecognizer {

	char _startedSwipe;
	CGPoint _startCentroid;
	CGPoint _swipeStartCentroid;
	unsigned _touchCount;
	char _swipeRight;

}

@property (assign,nonatomic) char swipeRight;              //@synthesize swipeRight=_swipeRight - In the implementation block
-(char)swipeRight;
-(void)setSwipeRight:(char)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
@end

