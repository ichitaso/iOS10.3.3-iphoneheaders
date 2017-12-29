/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol CHFitnessFriendInboxViewControllerDelegate;
@class _HKFitnessFriend, CHFriendManager, FFFriendListManager, UIButton;

@interface CHFriendInboxIncomingInviteTableViewCell : UITableViewCell {

	_HKFitnessFriend* _fitnessFriend;
	CHFriendManager* _friendManager;
	FFFriendListManager* _friendListManager;
	UIButton* _ignoreButton;
	UIButton* _acceptButton;
	id<CHFitnessFriendInboxViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CHFitnessFriendInboxViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)preferredHeight;
-(void)_highlighted;
-(void)_ignorePressed;
-(void)_acceptPressed;
-(void)setFitnessFriend:(id)arg1 withFriendManager:(id)arg2 friendListManager:(id)arg3 animated:(char)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<CHFitnessFriendInboxViewControllerDelegate>)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<CHFitnessFriendInboxViewControllerDelegate>)delegate;
-(void)_setupCell;
@end
