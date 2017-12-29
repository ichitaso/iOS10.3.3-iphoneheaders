/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, MultilineWrappingListView, UIImage;

@interface TransitArtworkListView : UIView {

	NSArray* _artworkImageViews;
	MultilineWrappingListView* _multilineWrappingStackView;
	UIImage* _arrowImage;
	UIImage* _incidentBadgeImage;
	int _shieldSize;
	unsigned _separatorStyle;
	NSArray* _artworkData;
	float _verticalContentHuggingPriority;

}

@property (nonatomic,readonly) UIImage * arrowImage;                            //@synthesize arrowImage=_arrowImage - In the implementation block
@property (nonatomic,readonly) UIImage * incidentBadgeImage;                    //@synthesize incidentBadgeImage=_incidentBadgeImage - In the implementation block
@property (assign,nonatomic) int shieldSize;                                    //@synthesize shieldSize=_shieldSize - In the implementation block
@property (assign,nonatomic) unsigned separatorStyle;                           //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) NSArray * artworkData;                             //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,readonly) unsigned numberOfLines; 
@property (nonatomic,readonly) float singleLineWidth; 
@property (assign,nonatomic) float verticalContentHuggingPriority;              //@synthesize verticalContentHuggingPriority=_verticalContentHuggingPriority - In the implementation block
-(void)_updateArtworkImageViewWithArtworks;
-(void)_createNewMultilineShieldView;
-(id)_addArtworkModel:(id)arg1 inContainer:(id)arg2 constraints:(id)arg3 previousViewInSegment:(id)arg4 leadingSpacing:(float)arg5 ;
-(id)_segmentContainer;
-(UIImage *)arrowImage;
-(id)_createVerticalConstraintsForArtworkViews:(id)arg1 ;
-(float)singleLineWidth;
-(void)setVerticalContentHuggingPriority:(float)arg1 ;
-(UIImage *)incidentBadgeImage;
-(float)verticalContentHuggingPriority;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setSeparatorStyle:(unsigned)arg1 ;
-(unsigned)separatorStyle;
-(unsigned)numberOfLines;
-(NSArray *)artworkData;
-(void)setArtworkData:(NSArray *)arg1 ;
-(void)setShieldSize:(int)arg1 ;
-(int)shieldSize;
-(id)_arrowImageView;
@end

