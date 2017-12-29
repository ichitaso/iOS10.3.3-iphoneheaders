/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSArray, ACAccount, NSObject, NSString;

@interface ICDeviceListRequest : NSObject {

	char _didGetICloudDeviceList;
	NSArray* _devices;
	ACAccount* _account;
	NSObject*<OS_dispatch_semaphore> _workSemaphore;
	NSString* _name;
	NSString* _model;
	NSString* _modelDisplayName;
	NSString* _softwareVersion;

}

@property (nonatomic,retain) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (retain) NSArray * devices;                                           //@synthesize devices=_devices - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> workSemaphore;              //@synthesize workSemaphore=_workSemaphore - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * modelDisplayName;                         //@synthesize modelDisplayName=_modelDisplayName - In the implementation block
@property (nonatomic,copy) NSString * softwareVersion;                          //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (assign) char didGetICloudDeviceList;                                 //@synthesize didGetICloudDeviceList=_didGetICloudDeviceList - In the implementation block
+(id)combineICloudDevices:(id)arg1 withCloudKitDevices:(id)arg2 ;
+(id)filteredDevices:(id)arg1 ;
+(id)setOfDeviceNamesFromDevices:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)workSemaphore;
-(void)setDidGetICloudDeviceList:(char)arg1 ;
-(char)anyDeviceNeedsUpgrade;
-(char)anyDeviceNotUpgradable;
-(char)anyOSXDeviceNotUpgraded;
-(char)waitForFetchWithTimeout:(double)arg1 ;
-(void)fetchWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)didGetICloudDeviceList;
-(void)setWorkSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)model;
-(NSString *)modelDisplayName;
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setDevices:(NSArray *)arg1 ;
-(NSArray *)devices;
-(void)setSoftwareVersion:(NSString *)arg1 ;
-(NSString *)softwareVersion;
-(void)setModelDisplayName:(NSString *)arg1 ;
-(void)fetchICloudDevicesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchCloudKitDevicesWithCompletionBlock:(/*^block*/id)arg1 ;
@end
