/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/MKViewWithHairline.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface TitleRowBrowseView : MKViewWithHairline {

	UILabel* _titleLabel;
	NSLayoutConstraint* _topConstraint;

}

@property (nonatomic,copy) NSString * title; 
+(float)rowHeight;
+(id)_labelFont;
-(void)_updateConstraintsValue;
-(void)updateTheme;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)customInit;
@end

