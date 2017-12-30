/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSArray;

@interface LoadPreorderQueueOperation : ISOperation {

	NSNumber* _accountID;
	NSArray* _items;

}

@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSArray * preorderItems; 
-(id)_newURLOperation;
-(NSArray *)preorderItems;
-(void)dealloc;
-(void)run;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(NSNumber *)accountIdentifier;
@end
