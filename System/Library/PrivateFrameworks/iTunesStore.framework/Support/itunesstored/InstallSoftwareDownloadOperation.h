/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/FinishDownloadStepOperation.h>
#import <libobjc.A.dylib/ISOperationDelegate.h>

@class NSString;

@interface InstallSoftwareDownloadOperation : FinishDownloadStepOperation <ISOperationDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_downloadSecondaryAssets:(id*)arg1 ;
-(void)_monitorForTerminationOfBundleID:(id)arg1 ;
-(id)_newSoftwarePropertiesWithDownload:(id)arg1 ;
-(void)run;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
@end
