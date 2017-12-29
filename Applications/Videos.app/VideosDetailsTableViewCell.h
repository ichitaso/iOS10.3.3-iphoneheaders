/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIStackView, UILabel;

@interface VideosDetailsTableViewCell : UITableViewCell {

	NSLayoutConstraint* _titleLabelTrailingConstraint;
	NSLayoutConstraint* _detailLabelTrailingConstraint;
	UIStackView* _horizontalStackView;
	UIStackView* _columnOneStackView;
	UIStackView* _columnTwoStackView;
	NSLayoutConstraint* _titleTopConstraint;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UILabel* _columnTwoTitleLabel;
	UILabel* _columnTwoDetailLabel;

}

@property (nonatomic,readonly) UIStackView * horizontalStackView;                    //@synthesize horizontalStackView=_horizontalStackView - In the implementation block
@property (nonatomic,readonly) UIStackView * columnOneStackView;                     //@synthesize columnOneStackView=_columnOneStackView - In the implementation block
@property (nonatomic,readonly) UIStackView * columnTwoStackView;                     //@synthesize columnTwoStackView=_columnTwoStackView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * titleTopConstraint;              //@synthesize titleTopConstraint=_titleTopConstraint - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                                //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UILabel * columnTwoTitleLabel;                        //@synthesize columnTwoTitleLabel=_columnTwoTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * columnTwoDetailLabel;                       //@synthesize columnTwoDetailLabel=_columnTwoDetailLabel - In the implementation block
-(void)prepareForTwoColumnDisplay;
-(UILabel *)columnTwoTitleLabel;
-(UILabel *)columnTwoDetailLabel;
-(UIStackView *)horizontalStackView;
-(UIStackView *)columnOneStackView;
-(UIStackView *)columnTwoStackView;
-(NSLayoutConstraint *)titleTopConstraint;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UILabel *)detailLabel;
@end

