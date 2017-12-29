/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKBKeyView;

@interface _UIUCBKBSelectionBackground : UIView {

	UIKBKeyView* _backgroundProvidingView;
	char _showButtonShape;

}

@property (assign,nonatomic) char showButtonShape;              //@synthesize showButtonShape=_showButtonShape - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)setShowButtonShape:(char)arg1 ;
-(void)_updateBackgroundProvidingView;
-(id)_makeBackgroundView;
-(char)showButtonShape;
@end

