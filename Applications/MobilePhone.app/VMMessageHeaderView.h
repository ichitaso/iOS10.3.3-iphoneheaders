/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface VMMessageHeaderView : UIView {

	char _subviewsLoaded;
	char _subviewsLayoutConstraintsLoaded;
	UILabel* _dateLabel;
	UILabel* _headlineLabel;
	UILabel* _subheadlineLabel;
	NSLayoutConstraint* _dateLabelFirstBaselineAnchorLayoutConstraint;
	NSLayoutConstraint* _headlineLabelFirstBaselineAnchorLayoutConstraint;
	NSLayoutConstraint* _subheadlineLabelFirstBaselineAnchorLayoutConstraint;

}

@property (nonatomic,retain) UILabel * dateLabel;                                                                   //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UILabel * headlineLabel;                                                               //@synthesize headlineLabel=_headlineLabel - In the implementation block
@property (nonatomic,retain) UILabel * subheadlineLabel;                                                            //@synthesize subheadlineLabel=_subheadlineLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dateLabelFirstBaselineAnchorLayoutConstraint;                     //@synthesize dateLabelFirstBaselineAnchorLayoutConstraint=_dateLabelFirstBaselineAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headlineLabelFirstBaselineAnchorLayoutConstraint;                 //@synthesize headlineLabelFirstBaselineAnchorLayoutConstraint=_headlineLabelFirstBaselineAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subheadlineLabelFirstBaselineAnchorLayoutConstraint;              //@synthesize subheadlineLabelFirstBaselineAnchorLayoutConstraint=_subheadlineLabelFirstBaselineAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) float dateLabelFirstBaselineAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) float headlineLabelFirstBaselineAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) float subheadlineLabelFirstBaselineAnchorLayoutConstraintConstant; 
@property (assign,nonatomic) char subviewsLoaded;                                                                   //@synthesize subviewsLoaded=_subviewsLoaded - In the implementation block
@property (assign,nonatomic) char subviewsLayoutConstraintsLoaded;                                                  //@synthesize subviewsLayoutConstraintsLoaded=_subviewsLayoutConstraintsLoaded - In the implementation block
@property (nonatomic,copy) NSString * localizedDate; 
@property (nonatomic,copy) NSString * localizedHeadline; 
@property (nonatomic,copy) NSString * localizedSubheadline; 
+(char)requiresConstraintBasedLayout;
-(void)setLocalizedHeadline:(NSString *)arg1 ;
-(void)setLocalizedSubheadline:(NSString *)arg1 ;
-(void)setLocalizedDate:(NSString *)arg1 ;
-(void)loadSubviews;
-(void)loadSubviewsLayoutConstraints;
-(UILabel *)subheadlineLabel;
-(char)subviewsLayoutConstraintsLoaded;
-(void)updateConstraintConstants;
-(NSLayoutConstraint *)dateLabelFirstBaselineAnchorLayoutConstraint;
-(float)dateLabelFirstBaselineAnchorLayoutConstraintConstant;
-(NSLayoutConstraint *)headlineLabelFirstBaselineAnchorLayoutConstraint;
-(float)headlineLabelFirstBaselineAnchorLayoutConstraintConstant;
-(NSLayoutConstraint *)subheadlineLabelFirstBaselineAnchorLayoutConstraint;
-(float)subheadlineLabelFirstBaselineAnchorLayoutConstraintConstant;
-(NSString *)localizedDate;
-(NSString *)localizedHeadline;
-(NSString *)localizedSubheadline;
-(void)setSubheadlineLabel:(UILabel *)arg1 ;
-(void)setDateLabelFirstBaselineAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeadlineLabelFirstBaselineAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSubheadlineLabelFirstBaselineAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(char)subviewsLoaded;
-(void)setSubviewsLoaded:(char)arg1 ;
-(void)setSubviewsLayoutConstraintsLoaded:(char)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateConstraints;
-(void)commonInit;
-(UILabel *)dateLabel;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)setHeadlineLabel:(UILabel *)arg1 ;
-(UILabel *)headlineLabel;
@end

