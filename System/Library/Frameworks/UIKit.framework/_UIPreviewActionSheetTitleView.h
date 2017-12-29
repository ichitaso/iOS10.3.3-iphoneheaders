/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface _UIPreviewActionSheetTitleView : UIView {

	NSString* _title;
	UILabel* _label;

}

@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;              //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)_updateLabelFont;
-(void)_contentSizeChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
@end

