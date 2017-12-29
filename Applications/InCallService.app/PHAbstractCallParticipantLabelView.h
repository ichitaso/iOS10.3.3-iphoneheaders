/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIView.h>

@protocol PHCallParticipantLabelDelegate;
@class PHMarqueeView, PHCallParticipantLabelDescriptor, NSString, UIColor;

@interface PHAbstractCallParticipantLabelView : UIView {

	char _hidesLabel;
	char _showsInfoButton;
	char _enabled;
	char _shouldCompressLabelsVertically;
	char _initialMarqueeViewScrollCompleted;
	unsigned short _activityState;
	PHMarqueeView* _participantMarqueeLabel;
	PHCallParticipantLabelDescriptor* _labelDescriptor;
	NSString* _participantName;
	id<PHCallParticipantLabelDelegate> _delegate;
	UIColor* _textColor;

}

@property (assign) char initialMarqueeViewScrollCompleted;                                  //@synthesize initialMarqueeViewScrollCompleted=_initialMarqueeViewScrollCompleted - In the implementation block
@property (retain) PHMarqueeView * participantMarqueeLabel;                                 //@synthesize participantMarqueeLabel=_participantMarqueeLabel - In the implementation block
@property (nonatomic,copy) PHCallParticipantLabelDescriptor * labelDescriptor;              //@synthesize labelDescriptor=_labelDescriptor - In the implementation block
@property (assign,nonatomic) char hidesLabel;                                               //@synthesize hidesLabel=_hidesLabel - In the implementation block
@property (assign,nonatomic) char showsInfoButton;                                          //@synthesize showsInfoButton=_showsInfoButton - In the implementation block
@property (nonatomic,copy) NSString * participantName;                                      //@synthesize participantName=_participantName - In the implementation block
@property (assign,nonatomic) char enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char shouldCompressLabelsVertically;                           //@synthesize shouldCompressLabelsVertically=_shouldCompressLabelsVertically - In the implementation block
@property (assign,nonatomic) unsigned short activityState;                                  //@synthesize activityState=_activityState - In the implementation block
@property (__weak) id<PHCallParticipantLabelDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                           //@synthesize textColor=_textColor - In the implementation block
-(PHMarqueeView *)participantMarqueeLabel;
-(void)setActivityState:(unsigned short)arg1 animated:(char)arg2 ;
-(float)labelAlphaValueForActivityState:(unsigned short)arg1 ;
-(void)setActivityState:(unsigned short)arg1 ;
-(char)hidesLabel;
-(void)setHidesLabel:(char)arg1 ;
-(void)setLabelDescriptor:(PHCallParticipantLabelDescriptor *)arg1 ;
-(void)setShowsInfoButton:(char)arg1 ;
-(char)shouldCompressLabelsVertically;
-(void)setShouldCompressLabelsVertically:(char)arg1 ;
-(void)setParticipantName:(NSString *)arg1 ;
-(char)initialMarqueeViewScrollCompleted;
-(void)setInitialMarqueeViewScrollCompleted:(char)arg1 ;
-(void)fadeParticipantMarqueeLabelToText:(id)arg1 ;
-(NSString *)participantName;
-(void)setParticipantMarqueeLabel:(PHMarqueeView *)arg1 ;
-(PHCallParticipantLabelDescriptor *)labelDescriptor;
-(char)showsInfoButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)enabled;
-(void)setDelegate:(id<PHCallParticipantLabelDelegate>)arg1 ;
-(id<PHCallParticipantLabelDelegate>)delegate;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(UIColor *)textColor;
-(unsigned short)activityState;
@end

