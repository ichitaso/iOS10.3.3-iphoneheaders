/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray, _UIInlineCandidateCell;

@interface UIInlineCandidateTextView : UIView {

	int m_type;
	int m_edgeType;
	char m_animating;
	NSMutableArray* _candidateCellArray;
	NSArray* _candidates;
	id _target;
	SEL _action;
	unsigned _selectedItem;
	_UIInlineCandidateCell* _currentlyPushedItem;
	char _showingArrow;
	char _arrowHighlighted;
	char _phraseEditable;

}
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setSelectedItem:(unsigned)arg1 ;
-(void)setAnimating:(char)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)setEdgeType:(int)arg1 ;
-(CGRect)_calculateRectForExpandedHitRegion;
-(unsigned)numberOfShownItems;
-(id)initWithFrame:(CGRect)arg1 andOrientation:(int)arg2 candidates:(id)arg3 type:(int)arg4 maxScreenWidth:(float)arg5 hasExtensionCandidates:(char)arg6 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(unsigned)selectedItem;
-(float)_layoutCandidates:(id)arg1 maxCount:(int)arg2 height:(float)arg3 maxScreenWidth:(float)arg4 hasExtensionCandidates:(char)arg5 ;
-(void)_cellSelected:(id)arg1 ;
-(id)findCell:(CGPoint)arg1 ;
-(void)redrawArrow;
-(int)edgeType;
-(char)_arrowHighlighted;
-(void)showHighlightedArrow;
@end

