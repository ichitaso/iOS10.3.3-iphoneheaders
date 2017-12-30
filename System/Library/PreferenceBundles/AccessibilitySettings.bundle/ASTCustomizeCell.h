/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@protocol ASTCustomizeCellDelegateProtocol;
@class UIView, NSBundle, ASTButtonCell, NSMutableDictionary, NSMutableArray;

@interface ASTCustomizeCell : PSTableCell {

	UIView* _astBackgroundView;
	NSBundle* _astBundle;
	ASTButtonCell* _downCell;
	NSMutableDictionary* _buttonCells;
	NSMutableArray* _popoverAvailableIcons;
	id<ASTCustomizeCellDelegateProtocol> _delegate;

}

@property (assign,nonatomic) id<ASTCustomizeCellDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_astImageForKey:(id)arg1 ;
-(void)_rearrangeMap;
-(void)_displayPickerForIcon:(id)arg1 andLocation:(id)arg2 cell:(id)arg3 ;
-(void)_removeInvalidIconsIfNeeded;
-(void)updateButton:(id)arg1 withIcon:(id)arg2 layout:(int)arg3 ;
-(void)_layoutIcons;
-(void)layoutSubviews;
-(void)setDelegate:(id<ASTCustomizeCellDelegateProtocol>)arg1 ;
-(void)dealloc;
-(id<ASTCustomizeCellDelegateProtocol>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)accessibilityElements;
-(char)_accessibilityIgnoreInternalLabels;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end
