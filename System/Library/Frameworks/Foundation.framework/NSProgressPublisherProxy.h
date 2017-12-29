/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressPublisher.h>

@protocol NSProgressPublisher;
@class NSString, NSFileAccessNode, NSXPCConnection, NSProgressValues;

@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher> {

	id<NSProgressPublisher> _forwarder;
	id _publisherID;
	NSString* _lowerCaseCategoryName;
	NSFileAccessNode* _itemLocation;
	NSXPCConnection* _connection;
	NSProgressValues* _values;

}

@property (copy) NSString * category;                               //@synthesize lowerCaseCategoryName=_lowerCaseCategoryName - In the implementation block
@property (assign) NSFileAccessNode * itemLocation; 
@property (copy,readonly) NSProgressValues * values;                //@synthesize values=_values - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)prioritize;
-(oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(char)arg2 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(id)initWithForwarder:(id)arg1 onConnection:(id)arg2 publisherID:(id)arg3 values:(id)arg4 ;
-(void)setItemLocation:(NSFileAccessNode *)arg1 ;
-(char)isFromConnection:(id)arg1 ;
-(NSFileAccessNode *)itemLocation;
-(void)observeValue:(id)arg1 forKey:(id)arg2 inUserInfo:(char)arg3 ;
-(oneway void)cancel;
-(void)dealloc;
-(NSString *)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSProgressValues *)values;
-(oneway void)resume;
-(oneway void)pause;
-(id)publisherID;
@end
