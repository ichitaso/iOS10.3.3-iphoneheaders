/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIViewController;

@interface _UIStoryboardUnwindChain : NSObject {

	NSMutableArray* _viewControllers;
	unsigned _commonAncestorIdx;
	unsigned _modalAncestorContainingSourceIdx;

}

@property (nonatomic,readonly) UIViewController * commonAncestorViewController; 
@property (nonatomic,readonly) UIViewController * modalAncestorContainingSourceViewController; 
-(id)debugDescription;
-(id)initFromSourceViewController:(id)arg1 toDestinationViewController:(id)arg2 ;
-(UIViewController *)commonAncestorViewController;
-(UIViewController *)modalAncestorContainingSourceViewController;
-(void)enumerateViewControllersFromModalAncestorUpToButNotIncludingDestination:(/*^block*/id)arg1 ;
@end
