/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSMutableArray;

@interface _UITextTiledLayer : CALayer {

	NSMutableArray* _visibleTiles;
	NSMutableArray* _unusedTiles;
	CGRect _gridBounds;
	CGSize _tileSize;
	struct {
		unsigned disableTiling : 1;
		unsigned ditchAllTiles : 1;
		unsigned suspendLayout : 4;
	}  _tcTiledLayerFlags;
	float _maxTileHeight;

}

@property (assign,nonatomic) char usesTiledLayers; 
@property (assign,nonatomic) float maxTileHeight;               //@synthesize maxTileHeight=_maxTileHeight - In the implementation block
-(void)drawDirtyLayer:(id)arg1 intoContext:(CGContextRef)arg2 ;
-(void)_setUsesTiledLayers:(char)arg1 onlyHiding:(char)arg2 ;
-(id)_preparedTileForFrame:(CGRect)arg1 ;
-(void)_prepareGridForBounds:(CGRect)arg1 ;
-(void)_prepareTilesForVisibleBounds:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentsFormat:(id)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)layoutSublayers;
-(float)maxTileHeight;
-(void)setMaxTileHeight:(float)arg1 ;
-(void)setDrawsAsynchronously:(char)arg1 ;
-(void)suspendTiling;
-(void)resumeTiling;
-(void)setUsesTiledLayers:(char)arg1 ;
-(char)usesTiledLayers;
@end

