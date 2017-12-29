/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString, UIView, UITextView, UIButton;

@interface SBActivationInfoViewController : UIViewController {

	NSString* _meid;
	NSString* _imei;
	NSString* _iccid;
	NSString* _csn;
	char _isOnBootstrap;
	float _alertHeight;
	UIView* _containerView;
	UITextView* _textView;
	UIButton* _regulatoryInfoButton;

}

@property (nonatomic,readonly) UIButton * regulatoryInfoButton;              //@synthesize regulatoryInfoButton=_regulatoryInfoButton - In the implementation block
-(UIButton *)regulatoryInfoButton;
-(id)_formattedIMEI;
-(id)_formattedCSN;
-(id)_formattedICCID;
-(id)_formattedString:(id)arg1 withSpaceAfterDigits:(unsigned)arg2 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_updateTextView;
-(void)_simStatusChanged:(id)arg1 ;
@end
