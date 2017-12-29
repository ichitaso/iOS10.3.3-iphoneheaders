/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSArray, UIColor, RefittedFrame, NSString;

@interface GuidanceSignInstructionsLabel : UIView <CAAnimationDelegate> {

	NSArray* _textAlternatives;
	UIColor* _textColor;
	UIColor* _accentColor;
	float _maximumWidth;
	unsigned _maximumNumberOfLines;
	int _textAlignment;
	RefittedFrame* _cachedFrame;
	int _variant;
	NSString* _fontName;
	float _fontSize;
	int _framing;
	NSArray* _subLayers;
	unsigned numberOfLinesToAnimateUp;
	float lastPositionForPercent;
	unsigned _animating;

}

@property (nonatomic,retain) RefittedFrame * cachedFrame;                //@synthesize cachedFrame=_cachedFrame - In the implementation block
@property (nonatomic,copy) NSArray * textAlternatives;                   //@synthesize textAlternatives=_textAlternatives - In the implementation block
@property (assign,nonatomic) float maximumWidth;                         //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfLines;              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) int textAlignment;                          //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) float textWidth; 
@property (nonatomic,retain) UIColor * textColor;                        //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * accentColor;                      //@synthesize accentColor=_accentColor - In the implementation block
@property (assign,nonatomic) int variant;                                //@synthesize variant=_variant - In the implementation block
@property (nonatomic,copy) NSString * fontName;                          //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) float fontSize;                             //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) int framing;                                //@synthesize framing=_framing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)refittedFrameThatFitsWidth:(float)arg1 textAlternatives:(id)arg2 maximumNumberOfLines:(unsigned)arg3 alignment:(int)arg4 color:(id)arg5 variant:(int)arg6 fontName:(id)arg7 fontSize:(float)arg8 ;
+(id)stringAttributesForInstructionsTextWithAlignment:(int)arg1 color:(id)arg2 variant:(int)arg3 minimumLineHeight:(float*)arg4 fontName:(id)arg5 fontSize:(float)arg6 ;
+(id)attributedStringWithText:(id)arg1 alignment:(int)arg2 color:(id)arg3 variant:(int)arg4 minimumLineHeight:(float*)arg5 fontName:(id)arg6 fontSize:(float)arg7 ;
+(float)heightThatFitsWidth:(float)arg1 text:(id)arg2 shorterAlternatives:(id)arg3 maximumNumberOfLines:(unsigned)arg4 alignment:(int)arg5 variant:(int)arg6 fontName:(id)arg7 fontSize:(float)arg8 ;
+(id)stringByReplacingWhitespaceToAvoidOrphanWords:(id)arg1 ;
+(float)heightThatFitsWidth:(float)arg1 textAlternatives:(id)arg2 maximumNumberOfLines:(unsigned)arg3 alignment:(int)arg4 variant:(int)arg5 fontName:(id)arg6 fontSize:(float)arg7 ;
-(void)setTextAlternatives:(NSArray *)arg1 ;
-(NSArray *)textAlternatives;
-(void)setFraming:(int)arg1 ;
-(int)framing;
-(float)heightThatFitsWidth:(float)arg1 ;
-(void)textLinesShouldAnimateFromHeight:(float)arg1 ;
-(void)setText:(id)arg1 shorterAlternatives:(id)arg2 ;
-(id)refittedFrame;
-(void)drawSublayers;
-(void)transformSublayerByPercentageComplete:(float)arg1 ;
-(void)transformSublayerFromPercentageComplete:(float)arg1 toPercentageComplete:(float)arg2 animated:(char)arg3 duration:(double)arg4 ;
-(void)updateLinePosition;
-(void)updateLinePositionAnimated:(char)arg1 fromPosition:(float)arg2 toPosition:(float)arg3 duration:(double)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaximumNumberOfLines:(unsigned)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)setMaximumWidth:(float)arg1 ;
-(float)maximumWidth;
-(UIColor *)textColor;
-(int)textAlignment;
-(NSString *)fontName;
-(void)setFontSize:(float)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(float)fontSize;
-(unsigned)maximumNumberOfLines;
-(float)textWidth;
-(void)setCachedFrame:(RefittedFrame *)arg1 ;
-(RefittedFrame *)cachedFrame;
-(void)setAccentColor:(UIColor *)arg1 ;
-(UIColor *)accentColor;
-(int)variant;
-(void)setVariant:(int)arg1 ;
@end

