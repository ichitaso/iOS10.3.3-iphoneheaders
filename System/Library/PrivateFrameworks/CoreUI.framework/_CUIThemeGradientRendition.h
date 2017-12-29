/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIThemeGradient;

@interface _CUIThemeGradientRendition : CUIThemeRendition {

	CUIThemeGradient* gradient;
	float gradientAngle;

}
+(id)_nodesFromNodeList:(csigradientdatanode*)arg1 count:(unsigned)arg2 header:(const csiheader*)arg3 ;
+(_CUIThemeGradientRenditionInitializerStruct)_parseGradientInfoFromCSIHeader:(const csiheader*)arg1 ;
-(unsigned)gradientStyle;
-(float)gradientDrawingAngle;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(int)arg3 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)dealloc;
-(id)gradient;
@end

