/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class WAKWindow;

@interface UIWebTiledView : UIView {

	WAKWindow* _wakWindow;
	int _inGestureType;
	int _tilingArea;
	char _didFirstTileLayout;
	char _layoutTilesInMainThread;
	char _tilingModeIsLocked;
	char _allowsPaintingAndScriptsWhilePanning;
	char _editingTilingModeEnabled;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)_didScroll;
-(CGRect)visibleRect;
-(void)setTileSize:(CGSize)arg1 ;
-(void)setMaxTileCount:(unsigned)arg1 ;
-(void)setTilingEnabled:(char)arg1 ;
-(void)setLayoutTilesInMainThread:(char)arg1 ;
-(void)layoutTilesNow;
-(void)setEditingTilingModeEnabled:(char)arg1 ;
-(void)removeAllNonVisibleTiles;
-(void)setTilingArea:(int)arg1 ;
-(void)setTilesOpaque:(char)arg1 ;
-(void)removeAllTiles;
-(void)removeForegroundTiles;
-(void)setInGesture:(int)arg1 ;
-(int)tilingArea;
-(void)_updateForScreen:(id)arg1 ;
-(void)_screenChanged:(id)arg1 ;
-(void)layoutTilesNowForRect:(CGRect)arg1 ;
-(void)updateTilingMode;
-(char)tilesOpaque;
-(void)setKeepsZoomedOutTiles:(char)arg1 ;
-(char)keepsZoomedOutTiles;
-(void)dumpTiles;
-(void)setWAKWindow:(id)arg1 ;
-(void)layoutTilesNowOnWebThread;
-(void)drawImageIntoTiles:(CGImageRef)arg1 ;
-(void)lockTilingMode;
-(void)unlockTilingMode;
-(char)allowsPaintingAndScriptsWhilePanning;
-(void)setAllowsPaintingAndScriptsWhilePanning:(char)arg1 ;
-(CGSize)tileSize;
-(void)setDrawsGrid:(char)arg1 ;
-(char)drawsGrid;
-(unsigned)maxTileCount;
-(unsigned)adjustedMaxTileCount;
-(char)isTilingEnabled;
-(void)setLogsTilingChanges:(char)arg1 ;
-(char)logsTilingChanges;
-(void)setTileDrawingEnabled:(char)arg1 ;
-(char)editingTilingModeEnabled;
-(char)tileDrawingEnabled;
-(char)layoutTilesInMainThread;
-(id)wakWindow;
@end

