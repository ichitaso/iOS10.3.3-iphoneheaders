/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/ContentInteractionTestRunner.h>

@interface ZoomAnimationTestProcessor : ContentInteractionTestRunner {

	int _iterationsRemaining;
	int _testState;
	int _targetIndex;
	float _initialZoom;

}

@property (assign,nonatomic) int iterationsRemaining;              //@synthesize iterationsRemaining=_iterationsRemaining - In the implementation block
@property (assign,nonatomic) int testState;                        //@synthesize testState=_testState - In the implementation block
@property (assign,nonatomic) int targetIndex;                      //@synthesize targetIndex=_targetIndex - In the implementation block
@property (assign,nonatomic) float initialZoom;                    //@synthesize initialZoom=_initialZoom - In the implementation block
-(id)initWithTestName:(id)arg1 browserController:(id)arg2 ;
-(char)startPageAction:(id)arg1 ;
-(char)performActionForPage:(id)arg1 ;
-(void)setTestState:(int)arg1 ;
-(int)testState;
-(void)scrollViewWillBeginZooming:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 ;
-(void)setTargetIndex:(int)arg1 ;
-(void)setInitialZoom:(float)arg1 ;
-(void)advanceTest;
-(int)targetIndex;
-(float)initialZoom;
-(void)startZoom;
-(void)dealloc;
-(void)setIterationsRemaining:(int)arg1 ;
-(int)iterationsRemaining;
-(void)resetZoom;
@end

