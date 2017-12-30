/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVLoadDownloadQueueOperation.h>

@class NSString;

@interface RefreshStoreQueueUpdateOperation : SSVLoadDownloadQueueOperation {

	NSString* _bundleID;

}

@property (readonly) NSString * bundleID; 
-(id)initWithDownloadBundleIdentifier:(id)arg1 ;
-(char)_refreshDownloadUsingUpdate:(id)arg1 application:(id)arg2 ;
-(id)_purchaseAutoUpdatePurchaseWithUpdate:(id)arg1 application:(id)arg2 ;
-(void)main;
-(NSString *)bundleID;
@end
