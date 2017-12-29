/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SSVPlayActivityEventItemIDs : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _equivalencySourceAdamID;
	unsigned long long _cloudID;
	NSString* _lyricsID;
	long long _purchasedAdamID;
	long long _radioAdamID;
	long long _subscriptionAdamID;
	long long _tvShowPurchasedAdamID;
	long long _tvShowSubscriptionAdamID;

}

@property (nonatomic,readonly) unsigned long long cloudID;                      //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,copy,readonly) NSString * lyricsID;                        //@synthesize lyricsID=_lyricsID - In the implementation block
@property (nonatomic,readonly) long long purchasedAdamID;                       //@synthesize purchasedAdamID=_purchasedAdamID - In the implementation block
@property (nonatomic,readonly) long long radioAdamID;                           //@synthesize radioAdamID=_radioAdamID - In the implementation block
@property (nonatomic,readonly) long long equivalencySourceAdamID;               //@synthesize equivalencySourceAdamID=_equivalencySourceAdamID - In the implementation block
@property (nonatomic,readonly) long long subscriptionAdamID;                    //@synthesize subscriptionAdamID=_subscriptionAdamID - In the implementation block
@property (nonatomic,readonly) long long tvShowPurchasedAdamID;                 //@synthesize tvShowPurchasedAdamID=_tvShowPurchasedAdamID - In the implementation block
@property (nonatomic,readonly) long long tvShowSubscriptionAdamID;              //@synthesize tvShowSubscriptionAdamID=_tvShowSubscriptionAdamID - In the implementation block
+(char)supportsSecureCoding;
-(long long)radioAdamID;
-(long long)subscriptionAdamID;
-(long long)purchasedAdamID;
-(unsigned long long)cloudID;
-(long long)tvShowPurchasedAdamID;
-(long long)tvShowSubscriptionAdamID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)equivalencySourceAdamID;
-(id)_copyWithClass:(Class)arg1 ;
-(NSString *)lyricsID;
@end

