/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessoryUpdaterBundles/StandaloneHIDFudPlugins.bundle/StandaloneHIDFudPlugins
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FudPlugin <NSObject,NSCoding>
@optional
+(char)getEarlyBootList:(id)arg1 delegate:(id)arg2;
-(char)shouldUpdateBeSilent:(id)arg1;

@required
-(id)initWithDeviceClass:(id)arg1 delegate:(id)arg2 info:(id*)arg3 options:(id)arg4;
-(void)bootstrapWithOptions:(id)arg1;
-(void)findFirmwareWithOptions:(id)arg1 remote:(char)arg2;
-(void)downloadFirmwareWithOptions:(id)arg1;
-(void)prepareFirmwareWithOptions:(id)arg1;
-(void)applyFirmwareWithOptions:(id)arg1;
-(void)finishWithOptions:(id)arg1;
-(void)setDelegate:(id)arg1;

@end

