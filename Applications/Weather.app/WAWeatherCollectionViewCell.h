/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <libobjc.A.dylib/CityUpdateObserver.h>

@protocol WAWeatherCollectionViewCellDelegate, WAWeatherCollectionViewCellLayoutDelegate;
@class City, UIButton, WUIDynamicWeatherBackground, NSArray, WAWeatherCityView, NSString;

@interface WAWeatherCollectionViewCell : UICollectionViewCell <CityUpdateObserver> {

	float _buttonWidth;
	char _showingDeleteUI;
	char _needsUIUpdateAfterReuse;
	City* _city;
	int _mode;
	float _transitionProgress;
	float _textTopMargin;
	UIButton* _deleteButton;
	id<WAWeatherCollectionViewCellDelegate> _delegate;
	id<WAWeatherCollectionViewCellLayoutDelegate> _layoutDelegate;
	WUIDynamicWeatherBackground* _background;
	NSArray* _extraViews;
	float _deleteSliderOffset;
	WAWeatherCityView* _cityView;

}

@property (nonatomic,retain) WUIDynamicWeatherBackground * background;                                         //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) float deleteSliderOffset;                                                         //@synthesize deleteSliderOffset=_deleteSliderOffset - In the implementation block
@property (assign,nonatomic) char needsUIUpdateAfterReuse;                                                     //@synthesize needsUIUpdateAfterReuse=_needsUIUpdateAfterReuse - In the implementation block
@property (nonatomic,readonly) WAWeatherCityView * cityView;                                                   //@synthesize cityView=_cityView - In the implementation block
@property (nonatomic,readonly) City * city;                                                                    //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) int mode;                                                                       //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float transitionProgress;                                                         //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (assign,nonatomic) float textTopMargin;                                                              //@synthesize textTopMargin=_textTopMargin - In the implementation block
@property (getter=isShowingDeleteUI,nonatomic,readonly) char showingDeleteUI;                                  //@synthesize showingDeleteUI=_showingDeleteUI - In the implementation block
@property (nonatomic,readonly) UIButton * deleteButton;                                                        //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,nonatomic,__weak) id<WAWeatherCollectionViewCellDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WAWeatherCollectionViewCellLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) NSArray * extraViews;                                                             //@synthesize extraViews=_extraViews - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WAWeatherCityView *)cityView;
-(void)willTransitionToSize:(CGSize)arg1 layoutOptions:(id)arg2 ;
-(void)animateTransitionToSize:(CGSize)arg1 layoutOptions:(id)arg2 ;
-(void)setExtraViews:(NSArray *)arg1 ;
-(void)useBackgroundView:(id)arg1 ;
-(id)relinquishBackground;
-(void)setCity:(id)arg1 andMode:(int)arg2 ;
-(void)_createCityView;
-(void)refreshForUnitsChange;
-(void)_createBackground;
-(void)_layoutForShowingDeleteUI:(char)arg1 ;
-(void)_updateBackgroundCondition;
-(void)setTextTopMargin:(float)arg1 ;
-(float)deleteButtonOriginXForOffset:(float)arg1 ;
-(float)deleteButtonWidthForOffset:(float)arg1 ;
-(void)setParallaxOffset:(float)arg1 isTransitionOffset:(char)arg2 ;
-(id)relinquishCityView;
-(void)useCityView:(id)arg1 ;
-(void)beginTracking;
-(void)swipeByOffset:(float)arg1 ;
-(void)showDeleteUI:(char)arg1 animated:(char)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 cityViewPanOffset:(float)arg2 ;
-(float)textTopMargin;
-(char)isShowingDeleteUI;
-(NSArray *)extraViews;
-(float)deleteSliderOffset;
-(void)setDeleteSliderOffset:(float)arg1 ;
-(char)needsUIUpdateAfterReuse;
-(void)setNeedsUIUpdateAfterReuse:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WAWeatherCollectionViewCellDelegate>)arg1 ;
-(void)dealloc;
-(id<WAWeatherCollectionViewCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)delete:(id)arg1 ;
-(int)mode;
-(void)applyLayoutAttributes:(id)arg1 ;
-(WUIDynamicWeatherBackground *)background;
-(void)setBackground:(WUIDynamicWeatherBackground *)arg1 ;
-(void)setTransitionProgress:(float)arg1 ;
-(float)transitionProgress;
-(UIButton *)deleteButton;
-(void)setLayoutDelegate:(id<WAWeatherCollectionViewCellLayoutDelegate>)arg1 ;
-(id<WAWeatherCollectionViewCellLayoutDelegate>)layoutDelegate;
-(void)cityDidStartWeatherUpdate:(id)arg1 ;
-(void)cityDidFinishWeatherUpdate:(id)arg1 ;
-(City *)city;
-(void)didTransitionToSize:(CGSize)arg1 ;
@end

