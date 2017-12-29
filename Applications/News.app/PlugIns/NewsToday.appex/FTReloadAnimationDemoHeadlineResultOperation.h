/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/FTHeadlineResultOperation.h>

@class NSNumber, FTHeadlineResults;

@interface FTReloadAnimationDemoHeadlineResultOperation : FTHeadlineResultOperation {

	unsigned _fromResultType;
	NSNumber* _resultCursor;
	FTHeadlineResults* _resultHeadlineResults;

}

@property (assign,nonatomic) unsigned fromResultType;                              //@synthesize fromResultType=_fromResultType - In the implementation block
@property (nonatomic,copy) NSNumber * resultCursor;                                //@synthesize resultCursor=_resultCursor - In the implementation block
@property (nonatomic,copy) FTHeadlineResults * resultHeadlineResults;              //@synthesize resultHeadlineResults=_resultHeadlineResults - In the implementation block
-(void)setResultHeadlineResults:(FTHeadlineResults *)arg1 ;
-(FTHeadlineResults *)resultHeadlineResults;
-(void)setFromResultType:(unsigned)arg1 ;
-(unsigned)fromResultType;
-(unsigned)_resultTypeAfterResultType:(unsigned)arg1 ;
-(id)init;
-(char)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultCursor:(NSNumber *)arg1 ;
-(void)prepareOperation;
-(NSNumber *)resultCursor;
@end

