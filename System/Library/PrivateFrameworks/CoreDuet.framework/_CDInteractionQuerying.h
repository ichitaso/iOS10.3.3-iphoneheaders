/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDInteractionQuerying
@required
-(unsigned)countInteractionsUsingPredicate:(id)arg1 error:(id*)arg2;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3 error:(id*)arg4;
-(unsigned)countContactsUsingPredicate:(id)arg1 error:(id*)arg2;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3;
-(id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3 error:(id*)arg4;
-(void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3 completionHandler:(/*^block*/id)arg4;
-(void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3 completionHandler:(/*^block*/id)arg4;
-(void)countContactsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

