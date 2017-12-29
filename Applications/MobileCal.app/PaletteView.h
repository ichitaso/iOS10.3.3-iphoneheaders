/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class DayNavigationViewController, _UINavigationControllerPalette, WeekDayInitialsHeaderView;

@interface PaletteView : UIView {

	char _freezeSize;
	char _weekdayHeaderVisible;
	char _weekdayHeaderFillsHalfWidth;
	char _weekdayHeaderMovedBeyondLeftEdge;
	char _useCustomDayFrames;
	DayNavigationViewController* _dayScrubberController;
	float _extraPaletteHeight;
	_UINavigationControllerPalette* _containingPalette;
	WeekDayInitialsHeaderView* _dayInitialsHeaderView;

}

@property (nonatomic,retain) WeekDayInitialsHeaderView * dayInitialsHeaderView;                        //@synthesize dayInitialsHeaderView=_dayInitialsHeaderView - In the implementation block
@property (nonatomic,readonly) char hasContent; 
@property (assign,nonatomic) char freezeSize;                                                          //@synthesize freezeSize=_freezeSize - In the implementation block
@property (assign,nonatomic) char weekdayHeaderVisible;                                                //@synthesize weekdayHeaderVisible=_weekdayHeaderVisible - In the implementation block
@property (assign,nonatomic) char weekdayHeaderFillsHalfWidth;                                         //@synthesize weekdayHeaderFillsHalfWidth=_weekdayHeaderFillsHalfWidth - In the implementation block
@property (assign,nonatomic) char weekdayHeaderMovedBeyondLeftEdge;                                    //@synthesize weekdayHeaderMovedBeyondLeftEdge=_weekdayHeaderMovedBeyondLeftEdge - In the implementation block
@property (nonatomic,retain) DayNavigationViewController * dayScrubberController;                      //@synthesize dayScrubberController=_dayScrubberController - In the implementation block
@property (assign,nonatomic) char useCustomDayFrames;                                                  //@synthesize useCustomDayFrames=_useCustomDayFrames - In the implementation block
@property (assign,nonatomic) float extraPaletteHeight;                                                 //@synthesize extraPaletteHeight=_extraPaletteHeight - In the implementation block
@property (nonatomic,__weak,readonly) _UINavigationControllerPalette * containingPalette;              //@synthesize containingPalette=_containingPalette - In the implementation block
-(void)layoutWithoutResizingPalette;
-(void)setDayHeaderFrames:(id)arg1 ;
-(void)setWeekdayHeaderVisible:(char)arg1 ;
-(void)setWeekdayHeaderFillsHalfWidth:(char)arg1 ;
-(void)setDayScrubberController:(DayNavigationViewController *)arg1 ;
-(void)setFreezeSize:(char)arg1 ;
-(WeekDayInitialsHeaderView *)dayInitialsHeaderView;
-(DayNavigationViewController *)dayScrubberController;
-(void)setExtraPaletteHeight:(float)arg1 ;
-(void)removeAllContent;
-(void)setUseCustomDayFrames:(char)arg1 ;
-(char)useCustomDayFrames;
-(id)initWithNavigationPalette:(id)arg1 ;
-(void)updateForChangeToTraitCollection:(id)arg1 ;
-(float)sideMargin;
-(char)weekdayHeaderVisible;
-(float)extraPaletteHeight;
-(char)freezeSize;
-(char)weekdayHeaderFillsHalfWidth;
-(char)weekdayHeaderMovedBeyondLeftEdge;
-(void)_layoutDayInitialsView;
-(void)setWeekdayHeaderMovedBeyondLeftEdge:(char)arg1 ;
-(id)_generateWeekDayInitialsHeaderViewWithHorizontalSizeClass:(char)arg1 ;
-(_UINavigationControllerPalette *)containingPalette;
-(void)setDayInitialsHeaderView:(WeekDayInitialsHeaderView *)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)hasContent;
-(void)_localeChanged:(id)arg1 ;
@end

