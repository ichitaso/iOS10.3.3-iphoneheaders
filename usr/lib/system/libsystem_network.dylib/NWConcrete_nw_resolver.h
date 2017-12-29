/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /usr/lib/system/libsystem_network.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libsystem_network.dylib/libsystem_network.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_resolver.h>

@protocol OS_nw_parameters, OS_nw_endpoint, OS_dispatch_queue, OS_dispatch_source, OS_nw_array;
@class NSObject, NSString;

@interface NWConcrete_nw_resolver : NSObject <OS_nw_resolver> {

	int status;
	os_unfair_lock_s lock;
	char resolver_activity[0];
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_endpoint> endpoint;
	unsigned dns_service_id;
	DNSServiceRef_tRef dns_service;
	DNSServiceRef_tRef dns_service_secondary_pointer;
	unsigned forced_protocol;
	int dns_error;
	unsigned char flags;
	/*^block*/id update_block;
	/*^block*/id cancel_handler;
	NSObject*<OS_dispatch_queue> client_queue;
	NSObject*<OS_dispatch_source> query_timer;
	NSObject*<OS_dispatch_source> crazy_eyeballs_timer;
	NSObject*<OS_nw_array> endpoint_array;
	void* internally_retained_object;
	unsigned is_custom_resolver : 1;
	unsigned local_only : 1;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 dns_service_id:(unsigned)arg3 localOnly:(BOOL)arg4 ;
-(void)dealloc;
@end

