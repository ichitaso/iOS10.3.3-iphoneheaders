/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class _SBOrientationTransformedContentView, NSArray;

@interface SBOrientationTransformWrapperView : UIView {

	_SBOrientationTransformedContentView* _transformedView;
	int _contentOrientation;
	int _containerOrientation;

}

@property (assign,nonatomic) int contentOrientation;                //@synthesize contentOrientation=_contentOrientation - In the implementation block
@property (assign,nonatomic) int containerOrientation;              //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (nonatomic,readonly) NSArray * contentViews; 
-(void)addContentView:(id)arg1 ;
-(void)setContentOrientation:(int)arg1 ;
-(void)setContainerOrientation:(int)arg1 ;
-(void)_updateGeometry;
-(CGAffineTransform)_transformForContainerOrientation:(int)arg1 contentOrientation:(int)arg2 ;
-(NSArray *)contentViews;
-(int)contentOrientation;
-(int)containerOrientation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
@end

