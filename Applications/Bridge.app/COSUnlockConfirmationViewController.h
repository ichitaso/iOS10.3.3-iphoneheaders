/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSSetupPageViewController.h>
#import <Bridge/COSBuddyController.h>

@class UILabel, COSPhoneView, COSWatchView, UIButton, NSString;

@interface COSUnlockConfirmationViewController : COSSetupPageViewController <COSBuddyController> {

	UILabel* _titleLabel;
	COSPhoneView* _phoneView;
	COSWatchView* _watchView;
	UILabel* _subtitleLabel;
	UILabel* _detailLabel;
	UILabel* _subDetailLabel;
	UIButton* _confirmButton;
	char _mandatory;
	char _completed;

}

@property (assign,nonatomic) char completed;                        //@synthesize completed=_completed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isMandatory;
+(id)_fakeBackButtonItemForTarget:(id)arg1 withAction:(SEL)arg2 ;
-(void)unlockPairingComplete:(id)arg1 ;
-(void)removeFromNavHierarchyOf:(id)arg1 ;
-(void)setMandatory:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)setCompleted:(char)arg1 ;
-(id)titleString;
-(char)completed;
-(void)back:(id)arg1 ;
-(void)_updateLayout;
-(void)confirmed;
@end
