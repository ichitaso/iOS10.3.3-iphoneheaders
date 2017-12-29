/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLRequest.h>

@class NSString, NSDictionary, NSData, NSInputStream, NSURL;

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSString * HTTPMethod; 
@property (copy) NSDictionary * allHTTPHeaderFields; 
@property (copy) NSData * HTTPBody; 
@property (retain) NSInputStream * HTTPBodyStream; 
@property (assign) char HTTPShouldHandleCookies; 
@property (assign) char HTTPShouldUsePipelining; 
@property (copy) NSURL * URL; 
@property (assign) unsigned cachePolicy; 
@property (assign) double timeoutInterval; 
@property (copy) NSURL * mainDocumentURL; 
@property (assign) unsigned networkServiceType; 
@property (assign) char allowsCellularAccess; 
-(void)setMainDocumentURL:(NSURL *)arg1 ;
-(void)setBoundInterfaceIdentifier:(id)arg1 ;
-(void)setHTTPContentType:(id)arg1 ;
-(void)setHTTPExtraCookies:(id)arg1 ;
-(void)setHTTPReferrer:(id)arg1 ;
-(void)setRequestPriority:(unsigned)arg1 ;
-(unsigned)requestPriority;
-(void)setExpectedWorkload:(unsigned long long)arg1 ;
-(void)_setTimeWindowDelay:(double)arg1 ;
-(void)_setTimeWindowDuration:(double)arg1 ;
-(void)_setStartTimeoutDate:(id)arg1 ;
-(void)_setRequiresShortConnectionTimeout:(char)arg1 ;
-(void)_setPayloadTransmissionTimeout:(double)arg1 ;
-(void)setContentDispositionEncodingFallbackArray:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setAllowsCellularAccess:(char)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setHTTPShouldHandleCookies:(char)arg1 ;
-(void)setHTTPShouldUsePipelining:(char)arg1 ;
-(void)setHTTPBody:(NSData *)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setAllHTTPHeaderFields:(NSDictionary *)arg1 ;
-(void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setCachePolicy:(unsigned)arg1 ;
-(void)setHTTPUserAgent:(id)arg1 ;
-(void)setHTTPBodyStream:(NSInputStream *)arg1 ;
-(void)setNetworkServiceType:(unsigned)arg1 ;
@end

