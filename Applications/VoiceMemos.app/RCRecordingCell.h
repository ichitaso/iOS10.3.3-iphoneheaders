/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/RCViewLayoutTableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol RCRecordingCellDelegate;
@class RCSavedRecording, RCAVState, RCRecordingCellLabelsViewLayout, RCRecordingCellActionsViewLayout, UITapGestureRecognizer, NSString;

@interface RCRecordingCell : RCViewLayoutTableViewCell <UITextFieldDelegate> {

	char _wantsToResumePlayback;
	char _recordingIsAvailable;
	double _durationLabelTimeValue;
	unsigned _previousTableViewCellState;
	char _showingDisabled;
	char _showingPreparingToPlayIndicator;
	char _showingPreparingToShareIndicator;
	char _showingSaveInProgressIndicator;
	char _isScrubbing;
	char _actionControlsVisible;
	char _editingEnabled;
	char _isSavedRecordingCell;
	char _isBlankContentCell;
	char _isNoContentCell;
	id<RCRecordingCellDelegate> _delegate;
	RCSavedRecording* _recording;
	RCAVState* _AVState;
	RCRecordingCellLabelsViewLayout* _labelsLayout;
	RCRecordingCellActionsViewLayout* _actionsLayout;
	UITapGestureRecognizer* _editTitleTapGesture;
	double _duration;
	double _currentTime;

}

@property (nonatomic,readonly) char isSavedRecordingCell;                                                                  //@synthesize isSavedRecordingCell=_isSavedRecordingCell - In the implementation block
@property (nonatomic,readonly) char isBlankContentCell;                                                                    //@synthesize isBlankContentCell=_isBlankContentCell - In the implementation block
@property (nonatomic,readonly) char isNoContentCell;                                                                       //@synthesize isNoContentCell=_isNoContentCell - In the implementation block
@property (nonatomic,readonly) RCRecordingCellLabelsViewLayout * labelsLayout;                                             //@synthesize labelsLayout=_labelsLayout - In the implementation block
@property (nonatomic,readonly) RCRecordingCellActionsViewLayout * actionsLayout;                                           //@synthesize actionsLayout=_actionsLayout - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * editTitleTapGesture;                                               //@synthesize editTitleTapGesture=_editTitleTapGesture - In the implementation block
@property (assign,nonatomic,__weak) id<RCRecordingCellDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) RCSavedRecording * recording;                                                               //@synthesize recording=_recording - In the implementation block
@property (assign,nonatomic) double duration;                                                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double currentTime;                                                                           //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) RCAVState * AVState;                                                                          //@synthesize AVState=_AVState - In the implementation block
@property (assign,getter=isShowingDisabled,nonatomic) char showingDisabled;                                                //@synthesize showingDisabled=_showingDisabled - In the implementation block
@property (assign,getter=isShowingPreparingToPlayIndicator,nonatomic) char showingPreparingToPlayIndicator;                //@synthesize showingPreparingToPlayIndicator=_showingPreparingToPlayIndicator - In the implementation block
@property (assign,getter=isShowingPreparingToShareIndicator,nonatomic) char showingPreparingToShareIndicator;              //@synthesize showingPreparingToShareIndicator=_showingPreparingToShareIndicator - In the implementation block
@property (assign,getter=isShowingSaveInProgressIndicator,nonatomic) char showingSaveInProgressIndicator;                  //@synthesize showingSaveInProgressIndicator=_showingSaveInProgressIndicator - In the implementation block
@property (nonatomic,readonly) char isScrubbing;                                                                           //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (nonatomic,readonly) char actionControlsVisible;                                                                 //@synthesize actionControlsVisible=_actionControlsVisible - In the implementation block
@property (assign,getter=isEditingEnabled,nonatomic) char editingEnabled;                                                  //@synthesize editingEnabled=_editingEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)disabledBackgroundColor;
-(void)_updateDurationLabel;
-(void)setShowingDisabled:(char)arg1 ;
-(void)setActionControlsVisible:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)commitEditedChanges;
-(void)prepareForDisplayAsNoContentCell;
-(void)prepareForDisplayAsBlankCell;
-(void)prepareForDisplayAsSavedRecording:(id)arg1 ;
-(void)setShowingSaveInProgressIndicator:(char)arg1 ;
-(char)actionControlsVisible;
-(void)setShowingPreparingToPlayIndicator:(char)arg1 ;
-(void)setShowingPreparingToShareIndicator:(char)arg1 ;
-(void)beginEditingTitleTextField;
-(char)isShowingDisabled;
-(void)prepareForEstimatingRowHeight;
-(void)_editTitleTapGestureAction:(id)arg1 ;
-(void)prepareForReuseWithSetupBlock:(/*^block*/id)arg1 ;
-(void)_setPlaybackControlsVisible:(char)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_updateTitleEditingState;
-(int)_currentPreviewButtonState;
-(char)_textFieldShouldBeginEditingIgnoringDelegate;
-(char)isNoContentCell;
-(char)isSavedRecordingCell;
-(void)handleTogglePlayPauseAction;
-(void)handleEditAction;
-(void)handleDeleteAction;
-(void)handleShareAction;
-(int)rc_tableViewScrollPositionForScrollPosition:(int)arg1 ;
-(char)isShowingPreparingToPlayIndicator;
-(char)isShowingPreparingToShareIndicator;
-(char)isShowingSaveInProgressIndicator;
-(char)isBlankContentCell;
-(RCRecordingCellLabelsViewLayout *)labelsLayout;
-(RCRecordingCellActionsViewLayout *)actionsLayout;
-(UITapGestureRecognizer *)editTitleTapGesture;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<RCRecordingCellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)description;
-(id<RCRecordingCellDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned)arg1 ;
-(void)didTransitionToState:(unsigned)arg1 ;
-(void)_updateTextColors;
-(double)currentTime;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(id)editableTextField;
-(void)detailSliderTrackingDidBegin:(id)arg1 ;
-(void)detailSliderTrackingDidEnd:(id)arg1 ;
-(void)detailSliderTrackingDidCancel:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeValue:(float)arg2 ;
-(void)setCurrentTime:(double)arg1 ;
-(char)isScrubbing;
-(RCSavedRecording *)recording;
-(RCAVState *)AVState;
-(void)setAVState:(RCAVState *)arg1 ;
-(void)setEditingEnabled:(char)arg1 ;
-(char)isEditingEnabled;
-(void)_updateLabels;
@end

