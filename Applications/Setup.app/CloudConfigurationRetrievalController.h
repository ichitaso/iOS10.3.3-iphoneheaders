/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class UILabel, UIActivityIndicatorView, NSString;

@interface CloudConfigurationRetrievalController : UIViewController <BuddyController> {

	UILabel* _infoLabel;
	UIActivityIndicatorView* _spinner;
	int _state;
	id<BuddyControllerDelegate> _delegate;

}

@property (nonatomic,retain) UILabel * infoLabel;                               //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                 //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) int state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRun;
-(void)fetchCloudConfig;
-(id)init;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(id<BuddyControllerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
@end

