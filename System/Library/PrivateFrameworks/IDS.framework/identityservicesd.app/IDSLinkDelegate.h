/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSLinkDelegate <NSObject>
@optional
-(void)link:(id)arg1 didReceiveReportEvent:(id)arg2;
-(void)link:(id)arg1 didReceiveSKEData:(id)arg2;
-(void)link:(id)arg1 didConnectUnderlyingLink:(char)arg2 localAttributes:(id)arg3 remoteAttributes:(id)arg4;
-(void)link:(id)arg1 didRATChange:(unsigned char)arg2;
-(void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;
-(void)link:(id)arg1 didDisconnectUnderlyingLinkID:(char)arg2;
-(void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(char)arg2 currentDefaultLinkID:(char)arg3;
-(void)link:(id)arg1 hostAwakeDidChange:(char)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;
-(void)link:(id)arg1 hasSpaceAvailable:(char)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;
-(void)link:(id)arg1 didConnectOverCloud:(id)arg2 cbuuid:(id)arg3;
-(void)link:(id)arg1 didFailToConnectOverCloud:(id)arg2 cbuuid:(id)arg3;
-(void)link:(id)arg1 didDisconnectOverCloud:(id)arg2 cbuuid:(id)arg3;

@required
-(void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
-(void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
-(char)link:(id)arg1 didReceivePacket:(/*function pointer*/void**)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;

@end
