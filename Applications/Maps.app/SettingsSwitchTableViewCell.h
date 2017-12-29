/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/SettingsTableViewCell.h>

@class MapsThemeLabel, UISwitch;

@interface SettingsSwitchTableViewCell : SettingsTableViewCell {

	MapsThemeLabel* _titleLabel;
	UISwitch* _switchControl;

}

@property (assign,nonatomic,__weak) MapsThemeLabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UISwitch * switchControl;                 //@synthesize switchControl=_switchControl - In the implementation block
-(MapsThemeLabel *)titleLabel;
-(UISwitch *)switchControl;
-(void)setSwitchControl:(UISwitch *)arg1 ;
-(void)setTitleLabel:(MapsThemeLabel *)arg1 ;
@end

