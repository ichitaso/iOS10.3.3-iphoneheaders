/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class UserFSItem, NSObject;

@interface UserFSStream : NSObject {

	UserFSItem* _item;
	NSObject*<OS_xpc_object> _connection;
	unsigned long long _length;

}

@property (nonatomic,retain) UserFSItem * item;                                //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) unsigned long long length;                        //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) char writable; 
-(id)initWithUserFSItem:(id)arg1 length:(unsigned long long)arg2 connection:(id)arg3 ;
-(long)_readBytesUpToLength:(unsigned long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(UserFSItem *)item;
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setItem:(UserFSItem *)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_cancelConnection;
-(char)writable;
-(long)readBytesOfLength:(unsigned long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4 ;
-(char)closeAndReturnError:(id*)arg1 ;
@end

