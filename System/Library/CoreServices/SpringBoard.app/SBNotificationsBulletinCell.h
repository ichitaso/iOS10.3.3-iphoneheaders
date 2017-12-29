/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBNotificationCell.h>

@class SBNotificationSeparatorView;

@interface SBNotificationsBulletinCell : SBNotificationCell {

	SBNotificationSeparatorView* _separator;
	char _showsSeparator;
	char _missed;

}

@property (assign,nonatomic) char showsSeparator;                      //@synthesize showsSeparator=_showsSeparator - In the implementation block
@property (assign,getter=isMissed,nonatomic) char missed;              //@synthesize missed=_missed - In the implementation block
+(id)defaultColorForRelevanceDate;
+(CGSize)_preferredSizeForRelevanceDateLabel:(id)arg1 ;
-(void)setRelevanceDateLabel:(id)arg1 ;
-(void)setEventDateLabel:(id)arg1 ;
-(char)showsSeparator;
-(void)setShowsSeparator:(char)arg1 ;
-(char)isMissed;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setSectionLocation:(int)arg1 animated:(char)arg2 ;
-(void)setMissed:(char)arg1 ;
@end

