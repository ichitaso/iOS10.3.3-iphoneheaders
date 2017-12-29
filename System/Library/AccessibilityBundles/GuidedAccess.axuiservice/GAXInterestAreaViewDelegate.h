/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXInterestAreaViewDelegate <NSObject>
@optional
-(char)interestAreaViewIsAccessibilityElement:(id)arg1;
-(char)canInteractWithInterestAreaView:(id)arg1;
-(void)interestAreaView:(id)arg1 willBeginMovingResizingKnobAtPosition:(unsigned)arg2 forInterestAreaPathAtIndex:(unsigned)arg3;
-(void)interestAreaView:(id)arg1 willBeginMovingInterestAreaPathAtIndex:(unsigned)arg2;
-(void)interestAreaView:(id)arg1 resizingKnobAtPosition:(unsigned)arg2 wasMovedToPoint:(CGPoint)arg3 forInterestAreaPathAtIndex:(unsigned)arg4 constrainedResizingKnobCenter:(CGPoint*)arg5;
-(void)interestAreaView:(id)arg1 interestAreaPathAtIndex:(unsigned)arg2 wasMovedWithTranslation:(CGPoint)arg3;
-(void)interestAreaView:(id)arg1 didFinishMovingResizingKnobAtPosition:(unsigned)arg2 forInterestAreaPathAtIndex:(unsigned)arg3;
-(void)interestAreaView:(id)arg1 didFinishMovingInterestAreaPathAtIndex:(unsigned)arg2;
-(void)interestAreaView:(id)arg1 didActivateCloseButtonForInterestAreaPathAtIndex:(unsigned)arg2;
-(unsigned)interestAreaView:(id)arg1 visibleKnobPositionsForInterestAreaPathAtIndex:(unsigned)arg2;
-(char)interestAreaView:(id)arg1 shouldAddCloseButtonForInterestAreaPathAtIndex:(unsigned)arg2;
-(float)scaleForSpecialControlsInInterestAreaView:(id)arg1;
-(char)interestAreaView:(id)arg1 shouldDisableSmartLayoutRelativeToEdgesForInterestAreaPathAtIndex:(unsigned)arg2;

@end

