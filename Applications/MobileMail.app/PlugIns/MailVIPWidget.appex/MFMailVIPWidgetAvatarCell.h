/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/PlugIns/MailVIPWidget.appex/MailVIPWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailVIPWidget/MailVIPWidget-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class CNContact, NSString, CNAvatarView, UILabel, BadgeView, UIView;

@interface MFMailVIPWidgetAvatarCell : UICollectionViewCell {

	CNContact* _contact;
	NSString* _displayName;
	CNAvatarView* _avatarView;
	unsigned _unreadCount;
	UILabel* _label;
	BadgeView* _badgeView;
	UIView* _dimmingView;

}

@property (retain) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (retain) BadgeView * badgeView;                              //@synthesize badgeView=_badgeView - In the implementation block
@property (retain) UIView * dimmingView;                               //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) CNContact * contact;                      //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (assign,nonatomic) unsigned unreadCount;                     //@synthesize unreadCount=_unreadCount - In the implementation block
+(char)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
+(CGSize)itemSize;
-(id)contactKeysToFetch;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)label;
-(BadgeView *)badgeView;
-(void)setLabel:(UILabel *)arg1 ;
-(UIView *)dimmingView;
-(void)setDimmingView:(UIView *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(CNContact *)contact;
-(void)setUnreadCount:(unsigned)arg1 ;
-(CNAvatarView *)avatarView;
-(unsigned)unreadCount;
-(void)setBadgeView:(BadgeView *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
@end
