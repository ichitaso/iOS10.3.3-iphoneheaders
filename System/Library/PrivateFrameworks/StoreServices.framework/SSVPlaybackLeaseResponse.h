/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlaybackResponse.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse <NSCopying> {

	NSData* _certificateData;
	unsigned long long _kdMovieIdentifier;

}

@property (getter=isOfflineSlotAvailable,nonatomic,readonly) char offlineSlotAvailable; 
@property (nonatomic,copy,readonly) NSData * leaseInfoData; 
@property (nonatomic,copy,readonly) NSData * subscriptionKeyBagData; 
@property (nonatomic,copy) NSData * certificateData;                                                 //@synthesize certificateData=_certificateData - In the implementation block
@property (assign,nonatomic) unsigned long long KDMovieIdentifier;                                   //@synthesize kdMovieIdentifier=_kdMovieIdentifier - In the implementation block
@property (nonatomic,readonly) double leaseDuration; 
-(NSData *)certificateData;
-(unsigned long long)KDMovieIdentifier;
-(char)isOfflineSlotAvailable;
-(void)setCertificateData:(NSData *)arg1 ;
-(NSData *)leaseInfoData;
-(NSData *)subscriptionKeyBagData;
-(void)setKDMovieIdentifier:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)leaseDuration;
-(id)itemForItemIdentifier:(id)arg1 ;
@end

