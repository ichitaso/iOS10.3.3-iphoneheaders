/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDateTimeOverrideObserver.h>

@class SBStatusBarDefaults, NSHashTable, NSDateFormatter, NSTimer, NSString, NSArray, SBSStatusBarStyleOverridesAssertion, SBUserSessionController, SBQuietModeStateAggregator;

@interface SBStatusBarStateAggregator : NSObject <SBDateTimeOverrideObserver> {

	SBStatusBarDefaults* _statusBarDefaults;
	char _cachedShowRSSI;
	char _cachedShowGSMRSSI;
	unsigned _coalescentBlockDepth;
	char _hasPostedOnce;
	unsigned _itemPostState[35];
	char _nonItemDataChanged;
	SCD_Struct_SB48 _data;
	int _actions;
	NSHashTable* _postObservers;
	char _notifyingPostObservers;
	int _showsRecordingOverrides;
	NSDateFormatter* _timeItemDateFormatter;
	NSTimer* _timeItemTimer;
	NSString* _timeItemTimeString;
	NSString* _serviceString;
	NSString* _serviceCrossfadeString;
	NSArray* _countryCodesShowingEmergencyOnlyStatus;
	unsigned _airplaneTransitionToken;
	char _suppressCellServiceForAirplaneModeTransition;
	char _showsActivityIndicatorOnHomeScreen;
	int _activityIndicatorEverywhereCount;
	int _syncActivityIndicatorCount;
	NSString* _activityDisplayIdentifier;
	char _showingNotChargingItem;
	NSString* _batteryDetailString;
	char _alarmEnabled;
	char _applyingAssistantStyle;
	int _locationStatusBarIconType;
	SBSStatusBarStyleOverridesAssertion* _siriEyesFreeStatusBarStyleOverrideAssertion;
	SBSStatusBarStyleOverridesAssertion* _tetheringStatusBarStyleOverrideAssertion;
	SBUserSessionController* _lazy_userSessionController;
	NSString* _personName;
	NSString* _overridePersonName;
	SBQuietModeStateAggregator* _quietModeStateAggregator;

}

@property (setter=_setUserSessionController:,getter=_userSessionController,nonatomic,retain) SBUserSessionController * userSessionController;              //@synthesize lazy_userSessionController=_lazy_userSessionController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)_thermalColorForLevel:(int)arg1 ;
+(id)sharedInstance;
-(void)beginCoalescentBlock;
-(void)endCoalescentBlock;
-(void)setShowsActivityIndicatorOnHomeScreen:(char)arg1 ;
-(id)_userSessionController;
-(void)setShowsActivityIndicatorEverywhere:(char)arg1 ;
-(void)setShowsSyncActivityIndicator:(char)arg1 ;
-(void)setShowsOverridesForRecording:(char)arg1 ;
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(void)setQuietModeStateAggregator:(id)arg1 ;
-(void)updateStatusBarItem:(int)arg1 ;
-(void)setAlarmEnabled:(char)arg1 ;
-(void)noteThermalConditionsDidChange;
-(void)_stopTimeItemTimer;
-(void)_removeAssistantEyesFreeStatusBarStyleOverride;
-(void)_removeTetheringStatusBarStyleOverrideAssertion;
-(void)_resetTimeItemFormatter;
-(void)_updateSignalStrengthItem;
-(void)_updateServiceItem;
-(void)_updateDataNetworkItem;
-(void)_updateBatteryItems:(id)arg1 ;
-(void)_tickRefCount:(int*)arg1 up:(char)arg2 withTransitionBlock:(/*^block*/id)arg3 ;
-(void)_requestActions:(int)arg1 ;
-(void)_notifyItemChanged:(int)arg1 ;
-(void)_updateTetheringState;
-(void)_buildLocationState;
-(void)_updatePersonNameItem;
-(void)_updateAllInternalBatteryItems;
-(void)_updateLockItem;
-(void)_restartTimeItemTimer;
-(void)_noteNotChargingStatusChanged;
-(void)_noteAirplaneModeChanged;
-(void)_updateCarPlayItem;
-(char)_setItem:(int)arg1 enabled:(char)arg2 ;
-(id)_displayStringForSIMStatus:(id)arg1 ;
-(char)_shouldShowPersonName;
-(id)_sbCarrierNameForOperator:(id)arg1 ;
-(id)_displayStringForRegistrationStatus:(int)arg1 ;
-(char)_shouldShowEmergencyOnlyStatus;
-(char)_simStatusMeansLocked:(id)arg1 ;
-(char)_shouldShowNotChargingItem;
-(void)_notifyNonItemDataChanged;
-(void)_updateTimeItems;
-(void)_updateQuietModeItem;
-(void)_updateAirplaneMode;
-(void)_updateBluetoothHeadphonesItem;
-(void)_updateBluetoothBatteryItem;
-(void)_updateBluetoothItem;
-(void)_updateTTYItem;
-(void)_updateAlarmItem;
-(void)_updateLocationItem;
-(void)_updateRotationLockItem;
-(void)_updateAirplayItem;
-(void)_updateAssistantItem;
-(void)_updateVPNItem;
-(void)_updateCallForwardingItem;
-(void)_updateActivityItem;
-(void)_updateThermalColorItem;
-(void)_updateLiquidDetectionItem;
-(void)_postItem:(int)arg1 withState:(unsigned)arg2 ;
-(void)_setShowingNotChargingItem;
-(void)_updateLocationState;
-(void)setUserNameOverride:(id)arg1 ;
-(void)sendStatusBarActions:(int)arg1 ;
-(void)addPostingObserver:(id)arg1 ;
-(void)removePostingObserver:(id)arg1 ;
-(void)_setUserSessionController:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(const SCD_Struct_SB48*)_statusBarData;
-(void)_registerForNotifications;
@end

