/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class RoundedButtonConfiguration, UIVisualEffectView, NSString, UIButton;

@interface RoundedButtonViewController : UIViewController {

	RoundedButtonConfiguration* _buttonConfiguration;
	UIVisualEffectView* _blurEffectView;
	char _visible;
	NSString* _imageName;
	UIButton* _roundedButton;

}

@property (nonatomic,copy) NSString * imageName;                    //@synthesize imageName=_imageName - In the implementation block
@property (assign,nonatomic) char visible;                          //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) UIButton * roundedButton;              //@synthesize roundedButton=_roundedButton - In the implementation block
+(Class)buttonClass;
-(void)updateTheme;
-(id)initWithImageName:(id)arg1 ;
-(id)initWithImageName:(id)arg1 configuration:(id)arg2 ;
-(void)addRoundedButton;
-(UIButton *)roundedButton;
-(void)setRoundedButton:(UIButton *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)visible;
-(void)setVisible:(char)arg1 ;
-(void)viewDidLoad;
-(void)setVisible:(char)arg1 animated:(char)arg2 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
@end

