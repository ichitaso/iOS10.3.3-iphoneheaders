/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest {

	NSFetchRequest* _fetchRequest;
	id _requestCompletionBlock;
	int _estimatedResultCount;

}

@property (readonly) NSFetchRequest * fetchRequest;                 //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (readonly) id completionBlock;                            //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (assign,nonatomic) int estimatedResultCount;              //@synthesize estimatedResultCount=_estimatedResultCount - In the implementation block
-(id)initWithFetchRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(int)estimatedResultCount;
-(void)setEstimatedResultCount:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(id)completionBlock;
-(NSFetchRequest *)fetchRequest;
-(unsigned)requestType;
@end

