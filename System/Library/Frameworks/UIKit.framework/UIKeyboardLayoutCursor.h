/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardLayoutStar.h>
#import <UIKit/UIKBAlertControllerDelegate.h>

@class UIKBTree, UIView, NSArray, UILexicon, UILabel, UIAlertController, NSString;

@interface UIKeyboardLayoutCursor : UIKeyboardLayoutStar <UIKBAlertControllerDelegate> {

	UIKBTree* _indirectKeyboard;
	UIView* _selectionView;
	NSArray* _keyplaneKeys;
	int _selectedKeyIndex;
	char _ignoreEventsUntilPressEnds;
	UILexicon* _recentInputs;
	char _disableTouchInput;
	char _suppressOperations;
	UIKBTree* _cachedMultitapKeyplane;
	char _cachedCanMultitap;
	UILabel* _dictationHelpLabel;
	char _didVariantDelete;
	char _isForwardingEvent;
	UIAlertController* _recentInputsAlert;
	NSString* _keyplaneBeforeDictation;
	int _selectedKeyBeforeDictation;

}

@property (nonatomic,readonly) UIKBTree * currentKey; 
@property (nonatomic,retain) UIAlertController * recentInputsAlert;              //@synthesize recentInputsAlert=_recentInputsAlert - In the implementation block
@property (nonatomic,retain) NSString * keyplaneBeforeDictation;                 //@synthesize keyplaneBeforeDictation=_keyplaneBeforeDictation - In the implementation block
@property (assign,nonatomic) int selectedKeyBeforeDictation;                     //@synthesize selectedKeyBeforeDictation=_selectedKeyBeforeDictation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(int)arg3 ;
+(id)carKeyboardNameForKeyboard:(id)arg1 screenTraits:(id)arg2 ;
-(id)keyViewAnimator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setRenderConfig:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)_handlePhysicalButtonEvent:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)_moveWithEvent:(id)arg1 ;
-(void)setKeyboardAppearance:(int)arg1 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)setCursorLocation:(unsigned)arg1 ;
-(char)isAlphabeticPlane;
-(char)canMultitap;
-(char)diacriticForwardCompose;
-(void)acceptRecentInputIfNecessary;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(char)canHandleEvent:(id)arg1 ;
-(void)longPressAction;
-(char)usesAutoShift;
-(char)ignoresShiftState;
-(void)setRecentInputs:(id)arg1 ;
-(unsigned)cursorLocation;
-(void)setDisableTouchInput:(char)arg1 ;
-(unsigned)targetEdgesForScreenGestureRecognition;
-(unsigned char)getHandRestRecognizerState;
-(char)supportsEmoji;
-(char)shouldDeactivateWithoutWindow;
-(void)setKeyplaneName:(id)arg1 ;
-(char)shouldMatchCaseForDomainKeys;
-(char)shouldShowDictationKey;
-(unsigned long long)downActionFlagsForKey:(id)arg1 ;
-(int)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 ;
-(char)shouldAllowCurrentKeyplaneReload;
-(int)stateForKeyplaneSwitchKey:(id)arg1 ;
-(int)stateForCandidateListKey:(id)arg1 ;
-(char)shouldMergeKey:(id)arg1 ;
-(void)setKeyboardName:(id)arg1 appearance:(int)arg2 ;
-(char)shouldUseDefaultShiftStateFromLayout;
-(char)shouldPreventInputManagerHitTestingForKey:(id)arg1 ;
-(void)endMultitapForKey:(id)arg1 ;
-(void)flushKeyCache:(id)arg1 ;
-(char)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2 ;
-(void)alertDidDismiss;
-(void)setSelectedKeyIndex:(int)arg1 ;
-(void)configureChildCollectionViewCellsIfNeeded;
-(void)selectInitialKeyIfNecessary;
-(void)updateDictationHelpString;
-(id)cacheTokenForKeyplane:(id)arg1 ;
-(UIKBTree *)currentKey;
-(int)enabledStateForKey:(id)arg1 ;
-(int)activeStateForKey:(id)arg1 ;
-(int)selectedKeyBeforeDictation;
-(void)setSelectedKeyBeforeDictation:(int)arg1 ;
-(void)updateRecentInputsKeyIfNecessary;
-(void)updateKeyplaneSwitchEdgeBiases;
-(void)updateStatesForGridSelection;
-(char)refreshSelectedCellIfNecessaryForKey:(id)arg1 ;
-(void)didSelectRecentInputString:(id)arg1 ;
-(void)setRecentInputsAlert:(UIAlertController *)arg1 ;
-(UIAlertController *)recentInputsAlert;
-(id)_keyplaneForKeyplaneProperties;
-(char)isKeyplaneDisabledWithName:(id)arg1 ;
-(unsigned)variantCountForKey:(id)arg1 ;
-(int)targetKeyIndexAtOffset:(CGPoint)arg1 fromKey:(id)arg2 ;
-(void)setHighlightedVariantIndex:(int)arg1 key:(id)arg2 ;
-(void)deactivateKey:(id)arg1 ;
-(CGRect)selectionFrameForKeyIndex:(int)arg1 ;
-(id)keyHitTestInSameRowAsCenter:(CGPoint)arg1 size:(CGSize)arg2 ;
-(char)_handleMoveWithEvent:(id)arg1 ;
-(char)_handleWheelChangedWithEvent:(id)arg1 ;
-(char)_handleRemoteControlReceivedWithEvent:(id)arg1 ;
-(char)_handlePhysicalKeyDownWithEvent:(id)arg1 ;
-(void)runWithSuppressedActions:(/*^block*/id)arg1 ;
-(void)showRecentInputsAlert;
-(char)handleVisualDirectionalInput:(int)arg1 ;
-(void)clearVariantStateForKey:(id)arg1 ;
-(char)handleLinearDirectionalInput:(int)arg1 ;
-(void)handleVariantDeleteIfNecessaryForKey:(id)arg1 ;
-(void)takeKeyAction:(id)arg1 ;
-(char)shouldToggleKeyplaneWithName:(id)arg1 ;
-(void)setKeyplaneBeforeDictation:(NSString *)arg1 ;
-(NSString *)keyplaneBeforeDictation;
-(void)switchToDictationKeyplaneWithActivationIdentifier:(id)arg1 ;
-(char)_menuTapShouldExitVariants;
-(void)returnToKeyplaneAfterDictation;
-(char)_isDirectionalHeading:(unsigned)arg1 ;
@end
