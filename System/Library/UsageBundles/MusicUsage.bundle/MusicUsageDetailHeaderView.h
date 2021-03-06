/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/UsageBundles/MusicUsage.bundle/MusicUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, MusicUsageItem, UIImageView, UILabel, UIView, NSArray, NSLayoutConstraint;

@interface MusicUsageDetailHeaderView : UIView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	MusicUsageItem* _usageItem;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _sizeLabel;
	UILabel* _bottomLabel;
	UIView* _leadingView;
	NSArray* _imageSizeConstraints;
	NSLayoutConstraint* _leadingViewConstraint;
	NSLayoutConstraint* _subtitleLeadingConstraint;
	NSLayoutConstraint* _bottomLabelConstraint;

}
-(void)configureForSpecifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(void)_updateContents;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
@end

