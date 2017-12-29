/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@class NSString;

@interface ABPhonePredicate : ABPredicate {

	NSString* _homeCountryCode;
	NSString* _phoneNumber;
	NSString* _country;

}

@property (nonatomic,copy) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * country;                  //@synthesize country=_country - In the implementation block
-(void)dealloc;
-(char)isValid;
-(NSString *)phoneNumber;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)queryJoinsInCompound:(char)arg1 predicateIdentifier:(int)arg2 ;
-(char)hasCallback;
-(void)evaluateCallbackWithSqliteContext:(sqlite3_contextRef)arg1 predicateContext:(id)arg2 values:(Mem*)arg3 count:(int)arg4 ;
-(id)homeCountryCode;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)predicateFormat;
@end

