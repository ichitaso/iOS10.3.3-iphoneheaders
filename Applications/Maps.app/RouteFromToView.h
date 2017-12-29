/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@protocol RouteFromToViewDelegate;
@class NSLayoutConstraint, UIStackView, MapsThemeLabel, MapsThemeButton, NSString, RoutePlanningTiming, TransitCustomTimingBannerFormatter;

@interface RouteFromToView : UIView {

	NSLayoutConstraint* _topToOriginLabelConstraint;
	NSLayoutConstraint* _destinationLabelToOriginButtonConstraint;
	UIStackView* _secondRowStackView;
	MapsThemeLabel* _originLabel;
	MapsThemeButton* _originButton;
	MapsThemeLabel* _fromLabel;
	MapsThemeLabel* _separatorLabel;
	MapsThemeButton* _timingButton;
	char _interactiveOrigin;
	NSString* _originName;
	NSString* _destinationName;
	RoutePlanningTiming* _timing;
	id<RouteFromToViewDelegate> _delegate;
	MapsThemeLabel* _destinationLabel;
	TransitCustomTimingBannerFormatter* _timingFormatter;

}

@property (nonatomic,readonly) MapsThemeLabel * destinationLabel;                                 //@synthesize destinationLabel=_destinationLabel - In the implementation block
@property (nonatomic,readonly) TransitCustomTimingBannerFormatter * timingFormatter;              //@synthesize timingFormatter=_timingFormatter - In the implementation block
@property (nonatomic,copy) NSString * originName;                                                 //@synthesize originName=_originName - In the implementation block
@property (nonatomic,copy) NSString * destinationName;                                            //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,copy) RoutePlanningTiming * timing;                                          //@synthesize timing=_timing - In the implementation block
@property (assign,nonatomic,__weak) id<RouteFromToViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
-(id)_initialConstraints;
-(void)_customInit;
-(NSString *)originName;
-(id)initWithInteractiveOrigin:(char)arg1 frame:(CGRect)arg2 ;
-(id)initWithInteractiveOrigin:(char)arg1 ;
-(void)setOriginName:(NSString *)arg1 ;
-(id)_destinationLabelTitle;
-(void)_updateTimingButtonTitle;
-(void)_didTap:(id)arg1 ;
-(void)_originButtonTapped:(id)arg1 ;
-(void)_timingButtonTapped:(id)arg1 ;
-(MapsThemeLabel *)destinationLabel;
-(TransitCustomTimingBannerFormatter *)timingFormatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<RouteFromToViewDelegate>)arg1 ;
-(void)dealloc;
-(id<RouteFromToViewDelegate>)delegate;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(void)_createSubviews;
-(RoutePlanningTiming *)timing;
-(void)setTiming:(RoutePlanningTiming *)arg1 ;
@end

