/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIStatusBarTinting.h>

@class UIColor, UIView, NSMutableArray, UIImageView, NSString;

@interface UISnapshotView : UIView <UIStatusBarTinting> {

	CGSize _contentSize;
	UIEdgeInsets _contentBeyondBounds;
	UIEdgeInsets _edgePadding;
	UIEdgeInsets _edgeInsets;
	CGPoint _contentOffset;
	UIColor* _edgePaddingColor;
	UIView* _imageView;
	NSMutableArray* _edgePaddingViews;
	CGRect _snapshotRect;
	UIImageView* _shadowView;
	unsigned _disableEdgeAntialiasing : 1;
	unsigned _disableVerticalStretch : 1;
	UIColor* _statusBarTintColor;

}

@property (assign,nonatomic) UIEdgeInsets edgePadding;                                                           //@synthesize edgePadding=_edgePadding - In the implementation block
@property (nonatomic,retain) UIColor * edgePaddingColor;                                                         //@synthesize edgePaddingColor=_edgePaddingColor - In the implementation block
@property (getter=_snapshotView,nonatomic,readonly) UIView * snapshotView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (getter=_contentSize,nonatomic,readonly) CGSize contentSize;                                           //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,setter=_setContentOffset:,getter=_contentOffset,nonatomic) CGPoint contentOffset;              //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                            //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,getter=isVerticalStretchEnabled,nonatomic) char verticalStretchEnabled; 
@property (assign,setter=_setSnapshotRect:,getter=_snapshotRect,nonatomic) CGRect snapshotRect; 
@property (nonatomic,retain) UIView * shadowView;                                                                //@synthesize shadowView=_shadowView - In the implementation block
@property (setter=_setStatusBarTintColor:,nonatomic,retain) UIColor * _statusBarTintColor;                       //@synthesize statusBarTintColor=_statusBarTintColor - In the implementation block
@property (assign,getter=isEdgeAntialiasingEnabled,nonatomic) char edgeAntialiasingEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)_contentSize;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id)_snapshotView;
-(UIColor *)_statusBarTintColor;
-(UIEdgeInsets)edgeInsets;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)setContentStretch:(CGRect)arg1 ;
-(UIView *)shadowView;
-(void)setShadowView:(UIView *)arg1 ;
-(CGPoint)_contentOffset;
-(void)captureSnapshotOfView:(id)arg1 withSnapshotType:(int)arg2 ;
-(void)_setStatusBarTintColor:(id)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setEdgePadding:(UIEdgeInsets)arg1 ;
-(void)setEdgePaddingColor:(UIColor *)arg1 ;
-(void)captureSnapshotRect:(CGRect)arg1 fromView:(id)arg2 withSnapshotType:(int)arg3 ;
-(UIEdgeInsets)edgePadding;
-(void)setVerticalStretchEnabled:(char)arg1 ;
-(void)_setContentOffset:(CGPoint)arg1 ;
-(void)setEdgeAntialiasingEnabled:(char)arg1 ;
-(void)_positionImageView;
-(UIEdgeInsets)_edgePadding;
-(void)_updateContentsRect;
-(void)_addEdgePaddingViewInRect:(CGRect)arg1 ;
-(void)_drawEdges:(UIEdgeInsets)arg1 withContentSize:(CGSize)arg2 ;
-(CGRect)_contentsCenterForEdgePadding:(UIEdgeInsets)arg1 withContentSize:(CGSize)arg2 ;
-(char)isEdgeAntialiasingEnabled;
-(char)isVerticalStretchEnabled;
-(CGRect)_snapshotRect;
-(void)_setSnapshotRect:(CGRect)arg1 ;
-(UIColor *)edgePaddingColor;
@end

