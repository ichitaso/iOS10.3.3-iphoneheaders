/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, SearchResult, MKStarRatingView, MKTransitInfoLabelView, UIImageView, NSURL, UIView, UIColor, NSMutableArray, UILayoutGuide, NSLayoutConstraint, NSArray, GEOLocation;

@interface ListViewSearchResultCell : UITableViewCell {

	UILabel* _nameLabel;
	UILabel* _closedLabel;
	UILabel* _distanceLabel;
	UILabel* _detailsLabel;
	SearchResult* _searchResult;
	MKStarRatingView* _ratingView;
	UILabel* _numReviewsLabel;
	MKTransitInfoLabelView* _transitInfoLabel;
	UIImageView* _photoImageView;
	NSURL* _currentLoadingURL;
	char _showDistance;
	char _showCloseLabel;
	char _needsCreateLayout;
	UILabel* _delimiter;
	UIView* _selectedView;
	UIColor* _lightContentPlaceholderImageColor;
	UIColor* _placeholderImageColor;
	NSMutableArray* _constraints;
	UILayoutGuide* _photoLayoutGuide;
	NSLayoutConstraint* _photoLayoutGuideTrailing;
	NSLayoutConstraint* _photoHeightConstraint;
	NSArray* _closedLabelVisibleConstraints;
	NSArray* _closedLabelHiddenConstraints;
	NSArray* _ratingVisibleConstraints;
	NSArray* _ratingHiddenConstraints;
	NSArray* _detailsEmptyConstraints;
	NSArray* _detailsConstraints;
	char _ratingConstraintsVisible;
	char _closedConstraintsVisible;
	char _detailsEmptyConstraintsVisible;
	char _displaysPhoto;
	char _displaysAsChainResult;
	char _displaysAddressInsteadDistance;
	char _displaysLightContent;
	GEOLocation* _currentLocation;

}

@property (nonatomic,retain) SearchResult * searchResult; 
@property (nonatomic,retain) GEOLocation * currentLocation;                    //@synthesize currentLocation=_currentLocation - In the implementation block
@property (assign,nonatomic) char displaysPhoto;                               //@synthesize displaysPhoto=_displaysPhoto - In the implementation block
@property (assign,nonatomic) char displaysAsChainResult;                       //@synthesize displaysAsChainResult=_displaysAsChainResult - In the implementation block
@property (assign,nonatomic) char displaysAddressInsteadDistance;              //@synthesize displaysAddressInsteadDistance=_displaysAddressInsteadDistance - In the implementation block
@property (assign,nonatomic) char displaysLightContent;                        //@synthesize displaysLightContent=_displaysLightContent - In the implementation block
+(id)_delimiterString;
+(id)reuseIdentifier;
-(void)changeSizeNotification;
-(void)_updateStyleValuesFromTheme;
-(void)setDisplaysPhoto:(char)arg1 ;
-(void)setDisplaysAsChainResult:(char)arg1 ;
-(void)setDisplaysAddressInsteadDistance:(char)arg1 ;
-(void)setDisplaysLightContent:(char)arg1 ;
-(void)setNeedsUpdateLabels;
-(void)updateCellWithBlock:(/*^block*/id)arg1 ;
-(id)_distanceStringFromLocation:(id)arg1 toMapItem:(id)arg2 ;
-(char)showClosedBadge;
-(float)_topToNameLabelBaseline;
-(float)_nameLabelBaselineToAddressLabelBaseline;
-(float)_detailsLabelBaselineToNumReviewsLabelBaseline;
-(float)_numReviewsLabelBaselineToStarRatingBottom;
-(float)_numReviewsLabelBaselineToBottom;
-(float)_detailsLabelBaselineToTransitInfoLabelBaseline;
-(float)_detailsLabelBaselineToTransitInfoShieldLabelCenter;
-(float)_transitInfoLabelBaselineToBottom;
-(void)updateDetailsConstraints;
-(void)updateDetailsConstraintsWith:(char)arg1 ;
-(void)updateRatingConstraints;
-(void)updateRatingConstraintsWith:(char)arg1 ;
-(void)updateClosedConstraints;
-(void)updateClosedConstraintsWith:(char)arg1 ;
-(void)updatePhotoConstraint;
-(void)setImageBackgroundSelected:(char)arg1 ;
-(void)setBadgeBackground;
-(char)displaysPhoto;
-(char)displaysAsChainResult;
-(char)displaysAddressInsteadDistance;
-(char)displaysLightContent;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)updateLabels;
-(SearchResult *)searchResult;
-(void)setSearchResult:(SearchResult *)arg1 ;
-(GEOLocation *)currentLocation;
-(void)setCurrentLocation:(GEOLocation *)arg1 ;
-(void)addConstraints;
-(void)_updateFonts;
-(void)_updateLabels;
@end

