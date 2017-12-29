/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>
@property (getter=_parentFocusEnvironment,nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (getter=_focusedItemRegionContainer,nonatomic,__weak,readonly) id<_UIFocusRegionContainer> focusedItemRegionContainer; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) int preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@optional
-(void)_setNeedsNonDeferredFocusUpdate;
-(id)_linearFocusMovementSequences;
-(char)_reversesLinearFocusWrapping;
-(id)_focusedItemRegionContainer;
-(int)_preferredFocusMovementStyle;

@required
-(id)_parentFocusEnvironment;

@end

