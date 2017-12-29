/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@protocol NSObject;
@class NSArray, NSObject;

@interface ABValuePredicate : ABPredicate {

	int _property;
	long _comparison;
	id<NSObject> _value;
	NSArray* _orderedKeys;
	char _dictionaryValue;

}

@property (assign,nonatomic) int property;                 //@synthesize property=_property - In the implementation block
@property (assign,nonatomic) long comparison;              //@synthesize comparison=_comparison - In the implementation block
@property (nonatomic,copy) NSObject * value;               //@synthesize value=_value - In the implementation block
+(id)stringForComparison:(id)arg1 withComparision:(long)arg2 ;
-(id)init;
-(void)dealloc;
-(char)isValid;
-(NSObject *)value;
-(void)setValue:(NSObject *)arg1 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)querySelectPropertiesForPredicateIdentifier:(int)arg1 ;
-(id)queryJoinsInCompound:(char)arg1 predicateIdentifier:(int)arg2 ;
-(char)_shouldConsultIndexForKey:(id)arg1 ;
-(char)_supportsFTSSearch;
-(char)_allowsLaxCheckingForFTS;
-(id)_ftsTermStringForString:(id)arg1 ;
-(id)_ftsTokenizedTermStringForString:(id)arg1 ;
-(id)stringForComparison:(id)arg1 ;
-(id)_ftsAllQueryStrings;
-(long)comparison;
-(void)setComparison:(long)arg1 ;
-(void)setProperty:(int)arg1 ;
-(int)property;
-(id)predicateFormat;
@end

