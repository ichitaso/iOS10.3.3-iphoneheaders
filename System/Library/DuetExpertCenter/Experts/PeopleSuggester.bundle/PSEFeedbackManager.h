/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CDInteractionStore, NSMutableDictionary;

@interface PSEFeedbackManager : NSObject {

	_CDInteractionStore* _interactionStore;
	NSMutableDictionary* _resultsBySource;

}

@property (nonatomic,retain) NSMutableDictionary * resultsBySource;              //@synthesize resultsBySource=_resultsBySource - In the implementation block
+(id)sharedInstance;
-(void)receiveFeedback:(id)arg1 ;
-(NSMutableDictionary *)resultsBySource;
-(void)setResultsBySource:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

