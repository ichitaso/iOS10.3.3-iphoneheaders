/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIViewControllerInteractiveTransitioning <NSObject>
@property (nonatomic,readonly) float completionSpeed; 
@property (nonatomic,readonly) int completionCurve; 
@property (nonatomic,readonly) char wantsInteractiveStart; 
@optional
-(char)wantsInteractiveStart;
-(int)completionCurve;
-(float)completionSpeed;

@required
-(void)startInteractiveTransition:(id)arg1;

@end

