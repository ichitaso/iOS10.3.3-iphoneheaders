/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarStyleAttributes.h>

@class UIColor;

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {

	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	char _hasBusyBackground;

}
-(char)isTranslucent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(Class)foregroundStyleClass;
-(id)foregroundColor;
-(id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 hasBusyBackground:(char)arg4 ;
-(id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 ;
-(int)legibilityStyle;
-(char)isTransparent;
-(char)shouldUseVisualAltitude;
-(id)backgroundColorWithTintColor:(id)arg1 ;
-(id)newForegroundStyleWithHeight:(float)arg1 ;
@end

