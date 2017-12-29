/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol SearchAddressBookOperationDelegate;
@class NSString, AutocompleteContext, NSArray;

@interface SearchAddressBookOperation : NSOperation {

	NSString* _searchQuery;
	AutocompleteContext* _context;
	NSArray* _searchTerms;
	id<SearchAddressBookOperationDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<SearchAddressBookOperationDelegate> delegate; 
-(id)initWithSearchQuery:(id)arg1 context:(id)arg2 ;
-(void)setDelegate:(id<SearchAddressBookOperationDelegate>)arg1 ;
-(id<SearchAddressBookOperationDelegate>)delegate;
-(void)main;
@end

