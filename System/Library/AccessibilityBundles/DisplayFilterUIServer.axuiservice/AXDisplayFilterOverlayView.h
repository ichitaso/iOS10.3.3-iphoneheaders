/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/DisplayFilterUIServer.axuiservice/DisplayFilterUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayFilterUIServer/DisplayFilterUIServer-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIView, CAReplicatorLayer, CABackdropLayer;

@interface AXDisplayFilterOverlayView : UIView {

	NSArray* _filters;
	UIView* _effectView;
	CAReplicatorLayer* _effectReplicatorLayer;
	CABackdropLayer* _effectBackdropLayer;

}

@property (nonatomic,retain) UIView * effectView;                                    //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * effectReplicatorLayer;              //@synthesize effectReplicatorLayer=_effectReplicatorLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * effectBackdropLayer;                  //@synthesize effectBackdropLayer=_effectBackdropLayer - In the implementation block
@property (nonatomic,retain) NSArray * filters;                                      //@synthesize filters=_filters - In the implementation block
-(CAReplicatorLayer *)effectReplicatorLayer;
-(CABackdropLayer *)effectBackdropLayer;
-(void)setEffectReplicatorLayer:(CAReplicatorLayer *)arg1 ;
-(void)setEffectBackdropLayer:(CABackdropLayer *)arg1 ;
-(void)_updateLensEffect;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(UIView *)effectView;
-(void)setEffectView:(UIView *)arg1 ;
-(void)_setupLayers;
@end

