/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <Foundation/NSPredicate.h>

@interface ABPredicate : NSPredicate
+(id)personPredicateWithNameLike:(id)arg1 group:(void*)arg2 source:(void*)arg3 account:(id)arg4 includeSourceInResults:(char)arg5 addressBook:(void*)arg6 ;
+(id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 includeSourceInResults:(char)arg4 addressBook:(void*)arg5 ;
+(id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 includeSourceInResults:(char)arg4 includePhotosInResults:(char)arg5 addressBook:(void*)arg6 ;
+(id)newQueryWithProperties:(id)arg1 joins:(id)arg2 whereString:(id)arg3 sortOrder:(unsigned)arg4 rankString:(id)arg5 groupByProperties:(id)arg6 addressBook:(void*)arg7 propertyIndices:(const _CFDictionary*)arg8 ;
+(id)personPredicateWithNameLike:(id)arg1 group:(void*)arg2 source:(void*)arg3 account:(id)arg4 addressBook:(void*)arg5 ;
+(id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithName:(id)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithAnyValueForProperty:(int)arg1 ;
+(id)newQueryFromABPredicate:(id)arg1 withSortOrder:(unsigned)arg2 ranked:(char)arg3 addressBook:(void*)arg4 propertyIndices:(const _CFDictionary*)arg5 ;
+(id)newQueryFromCompoundPredicate:(id)arg1 withSortOrder:(unsigned)arg2 ranked:(char)arg3 addressBook:(void*)arg4 propertyIndices:(const _CFDictionary*)arg5 ;
+(id)personPredicateWithValue:(id)arg1 comparison:(long)arg2 forProperty:(int)arg3 ;
+(void)searchPeopleWithPredicate:(id)arg1 sortOrder:(unsigned)arg2 ranked:(char)arg3 inAddressBook:(void*)arg4 withDelegate:(id)arg5 ;
+(id)personPredicateWithNameOnly:(id)arg1 account:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithGroup:(void*)arg1 source:(void*)arg2 account:(id)arg3 ;
+(void)searchPeopleWithPredicate:(id)arg1 sortOrder:(unsigned)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4 ;
+(id)personPredicateWithNameLike:(id)arg1 addressBook:(void*)arg2 ;
-(id)init;
-(void)dealloc;
-(char)isValid;
-(void)bindString:(id)arg1 toStatement:(CPSqliteStatement*)arg2 withBindingOffset:(int*)arg3 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)querySelectPropertiesForPredicateIdentifier:(int)arg1 ;
-(id)queryJoinsInCompound:(char)arg1 predicateIdentifier:(int)arg2 ;
-(id)queryRankStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindJoinClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)_querySelectStringForPredicateIdentifier:(int)arg1 ;
-(id)queryGroupByProperties;
-(char)hasCallback;
-(id)callbackContext;
-(void)evaluateCallbackWithSqliteContext:(sqlite3_contextRef)arg1 predicateContext:(id)arg2 values:(Mem*)arg3 count:(int)arg4 ;
-(void)bindDouble:(double)arg1 toStatement:(CPSqliteStatement*)arg2 withBindingOffset:(int*)arg3 ;
-(char)ab_hasCallback;
-(id)ab_newQueryWithSortOrder:(unsigned)arg1 ranked:(char)arg2 addressBook:(void*)arg3 propertyIndices:(const _CFDictionary*)arg4 ;
-(void)ab_addCallbackContextToArray:(id)arg1 ;
-(id)predicateFormat;
@end

