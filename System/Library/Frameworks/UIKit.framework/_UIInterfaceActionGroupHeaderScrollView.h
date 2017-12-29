/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIAlertControllerShadowedScrollView.h>

@class NSArray, UIView;

@interface _UIInterfaceActionGroupHeaderScrollView : _UIAlertControllerShadowedScrollView {

	NSArray* _constraints;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)updateConstraints;
-(void)_setUsesStaticScrollBar:(char)arg1 ;
-(float)_contentFitCanScrollThreshold;
@end

