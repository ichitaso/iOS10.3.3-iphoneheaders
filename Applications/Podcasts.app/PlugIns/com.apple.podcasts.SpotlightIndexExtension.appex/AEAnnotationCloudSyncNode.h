/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/IMCloudSyncNode.h>

@interface AEAnnotationCloudSyncNode : IMCloudSyncNode
+(id)cloudDataCurrentRevision;
+(id)cloudDataMaxRevision;
+(id)globalAnnotationsKeyForAssetID:(id)arg1 ;
+(id)userAnnotationsKeyForAssetID:(id)arg1 ;
-(char)isUserAnnotationsNode;
-(char)isGlobalAnnotationsNode;
-(char)isAnnotationsNode;
-(id)assetID;
-(id)name;
@end
