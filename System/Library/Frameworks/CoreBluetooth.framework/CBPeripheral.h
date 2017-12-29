/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBPeer.h>

@protocol CBPeripheralDelegate;
@class CBCentralManager, NSMutableDictionary, NSString, NSNumber, NSArray;

@interface CBPeripheral : CBPeer {

	CBCentralManager* _centralManager;
	struct {
		unsigned didUpdateName : 1;
		unsigned didModifyServices : 1;
		unsigned didReadRSSI : 1;
		unsigned didUpdateRSSI : 1;
		unsigned didDiscoverServices : 1;
		unsigned didDiscoverIncludedServices : 1;
		unsigned didDiscoverCharacteristics : 1;
		unsigned didUpdateCharacteristicValue : 1;
		unsigned didWriteCharacteristicValue : 1;
		unsigned didNotifyCharacteristicValue : 1;
		unsigned didDiscoverDescriptors : 1;
		unsigned didUpdateDescriptorValue : 1;
		unsigned didWriteDescriptorValue : 1;
		unsigned didReceiveTimeSync : 1;
	}  _delegateFlags;
	NSMutableDictionary* _attributes;
	char _isConnectedToSystem;
	id<CBPeripheralDelegate> _delegate;
	NSString* _name;
	NSNumber* _RSSI;
	int _state;
	NSArray* _services;

}

@property (retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (retain) NSNumber * RSSI;                                                 //@synthesize RSSI=_RSSI - In the implementation block
@property (assign) int state;                                                       //@synthesize state=_state - In the implementation block
@property (retain) NSArray * services;                                              //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) char isConnectedToSystem;                            //@synthesize isConnectedToSystem=_isConnectedToSystem - In the implementation block
@property (assign,nonatomic,__weak) id<CBPeripheralDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CBPeripheralDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<CBPeripheralDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithCentralManager:(id)arg1 info:(id)arg2 ;
-(void)handleDisconnection;
-(void)setOrphan;
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(void)setAttribute:(id)arg1 forHandle:(id)arg2 ;
-(void)handleSuccessfulConnection:(id)arg1 ;
-(void)handleFailedConnection;
-(void)handleConnectionStateUpdated:(char)arg1 ;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)removeAttributeForHandle:(id)arg1 ;
-(id)attributeForHandle:(id)arg1 ;
-(void)sendMsg:(int)arg1 requiresConnected:(char)arg2 args:(id)arg3 ;
-(void)handleNameUpdated:(id)arg1 ;
-(void)handleServicesChanged:(id)arg1 ;
-(void)handleRSSIUpdated:(id)arg1 ;
-(void)handleServicesDiscovered:(id)arg1 ;
-(void)handleTimeSyncResponse:(id)arg1 ;
-(void)handleServiceIncludedServicesDiscovered:(id)arg1 ;
-(void)handleServiceCharacteristicsDiscovered:(id)arg1 ;
-(void)handleCharacteristicValueUpdated:(id)arg1 ;
-(void)handleCharacteristicValueWritten:(id)arg1 ;
-(void)handleCharacteristicValueNotifying:(id)arg1 ;
-(void)handleCharacteristicDescriptorsDiscovered:(id)arg1 ;
-(void)handleDescriptorValueUpdated:(id)arg1 ;
-(void)handleDescriptorValueWritten:(id)arg1 ;
-(void)setRSSI:(NSNumber *)arg1 ;
-(void)invalidateAllAttributes;
-(void)handleAttributeEvent:(id)arg1 args:(id)arg2 attributeSelector:(SEL)arg3 delegateSelector:(SEL)arg4 delegateFlag:(char)arg5 ;
-(void)handleServiceEvent:(id)arg1 serviceSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(char)arg4 ;
-(void)handleCharacteristicEvent:(id)arg1 characteristicSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(char)arg4 ;
-(void)handleDescriptorEvent:(id)arg1 descriptorSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(char)arg4 ;
-(void)discoverIncludedServices:(id)arg1 forService:(id)arg2 ;
-(void)setBroadcastValue:(char)arg1 forCharacteristic:(id)arg2 ;
-(void)writeValue:(id)arg1 forDescriptor:(id)arg2 ;
-(void)getTimeSyncData;
-(NSNumber *)RSSI;
-(char)isConnectedToSystem;
-(void)untag:(id)arg1 ;
-(void)tag:(id)arg1 ;
-(void)discoverDescriptorsForCharacteristic:(id)arg1 ;
-(void)readValueForDescriptor:(id)arg1 ;
-(unsigned)maximumWriteValueLengthForType:(int)arg1 ;
-(void)readValueForCharacteristic:(id)arg1 ;
-(void)setNotifyValue:(char)arg1 forCharacteristic:(id)arg2 ;
-(void)readRSSI;
-(NSArray *)services;
-(void)discoverCharacteristics:(id)arg1 forService:(id)arg2 ;
-(void)setServices:(NSArray *)arg1 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(int)arg3 ;
-(void)discoverServices:(id)arg1 ;
-(char)hasTag:(id)arg1 ;
@end

