/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportSendFeedbackTask.h>

@class NSArray, NSString;

@interface CPLCloudKitSendFeedbackTask : CPLCloudKitTransportTask <CPLEngineTransportSendFeedbackTask> {

	/*^block*/id _completionHandler;
	NSArray* _messages;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char foreground; 
-(id)initWithMessages:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)run;
@end

