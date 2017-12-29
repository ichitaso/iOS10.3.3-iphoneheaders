/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/MKTableViewCell.h>

@class TransitDirectionsListItem, UILayoutGuide, NSLayoutConstraint, UIView;

@interface TransitDirectionsCell : MKTableViewCell {

	TransitDirectionsListItem* _transitListItem;
	UILayoutGuide* _trailingViewGuide;
	NSLayoutConstraint* _trailingGuideWidth;
	NSLayoutConstraint* _trailingGuideToContentViewConstraint;
	char _useLeadingInstructionMarginAsLeadingSeparatorInset;
	float _leadingInstructionMargin;
	int _navigationState;
	UIView* _trailingView;

}

@property (nonatomic,readonly) TransitDirectionsListItem * transitListItem;                        //@synthesize transitListItem=_transitListItem - In the implementation block
@property (assign,nonatomic) char useLeadingInstructionMarginAsLeadingSeparatorInset;              //@synthesize useLeadingInstructionMarginAsLeadingSeparatorInset=_useLeadingInstructionMarginAsLeadingSeparatorInset - In the implementation block
@property (assign,nonatomic) float leadingInstructionMargin;                                       //@synthesize leadingInstructionMargin=_leadingInstructionMargin - In the implementation block
@property (nonatomic,retain) UIView * trailingView;                                                //@synthesize trailingView=_trailingView - In the implementation block
@property (assign,nonatomic) int navigationState;                                                  //@synthesize navigationState=_navigationState - In the implementation block
+(void)registerCellsForTableView:(id)arg1 ;
+(id)cellIdentifierForListItem:(id)arg1 ;
+(id)cellMapping;
+(Class)cellClassForListItem:(id)arg1 ;
+(id)dequeueCellForListItem:(id)arg1 fromTableView:(id)arg2 atIndexPath:(id)arg3 ;
+(id)cellIdentifier;
-(id)_initialConstraints;
-(void)setLeadingInstructionMargin:(float)arg1 ;
-(TransitDirectionsListItem *)transitListItem;
-(void)setUseLeadingInstructionMarginAsLeadingSeparatorInset:(char)arg1 ;
-(float)leadingInstructionMargin;
-(UIView *)trailingView;
-(void)setTrailingView:(UIView *)arg1 ;
-(char)useLeadingInstructionMarginAsLeadingSeparatorInset;
-(float)_trailingGuideToContentViewDistance;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setAccessoryType:(int)arg1 ;
-(CGRect)_separatorFrame;
-(int)navigationState;
-(void)setNavigationState:(int)arg1 ;
-(void)_createSubviews;
-(void)_contentSizeCategoryDidChange;
@end

