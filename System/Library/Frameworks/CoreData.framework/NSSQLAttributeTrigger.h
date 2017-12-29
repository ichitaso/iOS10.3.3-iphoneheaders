/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, NSString, NSSQLEntity, NSSQLAttribute, NSSQLRelationship, NSArray, NSMutableString, NSMutableArray;

@interface NSSQLAttributeTrigger : NSObject {

	NSPredicate* _predicate;
	NSString* _predicateString;
	NSSQLEntity* _entity;
	NSSQLAttribute* _attribute;
	NSSQLRelationship* _relationship;
	NSSQLEntity* _destinationEntity;
	NSArray* _destinationAttributes;
	NSMutableString* _mToManyInnerFetchWhereClause;
	NSMutableString* _mToManyDecrementWhenClause;
	NSMutableString* _mToManyIncrementWhenClause;
	NSMutableString* _mOfClause;
	NSMutableString* _mOldMatchingClause;
	NSMutableString* _mNewMatchingClause;
	NSMutableString* _mColumnChangedClause;
	NSMutableArray* _mSqlDropStrings;
	NSMutableArray* _mBulkChangeStrings;

}

@property (readonly) NSSQLEntity * entity;                                //@synthesize entity=_entity - In the implementation block
@property (readonly) NSSQLAttribute * attribute;                          //@synthesize attribute=_attribute - In the implementation block
@property (readonly) NSString * predicateString;                          //@synthesize predicateString=_predicateString - In the implementation block
@property (readonly) NSPredicate * predicate;                             //@synthesize predicate=_predicate - In the implementation block
@property (readonly) NSSQLRelationship * relationship;                    //@synthesize relationship=_relationship - In the implementation block
@property (readonly) NSSQLEntity * destinationEntity;                     //@synthesize destinationEntity=_destinationEntity - In the implementation block
@property (readonly) NSArray * destinationAttributes;                     //@synthesize destinationAttributes=_destinationAttributes - In the implementation block
@property (readonly) NSArray * sqlDropStrings; 
@property (readonly) NSArray * bulkChangeStrings; 
@property (readonly) NSString * toManyInnerFetchWhereClause; 
@property (readonly) NSString * toManyDecrementWhenClause; 
@property (readonly) NSString * toManyIncrementWhenClause; 
@property (readonly) NSString * ofClause; 
@property (readonly) NSString * oldMatchingClause; 
@property (readonly) NSString * newMatchingClause; 
@property (readonly) NSString * columnChangedClause; 
-(NSSQLEntity *)destinationEntity;
-(char)parseTriggerPredicateError:(id*)arg1 ;
-(char)validatePredicate:(id)arg1 error:(id*)arg2 ;
-(char)validateComparisonPredicate:(id)arg1 error:(id*)arg2 ;
-(char)isSupportedOperatorType:(unsigned)arg1 ;
-(id)inverseOperatorSymbolForOperator:(id)arg1 ;
-(id)initWithPredicateString:(id)arg1 onAttribute:(id)arg2 onEntity:(id)arg3 ;
-(NSString *)toManyDecrementWhenClause;
-(NSString *)toManyIncrementWhenClause;
-(NSString *)toManyInnerFetchWhereClause;
-(NSString *)ofClause;
-(NSString *)oldMatchingClause;
-(NSString *)newMatchingClause;
-(NSString *)columnChangedClause;
-(NSArray *)bulkChangeStrings;
-(NSArray *)sqlDropStrings;
-(char)prepareForSQLGeneration:(id*)arg1 ;
-(id)createSQLStrings:(id*)arg1 ;
-(NSArray *)destinationAttributes;
-(NSString *)predicateString;
-(void)dealloc;
-(NSPredicate *)predicate;
-(NSSQLEntity *)entity;
-(NSSQLRelationship *)relationship;
-(NSSQLAttribute *)attribute;
@end

