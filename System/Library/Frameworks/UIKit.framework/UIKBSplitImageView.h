/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSString;

@interface UIKBSplitImageView : UIView {

	UIImageView* _fullView;
	UIImageView* _splitLeft;
	UIImageView* _splitRight;
	NSString* _currentFilterType;

}

@property (nonatomic,retain) NSString * filterType;              //@synthesize currentFilterType=_currentFilterType - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)_shouldInheritScreenScaleAsContentScaleFactor;
-(void)setContentsMultiplyColor:(id)arg1 ;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(void)prepareForDisplay:(char)arg1 ;
-(void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4 ;
-(void)insertSubviewAtBottom:(id)arg1 ;
-(void)setImage:(id)arg1 cachedWidth:(float)arg2 keyplane:(id)arg3 ;
-(void)clearImages;
@end

