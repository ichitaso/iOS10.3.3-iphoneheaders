/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MFTableViewCell.h>

@protocol MFCancelable;
@class NSSet, UIImageView, UILabel, UIButton, UIColor;

@interface MailboxTableCell : MFTableViewCell {

	NSSet* _mailboxes;
	CGPoint _iconOffset;
	UIImageView* _leftAccessoryImageView;
	UILabel* _unreadCountLabel;
	UIButton* _detailsDisclosureButton;
	unsigned _level;
	unsigned _flattenHierarchy;
	unsigned _disabled : 1;
	unsigned _disabledForEditing : 1;
	char _hasLeftAccessory;
	char _hideUnreadCountForEditing;
	char _expandable;
	char _expanded;
	char _forceZeroSeparatorInset;
	id _userInfo;
	UIColor* _titleColor;
	int _leftAccessoryType;
	int _extraIndentLevel;
	UIImageView* _expansionAccessoryImageView;
	UIImageView* _expansionEditingAccessoryImageView;
	id<MFCancelable> _unreadCountToken;

}

@property (nonatomic,retain) UIImageView * expansionAccessoryImageView;                     //@synthesize expansionAccessoryImageView=_expansionAccessoryImageView - In the implementation block
@property (nonatomic,retain) UIImageView * expansionEditingAccessoryImageView;              //@synthesize expansionEditingAccessoryImageView=_expansionEditingAccessoryImageView - In the implementation block
@property (nonatomic,retain) id<MFCancelable> unreadCountToken;                             //@synthesize unreadCountToken=_unreadCountToken - In the implementation block
@property (assign,nonatomic) unsigned flattenHierarchy;                                     //@synthesize flattenHierarchy=_flattenHierarchy - In the implementation block
@property (nonatomic,retain) id userInfo;                                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                                          //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) char hasLeftAccessory;                                         //@synthesize hasLeftAccessory=_hasLeftAccessory - In the implementation block
@property (assign,nonatomic) char hideUnreadCountForEditing;                                //@synthesize hideUnreadCountForEditing=_hideUnreadCountForEditing - In the implementation block
@property (assign,nonatomic) int leftAccessoryType;                                         //@synthesize leftAccessoryType=_leftAccessoryType - In the implementation block
@property (assign,getter=isExpandable,nonatomic) char expandable;                           //@synthesize expandable=_expandable - In the implementation block
@property (assign,getter=isExpanded,nonatomic) char expanded;                               //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) int extraIndentLevel;                                          //@synthesize extraIndentLevel=_extraIndentLevel - In the implementation block
@property (assign,nonatomic) char forceZeroSeparatorInset;                                  //@synthesize forceZeroSeparatorInset=_forceZeroSeparatorInset - In the implementation block
+(float)twoLineTopBottomPadding;
+(id)_disclosureImageWithColor:(id)arg1 ;
+(id)expansionAccessoryImage;
+(id)expansionAccessoryHighlightedImage;
+(id)titleFont;
+(id)subtitleFont;
+(void)invalidateCachedLayoutInformation;
+(float)defaultRowHeight;
-(void)setMailboxes:(id)arg1 ;
-(void)setMailboxes:(id)arg1 showUnreadCount:(char)arg2 ;
-(void)setDisabledForEditing:(char)arg1 ;
-(void)_updateUnreadCount;
-(id<MFCancelable>)unreadCountToken;
-(void)setUnreadCountToken:(id<MFCancelable>)arg1 ;
-(void)_updateMailboxName;
-(void)_removeUnreadCount;
-(char)hideUnreadCountForEditing;
-(void)_updateUnreadCountLabelVisibilityAnimated:(char)arg1 ;
-(void)setIcon:(id)arg1 withOffset:(CGPoint)arg2 ;
-(void)setExpandable:(char)arg1 ;
-(void)setForceZeroSeparatorInset:(char)arg1 ;
-(void)setExtraIndentLevel:(int)arg1 ;
-(void)_doCleanupExpansionAccessoryViews;
-(void)setHasLeftAccessory:(char)arg1 ;
-(void)setLeftAccessoryType:(int)arg1 ;
-(void)setDetailsDisclosureButton:(id)arg1 ;
-(id)_expansionAccessoryImageView;
-(void)setExpansionAccessoryImageView:(UIImageView *)arg1 ;
-(void)setExpansionEditingAccessoryImageView:(UIImageView *)arg1 ;
-(UIImageView *)expansionAccessoryImageView;
-(UIImageView *)expansionEditingAccessoryImageView;
-(void)_doRefreshExpansionAccessoryImageView;
-(char)hasLeftAccessory;
-(char)forceZeroSeparatorInset;
-(id)_leftAccessoryImageView;
-(char)isCellEnabled;
-(id)_unreadCountForMailboxes:(id)arg1 ;
-(CGPoint)destinationPointForAnimation;
-(unsigned)flattenHierarchy;
-(void)setFlattenHierarchy:(unsigned)arg1 ;
-(void)setHideUnreadCountForEditing:(char)arg1 ;
-(int)extraIndentLevel;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(id)userInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_scriptingInfo;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(char)isExpanded;
-(void)setUserInfo:(id)arg1 ;
-(void)_invalidateLayout;
-(void)setIcon:(id)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(id)_multiselectBackgroundColor;
-(void)setCellEnabled:(char)arg1 ;
-(void)setIconOffset:(CGPoint)arg1 ;
-(void)_setUnreadCount:(unsigned)arg1 ;
-(char)isExpandable;
-(void)setBadgeCount:(int)arg1 ;
-(int)leftAccessoryType;
@end
