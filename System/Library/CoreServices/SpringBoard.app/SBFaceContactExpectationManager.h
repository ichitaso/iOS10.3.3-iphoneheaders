/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBSceneManager, SBProximitySensorManager;

@interface SBFaceContactExpectationManager : NSObject {

	SBSceneManager* _sceneManager;
	SBProximitySensorManager* _proximitySensorManager;
	char _faceExpected;

}

@property (assign,setter=_setFaceExpected:,nonatomic) char faceExpected;              //@synthesize faceExpected=_faceExpected - In the implementation block
-(id)initWithSceneManager:(id)arg1 ;
-(void)updateFaceContactExpectation;
-(id)initWithSceneManager:(id)arg1 proximitySensorManager:(id)arg2 ;
-(char)_frontmostSceneExpectsFaceContact;
-(void)_setFaceExpected:(char)arg1 ;
-(id)_proximitySensorClientID;
-(char)faceExpected;
-(id)description;
@end

