/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVLoadDownloadQueueOperation.h>

@class NSString, NSNumber;

@interface SSVRefreshStoreQueueDownloadOperation : SSVLoadDownloadQueueOperation {

	NSString* _downloadTrasactionID;
	NSNumber* _accountID;
	NSString* _downloadTransactionID;

}

@property (readonly) NSNumber * accountID; 
@property (readonly) NSString * downloadTransactionID;              //@synthesize downloadTransactionID=_downloadTransactionID - In the implementation block
-(char)_refreshDownloadWithTransactionID:(id)arg1 accountID:(id)arg2 bagKey:(id)arg3 error:(id*)arg4 ;
-(id)initWithDownloadTransactionIdentifier:(id)arg1 accountID:(id)arg2 ;
-(id)isDownloadTransactionID;
-(NSString *)downloadTransactionID;
-(void)main;
-(NSNumber *)accountID;
@end

