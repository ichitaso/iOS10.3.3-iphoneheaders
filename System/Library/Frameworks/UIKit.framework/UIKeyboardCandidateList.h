/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardCandidateList <NSObject>
@optional
-(id)candidates;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(float)arg5 layout:(char)arg6;
-(void)setInlineText:(id)arg1;
-(void)showCaret:(char)arg1 gradually:(char)arg2;
-(void)setCompletionContext:(id)arg1;
-(char)handleNumberKey:(unsigned)arg1;
-(char)handleTabKeyWithShift:(char)arg1;
-(char)hasNextPage;
-(char)hasPreviousPage;
-(void)candidatesDidChange;
-(void)jumpToCompositions;
-(void)revealHiddenCandidates;
-(id)inlineText;
-(unsigned)viewOffsetForCandidateAtIndex:(unsigned)arg1;
-(id)secureCandidateRenderTraits;

@required
-(void)showCandidateAtIndex:(unsigned)arg1;
-(void)showNextCandidate;
-(char)hasCandidates;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(char)arg5;
-(id)statisticsIdentifier;
-(char)isExtendedList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1;
-(char)showCandidate:(id)arg1;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned)arg1;
-(id)keyboardBehaviors;
-(unsigned)selectedSortIndex;

@end

