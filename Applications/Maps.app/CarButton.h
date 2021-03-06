/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIButton.h>
#import <Maps/CarButton.h>

@protocol CarButton <NSObject>
@property (assign,nonatomic) int displayedLightLevel; 
@required
-(void)setDisplayedLightLevel:(int)arg1;
-(int)displayedLightLevel;

@end


@class UIImage, NSString;

@interface CarButton : UIButton <CarButton> {

	float _screenScale;
	char _usesMinimumWidth;
	int _carButtonCompositingStyle;
	int _carButtonHighlightStyle;
	int _carButtonSize;
	UIImage* _unmodifiedRegularStateImage;
	int _displayedLightLevel;
	int _carTextWeight;
	int _interactionModel;

}

@property (nonatomic,retain) UIImage * unmodifiedRegularStateImage;              //@synthesize unmodifiedRegularStateImage=_unmodifiedRegularStateImage - In the implementation block
@property (assign,nonatomic) char usesMinimumWidth;                              //@synthesize usesMinimumWidth=_usesMinimumWidth - In the implementation block
@property (assign,nonatomic) int carButtonCompositingStyle;                      //@synthesize carButtonCompositingStyle=_carButtonCompositingStyle - In the implementation block
@property (assign,nonatomic) int carButtonHighlightStyle;                        //@synthesize carButtonHighlightStyle=_carButtonHighlightStyle - In the implementation block
@property (assign,nonatomic) int carButtonSize;                                  //@synthesize carButtonSize=_carButtonSize - In the implementation block
@property (assign,nonatomic) int carTextWeight;                                  //@synthesize carTextWeight=_carTextWeight - In the implementation block
@property (assign,nonatomic) int interactionModel;                               //@synthesize interactionModel=_interactionModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int displayedLightLevel;                            //@synthesize displayedLightLevel=_displayedLightLevel - In the implementation block
+(void)getTopButtonBarGlyphNormalImage:(out id*)arg1 darkerImage:(out id*)arg2 disabledImage:(out id*)arg3 fromImage:(id)arg4 lightLevel:(int)arg5 scale:(float)arg6 ;
-(void)setDisplayedLightLevel:(int)arg1 ;
-(int)displayedLightLevel;
-(id)_currentStyleAttributesForState:(unsigned)arg1 ;
-(id)attributedStringForTitle:(id)arg1 state:(unsigned)arg2 ;
-(void)setCarButtonCompositingStyle:(int)arg1 ;
-(void)_updateImagesFromUnmodifiedRegularImage;
-(void)_updateAttributedTitles;
-(void)setCarButtonHighlightStyle:(int)arg1 ;
-(void)setCarButtonSize:(int)arg1 ;
-(void)setCarTextWeight:(int)arg1 ;
-(char)usesMinimumWidth;
-(void)setUsesMinimumWidth:(char)arg1 ;
-(int)carButtonCompositingStyle;
-(int)carButtonHighlightStyle;
-(int)carButtonSize;
-(UIImage *)unmodifiedRegularStateImage;
-(void)setUnmodifiedRegularStateImage:(UIImage *)arg1 ;
-(int)carTextWeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 forState:(unsigned)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setHighlighted:(char)arg1 ;
-(int)interactionModel;
-(void)setInteractionModel:(int)arg1 ;
-(void)_updateBackgroundColor;
@end

