/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
@class UIColor, UIImage, UIFont;

@interface AEAnnotationTheme : NSObject {

	char invertedContent;

}

@property (assign,nonatomic) char invertedContent; 
@property (nonatomic,readonly) UIColor * highlightBaseColor; 
@property (nonatomic,readonly) UIColor * highlightStriationColor; 
@property (nonatomic,readonly) UIColor * noteBackgroundTopColor; 
@property (nonatomic,readonly) UIColor * noteBackgroundBottomColor; 
@property (nonatomic,readonly) UIColor * noteOuterStrokeColor; 
@property (nonatomic,readonly) UIColor * noteInnerStrokeColor; 
@property (nonatomic,readonly) UIColor * noteLinesColor; 
@property (nonatomic,readonly) float noteShadowRadius; 
@property (nonatomic,readonly) float noteShadowOpacity; 
@property (nonatomic,readonly) UIColor * noteShadowColor; 
@property (nonatomic,readonly) CGSize noteShadowOffset; 
@property (nonatomic,readonly) UIImage * marginNoteImage; 
@property (nonatomic,readonly) UIFont * noteTextFont; 
@property (nonatomic,readonly) UIColor * noteTextColor; 
@property (nonatomic,readonly) UIColor * noteEditorTextColor; 
+(id)themeForColor:(CGColorRef)arg1 invertedContent:(char)arg2 ;
+(id)themeForAnnotationStyle:(int)arg1 invertedContent:(char)arg2 isUnderline:(char)arg3 ;
+(id)themeForAnnotationStyle:(int)arg1 invertedContent:(char)arg2 ;
+(id)blueTheme:(char)arg1 ;
+(id)greenTheme:(char)arg1 ;
+(id)yellowTheme:(char)arg1 ;
+(id)pinkTheme:(char)arg1 ;
+(id)purpleTheme:(char)arg1 ;
+(id)underlineTheme:(char)arg1 ;
+(id)theme:(char)arg1 ;
-(UIColor *)noteLinesColor;
-(UIColor *)noteEditorTextColor;
-(UIColor *)highlightStriationColor;
-(char)invertedContent;
-(void)setInvertedContent:(char)arg1 ;
-(int)annotationStyle;
-(UIColor *)noteTextColor;
-(char)isUnderline;
-(float)noteShadowRadius;
-(float)noteShadowOpacity;
-(UIColor *)noteShadowColor;
-(CGSize)noteShadowOffset;
-(UIFont *)noteTextFont;
@end

