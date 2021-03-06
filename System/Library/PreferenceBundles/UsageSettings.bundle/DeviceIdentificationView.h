/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UsageSettings/UsageSettings-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIImage;

@interface DeviceIdentificationView : UIView {

	UIImageView* _deviceImageView;
	UILabel* _deviceNameLabel;
	UILabel* _deviceModelLabel;

}

@property (nonatomic,retain) UIImage * deviceImage; 
+(void)initialize;
-(UIImage *)deviceImage;
-(void)setDeviceImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 deviceName:(id)arg2 deviceIdentifier:(id)arg3 imageURL:(id)arg4 isCurrentDevice:(char)arg5 ;
-(void)loadImageForDeviceIdentifier:(id)arg1 URL:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
@end

