/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapGestureCardDismissalHelperDelegate <NSObject>
@optional
-(id)dragGestureTrackerForCardDismissalHelper:(id)arg1;

@required
-(char)cardDismissalHelperShouldObserveGestures:(id)arg1;
-(float)dismissalRectTopEdgeForCardDismissalHelper:(id)arg1 coordinateSpace:(id)arg2;
-(void)cardDismissalHelper:(id)arg1 requestedDismissalWithVelocity:(float)arg2;

@end

