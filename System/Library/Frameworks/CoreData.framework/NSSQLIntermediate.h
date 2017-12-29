/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {

	NSSQLIntermediate* _scope;

}

@property (nonatomic,readonly) NSSQLEntity * disambiguatingEntity; 
@property (nonatomic,readonly) NSArray * disambiguationKeypath; 
@property (nonatomic,readonly) char disambiguationKeypathHasToMany; 
+(char)isSimpleKeypath:(id)arg1 ;
+(char)expressionIsBasicKeypath:(id)arg1 ;
-(id)initWithScope:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateSQLForExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(char)isUpdateColumnsScoped;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(char)isWhereScoped;
-(NSSQLEntity *)disambiguatingEntity;
-(NSArray *)disambiguationKeypath;
-(char)disambiguationKeypathHasToMany;
-(char)isOrScoped;
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(char)arg3 ;
-(char)isTargetColumnsScoped;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(id)_lastScopedItem;
-(char)isSimpleKeypath:(id)arg1 ;
-(char)isVariableBasedKeypathScopedBySubquery:(id)arg1 ;
-(char)isFunctionScoped;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)fetchIntermediate;
-(id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2 ;
-(char)isUpdateScoped;
-(id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3 ;
-(char)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1 ;
-(char)isHavingScoped;
-(id)governingAlias;
-(char)expressionIsBasicKeypath:(id)arg1 ;
-(char)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)_entitySpecificationKeypath;
-(void)_setEntitySpecificationKeypath:(id)arg1 ;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1 ;
-(void)promoteJoinsInKeypathsForExpression:(id)arg1 ;
-(void)_promoteJoinsForKeypathExpression:(id)arg1 ;
-(void)_promoteJoinsForFunctionExpression:(id)arg1 ;
-(void)_promoteJoinsForAggregateExpression:(id)arg1 ;
-(void)_promoteJoinsForTernaryExpression:(id)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForConstantCollection:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(char)_canDoASubselectForExpression:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(char)isSimpleNoIndexFunction:(id)arg1 ;
-(id)scope;
@end

