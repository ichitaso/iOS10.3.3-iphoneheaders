/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInteractionAssistant.h>
#import <UIKit/UIResponderStandardEditActions.h>

@class _UITextServiceSession, UITextChecker, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant <UIResponderStandardEditActions> {

	int _selectionOperation;
	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;
	UITextChecker* _textChecker;
	unsigned _options;
	CGRect _caretBeforeTap;
	NSString* _wordBeforeTap;
	UITapGestureRecognizer* _singleTapGesture;
	UILongPressGestureRecognizer* _loupeGesture;

}

@property (nonatomic,readonly) UITapGestureRecognizer * singleTapGesture;                //@synthesize singleTapGesture=_singleTapGesture - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * loupeGesture;              //@synthesize loupeGesture=_loupeGesture - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithView:(id)arg1 ;
-(void)selectionChanged;
-(void)selectAll:(id)arg1 ;
-(void)selectWord;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)scheduleReplacementsWithOptions:(unsigned)arg1 ;
-(UILongPressGestureRecognizer *)loupeGesture;
-(UITapGestureRecognizer *)singleTapGesture;
-(void)loupeGestureWithState:(int)arg1 atGesturePoint:(/*^block*/id)arg2 shouldCancel:(char*)arg3 ;
-(void)scrollSelectionToVisible;
-(char)containerIsBrowserView;
-(char)containerIsAtom;
-(char)containerIsPlainStyleAtom;
-(void)oneFingerDoubleTap:(id)arg1 ;
-(void)oneFingerTap:(id)arg1 ;
-(void)oneFingerTripleTap:(id)arg1 ;
-(void)legacyTwoFingerSingleTap:(id)arg1 ;
-(void)tapAndAHalf:(id)arg1 ;
-(void)twoFingerRangedSelectGesture:(id)arg1 ;
-(id)_asText;
-(void)updateWithMagnifierTerminalPoint:(char)arg1 ;
-(char)containerAllowsSelectionTintOnly;
-(char)requiresImmediateUpdate;
-(char)containerAllowsSelection;
-(void)rangeSelectionStarted:(CGPoint)arg1 ;
-(void)rangeSelectionEnded:(CGPoint)arg1 ;
-(void)rangeSelectionCanceled;
-(void)rangeSelectionMoved:(CGPoint)arg1 withTouchPoint:(CGPoint)arg2 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3 withFlags:(int)arg4 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(int)arg2 withFlags:(int)arg3 ;
-(void)showDictionaryFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(int)arg2 ;
-(void)showTextServiceFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)showShareSheetFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)lookup:(id)arg1 withRange:(NSRange)arg2 fromRect:(CGRect)arg3 ;
-(void)lookup:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned)arg2 ;
-(char)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)showReplacementsForText:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)selectTextForReplacement:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)selectWithTapGestureAt:(CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3 ;
-(void)scheduleChineseTransliterationForText:(id)arg1 ;
-(void)scheduleReplacementsForText:(id)arg1 ;
-(void)showTextStyleOptions;
-(void)hideTextStyleOptions;
@end

