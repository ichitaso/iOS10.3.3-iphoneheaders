/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/QueryPrediction.bundle/QueryPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DECPredictionItem, NSMutableSet;

@interface QPPredictorRankItem : NSObject {

	int _numSources;
	_DECPredictionItem* _predictionItem;
	NSMutableSet* _reasons;

}

@property (readonly) NSMutableSet * reasons;              //@synthesize reasons=_reasons - In the implementation block
+(id)rankItemFromPredictionItem:(id)arg1 ;
-(id)predictionItem;
-(id)initWithPredictionItem:(id)arg1 ;
-(int)compare:(id)arg1 ;
-(id)query;
-(NSMutableSet *)reasons;
-(double)score;
-(void)add:(id)arg1 ;
@end
