/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NASAppSyncAnchor;


@protocol NASAppSyncMetaDataItem <NSCopying,NSObject>
@property (nonatomic,copy,readonly) NSString * appId; 
@property (nonatomic,copy,readonly) NASAppSyncAnchor * anchor; 
@required
-(id)scrapeAppInfo;
-(NASAppSyncAnchor *)anchor;
-(NSString *)appId;

@end

