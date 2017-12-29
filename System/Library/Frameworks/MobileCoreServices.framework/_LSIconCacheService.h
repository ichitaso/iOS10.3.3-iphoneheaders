/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSIconCache.h>
#import <libobjc.A.dylib/LSIconCacheServiceProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _LSIconCacheService : _LSIconCache <LSIconCacheServiceProtocol, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)beginListening;
+(id)cacheSalt;
+(id)sharedInstance;
-(char)invalidateItemsForBundleIdentifier:(id)arg1 ;
-(void)_setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 ;
-(id)getAlternateIconNameForIdentifier:(id)arg1 ;
-(void)copyIconBitmapCacheConfigurationWithReply:(/*^block*/id)arg1 ;
-(void)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 bundleIdentifier:(id)arg2 roleIdentifier:(id)arg3 iconFiles:(id)arg4 variant:(int)arg5 options:(int)arg6 reply:(/*^block*/id)arg7 ;
-(void)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 boundContainerURL:(id)arg2 dataContainerURL:(id)arg3 bundleIdentifier:(id)arg4 iconsDictionary:(id)arg5 preferredIconName:(id)arg6 cacheFileName:(id)arg7 variant:(int)arg8 options:(int)arg9 reply:(/*^block*/id)arg10 ;
-(void)invalidateItemsForBundeID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getAlternateIconNameForIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 reply:(/*^block*/id)arg3 ;
-(char)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 bundleIdentifier:(id)arg2 roleIdentifier:(id)arg3 iconFiles:(id)arg4 variant:(int)arg5 options:(int)arg6 bitmapData:(id*)arg7 ;
-(char)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 boundContainerURL:(id)arg2 dataContainerURL:(id)arg3 bundleIdentifier:(id)arg4 iconsDictionary:(id)arg5 alternateName:(id)arg6 cacheFileName:(id)arg7 variant:(int)arg8 options:(int)arg9 bitmapData:(id*)arg10 ;
-(char)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)setIconData:(id)arg1 forKey:(id)arg2 ;
-(char)isValidAlternateIcon:(id)arg1 forIconsDict:(id)arg2 ;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end
