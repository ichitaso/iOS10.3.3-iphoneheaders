/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBPressSequenceRecognizerDelegate.h>

@protocol SBSOSTriggerObserverDelegate;
@class SBPressSequenceRecognizer, SBPressSequenceValidator, SBPressSequenceSettings, BSAction, NSString;

@interface SBSOSTriggerObserver : NSObject <SBPressSequenceRecognizerDelegate> {

	SBPressSequenceRecognizer* _recognizer;
	SBPressSequenceValidator* _validator;
	SBPressSequenceSettings* _settings;
	char _lastKnownActiveState;
	BSAction* _triggerAction;
	id<SBSOSTriggerObserverDelegate> _delegate;
	int _configuration;

}

@property (assign,nonatomic,__weak) id<SBSOSTriggerObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int configuration;                                           //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerPressDownWithTimestamp:(double)arg1 ;
-(void)registerPressUpWithTimestamp:(double)arg1 ;
-(double)_watchdogInterval;
-(void)_noteTriggerActionRecievedResponse;
-(void)_noteTriggerDidBecomeActive;
-(void)_noteTriggerDidBecomeInactive;
-(void)_configureSettings;
-(double)_intervalThatSucceeds;
-(void)pressSequenceRecognizerDidCompleteSequence:(id)arg1 ;
-(void)pressSequenceRecognizer:(id)arg1 didBeginPressDownAtIndex:(unsigned)arg2 ;
-(void)pressSequenceRecognizerDidFail:(id)arg1 ;
-(void)resetWithNewConfiguration:(int)arg1 ;
-(void)_setRecognizer:(id)arg1 ;
-(unsigned)_numberOfPressesThatTrigger;
-(unsigned)_numberOfPressesThatActivate;
-(id)init;
-(void)setDelegate:(id<SBSOSTriggerObserverDelegate>)arg1 ;
-(id<SBSOSTriggerObserverDelegate>)delegate;
-(int)configuration;
-(id)initWithConfiguration:(int)arg1 ;
-(void)_configure;
-(id)_validator;
@end

