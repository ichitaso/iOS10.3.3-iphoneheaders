/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, MKViewWithHairline, NSString, UIFont, UIColor;

@interface RestaurantReservationSectionHeaderTableViewCell : UITableViewCell {

	UILabel* _headerLabel;
	MKViewWithHairline* _hairlineContainer;

}

@property (nonatomic,retain) UILabel * headerLabel;                               //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) MKViewWithHairline * hairlineContainer;              //@synthesize hairlineContainer=_hairlineContainer - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) char hidesHairline; 
-(void)initConstraints;
-(void)setHidesHairline:(char)arg1 ;
-(char)hidesHairline;
-(MKViewWithHairline *)hairlineContainer;
-(void)setHairlineContainer:(MKViewWithHairline *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
@end

