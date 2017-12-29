/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CDInteractionStore;

@interface _CDSocialInteractionAdvisor : NSObject {

	_CDInteractionStore* _store;

}

@property (retain) _CDInteractionStore * store;              //@synthesize store=_store - In the implementation block
-(id)initWithStore:(id)arg1 ;
-(id)rankContacts:(id)arg1 withSeedContacts:(id)arg2 usingSettings:(id)arg3 ;
-(id)adviseInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 ;
-(void)tuneUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 ;
-(id)recentPredicateForDate:(id)arg1 lambda:(float)arg2 lookAheadWeeks:(int)arg3 ;
-(id)inSeedPredicateForSeed:(id)arg1 ;
-(id)keyForModelWithSettings:(id)arg1 ;
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(_CDInteractionStore *)store;
@end

