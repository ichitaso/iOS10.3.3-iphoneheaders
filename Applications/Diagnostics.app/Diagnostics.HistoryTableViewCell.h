/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostics/Diagnostics.BaseTableViewCell.h>

@class UILabel;

@interface Diagnostics.HistoryTableViewCell : Diagnostics.BaseTableViewCell {

	 fontSizeSuiteTitle;
	 fontSizeDate;
	 verticalMargin;
	 verticalPadding;
	 suiteLabel;
	 dateLabel;

}

@property (readonly,nonatomic) UILabel * suiteLabel; 
@property (readonly,nonatomic) UILabel * dateLabel; 
-(void)setupViewAttributes;
-(void)setupViewHierarchy;
-(void)setupViewLayoutConstraints;
-(UILabel *)suiteLabel;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)dateLabel;
@end

