/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsThemeView.h>
#import <Maps/RoutePlanningETAReceiver.h>

@protocol TransportTypePickerDelegate;
@class NSMutableArray, UIStackView, UIView, NSLayoutConstraint, NSArray;

@interface TransportTypePicker : MapsThemeView <RoutePlanningETAReceiver> {

	float _lastLayoutSubviewsSegmentWidth;
	id<TransportTypePickerDelegate> _delegate;
	int _selectedType;
	NSMutableArray* _segments;
	UIStackView* _segmentStackView;
	UIView* _topSeparator;
	NSLayoutConstraint* _topSeparatorThicknessConstraint;

}

@property (nonatomic,readonly) NSArray * types; 
@property (nonatomic,retain) NSMutableArray * segments;                                         //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) UIStackView * segmentStackView;                                  //@synthesize segmentStackView=_segmentStackView - In the implementation block
@property (nonatomic,readonly) UIView * topSeparator;                                           //@synthesize topSeparator=_topSeparator - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topSeparatorThicknessConstraint;              //@synthesize topSeparatorThicknessConstraint=_topSeparatorThicknessConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<TransportTypePickerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int selectedType;                                                  //@synthesize selectedType=_selectedType - In the implementation block
-(void)_customInit;
-(void)updateTheme;
-(void)setSelectedType:(int)arg1 ;
-(void)updateRouteETAForTransportType:(int)arg1 withTravelTime:(double)arg2 ;
-(void)failToReceiveRouteETAForTransportType:(int)arg1 withError:(id)arg2 ;
-(void)invalidateRouteETAForTransportType:(int)arg1 ;
-(id)segmentWidthThresholdsToShrinkFont;
-(void)_didSelectSegment:(id)arg1 ;
-(void)_updateViewsForSelectedType:(int)arg1 ;
-(id)_segmentOfType:(int)arg1 ;
-(NSLayoutConstraint *)topSeparatorThicknessConstraint;
-(void)setTopSeparatorThicknessConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TransportTypePickerDelegate>)arg1 ;
-(id<TransportTypePickerDelegate>)delegate;
-(NSArray *)types;
-(id)accessibilityElements;
-(void)_createSubviews;
-(NSMutableArray *)segments;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(UIView *)topSeparator;
-(int)selectedType;
-(UIStackView *)segmentStackView;
-(void)_setupConstraints;
@end

