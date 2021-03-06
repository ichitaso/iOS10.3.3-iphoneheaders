/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TITypologyTimer : NSObject {

	char _foundFirstInput;
	double _elapsedTime;
	double _mostRecentTimestamp;
	double _maxTimeIntervalBetweenInputs;

}

@property (assign,nonatomic) double elapsedTime;                               //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double mostRecentTimestamp;                       //@synthesize mostRecentTimestamp=_mostRecentTimestamp - In the implementation block
@property (assign,nonatomic) double maxTimeIntervalBetweenInputs;              //@synthesize maxTimeIntervalBetweenInputs=_maxTimeIntervalBetweenInputs - In the implementation block
@property (assign,nonatomic) char foundFirstInput;                             //@synthesize foundFirstInput=_foundFirstInput - In the implementation block
-(void)addInputEventWithTimestamp:(double)arg1 ;
-(double)mostRecentTimestamp;
-(void)setMostRecentTimestamp:(double)arg1 ;
-(double)maxTimeIntervalBetweenInputs;
-(void)setMaxTimeIntervalBetweenInputs:(double)arg1 ;
-(char)foundFirstInput;
-(void)setFoundFirstInput:(char)arg1 ;
-(double)elapsedTime;
-(void)setElapsedTime:(double)arg1 ;
@end

