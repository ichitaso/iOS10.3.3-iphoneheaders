/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostics/Diagnostics-Structs.h>
#import <Diagnostics/Diagnostics.BaseView.h>

@class NSString, UIView;

@interface Diagnostics.DeviceInformationView : Diagnostics.BaseView {

	 fontSizeMarketingName;
	 fontSizeDescription;
	 fontSizeSerialNumber;
	 fontSizeIDLabel;
	 imageWidth;
	 imageHeight;
	 labelsVerticalPadding;
	 labelsHorizontalPadding;
	 buttonWidthHeight;
	 swipeButtonMargin;
	 imageView;
	 marketingNameLabel;
	 descriptionLabel;
	 serialNumberLabel;
	 idLabel;
	 addButton;
	 swipeButton;
	 activityIndicator;
	 serialNumber;
	 IMEI;
	 marketingName;
	 deviceIdentifier;
	 deviceIdentifierVisible;
	 deviceImageView;
	 delegate;
	 containerLayoutUpdateHandler;
	 hasExplicitHeight;
	 showingSerialNumber;
	 marketingNameLabelBottomConstraint;
	 serialNumberLabelTopConstraint;

}

@property (copy,nonatomic) NSString * serialNumber; 
@property (copy,nonatomic) NSString * IMEI; 
@property (copy,nonatomic) NSString * marketingName; 
@property (copy,nonatomic) NSString * deviceIdentifier; 
@property (assign,nonatomic) char deviceIdentifierVisible; 
@property (retain,nonatomic) UIView * deviceImageView; 
@property (copy,nonatomic) id containerLayoutUpdateHandler; 
@property (assign,nonatomic) char hasExplicitHeight; 
-(UIView *)deviceImageView;
-(void)setDeviceImageView:(UIView *)arg1 ;
-(NSString *)IMEI;
-(void)setupViewAttributes;
-(void)setIMEI:(NSString *)arg1 ;
-(void)setMarketingName:(NSString *)arg1 ;
-(char)deviceIdentifierVisible;
-(void)setDeviceIdentifierVisible:(char)arg1 ;
-(id)containerLayoutUpdateHandler;
-(void)setContainerLayoutUpdateHandler:(id)arg1 ;
-(char)hasExplicitHeight;
-(void)setHasExplicitHeight:(char)arg1 ;
-(void)setupViewHierarchy;
-(void)setupViewLayoutConstraints;
-(void)setWatchDescriptionLabelWithEnclosure:(id)arg1 caseSize:(id)arg2 ;
-(void)addButtonPressed;
-(void)swipeButtonPressed;
-(void)serialNumberTapped;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)marketingName;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
@end

