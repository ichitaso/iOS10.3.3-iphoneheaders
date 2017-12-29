/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/FTHeadlineResultOperation.h>

@class FTHeadlineResults;

@interface FTParsecHeadlineResultOperation : FTHeadlineResultOperation {

	FTHeadlineResults* _resultHeadlineResults;

}

@property (nonatomic,copy) FTHeadlineResults * resultHeadlineResults;              //@synthesize resultHeadlineResults=_resultHeadlineResults - In the implementation block
-(void)setResultHeadlineResults:(FTHeadlineResults *)arg1 ;
-(void)_updateUseParsecEnabledWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_fetchHeadlineResultsWithCompletionHandler:(/*^block*/id)arg1 ;
-(FTHeadlineResults *)resultHeadlineResults;
-(char)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
@end

