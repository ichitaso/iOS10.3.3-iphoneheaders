/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@protocol HOOnboardingIncomingInvitationViewControllerDelegate, NACancelable;
@class HMIncomingHomeInvitation, CNContact, CNAvatarView, UILabel, HUColoredButton, UIButton, UIActivityIndicatorView, NSString;

@interface HOOnboardingIncomingInvitationViewController : UIViewController <HFHomeManagerObserver, HFHomeObserver> {

	id<HOOnboardingIncomingInvitationViewControllerDelegate> _delegate;
	HMIncomingHomeInvitation* _invitation;
	CNContact* _contact;
	id<NACancelable> _cancellationToken;
	CNAvatarView* _avatarView;
	UILabel* _homeNameLabel;
	UILabel* _acceptInfoLabel;
	UILabel* _infoLabel;
	HUColoredButton* _declineButton;
	HUColoredButton* _acceptButton;
	UIButton* _decideLaterButton;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) HMIncomingHomeInvitation * invitation;                                                 //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                                   //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) id<NACancelable> cancellationToken;                                                    //@synthesize cancellationToken=_cancellationToken - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                                             //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * homeNameLabel;                                                               //@synthesize homeNameLabel=_homeNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * acceptInfoLabel;                                                             //@synthesize acceptInfoLabel=_acceptInfoLabel - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                                                   //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) HUColoredButton * declineButton;                                                       //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,retain) HUColoredButton * acceptButton;                                                        //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) UIButton * decideLaterButton;                                                          //@synthesize decideLaterButton=_decideLaterButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                     //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic,__weak) id<HOOnboardingIncomingInvitationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_requiredKeyDescriptors;
+(id)_formatDate:(id)arg1 ;
-(id)initWithIncomingInvitation:(id)arg1 ;
-(void)_createSubview;
-(UIButton *)decideLaterButton;
-(UILabel *)acceptInfoLabel;
-(id<NACancelable>)cancellationToken;
-(void)setCancellationToken:(id<NACancelable>)arg1 ;
-(void)_invitationActionDidEnd;
-(void)setAcceptInfoLabel:(UILabel *)arg1 ;
-(void)_rejectInvitation:(id)arg1 ;
-(void)setDecideLaterButton:(UIButton *)arg1 ;
-(void)_decideLater:(id)arg1 ;
-(void)_invitationActionDidStart;
-(void)setDelegate:(id<HOOnboardingIncomingInvitationViewControllerDelegate>)arg1 ;
-(id<HOOnboardingIncomingInvitationViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(CNContact *)contact;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)_acceptInvitation:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(HMIncomingHomeInvitation *)invitation;
-(UILabel *)homeNameLabel;
-(UILabel *)infoLabel;
-(HUColoredButton *)declineButton;
-(void)setInvitation:(HMIncomingHomeInvitation *)arg1 ;
-(void)setHomeNameLabel:(UILabel *)arg1 ;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)setDeclineButton:(HUColoredButton *)arg1 ;
-(HUColoredButton *)acceptButton;
-(void)setAcceptButton:(HUColoredButton *)arg1 ;
-(void)_setNavigationBarVisibility;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
@end

