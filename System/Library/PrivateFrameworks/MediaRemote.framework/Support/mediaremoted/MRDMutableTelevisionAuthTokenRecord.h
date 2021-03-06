/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:10 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDTelevisionAuthTokenRecord.h>

@class NSString, NSDate;

@interface MRDMutableTelevisionAuthTokenRecord : MRDTelevisionAuthTokenRecord

@property (nonatomic,copy) NSString * deviceID; 
@property (nonatomic,copy) NSString * token; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,copy) NSDate * expirationDate; 
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)setDateCreated:(NSDate *)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
@end

