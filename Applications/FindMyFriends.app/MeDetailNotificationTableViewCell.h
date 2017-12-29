/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/MeTableViewCell.h>

@class CustomSelectionButton, NSLayoutConstraint;

@interface MeDetailNotificationTableViewCell : MeTableViewCell {

	CustomSelectionButton* _labelMyLocationButton;
	CustomSelectionButton* _notifyButton;
	NSLayoutConstraint* _separatorHeightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * separatorHeightConstraint;              //@synthesize separatorHeightConstraint=_separatorHeightConstraint - In the implementation block
@property (nonatomic,retain) CustomSelectionButton * labelMyLocationButton;               //@synthesize labelMyLocationButton=_labelMyLocationButton - In the implementation block
@property (nonatomic,retain) CustomSelectionButton * notifyButton;                        //@synthesize notifyButton=_notifyButton - In the implementation block
-(NSLayoutConstraint *)separatorHeightConstraint;
-(void)setSeparatorHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(CustomSelectionButton *)labelMyLocationButton;
-(void)setLabelMyLocationButton:(CustomSelectionButton *)arg1 ;
-(void)setNotifyButton:(CustomSelectionButton *)arg1 ;
-(void)awakeFromNib;
-(CustomSelectionButton *)notifyButton;
@end

