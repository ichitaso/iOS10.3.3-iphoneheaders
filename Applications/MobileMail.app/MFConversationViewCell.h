/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class MFMessageViewController, UIView;

@interface MFConversationViewCell : UICollectionViewCell {

	char _configuredForSingleMessageDisplay;
	MFMessageViewController* _messageViewController;
	UIView* _contentWrapperView;

}

@property (nonatomic,retain) UIView * contentWrapperView;                                                                              //@synthesize contentWrapperView=_contentWrapperView - In the implementation block
@property (nonatomic,retain) MFMessageViewController * messageViewController;                                                          //@synthesize messageViewController=_messageViewController - In the implementation block
@property (assign,getter=isConfiguredForSingleMessageDisplay,nonatomic) char configuredForSingleMessageDisplay;                        //@synthesize configuredForSingleMessageDisplay=_configuredForSingleMessageDisplay - In the implementation block
@property (getter=isEligibleForAutomaticallyMarkingAsRead,nonatomic,readonly) char eligibleForAutomaticallyMarkingAsRead; 
-(MFMessageViewController *)messageViewController;
-(void)setMessageViewController:(MFMessageViewController *)arg1 ;
-(void)setContentWrapperView:(UIView *)arg1 ;
-(UIView *)contentWrapperView;
-(char)isEligibleForAutomaticallyMarkingAsRead;
-(char)isConfiguredForSingleMessageDisplay;
-(void)setConfiguredForSingleMessageDisplay:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)description;
-(void)layoutMarginsDidChange;
-(void)prepareForReuse;
-(char)_disableRasterizeInAnimations;
@end

