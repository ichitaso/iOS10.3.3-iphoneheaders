/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSPlatform : NSObject

@property (nonatomic,copy,readonly) NSString * productType; 
@property (nonatomic,copy,readonly) NSString * productHardwareModel; 
@property (nonatomic,copy,readonly) NSString * productHardwareModelName; 
@property (nonatomic,copy,readonly) NSString * productClass; 
@property (nonatomic,copy,readonly) NSString * localizedProductName; 
@property (nonatomic,copy,readonly) NSString * operatingSystemName; 
@property (nonatomic,copy,readonly) NSString * uniqueDeviceIdentifier; 
@property (nonatomic,readonly) int deviceClass; 
@property (nonatomic,readonly) int homeButtonType; 
@property (nonatomic,copy,readonly) NSString * productVersion; 
@property (nonatomic,copy,readonly) NSString * productBuildVersion; 
@property (getter=isInternalInstall,nonatomic,readonly) char internalInstall; 
@property (getter=isDeveloperInstall,nonatomic,readonly) char developerInstall; 
@property (getter=isCarrierInstall,nonatomic,readonly) char carrierInstall; 
@property (getter=isMultiCore,nonatomic,readonly) char multiCore; 
@property (nonatomic,readonly) char hasGasGauge; 
@property (nonatomic,readonly) char hasOrbCapability; 
@property (nonatomic,readonly) int mainScreenPitch; 
@property (nonatomic,readonly) float mainScreenScale; 
@property (nonatomic,readonly) float mainScreenOrientation; 
+(id)sharedInstance;
-(NSString *)operatingSystemName;
-(NSString *)productHardwareModel;
-(NSString *)productHardwareModelName;
-(int)homeButtonType;
-(char)isDeveloperInstall;
-(char)isCarrierInstall;
-(char)isMultiCore;
-(char)hasGasGauge;
-(char)hasOrbCapability;
-(int)mainScreenPitch;
-(float)mainScreenOrientation;
-(NSString *)uniqueDeviceIdentifier;
-(id)init;
-(char)isInternalInstall;
-(NSString *)localizedProductName;
-(float)mainScreenScale;
-(NSString *)productBuildVersion;
-(NSString *)productType;
-(NSString *)productClass;
-(NSString *)productVersion;
-(int)deviceClass;
@end
