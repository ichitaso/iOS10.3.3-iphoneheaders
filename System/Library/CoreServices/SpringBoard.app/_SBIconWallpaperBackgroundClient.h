/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SBIconWallpaperBackgroundClient <NSObject>
@required
-(CGRect*)wallpaperRelativeBounds;
-(char)wantsBlur:(id)arg1;
-(void)setWallpaperBackgroundRect:(CGRect)arg1 forContents:(CGImageRef)arg2 withFallbackColor:(CGColorRef)arg3;
-(void)setBlurring:(char)arg1;
-(char)isBlurring;

@end

