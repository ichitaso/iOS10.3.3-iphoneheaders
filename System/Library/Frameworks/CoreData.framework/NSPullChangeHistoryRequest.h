/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSArray;

@interface NSPullChangeHistoryRequest : NSPersistentStoreRequest {

	NSArray* _generationTokens;

}
-(id)generationTokens;
-(id)initWithGenerationTokens:(id)arg1 ;
-(void)setGenerationTokens:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)requestType;
@end

