/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>
#import <identityservicesd/IDSLinkDelegate.h>

@protocol IDSLinkDelegate;
@class IDSUDPLink, NSMutableArray, NSData, NSString;

@interface IDSUDPGlobalLink : NSObject <IDSLink, IDSLinkDelegate> {

	IDSUDPLink* _udpLink;
	id<IDSLinkDelegate> _delegate;
	id<IDSLinkDelegate> _alternateDelegate;
	/*^block*/id _dataReadyHandler;
	/*^block*/id _completionHandler;
	NSMutableArray* _remoteAddressArray;
	IDSSockAddrPairTable* _sockAddrPairTable;
	unsigned _sourceInterfaceIndex;
	sockaddr_storage _sourceAddress;
	sockaddr_storage _destinationAddress;
	double _connectionRequestStartTime;
	double _nominateRequestStartTime;
	char _isInvalidated;
	char _notifyReachableDone;
	char _useStunMICheck;
	NSData* _keyData;
	NSString* _localPartyID;
	NSString* _remotePartyID;
	NSMutableArray* _nominateBlocks;
	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	unsigned _state;
	unsigned _headerOverhead;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;

}

@property (nonatomic,retain) NSString * localPartyID;                              //@synthesize localPartyID=_localPartyID - In the implementation block
@property (nonatomic,retain) NSString * remotePartyID;                             //@synthesize remotePartyID=_remotePartyID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned state;                                               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned headerOverhead;                                      //@synthesize headerOverhead=_headerOverhead - In the implementation block
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<IDSLinkDelegate> alternateDelegate;                          //@synthesize alternateDelegate=_alternateDelegate - In the implementation block
-(NSString *)cbuuid;
-(void)setCbuuid:(NSString *)arg1 ;
-(NSString *)deviceUniqueID;
-(id)copyLinkStatsDict;
-(void)startConnectionForDevice:(id)arg1 isInitiator:(char)arg2 remotePartyID:(id)arg3 useStunMICheck:(char)arg4 ;
-(void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(char)link:(id)arg1 didReceivePacket:(SCD_Struct_ID11*)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(unsigned)sendPacketBuffer:(SCD_Struct_ID11*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(char)arg2 ;
-(NSString *)linkTypeString;
-(unsigned)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id<IDSLinkDelegate>)arg1 ;
-(char)remoteHostAwake;
-(void)setLocalPartyID:(NSString *)arg1 ;
-(void)_createSimpleConnectionData;
-(void)_sendConnectionCheckRequest;
-(void)setRemotePartyID:(NSString *)arg1 ;
-(void)_updateLinkTransportAddress:(unsigned)arg1 localAddress:(sockaddr*)arg2 remoteAddress:(sockaddr*)arg3 ;
-(void)_sendNominateRequest;
-(void)_forwardPacketBuffer:(SCD_Struct_ID11*)arg1 fromDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(char)_processStunBindingRequest:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 arrivalTime:(double)arg6 ;
-(char)_processStunBindingResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 arrivalTime:(double)arg6 ;
-(char)_processStunDataIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 arrivalTime:(double)arg6 packetBuffer:(SCD_Struct_ID11*)arg7 fromDeviceUniqueID:(id)arg8 cbuuid:(id)arg9 ;
-(char)_processStunPacket:(SCD_Struct_ID11*)arg1 fromDevice:(id)arg2 arrivalTime:(double)arg3 fromDeviceUniqueID:(id)arg4 cbuuid:(id)arg5 ;
-(void)createConnectionData:(id)arg1 dataReadyHandler:(/*^block*/id)arg2 ;
-(void)processRemoteConnectionData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)localPartyID;
-(NSString *)remotePartyID;
-(void)invalidate;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)dealloc;
-(id<IDSLinkDelegate>)delegate;
-(unsigned)state;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
@end
