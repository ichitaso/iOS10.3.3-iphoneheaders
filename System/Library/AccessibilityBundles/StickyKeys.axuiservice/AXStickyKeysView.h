/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/StickyKeys.axuiservice/StickyKeys
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StickyKeys/StickyKeys-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIVisualEffectView;

@interface AXStickyKeysView : UIView {

	NSMutableArray* _allStickyKeyLabels;
	NSMutableArray* _allStickyKeyHorizontalConstraints;
	UIVisualEffectView* _hudBackgroundView;

}

@property (nonatomic,retain) NSMutableArray * allStickyKeyLabels;                             //@synthesize allStickyKeyLabels=_allStickyKeyLabels - In the implementation block
@property (nonatomic,retain) NSMutableArray * allStickyKeyHorizontalConstraints;              //@synthesize allStickyKeyHorizontalConstraints=_allStickyKeyHorizontalConstraints - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * hudBackgroundView;                          //@synthesize hudBackgroundView=_hudBackgroundView - In the implementation block
-(NSMutableArray *)allStickyKeyHorizontalConstraints;
-(void)addStickyKeyString:(id)arg1 ;
-(NSMutableArray *)allStickyKeyLabels;
-(void)_setUpHUDBackgroundViewAndAddConstraints:(id)arg1 ;
-(void)highlightStickyKeyString:(id)arg1 ;
-(id)_newStickyKeyLabelForString:(id)arg1 ;
-(void)removeAllStickyKeyStringsWithCompletion:(/*^block*/id)arg1 ;
-(void)setAllStickyKeyHorizontalConstraints:(NSMutableArray *)arg1 ;
-(void)removeStickyKeyString:(id)arg1 ;
-(void)setAllStickyKeyLabels:(NSMutableArray *)arg1 ;
-(void)setHudBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)hudBackgroundView;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)accessibilityElementsHidden;
@end

