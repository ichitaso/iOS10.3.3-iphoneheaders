/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSDownload.h>

@class ASDJob;

@interface SSSoftwareDownload : SSDownload {

	ASDJob* _job;

}

@property (nonatomic,readonly) ASDJob * job;              //@synthesize job=_job - In the implementation block
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(char)isEligibleForRestore:(id*)arg1 ;
-(id)backgroundNetworkingJobGroupName;
-(id)networkConstraints;
-(char)removeAsset:(id)arg1 ;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(char)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(char)arg1 ;
-(id)initWithJob:(id)arg1 ;
-(double)percentComplete;
-(void)resume;
-(id)valueForProperty:(id)arg1 ;
-(void)pause;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)failureError;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)assetsForType:(id)arg1 ;
-(id)initWithPersistentIdentifier:(long long)arg1 ;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(long long)downloadSizeLimit;
-(id)downloadPolicy;
-(void)setDownloadPolicy:(id)arg1 ;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(char)addAsset:(id)arg1 forType:(id)arg2 ;
-(double)estimatedSecondsRemaining;
-(id)downloadPhaseIdentifier;
-(char)isCancelable;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(void)restart;
-(ASDJob *)job;
@end
