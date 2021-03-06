/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CheckerBoard/CheckerBoard-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CBSServerProtocol.h>

@protocol CBRemoteAlertServerDelegate, CBSystemServicesServerDelegate;
@class NSXPCListener, NSString;

@interface CBServer : NSObject <NSXPCListenerDelegate, CBSServerProtocol> {

	id<CBRemoteAlertServerDelegate> _remoteAlertsDelegate;
	id<CBSystemServicesServerDelegate> _systemServicesDelegate;
	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSXPCListener * listener;                                                      //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic,__weak) id<CBRemoteAlertServerDelegate> remoteAlertsDelegate;                   //@synthesize remoteAlertsDelegate=_remoteAlertsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CBSystemServicesServerDelegate> systemServicesDelegate;              //@synthesize systemServicesDelegate=_systemServicesDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setRemoteAlertsDelegate:(id<CBRemoteAlertServerDelegate>)arg1 ;
-(id<CBRemoteAlertServerDelegate>)remoteAlertsDelegate;
-(id<CBSystemServicesServerDelegate>)systemServicesDelegate;
-(unsigned)_getEntitlementLevelForConnection:(id)arg1 ;
-(void)_setClassesForRemoteAlertsOnInterface:(id)arg1 ;
-(void)_fillAuditToken:(SCD_Struct_CB6*)arg1 forConnection:(id)arg2 ;
-(char)_auditToken:(SCD_Struct_CB6*)arg1 hasEntitlement:(id)arg2 ;
-(void)setSystemServicesDelegate:(id<CBSystemServicesServerDelegate>)arg1 ;
-(id)init;
-(void)start;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)createAlert:(id)arg1 timeout:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)receiveResponseFromAlertWithIdentifier:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)exitCheckerBoard;
@end

