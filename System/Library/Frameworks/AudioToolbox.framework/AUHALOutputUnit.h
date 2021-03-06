/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <AudioToolbox/AUAudioUnitV2Bridge.h>

@interface AUHALOutputUnit : AUAudioUnitV2Bridge {

	/*^block*/id _outputProvider;
	/*^block*/id _inputHandler;
	BOOL _inputWasEnabled;
	BOOL _outputWasEnabled;

}

@property (assign,getter=isInputEnabled,nonatomic) char inputEnabled; 
@property (assign,getter=isOutputEnabled,nonatomic) char outputEnabled; 
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned long)arg2 error:(id*)arg3 ;
-(char)startHardwareAndReturnError:(id*)arg1 ;
-(void)stopHardware;
-(/*^block*/id)outputProvider;
-(/*^block*/id)_inputHandler;
-(void)setOutputProvider:(/*^block*/id)arg1 ;
-(void)setInputHandler:(/*^block*/id)arg1 ;
-(char)canPerformInput;
-(char)canPerformOutput;
-(char)isInputEnabled;
-(char)isOutputEnabled;
-(void)setInputEnabled:(char)arg1 ;
-(void)setOutputEnabled:(char)arg1 ;
-(void)dealloc;
@end

