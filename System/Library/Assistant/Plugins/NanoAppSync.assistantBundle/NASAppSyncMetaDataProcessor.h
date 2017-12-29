/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, NSCondition;

@interface NASAppSyncMetaDataProcessor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _metaData;
	unsigned _lastChangeOffset;
	NSMutableDictionary* _appInfoCache;
	unsigned _appInfoCacheStart;
	unsigned _appInfoCacheEnd;
	NSCondition* _appInfoCacheCheck;

}
-(void)_queue_updateCache;
-(void)processNextChange:(id)arg1 afterAnchor:(id)arg2 ;
-(id)initWithSource:(id)arg1 ;
@end
