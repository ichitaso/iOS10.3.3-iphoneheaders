/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface UITableViewCellSelectedBackground : UIView {

	int _selectionStyle;
	UIColor* _multiselectBackgroundColor;
	UIColor* _selectionTintColor;
	UIColor* _noneStyleBackgroundColor;
	char _multiselect;

}

@property (assign,nonatomic) int selectionStyle;                                 //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (nonatomic,retain) UIColor * multiselectBackgroundColor;               //@synthesize multiselectBackgroundColor=_multiselectBackgroundColor - In the implementation block
@property (assign,getter=isMultiselect,nonatomic) char multiselect; 
@property (nonatomic,retain) UIColor * selectionTintColor;                       //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
@property (nonatomic,retain) UIColor * noneStyleBackgroundColor;                 //@synthesize noneStyleBackgroundColor=_noneStyleBackgroundColor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(int)selectionStyle;
-(void)setSelectionStyle:(int)arg1 ;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(void)setMultiselect:(char)arg1 ;
-(char)isMultiselect;
-(void)setNoneStyleBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)multiselectBackgroundColor;
-(void)setMultiselectBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)selectionTintColor;
-(UIColor *)noneStyleBackgroundColor;
@end

