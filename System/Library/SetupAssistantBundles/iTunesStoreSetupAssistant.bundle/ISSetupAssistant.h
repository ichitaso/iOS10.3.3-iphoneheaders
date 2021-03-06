/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SetupAssistantBundles/iTunesStoreSetupAssistant.bundle/iTunesStoreSetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AASetupAssistantDelegateService.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ISSetupAssistant : NSObject <AASetupAssistantDelegateService> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(void)_setupHomeSharingWithParameters:(id)arg1 ;
-(void)_setupITunesMatchWithParameters:(id)arg1 ;
-(void)_setCookiesWithString:(id)arg1 userIdentifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setupOperationFailed;
@end

