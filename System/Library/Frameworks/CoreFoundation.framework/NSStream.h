/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface NSStream : NSObject

@property (assign) id<NSStreamDelegate> delegate; 
@property (readonly) unsigned streamStatus; 
@property (copy,readonly) NSError * streamError; 
+(void)getBoundStreamsWithBufferSize:(unsigned)arg1 inputStream:(id*)arg2 outputStream:(id*)arg3 ;
+(void)getStreamsToHostWithName:(id)arg1 port:(int)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4 ;
+(void)getStreamsToHost:(id)arg1 port:(int)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id<NSStreamDelegate>)arg1 ;
-(id<NSStreamDelegate>)delegate;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)open;
-(unsigned)streamStatus;
-(NSError *)streamError;
@end

