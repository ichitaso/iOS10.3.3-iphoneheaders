/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, NSNumber, ASDManagedApplicationRequestOptions;

@interface ManagedApplicationOperation : ISOperation {

	NSString* _bundleIdentifer;
	NSString* _bundleVersion;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _itemIdentifier;
	ASDManagedApplicationRequestOptions* _options;
	char _skipDownload;
	/*^block*/id _detailedResultBlock;
	/*^block*/id _resultBlock;

}

@property (copy) id resultBlock;                                                      //@synthesize resultBlock=_resultBlock - In the implementation block
@property (copy) id detailedResultBlock;                                              //@synthesize detailedResultBlock=_detailedResultBlock - In the implementation block
@property (copy,readonly) ASDManagedApplicationRequestOptions * options;              //@synthesize options=_options - In the implementation block
-(void)setDetailedResultBlock:(id)arg1 ;
-(id)_sinfPathForBundleID:(id)arg1 ;
-(id)_postBodyData;
-(char)_updateSinfsAndRecepitsForDownloadResponse:(id)arg1 sinfData:(id)arg2 ;
-(id)_downloadMetadata:(id)arg1 ;
-(void)_createJobsFromDownloadResponse:(id)arg1 URLResponse:(id)arg2 ;
-(id)detailedResultBlock;
-(id)getSinf;
-(id)_md5ForAppProxy:(id)arg1 ;
-(ASDManagedApplicationRequestOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)run;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
@end
