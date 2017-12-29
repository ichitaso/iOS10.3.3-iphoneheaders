/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, UIKBRenderGeometry, UIKBGradient, UIKBTextStyle, NSArray, NSString;

@interface UIKBRenderTraits : NSObject <NSCopying> {

	NSMutableArray* _renderEffects;
	NSMutableArray* _foregroundRenderEffects;
	char _honorControlOpacity;
	char _controlOpacities;
	char _blurBlending;
	char _renderSecondarySymbolsSeparately;
	UIKBRenderGeometry* _geometry;
	UIKBGradient* _backgroundGradient;
	UIKBGradient* _layeredBackgroundGradient;
	UIKBGradient* _layeredForegroundGradient;
	UIKBTextStyle* _symbolStyle;
	UIKBTextStyle* _fallbackSymbolStyle;
	NSArray* _secondarySymbolStyles;
	NSArray* _variantGeometries;
	UIKBRenderTraits* _variantTraits;
	UIKBRenderTraits* _highlightedVariantTraits;
	int _blendForm;
	NSArray* _renderFlags;
	int _renderFlagsForAboveEffects;
	NSString* _hashString;

}

@property (nonatomic,retain) UIKBRenderGeometry * geometry;                            //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,retain) UIKBGradient * backgroundGradient;                        //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,retain) UIKBGradient * layeredBackgroundGradient;                 //@synthesize layeredBackgroundGradient=_layeredBackgroundGradient - In the implementation block
@property (nonatomic,retain) UIKBGradient * layeredForegroundGradient;                 //@synthesize layeredForegroundGradient=_layeredForegroundGradient - In the implementation block
@property (nonatomic,retain) UIKBTextStyle * symbolStyle;                              //@synthesize symbolStyle=_symbolStyle - In the implementation block
@property (nonatomic,retain) UIKBTextStyle * fallbackSymbolStyle;                      //@synthesize fallbackSymbolStyle=_fallbackSymbolStyle - In the implementation block
@property (nonatomic,retain) NSArray * secondarySymbolStyles;                          //@synthesize secondarySymbolStyles=_secondarySymbolStyles - In the implementation block
@property (nonatomic,readonly) NSArray * renderEffects;                                //@synthesize renderEffects=_renderEffects - In the implementation block
@property (nonatomic,readonly) NSArray * foregroundRenderEffects;                      //@synthesize foregroundRenderEffects=_foregroundRenderEffects - In the implementation block
@property (nonatomic,retain) NSArray * variantGeometries;                              //@synthesize variantGeometries=_variantGeometries - In the implementation block
@property (nonatomic,retain) UIKBRenderTraits * variantTraits;                         //@synthesize variantTraits=_variantTraits - In the implementation block
@property (nonatomic,retain) UIKBRenderTraits * highlightedVariantTraits;              //@synthesize highlightedVariantTraits=_highlightedVariantTraits - In the implementation block
@property (assign,nonatomic) char controlOpacities;                                    //@synthesize controlOpacities=_controlOpacities - In the implementation block
@property (assign,nonatomic) char blurBlending;                                        //@synthesize blurBlending=_blurBlending - In the implementation block
@property (assign,nonatomic) int blendForm;                                            //@synthesize blendForm=_blendForm - In the implementation block
@property (nonatomic,retain) NSArray * renderFlags;                                    //@synthesize renderFlags=_renderFlags - In the implementation block
@property (assign,nonatomic) char renderSecondarySymbolsSeparately;                    //@synthesize renderSecondarySymbolsSeparately=_renderSecondarySymbolsSeparately - In the implementation block
@property (assign,nonatomic) int renderFlagsForAboveEffects;                           //@synthesize renderFlagsForAboveEffects=_renderFlagsForAboveEffects - In the implementation block
@property (nonatomic,retain) NSString * hashString;                                    //@synthesize hashString=_hashString - In the implementation block
+(id)emptyTraits;
+(id)traitsWithGeometry:(id)arg1 ;
+(id)traitsWithSymbolStyle:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)blurBlending;
-(UIKBRenderTraits *)variantTraits;
-(void)setBackgroundGradient:(UIKBGradient *)arg1 ;
-(UIKBRenderGeometry *)geometry;
-(void)setSymbolStyle:(UIKBTextStyle *)arg1 ;
-(UIKBTextStyle *)symbolStyle;
-(void)addRenderEffect:(id)arg1 ;
-(void)setVariantGeometries:(NSArray *)arg1 ;
-(void)setVariantTraits:(UIKBRenderTraits *)arg1 ;
-(void)setHighlightedVariantTraits:(UIKBRenderTraits *)arg1 ;
-(void)setBlendForm:(int)arg1 ;
-(void)setControlOpacities:(char)arg1 ;
-(void)setLayeredBackgroundGradient:(UIKBGradient *)arg1 ;
-(void)removeAllRenderEffects;
-(NSArray *)variantGeometries;
-(void)setGeometry:(UIKBRenderGeometry *)arg1 ;
-(void)setBlurBlending:(char)arg1 ;
-(void)setSecondarySymbolStyles:(NSArray *)arg1 ;
-(void)setLayeredForegroundGradient:(UIKBGradient *)arg1 ;
-(void)setRenderFlags:(NSArray *)arg1 ;
-(NSArray *)renderFlags;
-(int)blendForm;
-(char)renderSecondarySymbolsSeparately;
-(NSArray *)secondarySymbolStyles;
-(char)controlOpacities;
-(NSString *)hashString;
-(void)modifyForMasking;
-(void)overlayWithTraits:(id)arg1 ;
-(UIKBGradient *)backgroundGradient;
-(UIKBGradient *)layeredBackgroundGradient;
-(UIKBGradient *)layeredForegroundGradient;
-(UIKBTextStyle *)fallbackSymbolStyle;
-(NSArray *)renderEffects;
-(NSArray *)foregroundRenderEffects;
-(int)renderFlagsForAboveEffects;
-(UIKBRenderTraits *)highlightedVariantTraits;
-(void)setRenderSecondarySymbolsSeparately:(char)arg1 ;
-(void)setRenderFlagsForAboveEffects:(int)arg1 ;
-(void)setHashString:(NSString *)arg1 ;
-(void)addForegroundRenderEffect:(id)arg1 ;
-(void)setFallbackSymbolStyle:(UIKBTextStyle *)arg1 ;
@end
