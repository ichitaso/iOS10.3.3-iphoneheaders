/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:41 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SUManagedDeviceUpdateDelay;

@interface SUManagedDeviceManager : NSObject {

	SUManagedDeviceUpdateDelay* mdmDelay;
	char _hasStartedDelaying;
	SUManagedDeviceUpdateDelay* _mdmDelay;

}

@property (nonatomic,retain) SUManagedDeviceUpdateDelay * mdmDelay;              //@synthesize mdmDelay=_mdmDelay - In the implementation block
@property (nonatomic,readonly) char hasStartedDelaying;                          //@synthesize hasStartedDelaying=_hasStartedDelaying - In the implementation block
+(id)sharedInstance;
-(void)setDelayedState;
-(void)registerProfileChangeListener;
-(void)unregisterProfileChangeListener;
-(void)profileChanged;
-(void)startDelayWindow:(id)arg1 ;
-(char)shouldDelayUpdate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isDelayed;
-(void)setMdmDelay:(SUManagedDeviceUpdateDelay *)arg1 ;
-(SUManagedDeviceUpdateDelay *)mdmDelay;
-(char)hasStartedDelaying;
-(id)delayedStartDate;
@end

