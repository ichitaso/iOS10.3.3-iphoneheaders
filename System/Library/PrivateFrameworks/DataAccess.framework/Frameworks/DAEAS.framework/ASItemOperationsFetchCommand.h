/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASItemOperationsFetchCommand : NSObject {

	NSString* _collectionID;
	NSString* _serverID;
	NSString* _longID;

}
-(id)longID;
-(id)collectionID;
-(id)initWithCollectionID:(id)arg1 withServerID:(id)arg2 withLongID:(id)arg3 ;
-(id)serverID;
@end
