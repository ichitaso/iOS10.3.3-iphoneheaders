/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudDriveApp/iCloudDriveApp-Structs.h>
#import <Maps/MapsThemeView.h>

@interface HairlineView : MapsThemeView {

	float _intrinsicHeight;
	char _autoUpdateTheme;

}

@property (assign,nonatomic) char autoUpdateTheme;              //@synthesize autoUpdateTheme=_autoUpdateTheme - In the implementation block
-(void)updateTheme;
-(char)autoUpdateTheme;
-(void)setAutoUpdateTheme:(char)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)customInit;
@end

