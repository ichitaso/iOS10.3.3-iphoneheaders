/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconViewMapDelegate <SBReusableViewMapDelegate>
@optional
-(id)viewMapShouldPrepareViewsOfClasses:(id)arg1;
-(unsigned)viewMap:(id)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;
-(void)viewMap:(id)arg1 configureIconView:(id)arg2;

@required
-(int)viewMap:(id)arg1 locationForIcon:(id)arg2;
-(Class)iconViewClassForIcon:(id)arg1 location:(int)arg2;

@end

