/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:28 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/PlugIns/com.apple.CloudDocsUI.CloudSharing.appex/com.apple.CloudDocsUI.CloudSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.CloudDocsUI.CloudSharing/com.apple.CloudDocsUI.CloudSharing-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UILabel, UIImageView;

@interface BRShareDocumentInfoView : UIView {

	NSArray* _portraitConstraints;
	NSArray* _landscapeConstraints;
	NSArray* _popoverConstraints;
	NSArray* _portraitConstraintsShort;
	NSArray* _popoverConstraintsShort;
	NSArray* _currentConstraints;
	char _decorateThumbnail;
	UILabel* _titleLabel;
	UILabel* _infoTextLabel;
	UILabel* _itemTitleLabel;
	UILabel* _ownerLabel;
	UIImageView* _thumbnailView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * infoTextLabel;                  //@synthesize infoTextLabel=_infoTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * itemTitleLabel;                 //@synthesize itemTitleLabel=_itemTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * ownerLabel;                     //@synthesize ownerLabel=_ownerLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) char decorateThumbnail;                     //@synthesize decorateThumbnail=_decorateThumbnail - In the implementation block
-(void)setDecorateThumbnail:(char)arg1 ;
-(UILabel *)infoTextLabel;
-(UILabel *)ownerLabel;
-(char)decorateThumbnail;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(UIImageView *)thumbnailView;
-(UILabel *)itemTitleLabel;
@end

