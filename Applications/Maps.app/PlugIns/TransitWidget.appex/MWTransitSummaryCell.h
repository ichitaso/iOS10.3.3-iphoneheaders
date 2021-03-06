/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TransitWidget/TransitWidget-Structs.h>
#import <MapKit/MKTableViewCell.h>

@class UIStackView, UILayoutGuide, NSLayoutConstraint, _MKUILabel, MKTransitInfoLabelView, MWTransitSummaryItem, MKArtworkDataSourceCache;

@interface MWTransitSummaryCell : MKTableViewCell {

	UIStackView* _stackView;
	UILayoutGuide* _contentGuide;
	NSLayoutConstraint* _rowHeightConstraint;
	NSLayoutConstraint* _primaryLabelToContentGuideConstraint;
	NSLayoutConstraint* _primaryToSecondaryLabelConstraint;
	_MKUILabel* _primaryLabel;
	MKTransitInfoLabelView* _artworksLabel;
	MWTransitSummaryItem* _item;

}

@property (nonatomic,readonly) _MKUILabel * primaryLabel;                           //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) MKTransitInfoLabelView * artworksLabel;              //@synthesize artworksLabel=_artworksLabel - In the implementation block
@property (nonatomic,retain) MKArtworkDataSourceCache * artworkCache; 
@property (assign,nonatomic) float rowHeight; 
@property (nonatomic,retain) MWTransitSummaryItem * item;                           //@synthesize item=_item - In the implementation block
+(id)_secondaryFont;
+(id)_primaryFont;
-(id)_initialConstraints;
-(MKTransitInfoLabelView *)artworksLabel;
-(void)_updatePrimaryLabelToContentGuideConstaint;
-(void)layoutSubviews;
-(void)setRowHeight:(float)arg1 ;
-(float)rowHeight;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(MWTransitSummaryItem *)item;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setItem:(MWTransitSummaryItem *)arg1 ;
-(void)_createSubviews;
-(MKArtworkDataSourceCache *)artworkCache;
-(void)setArtworkCache:(MKArtworkDataSourceCache *)arg1 ;
-(_MKUILabel *)primaryLabel;
-(void)_updateLayout;
@end

