/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifierDataSource.h>

@interface COSPairedDeviceListDataSource : PSSpecifierDataSource
-(void)presentNewPairingFlowIfPossible;
-(void)_reloadForDeviceStateChange:(id)arg1 ;
-(id)_fakeWatchName:(unsigned)arg1 ;
-(id)_fakeList;
-(id)newDeviceSpecifierForNRDevice:(id)arg1 magicCodeEnabled:(id)arg2 deviceState:(id)arg3 ;
-(void)presentInternalFlow;
-(void)magicSwitchStateChanged;
-(id)init;
-(void)dealloc;
-(void)loadSpecifiers;
@end

