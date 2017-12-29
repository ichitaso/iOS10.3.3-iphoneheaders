/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Health/WDDashboardCellPrimaryValueSourceDelegate.h>
#import <Fitness/HKDateCacheObserver.h>
#import <Health/WDDashboardCellForceTouchDelegate.h>

@protocol WDDashboardCellPrimaryValueSource;
@class UIImageView, UILabel, HKDateCache, NSString;

@interface WDCurrentValueTableViewCell : UITableViewCell <WDDashboardCellPrimaryValueSourceDelegate, HKDateCacheObserver, WDDashboardCellForceTouchDelegate> {

	UIImageView* _backgroundImageView;
	UIImageView* _categoryIcon;
	UILabel* _titleLabel;
	UILabel* _currentValueLabel;
	UILabel* _contextLabel;
	HKDateCache* _dateCache;
	unsigned _marginMode;
	id<WDDashboardCellPrimaryValueSource> _primaryValueSource;

}

@property (nonatomic,retain) id<WDDashboardCellPrimaryValueSource> primaryValueSource;              //@synthesize primaryValueSource=_primaryValueSource - In the implementation block
@property (assign,nonatomic) unsigned marginMode;                                                   //@synthesize marginMode=_marginMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)preferredHeight;
-(void)setMarginMode:(unsigned)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 dateCache:(id)arg2 ;
-(void)setPrimaryValueSource:(id<WDDashboardCellPrimaryValueSource>)arg1 ;
-(CGRect)forceTouchFrame;
-(void)_updateTimeBasedUI;
-(unsigned)marginMode;
-(id<WDDashboardCellPrimaryValueSource>)primaryValueSource;
-(void)_setUpSubviews;
-(id)_currentValueTextWithFontScaledBy:(float)arg1 ;
-(id)_titleLabelTextWithFontScaledBy:(float)arg1 ;
-(id)_contextLabelText;
-(void)primaryValueSourceDidUpdate:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateUI;
-(void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2 ;
@end

