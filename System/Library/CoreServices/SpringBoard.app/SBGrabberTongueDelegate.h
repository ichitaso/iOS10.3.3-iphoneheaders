/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBGrabberTongueDelegate <NSObject>
@optional
-(float)grabberTongueCenterOnEdge:(id)arg1;
-(float)grabberTongueWidthOfGrabberFreeRegion:(id)arg1;
-(float)grabberTongueWidthOfActiveEdge:(id)arg1;
-(void)grabberTongueBeganPulling:(id)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
-(void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
-(void)grabberTongueEndedPulling:(id)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
-(void)grabberTongueCanceledPulling:(id)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
-(void)grabberTongueWillPresent:(id)arg1;

@required
-(char)grabberTongueOrPullEnabled:(id)arg1;
-(char)grabberTongueRequiredOutsideGrabberFreeRegion:(id)arg1;
-(char)grabberTongueRequiredForWholeEdge:(id)arg1;

@end

