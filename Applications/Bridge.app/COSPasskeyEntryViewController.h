/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UILabel, COSPinKeyView, UIActivityIndicatorView, UITextField, NSTimer, NSString;

@interface COSPasskeyEntryViewController : UIViewController <UITextFieldDelegate> {

	UILabel* _instructionLabel;
	COSPinKeyView* _pinKeyView;
	UIActivityIndicatorView* _activityView;
	UITextField* _passkeyField;
	NSTimer* _textChangedTimer;

}

@property (nonatomic,retain) UILabel * instructionLabel;                          //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (nonatomic,retain) COSPinKeyView * pinKeyView;                          //@synthesize pinKeyView=_pinKeyView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityView;              //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) UITextField * passkeyField;                          //@synthesize passkeyField=_passkeyField - In the implementation block
@property (nonatomic,retain) NSTimer * textChangedTimer;                          //@synthesize textChangedTimer=_textChangedTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enteredPasskey:(id)arg1 ;
-(void)returnToPasskeyEntry;
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(COSPinKeyView *)pinKeyView;
-(void)setPinKeyView:(COSPinKeyView *)arg1 ;
-(UITextField *)passkeyField;
-(void)setPasskeyField:(UITextField *)arg1 ;
-(NSTimer *)textChangedTimer;
-(void)setTextChangedTimer:(NSTimer *)arg1 ;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)textDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)activityView;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)instructionLabel;
@end

