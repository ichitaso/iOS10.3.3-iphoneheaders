/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HSSetupStepDelegate <NSObject>
@required
-(void)setupStepDidChange:(id)arg1;
-(void)setupStepDidCancel:(id)arg1;
-(void)setupStep:(id)arg1 didSelectDiscoveredAccessory:(id)arg2;
-(void)setupStepDidFinish:(id)arg1;
-(void)setupStep:(id)arg1 didPairWithDiscoveredAccessory:(id)arg2;
-(void)setupStep:(id)arg1 didFailWithError:(id)arg2;

@end

