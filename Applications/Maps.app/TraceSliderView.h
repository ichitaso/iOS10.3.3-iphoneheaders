/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@protocol TraceSliderViewDelegate;
@class UISlider, NSTimer;

@interface TraceSliderView : UIView {

	id<TraceSliderViewDelegate> _delegate;
	UISlider* _playbackSlider;
	double _traceLength;
	double _traceTime;
	char _stale;
	char _sliderEditing;
	NSTimer* _sliderThrottleTimer;
	char _animateNextSliderUpdate;
	double _playSpeed;

}

@property (nonatomic,readonly) char isSliderEditing;                                   //@synthesize sliderEditing=_sliderEditing - In the implementation block
@property (assign,nonatomic,__weak) id<TraceSliderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double traceLength;                                       //@synthesize traceLength=_traceLength - In the implementation block
@property (assign,nonatomic) double traceTime;                                         //@synthesize traceTime=_traceTime - In the implementation block
@property (assign,getter=isStale,nonatomic) char stale;                                //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) double playSpeed;                                         //@synthesize playSpeed=_playSpeed - In the implementation block
-(void)setPlaySpeed:(double)arg1 ;
-(double)playSpeed;
-(void)setTraceLength:(double)arg1 ;
-(void)setTraceTime:(double)arg1 ;
-(void)setTraceTime:(double)arg1 animated:(char)arg2 ;
-(void)_updateSliderValue:(float)arg1 animated:(char)arg2 ;
-(void)_throttledSliderUpdate:(id)arg1 ;
-(void)editingDidBegin:(id)arg1 ;
-(void)editingChanged:(id)arg1 ;
-(void)editingWasCancelled:(id)arg1 ;
-(void)editingDidEnd:(id)arg1 ;
-(double)traceLength;
-(double)traceTime;
-(char)isSliderEditing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<TraceSliderViewDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<TraceSliderViewDelegate>)delegate;
-(char)isStale;
-(void)setStale:(char)arg1 ;
@end

