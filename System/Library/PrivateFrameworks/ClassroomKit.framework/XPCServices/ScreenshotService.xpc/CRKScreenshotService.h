/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:26 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/XPCServices/ScreenshotService.xpc/ScreenshotService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenshotService/ScreenshotService-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <ScreenshotService/CRKScreenshotServiceInterface.h>

@class FBSUIApplicationSystemService, NSString;

@interface CRKScreenshotService : NSObject <NSXPCListenerDelegate, CRKScreenshotServiceInterface> {

	int mDeviceScreenStateNotificationToken;
	int mDeviceLockedNotificationToken;
	FBSUIApplicationSystemService* mAppSystemService;
	char _isScreenOn;
	char _isDeviceLocked;

}

@property (assign) char isScreenOn;                                 //@synthesize isScreenOn=_isScreenOn - In the implementation block
@property (assign) char isDeviceLocked;                             //@synthesize isDeviceLocked=_isDeviceLocked - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)run;
-(void)updateScreenState;
-(void)updateDeviceLocked;
-(void)setIsScreenOn:(char)arg1 ;
-(void)setIsDeviceLocked:(char)arg1 ;
-(void)fetchScreenshotDataWithMaximumSize:(CGSize)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchIconDataForAppWithBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(float)scaleForSourceImageSize:(CGSize)arg1 destinationSize:(CGSize)arg2 ;
-(id)iconDataForApplicationProxy:(id)arg1 variant:(int)arg2 ;
-(char)isDeviceLocked;
-(id)init;
-(void)dealloc;
-(int)imageOrientation;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(char)isScreenOn;
@end

