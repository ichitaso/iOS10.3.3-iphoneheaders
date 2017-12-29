/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/TopBarAlertView.h>

@class MapsSuggestionsEntry;

@interface CarLowFuelAlertView : TopBarAlertView {

	MapsSuggestionsEntry* _entry;
	SCD_Struct_Ca7 _metrics;

}

@property (assign,nonatomic) SCD_Struct_Ca8 metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (retain) MapsSuggestionsEntry * entry;                  //@synthesize entry=_entry - In the implementation block
-(id)initWithMapsSuggestion:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3 ;
-(void)_refreshStyles;
-(void)updateForDarkUI:(char)arg1 ;
-(int)preferredStatusBarStyle;
-(SCD_Struct_Ca8)metrics;
-(MapsSuggestionsEntry *)entry;
-(void)setMetrics:(SCD_Struct_Ca8)arg1 ;
-(void)setFocusMode:(char)arg1 ;
-(void)setEntry:(MapsSuggestionsEntry *)arg1 ;
@end

