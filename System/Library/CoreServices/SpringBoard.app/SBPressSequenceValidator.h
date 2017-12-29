/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBPressSequenceSettings;

@interface SBPressSequenceValidator : NSObject {

	SBPressSequenceSettings* _settings;

}

@property (nonatomic,readonly) SBPressSequenceSettings * settings;              //@synthesize settings=_settings - In the implementation block
-(char)pressEventIsValidInSequence:(id)arg1 endingDownEvent:(char)arg2 duration:(double)arg3 ;
-(double)timeUntilNextPressEventIsInValidInSequence:(id)arg1 lastPressEventInSequenceIsDown:(char)arg2 ;
-(SBPressSequenceValidatorBounds)_pressDownBoundsForDesiredIndex:(unsigned)arg1 sequence:(id)arg2 ;
-(SBPressSequenceValidatorBounds)_pressUpBoundsForDesiredIndex:(unsigned)arg1 sequence:(id)arg2 ;
-(int)_modeForDesiredIndex:(unsigned)arg1 isDownEvent:(char)arg2 ;
-(id)init;
-(SBPressSequenceSettings *)settings;
-(id)initWithSettings:(id)arg1 ;
@end

