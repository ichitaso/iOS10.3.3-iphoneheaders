/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:42 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBCDomainSyncServiceProtocol <NSObject>
@required
-(oneway void)deletePlaybackPositionEntity:(id)arg1;
-(oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;
-(oneway void)persistPlaybackPositionEntity:(id)arg1 isCheckpoint:(char)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(oneway void)beginAccessingPlaybackPositionEntities;
-(oneway void)endAccessingPlaybackPositionEntities;
-(oneway void)deletePlaybackPositionEntities;

@end

