/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSMutableArray, NSDate, NSArray, AXHearingAidMode;


@protocol AXHADeviceProtocol <NSObject>
@property (nonatomic,readonly) char isPaired; 
@property (nonatomic,readonly) char isConnecting; 
@property (assign,nonatomic) char keepInSync; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSMutableArray * manufacturer; 
@property (nonatomic,retain,readonly) NSMutableArray * model; 
@property (nonatomic,retain,readonly) NSString * leftFirmwareVersion; 
@property (nonatomic,retain,readonly) NSString * rightFirmwareVersion; 
@property (nonatomic,retain,readonly) NSString * leftHardwareVersion; 
@property (nonatomic,retain,readonly) NSString * rightHardwareVersion; 
@property (assign,nonatomic) int availableEars; 
@property (nonatomic,retain,readonly) NSString * rightUUID; 
@property (nonatomic,retain,readonly) NSString * leftUUID; 
@property (nonatomic,retain,readonly) NSString * leftPeripheralUUID; 
@property (nonatomic,retain,readonly) NSString * rightPeripheralUUID; 
@property (assign,nonatomic) float rightMicrophoneVolume; 
@property (assign,nonatomic) float leftMicrophoneVolume; 
@property (assign,nonatomic) float rightStreamVolume; 
@property (assign,nonatomic) float leftStreamVolume; 
@property (assign,nonatomic) float rightSensitivity; 
@property (assign,nonatomic) float leftSensitivity; 
@property (assign,nonatomic) float rightMixedVolume; 
@property (assign,nonatomic) float leftMixedVolume; 
@property (assign,nonatomic) char rightTreble; 
@property (assign,nonatomic) char leftTreble; 
@property (assign,nonatomic) char rightBass; 
@property (assign,nonatomic) char leftBass; 
@property (nonatomic,readonly) float rightBatteryLevel; 
@property (nonatomic,readonly) float leftBatteryLevel; 
@property (nonatomic,retain,readonly) NSDate * leftBatteryLowDate; 
@property (nonatomic,retain,readonly) NSDate * rightBatteryLowDate; 
@property (nonatomic,readonly) short leftMicrophoneVolumeSteps; 
@property (nonatomic,readonly) short rightMicrophoneVolumeSteps; 
@property (nonatomic,readonly) short leftStreamVolumeSteps; 
@property (nonatomic,readonly) short rightStreamVolumeSteps; 
@property (nonatomic,readonly) short leftSensitivitySteps; 
@property (nonatomic,readonly) short rightSensitivitySteps; 
@property (nonatomic,readonly) short leftMixedVolumeSteps; 
@property (nonatomic,readonly) short rightMixedVolumeSteps; 
@property (nonatomic,readonly) char supportsBinauralStreaming; 
@property (nonatomic,readonly) char supportsCombinedPresets; 
@property (nonatomic,readonly) char supportsCombinedVolumes; 
@property (nonatomic,copy,readonly) NSArray * rightPrograms; 
@property (nonatomic,copy,readonly) NSArray * leftPrograms; 
@property (nonatomic,retain,readonly) AXHearingAidMode * leftSelectedProgram; 
@property (nonatomic,retain,readonly) AXHearingAidMode * rightSelectedProgram; 
@property (nonatomic,retain,readonly) AXHearingAidMode * leftSelectedStreamingProgram; 
@property (nonatomic,retain,readonly) AXHearingAidMode * rightSelectedStreamingProgram; 
@property (nonatomic,retain,readonly) NSString * deviceUUID; 
@required
-(NSString *)name;
-(NSMutableArray *)model;
-(void)connect;
-(id)valueForProperty:(unsigned long long)arg1;
-(NSMutableArray *)manufacturer;
-(char)isConnected;
-(void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
-(char)isConnecting;
-(char)leftAvailable;
-(char)rightAvailable;
-(float)leftBatteryLevel;
-(float)rightBatteryLevel;
-(void)setAvailableEars:(int)arg1;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(int)availableEars;
-(short)leftMixedVolumeSteps;
-(short)rightMixedVolumeSteps;
-(short)leftMicrophoneVolumeSteps;
-(short)rightMicrophoneVolumeSteps;
-(short)leftStreamVolumeSteps;
-(short)rightStreamVolumeSteps;
-(short)leftSensitivitySteps;
-(short)rightSensitivitySteps;
-(NSArray *)leftPrograms;
-(NSArray *)rightPrograms;
-(AXHearingAidMode *)leftSelectedProgram;
-(AXHearingAidMode *)rightSelectedProgram;
-(AXHearingAidMode *)leftSelectedStreamingProgram;
-(AXHearingAidMode *)rightSelectedStreamingProgram;
-(char)supportsCombinedPresets;
-(id)programs;
-(char)didLoadRequiredProperties;
-(void)loadRequiredProperties;
-(void)setLeftTreble:(char)arg1;
-(void)setRightTreble:(char)arg1;
-(void)setLeftBass:(char)arg1;
-(void)setRightBass:(char)arg1;
-(float)leftMicrophoneVolume;
-(float)rightMicrophoneVolume;
-(float)leftStreamVolume;
-(float)rightStreamVolume;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(NSDate *)leftBatteryLowDate;
-(NSDate *)rightBatteryLowDate;
-(float)leftSensitivity;
-(float)rightSensitivity;
-(float)leftMixedVolume;
-(float)rightMixedVolume;
-(char)supportsCombinedVolumes;
-(char)supportsBinauralStreaming;
-(id)initWithPersistentRepresentation:(id)arg1;
-(void)disconnectAndUnpair:(char)arg1;
-(char)hasConnection;
-(char)containsPeripheralWithUUID:(id)arg1;
-(char)didLoadBasicProperties;
-(void)selectProgram:(id)arg1 forEar:(int)arg2;
-(id)selectedPrograms;
-(id)selectedProgramIndexes;
-(char)keepInSync;
-(void)setKeepInSync:(char)arg1;
-(NSString *)leftPeripheralUUID;
-(NSString *)rightPeripheralUUID;
-(void)setRightMicrophoneVolume:(float)arg1;
-(void)setLeftMicrophoneVolume:(float)arg1;
-(void)setRightStreamVolume:(float)arg1;
-(void)setLeftStreamVolume:(float)arg1;
-(void)setRightSensitivity:(float)arg1;
-(void)setLeftSensitivity:(float)arg1;
-(void)setRightMixedVolume:(float)arg1;
-(void)setLeftMixedVolume:(float)arg1;
-(char)rightTreble;
-(char)leftTreble;
-(char)rightBass;
-(char)leftBass;
-(NSString *)deviceUUID;
-(char)isPaired;

@end

