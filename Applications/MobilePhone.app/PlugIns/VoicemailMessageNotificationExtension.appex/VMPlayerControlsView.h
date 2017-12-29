/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/PlugIns/VoicemailMessageNotificationExtension.appex/VoicemailMessageNotificationExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoicemailMessageNotificationExtension/VoicemailMessageNotificationExtension-Structs.h>
#import <UIKit/UIView.h>

@protocol VMPlayerControlsDelegate;
@class UIButton, VMPlayerTimelineSlider, NSLayoutConstraint;

@interface VMPlayerControlsView : UIView {

	char _enabled;
	char _subviewsLoaded;
	char _subviewsLayoutConstraintsLoaded;
	id<VMPlayerControlsDelegate> _delegate;
	UIButton* _playPauseButton;
	int _state;
	VMPlayerTimelineSlider* _timelineSlider;
	NSLayoutConstraint* _playerControlsViewHeightAnchorLayoutConstraint;
	NSLayoutConstraint* _playPauseButtonHeightAnchorLayoutConstraint;
	NSLayoutConstraint* _timelineSliderHeightAnchorLayoutConstraint;

}

@property (nonatomic,retain) UIButton * playPauseButton;                                                         //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,retain) VMPlayerTimelineSlider * timelineSlider;                                            //@synthesize timelineSlider=_timelineSlider - In the implementation block
@property (nonatomic,readonly) float playerControlsViewHeightAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) float playPauseButtonHeightAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) float timelineSliderHeightAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) NSLayoutConstraint * playerControlsViewHeightAnchorLayoutConstraint;              //@synthesize playerControlsViewHeightAnchorLayoutConstraint=_playerControlsViewHeightAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * playPauseButtonHeightAnchorLayoutConstraint;                 //@synthesize playPauseButtonHeightAnchorLayoutConstraint=_playPauseButtonHeightAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * timelineSliderHeightAnchorLayoutConstraint;                  //@synthesize timelineSliderHeightAnchorLayoutConstraint=_timelineSliderHeightAnchorLayoutConstraint - In the implementation block
@property (assign,nonatomic) char subviewsLoaded;                                                                //@synthesize subviewsLoaded=_subviewsLoaded - In the implementation block
@property (assign,nonatomic) char subviewsLayoutConstraintsLoaded;                                               //@synthesize subviewsLayoutConstraintsLoaded=_subviewsLayoutConstraintsLoaded - In the implementation block
@property (assign,nonatomic,__weak) id<VMPlayerControlsDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int state;                                                                          //@synthesize state=_state - In the implementation block
+(char)requiresConstraintBasedLayout;
-(void)playPauseButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)loadSubviews;
-(void)loadSubviewsLayoutConstraints;
-(char)subviewsLayoutConstraintsLoaded;
-(char)subviewsLoaded;
-(void)setSubviewsLoaded:(char)arg1 ;
-(void)setSubviewsLayoutConstraintsLoaded:(char)arg1 ;
-(float)playerControlsViewHeightAnchorLayoutConstraintConstant;
-(float)playPauseButtonHeightAnchorLayoutConstraintConstant;
-(float)timelineSliderHeightAnchorLayoutConstraintConstant;
-(NSLayoutConstraint *)playerControlsViewHeightAnchorLayoutConstraint;
-(NSLayoutConstraint *)playPauseButtonHeightAnchorLayoutConstraint;
-(NSLayoutConstraint *)timelineSliderHeightAnchorLayoutConstraint;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<VMPlayerControlsDelegate>)arg1 ;
-(id<VMPlayerControlsDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(void)updateConstraintsConstants;
-(void)transitionToState:(int)arg1 animated:(char)arg2 ;
-(VMPlayerTimelineSlider *)timelineSlider;
-(void)setTimelineSlider:(VMPlayerTimelineSlider *)arg1 ;
-(UIButton *)playPauseButton;
-(void)setPlayPauseButton:(UIButton *)arg1 ;
-(void)setState:(int)arg1 animated:(char)arg2 ;
@end

