/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardSplitTransitionView.h>

@class CALayer, UIKBCacheToken, NSMutableDictionary;

@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView {

	CALayer* _container;
	CALayer* _frontFace;
	CALayer* _backFace;
	CALayer* _frontDarkening;
	CALayer* _backDarkening;
	CALayer* _backDarkeningLeft;
	CALayer* _backDarkeningRight;
	char _showingFrontFace;
	UIKBCacheToken* _startKeyplaneToken;
	UIKBCacheToken* _endKeyplaneToken;
	NSMutableDictionary* _controlKeys;
	struct {
		unsigned shiftKeys : 1;
		unsigned returnKeys : 1;
		unsigned moreIntlKeys : 1;
	}  _rebuildFlags;

}

@property (assign,getter=isShowingFrontFace,nonatomic) char showingFrontFace;              //@synthesize showingFrontFace=_showingFrontFace - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)rebuildTransitionForSplitStyleChange:(id)arg1 ;
-(char)transitionIsVisible;
-(CGImageRef)defaultKeyboardImage;
-(CGImageRef)splitKeyboardImage;
-(void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(int)arg3 orientation:(int)arg4 ;
-(void)rebuildControlKeys:(unsigned long long)arg1 ;
-(void)_flipToFront:(char)arg1 animated:(char)arg2 ;
-(void)rebuildControlSlicesForKeyName:(id)arg1 ;
-(void)updateMoreIntlKey:(id)arg1 asStart:(char)arg2 withRect:(CGRect)arg3 showIntl:(char)arg4 showDictKey:(char)arg5 ;
-(void)rebuildTransition;
-(void)rebuildMoreIntlKeys;
-(void)rebuildShiftSlices;
-(void)rebuildReturnSlices;
-(void)updateTransition;
-(void)setShowingFrontFace:(char)arg1 ;
-(void)rebuildBackgroundTransition;
-(void)_delayedUpdateTransition;
-(char)isShowingFrontFace;
@end

