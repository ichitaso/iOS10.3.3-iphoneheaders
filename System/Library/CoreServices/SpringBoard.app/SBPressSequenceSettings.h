/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBPressSequenceSettings : NSObject {

	unsigned _numberOfPresses;
	unsigned _indexOfPressDownToUseForVarianceAndGrowth;
	unsigned _numberOfPressDownGrowthTerms;
	unsigned _indexOfPressUpToUseForVarianceAndGrowth;
	unsigned _numberOfPressUpGrowthTerms;
	double _maxDefaultPressDownDuration;
	double _maxDefaultPressUpDuration;
	double _maxDownToDownDuration;
	double _pressDownVariance;
	double _pressUpVariance;

}

@property (assign,nonatomic) unsigned numberOfPresses;                                        //@synthesize numberOfPresses=_numberOfPresses - In the implementation block
@property (assign,nonatomic) double maxDefaultPressDownDuration;                              //@synthesize maxDefaultPressDownDuration=_maxDefaultPressDownDuration - In the implementation block
@property (assign,nonatomic) double maxDefaultPressUpDuration;                                //@synthesize maxDefaultPressUpDuration=_maxDefaultPressUpDuration - In the implementation block
@property (assign,nonatomic) double maxDownToDownDuration;                                    //@synthesize maxDownToDownDuration=_maxDownToDownDuration - In the implementation block
@property (assign,nonatomic) unsigned indexOfPressDownToUseForVarianceAndGrowth;              //@synthesize indexOfPressDownToUseForVarianceAndGrowth=_indexOfPressDownToUseForVarianceAndGrowth - In the implementation block
@property (assign,nonatomic) unsigned numberOfPressDownGrowthTerms;                           //@synthesize numberOfPressDownGrowthTerms=_numberOfPressDownGrowthTerms - In the implementation block
@property (assign,nonatomic) unsigned indexOfPressUpToUseForVarianceAndGrowth;                //@synthesize indexOfPressUpToUseForVarianceAndGrowth=_indexOfPressUpToUseForVarianceAndGrowth - In the implementation block
@property (assign,nonatomic) unsigned numberOfPressUpGrowthTerms;                             //@synthesize numberOfPressUpGrowthTerms=_numberOfPressUpGrowthTerms - In the implementation block
@property (assign,nonatomic) double pressDownVariance;                                        //@synthesize pressDownVariance=_pressDownVariance - In the implementation block
@property (assign,nonatomic) double pressUpVariance;                                          //@synthesize pressUpVariance=_pressUpVariance - In the implementation block
-(unsigned)numberOfPresses;
-(void)setNumberOfPresses:(unsigned)arg1 ;
-(double)maxDefaultPressDownDuration;
-(void)setMaxDefaultPressDownDuration:(double)arg1 ;
-(double)maxDefaultPressUpDuration;
-(void)setMaxDefaultPressUpDuration:(double)arg1 ;
-(double)maxDownToDownDuration;
-(void)setMaxDownToDownDuration:(double)arg1 ;
-(unsigned)indexOfPressDownToUseForVarianceAndGrowth;
-(void)setIndexOfPressDownToUseForVarianceAndGrowth:(unsigned)arg1 ;
-(unsigned)numberOfPressDownGrowthTerms;
-(void)setNumberOfPressDownGrowthTerms:(unsigned)arg1 ;
-(unsigned)indexOfPressUpToUseForVarianceAndGrowth;
-(void)setIndexOfPressUpToUseForVarianceAndGrowth:(unsigned)arg1 ;
-(unsigned)numberOfPressUpGrowthTerms;
-(void)setNumberOfPressUpGrowthTerms:(unsigned)arg1 ;
-(double)pressDownVariance;
-(void)setPressDownVariance:(double)arg1 ;
-(double)pressUpVariance;
-(void)setPressUpVariance:(double)arg1 ;
@end

