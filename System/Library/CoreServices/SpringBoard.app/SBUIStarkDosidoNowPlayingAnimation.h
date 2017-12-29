/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationController.h>

@class _SBUIStarkDosidoNowPlayingAnimation;

@interface SBUIStarkDosidoNowPlayingAnimation : SBUIAnimationController {

	_SBUIStarkDosidoNowPlayingAnimation* _animation;
	char _waitsForAppActivation;

}
-(char)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(id)initFromApp:(id)arg1 toNowPlayingWithStarkScreenController:(id)arg2 ;
-(id)initFromNowPlayingToAlertImpersonator:(id)arg1 starkScreenController:(id)arg2 ;
-(void)_commonInitWithTransitionContextProvider:(id)arg1 starkScreenController:(id)arg2 waitForNowPlaying:(char)arg3 initializationParametersBlock:(/*^block*/id)arg4 ;
-(id)initFromNowPlayingToNowPlayingWithStarkScreenController:(id)arg1 ;
-(id)initFromNowPlayingToApp:(id)arg1 starkScreenController:(id)arg2 ;
-(id)initFromAlertImpersonator:(id)arg1 toNowPlayingWithStarkScreenController:(id)arg2 ;
-(id)animationSettings;
@end

