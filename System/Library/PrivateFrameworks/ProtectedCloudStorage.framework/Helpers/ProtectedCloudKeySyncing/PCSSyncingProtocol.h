/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Helpers/ProtectedCloudKeySyncing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PCSSyncingProtocol
@required
-(void)getPCSKeyHash:(/*^block*/id)arg1;
-(void)getAllClients:(/*^block*/id)arg1;
-(void)syncKeys:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)requestKeys:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)triggerDaily:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchAllDeviceKeys:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)triggerUserRegistryCheck:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)deleteThisDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)escrowRecordIDs:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchStats:(/*^block*/id)arg1;

@end

