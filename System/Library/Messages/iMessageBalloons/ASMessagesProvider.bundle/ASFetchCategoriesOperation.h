/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <ASMessagesProvider/ASFetchCategoriesOperationProtocol.h>

@class NSArray, NSError, NSString;

@interface ASFetchCategoriesOperation : ISOperation <ISStoreURLOperationDelegate, ASFetchCategoriesOperationProtocol> {

	char _excludesNearby;
	char _excludesArtwork;
	NSArray* _promotedCategories;
	NSArray* _categories;
	NSString* _urlString;

}

@property (nonatomic,copy,readonly) NSString * urlString;                      //@synthesize urlString=_urlString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * promotedCategories;              //@synthesize promotedCategories=_promotedCategories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * categories;                      //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) char excludesNearby;                            //@synthesize excludesNearby=_excludesNearby - In the implementation block
@property (nonatomic,readonly) char excludesArtwork;                           //@synthesize excludesArtwork=_excludesArtwork - In the implementation block
-(char)excludesNearby;
-(char)excludesArtwork;
-(NSArray *)promotedCategories;
-(id)_categoryListUrlString;
-(id)initWithUrlString:(id)arg1 ;
-(id)_promotedCategoriesForResponse:(id)arg1 ;
-(id)_categoriesForResponse:(id)arg1 ;
-(char)_excludesNearbyAppsForResponse:(id)arg1 ;
-(id)_categoriesForChildrenArray:(id)arg1 withResponse:(id)arg2 ;
-(id)_itemsForResponse:(id)arg1 withContentIds:(id)arg2 ;
-(id)init;
-(NSArray *)categories;
-(void)run;
-(NSString *)urlString;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
@end

