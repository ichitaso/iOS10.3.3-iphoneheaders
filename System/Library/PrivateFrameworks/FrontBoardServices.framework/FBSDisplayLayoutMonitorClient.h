/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@protocol FBSDisplayLayoutMonitorClientDelegate;
@interface FBSDisplayLayoutMonitorClient : FBSSystemServiceFacilityClient {

	id<FBSDisplayLayoutMonitorClientDelegate> _delegate;

}
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2 ;
-(void)configureConnectMessage:(id)arg1 ;
-(void)_handleDisplayLayoutUpdate:(id)arg1 ;
-(void)invalidate;
@end

