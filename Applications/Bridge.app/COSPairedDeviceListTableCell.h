/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIView, COSWatchView, UILabel, COSPairedDeviceListCheckmark;

@interface COSPairedDeviceListTableCell : PSTableCell {

	char _enabled;
	UIView* _selectedBackGroundView;
	COSWatchView* _watchView;
	UILabel* _watchName;
	UILabel* _watchBehavior;
	UILabel* _watchMaterial;
	UILabel* _watchSize;
	COSPairedDeviceListCheckmark* _checkmark;
	unsigned _deviceState;

}

@property (nonatomic,retain) UIView * selectedBackGroundView;                       //@synthesize selectedBackGroundView=_selectedBackGroundView - In the implementation block
@property (nonatomic,retain) COSWatchView * watchView;                              //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,retain) UILabel * watchName;                                   //@synthesize watchName=_watchName - In the implementation block
@property (nonatomic,retain) UILabel * watchBehavior;                               //@synthesize watchBehavior=_watchBehavior - In the implementation block
@property (nonatomic,retain) UILabel * watchMaterial;                               //@synthesize watchMaterial=_watchMaterial - In the implementation block
@property (nonatomic,retain) UILabel * watchSize;                                   //@synthesize watchSize=_watchSize - In the implementation block
@property (nonatomic,retain) COSPairedDeviceListCheckmark * checkmark;              //@synthesize checkmark=_checkmark - In the implementation block
@property (assign,nonatomic) char enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) unsigned deviceState;                                  //@synthesize deviceState=_deviceState - In the implementation block
-(void)updateActiveWatchForFaceChange;
-(UIView *)selectedBackGroundView;
-(void)setSelectedBackGroundView:(UIView *)arg1 ;
-(UILabel *)watchName;
-(void)setWatchName:(UILabel *)arg1 ;
-(UILabel *)watchBehavior;
-(void)setWatchBehavior:(UILabel *)arg1 ;
-(UILabel *)watchMaterial;
-(void)setWatchMaterial:(UILabel *)arg1 ;
-(unsigned)deviceState;
-(void)layoutSubviews;
-(char)enabled;
-(void)dealloc;
-(void)setChecked:(char)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(char)canBeChecked;
-(UILabel *)watchSize;
-(COSPairedDeviceListCheckmark *)checkmark;
-(void)setCheckmark:(COSPairedDeviceListCheckmark *)arg1 ;
-(COSWatchView *)watchView;
-(void)setWatchView:(COSWatchView *)arg1 ;
-(void)setDeviceState:(unsigned)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setWatchSize:(UILabel *)arg1 ;
@end
