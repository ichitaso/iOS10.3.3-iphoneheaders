/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, PCPersistentTimer;

@interface MPMeCardGeocoder : NSObject {

	void* _addressBook;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _addresses;
	PCPersistentTimer* _networkPreferencesTimeoutTimer;

}

@property (assign) char isActivelyUsing; 
+(id)sharedMeCardGeocoder;
-(id)init;
-(void)dealloc;
-(void)_addressBookChanged;
-(void*)addressBook;
-(char)isActivelyUsing;
-(char)_unschedulePerformGeocodesWakeTaskIfEarlierThan:(id)arg1 ;
-(char)_isNetworkAvailable;
-(void)_doWork;
-(void)_scheduleNextGeocode;
-(void)_unscheduleLongTermRebuild;
-(void)_rebuildAddressArray;
-(void)_loadAddressBook;
-(void)_networkPreferencesLoaded;
-(void)scheduleNextGeocode;
-(void)_saveGeoCache;
-(void)_schedulePerformGeocodesTaskWithStartWakeTime:(id)arg1 dropDeadWakeTime:(id)arg2 ;
-(id)_dateOfOldestAddress;
-(void)_scheduleLongTermRebuild;
-(void)scheduleImmediateGeocode;
-(id)currentValidLocations;
-(void)setIsActivelyUsing:(char)arg1 ;
@end

