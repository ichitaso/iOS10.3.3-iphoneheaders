/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/ASCategoriesBaseDatasource.h>

@protocol ASCategoryProtocol, ASCategoriesDatasourceDelegate;
@interface ASSubcategoriesDatasource : ASCategoriesBaseDatasource {

	id<ASCategoryProtocol> _parentCategory;
	id<ASCategoriesDatasourceDelegate> _delegate;

}
-(id)categoryAtIndexPath:(id)arg1 ;
-(id)categoryTitleAtIndexPath:(id)arg1 ;
-(unsigned)headerTypeForSection:(unsigned)arg1 ;
-(void)fetchCategories;
-(id)initWithParentCategory:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(unsigned)numberOfItemsInSection:(unsigned)arg1 ;
-(unsigned)numberOfSections;
-(id)title;
-(id)categories;
-(id)titleForSection:(unsigned)arg1 ;
@end
