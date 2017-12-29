/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessoryUpdaterBundles/FUDGenericKextUpdater.bundle/FUDGenericKextUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleEAAccessoryUpdater/FudPlugin.h>

@protocol FudPluginDelegate;
@class NSString, NSMutableDictionary, NSNumber;

@interface FGKUPlugin : NSObject <FudPlugin> {

	NSString* _deviceClass;
	NSMutableDictionary* _pluginInfo;
	id<FudPluginDelegate> _delegate;
	NSNumber* _registryEntryID;
	NSString* _fwAssetFile;
	NSString* _fwAssetSignatureType;
	NSNumber* _fwAssetVersion;
	NSNumber* _fwAssetSize;
	NSNumber* _img4Tag;

}

@property (nonatomic,readonly) NSString * deviceClass;                           //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pluginInfo;                 //@synthesize pluginInfo=_pluginInfo - In the implementation block
@property (assign,nonatomic,__weak) id<FudPluginDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * registryEntryID;                  //@synthesize registryEntryID=_registryEntryID - In the implementation block
@property (nonatomic,retain) NSString * fwAssetFile;                             //@synthesize fwAssetFile=_fwAssetFile - In the implementation block
@property (nonatomic,retain) NSString * fwAssetSignatureType;                    //@synthesize fwAssetSignatureType=_fwAssetSignatureType - In the implementation block
@property (nonatomic,retain) NSNumber * fwAssetVersion;                          //@synthesize fwAssetVersion=_fwAssetVersion - In the implementation block
@property (nonatomic,retain) NSNumber * fwAssetSize;                             //@synthesize fwAssetSize=_fwAssetSize - In the implementation block
@property (nonatomic,retain) NSNumber * img4Tag;                                 //@synthesize img4Tag=_img4Tag - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)getEarlyBootList:(id)arg1 delegate:(id)arg2 ;
-(NSNumber *)img4Tag;
-(NSNumber *)fwAssetSize;
-(void)setFwAssetSize:(NSNumber *)arg1 ;
-(void)setFwAssetFile:(NSString *)arg1 ;
-(NSString *)fwAssetFile;
-(NSNumber *)fwAssetVersion;
-(id)initWithDeviceClass:(id)arg1 delegate:(id)arg2 info:(id*)arg3 options:(id)arg4 ;
-(void)bootstrapWithOptions:(id)arg1 ;
-(void)findFirmwareWithOptions:(id)arg1 remote:(char)arg2 ;
-(void)downloadFirmwareWithOptions:(id)arg1 ;
-(void)prepareFirmwareWithOptions:(id)arg1 ;
-(void)applyFirmwareWithOptions:(id)arg1 ;
-(void)finishWithOptions:(id)arg1 ;
-(NSNumber *)registryEntryID;
-(unsigned)getServiceForRegistryID:(int*)arg1 ;
-(id)findFWAssetFromTag:(id)arg1 tag:(unsigned)arg2 size:(unsigned*)arg3 ;
-(void)setFwAssetSignatureType:(NSString *)arg1 ;
-(void)setFwAssetVersion:(NSNumber *)arg1 ;
-(NSString *)fwAssetSignatureType;
-(unsigned)getConnectionForRegistryID:(int*)arg1 ;
-(void)setImg4Tag:(NSNumber *)arg1 ;
-(void)getFWAssetInfo:(id)arg1 ;
-(NSMutableDictionary *)pluginInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FudPluginDelegate>)arg1 ;
-(void)dealloc;
-(id<FudPluginDelegate>)delegate;
-(NSString *)deviceClass;
@end

