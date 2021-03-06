/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol PHVoicemailGreetingPlaybackCellDelegate;
@class UIButton;

@interface PHVoicemailGreetingPlaybackCell : UITableViewCell {

	UIButton* _playStopButton;
	UIButton* _recordStopButton;
	id<PHVoicemailGreetingPlaybackCellDelegate> _delegate;
	long _buildConstraintToken;

}

@property (assign,nonatomic) long buildConstraintToken;                                                //@synthesize buildConstraintToken=_buildConstraintToken - In the implementation block
@property (nonatomic,retain) UIButton * playStopButton;                                                //@synthesize playStopButton=_playStopButton - In the implementation block
@property (nonatomic,retain) UIButton * recordStopButton;                                              //@synthesize recordStopButton=_recordStopButton - In the implementation block
@property (assign,nonatomic,__weak) id<PHVoicemailGreetingPlaybackCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_playStopButtonTapped:(id)arg1 ;
-(void)_recordStopButtonTapped:(id)arg1 ;
-(UIButton *)playStopButton;
-(void)setPlayStopButton:(UIButton *)arg1 ;
-(UIButton *)recordStopButton;
-(void)setRecordStopButton:(UIButton *)arg1 ;
-(long)buildConstraintToken;
-(void)setBuildConstraintToken:(long)arg1 ;
-(void)setDelegate:(id<PHVoicemailGreetingPlaybackCellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<PHVoicemailGreetingPlaybackCellDelegate>)delegate;
-(void)setEnabled:(char)arg1 ;
-(void)_buildConstraints;
-(void)_updateConstraints;
-(void)_updateFonts;
@end

