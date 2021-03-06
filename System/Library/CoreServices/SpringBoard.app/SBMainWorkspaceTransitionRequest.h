/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransitionRequest.h>

@class SBMainWorkspace;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest {

	int _source;
	/*^block*/id _transactionProvider;

}

@property (nonatomic,readonly) SBMainWorkspace * workspace; 
@property (assign,nonatomic) int source;                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) id transactionProvider;                       //@synthesize transactionProvider=_transactionProvider - In the implementation block
-(void)setTransactionProvider:(id)arg1 ;
-(id)compactDescriptionBuilder;
-(char)isMainWorkspaceTransitionRequest;
-(void)declineWithReason:(id)arg1 ;
-(id)transactionProvider;
-(id)initWithWorkspace:(id)arg1 display:(id)arg2 ;
-(void)setSource:(int)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(int)source;
-(id)succinctDescriptionBuilder;
@end

