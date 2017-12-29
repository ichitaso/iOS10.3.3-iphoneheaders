/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TV/VideosAssetTypeCacheProtocol.h>

@class NSString;

@interface VideosAssetTypeCache : NSObject <VideosAssetTypeCacheProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)checkItemAndCellularForPlayback:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)sharedInstance;
-(int)typeForItem:(id)arg1 ;
-(void)typeForItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

