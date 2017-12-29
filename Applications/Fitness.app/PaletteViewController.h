/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Fitness/PaletteScrollViewDelegate.h>

@class _UINavigationControllerPalette, FitnessDateCache, PaletteWeekdayHeaderView, PaletteScrollViewController, NSString;

@interface PaletteViewController : UIViewController <UIScrollViewDelegate, PaletteScrollViewDelegate> {

	_UINavigationControllerPalette* _containingPalette;
	FitnessDateCache* _dateCache;
	PaletteWeekdayHeaderView* _paletteView;
	PaletteScrollViewController* _paletteScrollVC;
	char _monthNeedsToBeUpdatedInSplitState;

}

@property (assign,nonatomic) char monthNeedsToBeUpdatedInSplitState;                     //@synthesize monthNeedsToBeUpdatedInSplitState=_monthNeedsToBeUpdatedInSplitState - In the implementation block
@property (nonatomic,retain) PaletteScrollViewController * paletteScrollVC;              //@synthesize paletteScrollVC=_paletteScrollVC - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionPercent:(float)arg1 final:(char)arg2 ;
-(id)initWithNavigationPalette:(id)arg1 dateCache:(id)arg2 ;
-(void)paletteScrolledInDirection:(char)arg1 ;
-(void)paletteDateSelected:(id)arg1 ;
-(void)setMonthNeedsToBeUpdatedInSplitState:(char)arg1 ;
-(void)currentDateChanged:(id)arg1 ;
-(void)todayChanged:(id)arg1 ;
-(char)monthNeedsToBeUpdatedInSplitState;
-(PaletteScrollViewController *)paletteScrollVC;
-(void)setPaletteScrollVC:(PaletteScrollViewController *)arg1 ;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)setIsExpanded:(char)arg1 ;
-(void)_registerForNotifications;
@end

