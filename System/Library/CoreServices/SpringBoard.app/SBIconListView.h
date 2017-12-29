/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBIconListLayoutDelegate;
@class SBIconListModel, SBIconViewMap, SBIcon, NSMutableArray, NSArray, UIView, UIFocusContainerGuide, UIFocusGuide;

@interface SBIconListView : UIView {

	SBIconListModel* _model;
	SBIconViewMap* _viewMap;
	int _orientation;
	float _statusBarHeight;
	SBIcon* _bouncedIcon;
	NSMutableArray* _removedIcons;
	NSArray* _rotationContainers;
	unsigned _needsLayout : 1;
	unsigned _rotating : 1;
	UIView* _fadeView;
	char _purged;
	UIFocusContainerGuide* _pageContainerGuide;
	char _isEditing;
	char _layoutReversed;
	UIFocusGuide* _nextIconFocusGuide;
	UIFocusGuide* _previousIconFocusGuide;
	id<SBIconListLayoutDelegate> _layoutDelegate;
	CGRect _wallpaperRelativeFrame;

}

@property (assign,nonatomic) int orientation;                                                 //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) float statusBarHeight;                                           //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                                   //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) char purged;                                                     //@synthesize purged=_purged - In the implementation block
@property (assign,getter=isLayoutReversed,nonatomic) char layoutReversed;                     //@synthesize layoutReversed=_layoutReversed - In the implementation block
@property (assign,nonatomic) CGRect wallpaperRelativeFrame;                                   //@synthesize wallpaperRelativeFrame=_wallpaperRelativeFrame - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconListLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) UIFocusGuide * previousIconFocusGuide;                           //@synthesize previousIconFocusGuide=_previousIconFocusGuide - In the implementation block
@property (nonatomic,retain) UIFocusGuide * nextIconFocusGuide;                               //@synthesize nextIconFocusGuide=_nextIconFocusGuide - In the implementation block
+(unsigned)iconRowsForInterfaceOrientation:(int)arg1 ;
+(unsigned)maxVisibleIconRowsInterfaceOrientation:(int)arg1 ;
+(unsigned)maxIcons;
+(int)rotationAnchor;
+(unsigned)maxVisibleIcons;
+(unsigned)iconColumnsForInterfaceOrientation:(int)arg1 ;
-(void)removeAllIconAnimations;
-(id)initWithModel:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(id)visibleIcons;
-(unsigned)iconColumnsForCurrentOrientation;
-(unsigned)iconRowsForCurrentOrientation;
-(float)bottomIconInset;
-(float)sideIconInset;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned*)arg2 proposedOrder:(int*)arg3 grabbedIcon:(id)arg4 ;
-(unsigned)iconsInRowForSpacingCalculation;
-(float)horizontalIconPadding;
-(CGSize)defaultIconSize;
-(float)verticalIconPadding;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1 ;
-(float)topIconInset;
-(void)layoutIconsNow;
-(CGPoint)_wallpaperRelativeIconCenterForIconView:(id)arg1 ;
-(void)enumerateIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(CGPoint)_wallpaperRelativeIconCenterForIconImageCenter:(CGPoint)arg1 ;
-(SBIconCoordinate)coordinateForIcon:(id)arg1 ;
-(void)_sendLayoutDelegateWouldHaveMovedIcon:(id)arg1 ;
-(void)_layoutIcon:(id)arg1 atIndex:(unsigned)arg2 createViewNow:(char)arg3 pop:(char)arg4 ;
-(unsigned)firstFreeSlotIndexForType:(int)arg1 ;
-(CGPoint)originForIconAtIndex:(unsigned)arg1 ;
-(void)_popIconView:(id)arg1 ;
-(void)_updateEditingStateForIcons:(id)arg1 animated:(char)arg2 ;
-(id)removedIcons;
-(void)setIconsNeedLayout;
-(void)layoutIconsIfNeeded:(double)arg1 domino:(char)arg2 ;
-(id)insertIcon:(id)arg1 atIndex:(unsigned)arg2 moveNow:(char)arg3 pop:(char)arg4 ;
-(void)removeIconAtIndex:(unsigned)arg1 ;
-(Class)baseIconViewClass;
-(SBIconCoordinate)iconCoordinateForIndex:(unsigned)arg1 forOrientation:(int)arg2 ;
-(CGPoint)centerForIconCoordinate:(SBIconCoordinate)arg1 ;
-(void)layoutFocusGuides;
-(UIFocusGuide *)nextIconFocusGuide;
-(UIFocusGuide *)previousIconFocusGuide;
-(void)_sendLayoutDelegateLayoutInvalidated;
-(char)isLayoutReversed;
-(void)showIconImagesFromColumn:(int)arg1 toColumn:(int)arg2 totalColumns:(int)arg3 allowAnimations:(char)arg4 ;
-(void)enumerateIconsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)iconRowsForSpacingCalculation;
-(float)horizontalBumpForColumn:(unsigned)arg1 ;
-(id)viewMap;
-(void)setLayoutReversed:(char)arg1 ;
-(void)setWallpaperRelativeFrame:(CGRect)arg1 ;
-(unsigned)rowForIcon:(id)arg1 ;
-(char)compactIcons:(char)arg1 ;
-(char)containsIcon:(id)arg1 ;
-(unsigned)firstFreeSlotIndex;
-(unsigned)firstFreeSlotOrLastSlotIndex;
-(id)placeIcon:(id)arg1 atIndex:(unsigned)arg2 moveNow:(char)arg3 pop:(char)arg4 ;
-(id)insertIcon:(id)arg1 atIndex:(unsigned)arg2 moveNow:(char)arg3 ;
-(void)removeIcon:(id)arg1 ;
-(void)setAlphaForAllIcons:(float)arg1 ;
-(CGPoint)originForIcon:(id)arg1 ;
-(CGPoint)centerForIcon:(id)arg1 ;
-(SBIconCoordinate)coordinateForIconAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfIcon:(id)arg1 ;
-(void)showAllIcons;
-(void)updateEditingStateAnimated:(char)arg1 ;
-(char)isDock;
-(void)setBouncedIcon:(id)arg1 ;
-(id)bouncedIcon;
-(void)setIconsLabelAlpha:(float)arg1 ;
-(void)performRotationWithDuration:(double)arg1 ;
-(void)cleanupAfterRotation;
-(void)setNextIconFocusGuide:(UIFocusGuide *)arg1 ;
-(void)setPreviousIconFocusGuide:(UIFocusGuide *)arg1 ;
-(CGRect)wallpaperRelativeFrame;
-(unsigned)rowAtPoint:(CGPoint)arg1 ;
-(id)viewForIcon:(id)arg1 ;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned*)arg2 ;
-(unsigned)firstFreeSlotOrLastSlotIndexForType:(int)arg1 ;
-(unsigned)indexForCoordinate:(SBIconCoordinate)arg1 forOrientation:(int)arg2 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)description;
-(float)statusBarHeight;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(char)_allowsFocusToLeaveViaHeading:(unsigned)arg1 ;
-(char)isEmpty;
-(id)tintColor;
-(char)isEditing;
-(void)setEditing:(char)arg1 ;
-(id)model;
-(id)icons;
-(Class)modelClass;
-(char)isFull;
-(void)prepareToRotateToInterfaceOrientation:(int)arg1 ;
-(void)setModel:(id)arg1 ;
-(int)iconLocation;
-(void)setLayoutDelegate:(id<SBIconListLayoutDelegate>)arg1 ;
-(id<SBIconListLayoutDelegate>)layoutDelegate;
-(void)setStatusBarHeight:(float)arg1 ;
-(char)purged;
-(void)setPurged:(char)arg1 ;
-(unsigned)columnAtPoint:(CGPoint)arg1 ;
@end

