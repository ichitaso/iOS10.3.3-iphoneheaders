/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol IDSLinkDelegate;
@class NSString, CBScalablePipe;

@interface IDSBTLink : NSObject <IDSLink, NSStreamDelegate> {

	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	unsigned _state;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;
	NSString* _linkID;
	CBScalablePipe* _pipe;
	IDSOSDataChannelRef _dataChannel;
	unsigned _dataChannelPendingTx;
	unsigned _totalReceivedRawBytes;
	SCD_Struct_ID11* _currentIncomingPacket;
	SCD_Struct_ID11* _currentOutgoingPacket;
	char _resyncing;
	double _lastResyncTime;
	double _lastDownstreamDumpLogTime;
	double _lastUpstreamDumpLogTime;
	char _writeSuspended;
	char _remoteHostAwake;
	char _postedFirstHostStateChange;
	char _linkSuspended;
	id<IDSLinkDelegate> _delegate;
	id<IDSLinkDelegate> _alternateDelegate;

}

@property (copy,readonly) NSString * linkID;                                       //@synthesize linkID=_linkID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned state;                                               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned headerOverhead; 
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<IDSLinkDelegate> alternateDelegate;                          //@synthesize alternateDelegate=_alternateDelegate - In the implementation block
-(NSString *)cbuuid;
-(void)setCbuuid:(NSString *)arg1 ;
-(NSString *)deviceUniqueID;
-(id)copyLinkStatsDict;
-(unsigned)sendPacketBuffer:(SCD_Struct_ID11*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(char)arg2 ;
-(NSString *)linkTypeString;
-(unsigned)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)_localDetectedCorruption;
-(void)triggerBTCorruptionRecovery;
-(void)_processIncomingPacket;
-(char)isLinkSuspended;
-(void)suspendLink:(char)arg1 ;
-(void)remoteDetectedCorruption;
-(void)flushBuffer:(unsigned)arg1 ;
-(id)initWithPipe:(id)arg1 useSkywalkChannel:(char)arg2 withDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(void)_dumpLogs:(double)arg1 isDownstream:(char)arg2 ;
-(void)_processOutgoingPacket;
-(void)invalidate;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)dealloc;
-(id<IDSLinkDelegate>)delegate;
-(unsigned)state;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)linkID;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
@end
