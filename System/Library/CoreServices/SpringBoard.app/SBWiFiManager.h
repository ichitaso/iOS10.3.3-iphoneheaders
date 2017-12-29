/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <SpringBoard/SpringBoard-Structs.h>
@class NSRecursiveLock, NSString, NWSystemPathMonitor, NSObject;

@interface SBWiFiManager : NSObject {

	NSRecursiveLock* _lock;
	CFRunLoopRef _callbackRunLoop;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	NSString* _deviceInterfaceName;
	char _mainThread_devicePresent;
	WiFiNetworkRef _currentNetwork;
	WiFiNetworkRef _previousNetwork;
	char _currentNetworkHasBeenSet;
	char _currentNetworkIsIOSHotspot;
	char _currentNetworkIsIOSHotspotHasBeenSet;
	char _powered;
	char _poweredHasBeenSet;
	int _mainThread_signalStrengthBars;
	int _mainThread_signalStrengthRSSI;
	char _mainThread_signalStrengthHasBeenSet;
	NWSystemPathMonitor* _systemPathMonitor;
	NSObject*<OS_dispatch_source> _primaryInterfaceUpdateTimeoutSource;
	WiFiNetworkRef _primaryInterface;
	char _primaryInterfaceHasBeenSet;
	char _isPrimaryInterface;
	char _isPrimaryInterfaceChanging;

}
+(id)sharedInstance;
-(char)isPowered;
-(char)isPrimaryInterface;
-(char)isAssociated;
-(id)currentNetworkName;
-(int)signalStrengthBars;
-(WiFiManagerClientRef)_lock_manager;
-(void)_powerStateDidChange;
-(void)_linkDidChange;
-(void)updateDevicePresence;
-(void)_lock_spawnManagerCallbackThread;
-(void)_updateWiFiDevice;
-(void)_runManagerCallbackThread;
-(void)_updateCurrentNetwork;
-(void)updateSignalStrength;
-(void)_updateWiFiState;
-(void)_primaryInterfaceChanged:(char)arg1 ;
-(char)_cachedIsAssociated;
-(void)updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2 ;
-(void)_lock_setWiFiDevice:(WiFiDeviceClientRef)arg1 ;
-(char)wifiSupported;
-(char)devicePresent;
-(char)isAssociatedToIOSHotspot;
-(void)clearWiFiPickerPreferences;
-(char)wiFiEnabled;
-(int)signalStrengthRSSI;
-(void)resetSettings;
-(CFRunLoopRef)wifiRunLoopRef;
-(id)_wifiInterface;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setWiFiEnabled:(char)arg1 ;
-(void)setPowered:(char)arg1 ;
-(id)knownNetworks;
@end

