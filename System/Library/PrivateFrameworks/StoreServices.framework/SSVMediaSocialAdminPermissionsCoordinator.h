/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SSVMediaSocialAdminPermissionsCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _refreshPeriod;

}

@property (nonatomic,readonly) char isCurrentUserAdmin; 
@property (assign) double refreshPeriod;                             //@synthesize refreshPeriod=_refreshPeriod - In the implementation block
+(id)sharedCoordinator;
-(id)_adminStatusForAccountID:(id)arg1 ;
-(char)_statusIsFresh:(id)arg1 ;
-(void)_setAdminStatus:(id)arg1 forAccountID:(id)arg2 ;
-(void)setRefreshPeriod:(double)arg1 ;
-(double)refreshPeriod;
-(id)init;
-(void)reset;
-(void)getAdminStatusWithOptions:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)getAdminStatusAndWaitWithOptions:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(char)isCurrentUserAdmin;
@end

