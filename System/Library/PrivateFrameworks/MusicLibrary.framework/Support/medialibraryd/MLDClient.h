/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSXPCConnection;

@interface MLDClient : NSObject {

	NSString* _name;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int processID; 
+(id)daemonClient;
-(char)isDaemonClient;
-(id)init;
-(id)description;
-(NSString *)name;
-(NSXPCConnection *)connection;
-(int)processID;
-(id)initWithConnection:(id)arg1 ;
@end
