/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileSafari/MobileSafari-Structs.h>
@class UIImage, UIView, TiltedTabThumbnailView, TiltedTabView, TiltedTabItem, UIButton, NSString, UIColor;

@interface TiltedTabItemLayoutInfo : NSObject {

	char _closeButtonUsesOutlineStyle;
	char _reordering;
	char _closing;
	char _finishedClosing;
	UIImage* _blankSnapshot;
	float _borrowedContentScale;
	UIView* _borrowedContentView;
	float _contentOpacity;
	TiltedTabThumbnailView* _contentView;
	float _topBackdropHeight;
	TiltedTabView* _tiltedTabView;
	TiltedTabItem* _item;
	int _transition;
	unsigned _indexForLayout;
	unsigned _countForLayout;
	float _verticalScrollAdjustment;
	CGRect _closeButtonHitRect;
	CGRect _contentFrame;
	CATransform3D _contentTransform;

}

@property (nonatomic,retain) UIImage * blankSnapshot;                                    //@synthesize blankSnapshot=_blankSnapshot - In the implementation block
@property (assign,nonatomic) float borrowedContentScale;                                 //@synthesize borrowedContentScale=_borrowedContentScale - In the implementation block
@property (nonatomic,retain) UIView * borrowedContentView;                               //@synthesize borrowedContentView=_borrowedContentView - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton; 
@property (assign,nonatomic) CGRect closeButtonHitRect;                                  //@synthesize closeButtonHitRect=_closeButtonHitRect - In the implementation block
@property (assign,nonatomic) char closeButtonUsesOutlineStyle;                           //@synthesize closeButtonUsesOutlineStyle=_closeButtonUsesOutlineStyle - In the implementation block
@property (nonatomic,readonly) CGRect contentClipperBounds; 
@property (assign,nonatomic) CGRect contentFrame;                                        //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) float contentOpacity;                                       //@synthesize contentOpacity=_contentOpacity - In the implementation block
@property (assign,nonatomic) CATransform3D contentTransform;                             //@synthesize contentTransform=_contentTransform - In the implementation block
@property (nonatomic,retain) TiltedTabThumbnailView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIView * contentShadowView; 
@property (nonatomic,readonly) UIView * contentClipperView; 
@property (assign,nonatomic) float topBackdropHeight;                                    //@synthesize topBackdropHeight=_topBackdropHeight - In the implementation block
@property (nonatomic,__weak,readonly) TiltedTabView * tiltedTabView;                     //@synthesize tiltedTabView=_tiltedTabView - In the implementation block
@property (nonatomic,__weak,readonly) TiltedTabItem * item;                              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIColor * titleColor; 
@property (assign,getter=isReordering,nonatomic) char reordering;                        //@synthesize reordering=_reordering - In the implementation block
@property (assign,getter=isClosing,nonatomic) char closing;                              //@synthesize closing=_closing - In the implementation block
@property (assign,getter=isFinishedClosing,nonatomic) char finishedClosing;              //@synthesize finishedClosing=_finishedClosing - In the implementation block
@property (assign,nonatomic) int transition;                                             //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) unsigned indexForLayout;                                    //@synthesize indexForLayout=_indexForLayout - In the implementation block
@property (assign,nonatomic) unsigned countForLayout;                                    //@synthesize countForLayout=_countForLayout - In the implementation block
@property (assign,nonatomic) float verticalScrollAdjustment;                             //@synthesize verticalScrollAdjustment=_verticalScrollAdjustment - In the implementation block
-(CATransform3D)contentTransform;
-(void)setContentTransform:(CATransform3D)arg1 ;
-(void)setBorrowedContentScale:(float)arg1 ;
-(void)setBorrowedContentView:(UIView *)arg1 ;
-(UIView *)contentClipperView;
-(UIView *)borrowedContentView;
-(UIView *)contentShadowView;
-(float)topBackdropHeight;
-(void)setTopBackdropHeight:(float)arg1 ;
-(CGRect)closeButtonHitRect;
-(void)setCloseButtonHitRect:(CGRect)arg1 ;
-(float)borrowedContentScale;
-(void)setClosing:(char)arg1 ;
-(char)isFinishedClosing;
-(void)setFinishedClosing:(char)arg1 ;
-(unsigned)indexForLayout;
-(void)setIndexForLayout:(unsigned)arg1 ;
-(unsigned)countForLayout;
-(void)setCountForLayout:(unsigned)arg1 ;
-(float)verticalScrollAdjustment;
-(void)setVerticalScrollAdjustment:(float)arg1 ;
-(TiltedTabView *)tiltedTabView;
-(void)tearDownThumbnailView;
-(void)_updateCloseButtonImage;
-(void)updateSnapshotViewAnimated:(char)arg1 ;
-(CGRect)contentClipperBounds;
-(CGRect)clippedContentFrame;
-(void)_updateBorrowedContentFrame;
-(void)setUpThumbnailView;
-(id)initWithTiltedTabView:(id)arg1 item:(id)arg2 ;
-(void)setBlankSnapshot:(UIImage *)arg1 ;
-(void)setCloseButtonUsesOutlineStyle:(char)arg1 ;
-(UIImage *)blankSnapshot;
-(char)closeButtonUsesOutlineStyle;
-(float)contentOpacity;
-(void)setContentOpacity:(float)arg1 ;
-(void)setContentView:(TiltedTabThumbnailView *)arg1 ;
-(TiltedTabThumbnailView *)contentView;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(TiltedTabItem *)item;
-(NSString *)title;
-(void)setTransition:(int)arg1 ;
-(int)transition;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(UIButton *)closeButton;
-(void)setContentFrame:(CGRect)arg1 ;
-(char)isClosing;
-(CGRect)contentFrame;
-(void)setReordering:(char)arg1 ;
-(char)isReordering;
@end

