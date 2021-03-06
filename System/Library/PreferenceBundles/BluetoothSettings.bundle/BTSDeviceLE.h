/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BluetoothSettings/BTSDevice.h>

@class CBPeripheral, CBCentralManager;

@interface BTSDeviceLE : BTSDevice {

	CBPeripheral* _peripheral;
	CBCentralManager* _centralManager;
	char healthDevice;

}
+(id)deviceWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(id)description;
-(id)name;
-(id)identifier;
-(char)connect;
-(void)disconnect;
-(void)unpair;
-(char)setUserName:(id)arg1 ;
-(char)connected;
-(char)isHealthDevice;
-(void)setHealthDevice:(char)arg1 ;
-(char)isMyDevice;
-(char)cloudPaired;
-(id)classicDevice;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(char)connectApplePencil;
-(char)paired;
@end

