/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UITableViewCell, UIImageView, _UITableViewCellEditControlMinusView;

@interface UITableViewCellEditControl : UIControl {

	UITableViewCell* _cell;
	UIImageView* _imageView;
	_UITableViewCellEditControlMinusView* _minusView;
	UIImageView* _shadowView;
	unsigned _style : 2;
	unsigned _rotated : 1;
	unsigned _rotating : 1;
	unsigned _reserved : 27;

}

@property (assign,getter=isRotated,nonatomic) char rotated; 
@property (nonatomic,readonly) char wantsMaskingWhileAnimatingDisabled; 
@property (nonatomic,readonly) char wantsImageShadow; 
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)defaultSize;
-(char)isRotating;
-(void)setHighlighted:(char)arg1 ;
-(void)_multiselectColorChanged;
-(void)setSelected:(char)arg1 ;
-(unsigned)_controlEventsForActionTriggered;
-(id)_shadowImage;
-(id)_currentImage;
-(void)_toggleRotateAnimationDidStop:(id)arg1 finished:(char)arg2 ;
-(char)isRotated;
-(void)setRotated:(char)arg1 ;
-(void)setRotated:(char)arg1 animated:(char)arg2 ;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(int)arg2 ;
-(char)wantsMaskingWhileAnimatingDisabled;
-(void)_updateImageView;
-(id)_minusView;
-(CGRect)_minusRect;
-(void)_toggleRotate;
-(id)_deleteImageBackground:(float)arg1 ;
-(id)_deleteImage:(float)arg1 ;
-(id)_insertImage:(float)arg1 ;
-(id)_multiSelectNotSelectedImage;
-(id)_multiSelectSelectedImage;
-(id)_multiSelectHighlightedImage;
-(char)wantsImageShadow;
@end

