/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSURL;

@interface SSVContentLink : NSObject {

	NSString* _categoryName;
	int _contentKind;
	NSNumber* _itemIdentifier;
	NSString* _itemTitle;
	NSString* _providerName;
	NSString* _searchTerm;
	int _targetApplication;

}

@property (nonatomic,copy) NSString * categoryName;                //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSNumber * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemTitle;                   //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,copy) NSString * providerName;                //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                  //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) int contentKind;                      //@synthesize contentKind=_contentKind - In the implementation block
@property (assign,nonatomic) int targetApplication;                //@synthesize targetApplication=_targetApplication - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
-(int)targetApplication;
-(int)contentKind;
-(int)_targetApplicationWithContentKind:(int)arg1 ;
-(id)_URLSchemeWithApplication:(int)arg1 ;
-(id)_stringForContentKind:(int)arg1 ;
-(void)setItemTitle:(NSString *)arg1 ;
-(void)setTargetApplication:(int)arg1 ;
-(NSURL *)URL;
-(NSString *)itemTitle;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
-(NSNumber *)itemIdentifier;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(void)setContentKind:(int)arg1 ;
@end
