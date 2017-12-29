/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface VOTUICursorView : UIView {

	CGRect _cursorFrame;
	char _isHidden;
	UIColor* _bgColor;
	float _cachedAlpha;
	CGPathRef _path;
	char largeCursorEnabled;

}

@property (nonatomic,readonly) char largeCursorEnabled; 
@property (assign,nonatomic) CGPathRef path;                         //@synthesize path=_path - In the implementation block
+(CGRect)resizeFrameForDisplay:(CGRect)arg1 ;
-(id)_retrievePathBezierPaths;
-(id)_retrieveFrameBezierPath:(CGRect)arg1 ;
-(void)_orderIn;
-(id)_retrieveBezierPaths:(CGRect)arg1 usingRealPaths:(char*)arg2 ;
-(void)_orderOut;
-(CGRect)resizeFrameForWindow:(CGRect)arg1 ;
-(void)setCursorFrame:(CGRect)arg1 animated:(char)arg2 ;
-(char)largeCursorEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(char)isHidden;
-(CGPathRef)path;
-(float)lineWidth;
-(void)setPath:(CGPathRef)arg1 ;
-(char)userInteractionEnabled;
-(void)setIsHidden:(char)arg1 ;
@end

