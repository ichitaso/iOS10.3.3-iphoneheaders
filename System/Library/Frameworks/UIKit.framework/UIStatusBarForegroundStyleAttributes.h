/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, UIColor;

@interface UIStatusBarForegroundStyleAttributes : NSObject <NSCopying> {

	float _height;
	int _legibilityStyle;
	int _idiom;
	NSMutableDictionary* _cachedFonts;
	char _isTintColorBlack;
	char _hasBusyBackground;
	NSString* _cachedUniqueIdentifier;
	char _canShowBreadcrumbs;
	UIColor* _tintColor;

}

@property (assign,nonatomic) char canShowBreadcrumbs;                   //@synthesize canShowBreadcrumbs=_canShowBreadcrumbs - In the implementation block
@property (nonatomic,retain,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)imageNamed:(id)arg1 ;
-(UIColor *)tintColor;
-(id)untintedImageNamed:(id)arg1 ;
-(id)textColorForStyle:(int)arg1 ;
-(float)height;
-(int)idiom;
-(id)uniqueIdentifier;
-(id)textFontForStyle:(int)arg1 ;
-(int)legibilityStyle;
-(id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2 tintColor:(id)arg3 hasBusyBackground:(char)arg4 idiom:(int)arg5 ;
-(float)baselineOffsetForStyle:(int)arg1 ;
-(float)standardPadding;
-(void)setCanShowBreadcrumbs:(char)arg1 ;
-(char)usesVerticalLayout;
-(char)canShowBreadcrumbs;
-(float)edgePadding;
-(float)middlePadding;
-(float)shadowPadding;
-(id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(float)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5 textAlignment:(int)arg6 style:(int)arg7 withLegibilityStyle:(int)arg8 legibilityStrength:(float)arg9 ;
-(id)imageNamed:(id)arg1 withLegibilityStyle:(int)arg2 legibilityStrength:(float)arg3 ;
-(id)textForNetworkType:(int)arg1 ;
-(char)supportsShowingBuildVersion;
-(float)batteryAccessoryMargin;
-(void)drawBatteryInsidesWithSize:(CGSize)arg1 capacity:(int)arg2 style:(unsigned)arg3 ;
-(id)bluetoothBatteryImageNameWithCapacity:(float)arg1 ;
-(id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 ;
-(void)drawBluetoothBatteryInsidesWithSize:(CGSize)arg1 capacity:(float)arg2 ;
-(void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 ;
-(float)bluetoothBatteryExtraPadding;
-(int)activityIndicatorStyleWithSyncActivity:(char)arg1 ;
-(float)sizeForMoonMaskVisible:(char)arg1 ;
-(CGPoint)positionForMoonMaskInBounds:(CGRect)arg1 ;
-(id)generateUniqueIdentifier;
-(id)_batteryColorForCapacity:(int)arg1 lowCapacity:(int)arg2 style:(unsigned)arg3 ;
-(UIEdgeInsets)edgeInsetsForBatteryInsides;
-(float)_roundDimension:(float)arg1 ;
-(UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
-(id)uncachedImageNamed:(id)arg1 ;
-(id)_bluetoothBatteryColorForNormalizedCapacity:(float)arg1 ;
-(float)textOffsetForStyle:(int)arg1 ;
-(void)_drawText:(id)arg1 inRect:(CGRect)arg2 withFont:(id)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5 textAlignment:(int)arg6 ;
-(void)drawTextInRect:(CGRect)arg1 withColor:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_cacheQueue_cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 groupFullName:(id)arg3 ;
-(id)expandedNameForImageName:(id)arg1 ;
-(void)_cacheQueue_cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 groupFullName:(id)arg4 tintColor:(id)arg5 ;
-(id)_cachedImageNamed:(id)arg1 ;
-(void)_cacheImage:(id)arg1 named:(id)arg2 ;
-(id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(int)arg3 withStrength:(float)arg4 ;
-(id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(int)arg3 withStrength:(float)arg4 inTempGroup:(id)arg5 ;
-(id)imageIdWithText:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4 style:(int)arg5 ;
-(void)drawText:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4 textAlignment:(int)arg5 style:(int)arg6 textSize:(CGSize)arg7 textHeight:(float)arg8 ;
-(id)makeTextFontForStyle:(int)arg1 ;
-(char)_shouldUseBoldFontForStyle:(int)arg1 ;
-(id)proportionalFontForFont:(id)arg1 ;
-(id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2 tintColor:(id)arg3 hasBusyBackground:(char)arg4 ;
-(id)cachedImageWithText:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4 textAlignment:(int)arg5 style:(int)arg6 itemType:(int)arg7 ;
@end
