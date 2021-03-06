/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransaction.h>
#import <SpringBoard/SBStartupTransition.h>

@class SBStartupTransitionContext, SBMainWorkspace;

@interface SBBaseStartupTransition : SBTransaction <SBStartupTransition> {

	unsigned _destination;
	SBStartupTransitionContext* _context;
	SBMainWorkspace* _mainWorkspace;

}

@property (nonatomic,readonly) SBMainWorkspace * mainWorkspace;                   //@synthesize mainWorkspace=_mainWorkspace - In the implementation block
@property (nonatomic,readonly) SBStartupTransitionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned destination;                              //@synthesize destination=_destination - In the implementation block
-(SBMainWorkspace *)mainWorkspace;
-(void)performTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDestination:(unsigned)arg1 context:(id)arg2 ;
-(SBStartupTransitionContext *)context;
-(unsigned)destination;
-(void)_begin;
@end

