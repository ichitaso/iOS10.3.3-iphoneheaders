/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSPersonalizeOffersRequest : SSRequest <SSXPCCoding> {

	NSArray* _items;

}

@property (assign,nonatomic) id<SSPersonalizeOffersDelegate> delegate; 
@property (nonatomic,readonly) NSArray * items; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithPersonalizedResponseBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSArray *)items;
-(char)start;
-(id)initWithItems:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

