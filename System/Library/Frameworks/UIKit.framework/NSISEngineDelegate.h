/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSISEngineDelegate <NSObject>
@optional
-(void)solutionDidChangeInEngine:(id)arg1;

@required
-(void)constraintsDidChangeInEngine:(id)arg1;
-(id)engine:(id)arg1 markerForConstraintToBreakAmongConstraints:(id)arg2;
-(void)engine:(id)arg1 willBreakConstraint:(id)arg2 dueToMutuallyExclusiveConstraints:(id)arg3;

@end

