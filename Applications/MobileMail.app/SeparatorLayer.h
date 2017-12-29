/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SeparatorLayer : UIView {

	UIColor* _tintColor;
	unsigned _axis;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) unsigned axis;                    //@synthesize axis=_axis - In the implementation block
+(id)_defaultSeparatorColor;
+(float)separatorHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAxis:(unsigned)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(unsigned)axis;
@end

