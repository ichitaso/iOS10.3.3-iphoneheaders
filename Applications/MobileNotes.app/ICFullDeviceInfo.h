/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICDeviceInfo.h>

@class NSString;

@interface ICFullDeviceInfo : ICDeviceInfo {

	NSString* _model;
	NSString* _modelDisplayName;
	NSString* _softwareVersion;
	ICDeviceHardwareInfo _hardwareInfo;

}

@property (nonatomic,readonly) ICDeviceHardwareInfo hardwareInfo;              //@synthesize hardwareInfo=_hardwareInfo - In the implementation block
@property (nonatomic,readonly) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * modelDisplayName;                    //@synthesize modelDisplayName=_modelDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * softwareVersion;                     //@synthesize softwareVersion=_softwareVersion - In the implementation block
-(char)upgraded;
-(char)upgradable;
-(char)isOSXDevice;
-(id)initWithName:(id)arg1 model:(id)arg2 modelDisplayName:(id)arg3 softwareVersion:(id)arg4 ;
-(char)shouldBeHidden;
-(id)loggableDescription;
-(ICDeviceHardwareInfo)hardwareInfoFromModelId:(id)arg1 ;
-(char)isHardwareInfoUpgradable:(ICDeviceHardwareInfo)arg1 ;
-(unsigned)hardwareInfoNameFromString:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)model;
-(NSString *)modelDisplayName;
-(NSString *)softwareVersion;
-(ICDeviceHardwareInfo)hardwareInfo;
@end

