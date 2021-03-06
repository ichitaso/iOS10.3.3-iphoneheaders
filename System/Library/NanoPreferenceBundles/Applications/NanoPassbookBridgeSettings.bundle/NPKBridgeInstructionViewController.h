/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPassbookBridgeSettings.bundle/NanoPassbookBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel;

@interface NPKBridgeInstructionViewController : UIViewController {

	/*^block*/id _cancellationHandler;
	UILabel* _instructionLabel;

}

@property (nonatomic,retain) UILabel * instructionLabel;              //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (nonatomic,copy) id cancellationHandler;                    //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
-(id)_instructionMessage;
-(id)_instructionTitle;
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(void)handleErrorWithTitle:(id)arg1 message:(id)arg2 acknowledgeButtonTitle:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)viewDidLoad;
-(void)_cancel;
-(UILabel *)instructionLabel;
@end

