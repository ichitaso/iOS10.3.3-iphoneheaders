/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <MobileTimer/WorldClockCellViewDelegate.h>

@class WorldClockCity, WorldClockCellView, NSString;

@interface WorldClockTableViewCell : UITableViewCell <WorldClockCellViewDelegate> {

	WorldClockCity* _city;
	WorldClockCellView* _clockCellView;

}

@property (nonatomic,readonly) WorldClockCellView * clockCellView;              //@synthesize clockCellView=_clockCellView - In the implementation block
@property (nonatomic,retain) WorldClockCity * city;                             //@synthesize city=_city - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultHeight;
-(WorldClockCellView *)clockCellView;
-(id)init;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned)arg1 ;
-(void)setupConstraints;
-(void)setCity:(WorldClockCity *)arg1 ;
-(void)timeDidChangeForClockCell:(id)arg1 ;
-(WorldClockCity *)city;
@end

