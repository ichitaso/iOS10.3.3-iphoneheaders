/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBABugForm, NSMapTable, NSDictionary;

@interface FBAQuestionDependencyGraph : NSObject {

	FBABugForm* _bugForm;
	NSMapTable* _tatToQuestionMap;
	NSDictionary* _nodes;

}

@property (retain) FBABugForm * bugForm;                       //@synthesize bugForm=_bugForm - In the implementation block
@property (retain) NSMapTable * tatToQuestionMap;              //@synthesize tatToQuestionMap=_tatToQuestionMap - In the implementation block
@property (retain) NSDictionary * nodes;                       //@synthesize nodes=_nodes - In the implementation block
-(FBABugForm *)bugForm;
-(id)initWithBugForm:(id)arg1 ;
-(char)visibilityForQuestion:(id)arg1 inFormResponse:(id)arg2 ;
-(id)questionsDependentOnQuestion:(id)arg1 ;
-(void)setBugForm:(FBABugForm *)arg1 ;
-(id)dependencyNodeForQuestion:(id)arg1 ;
-(NSMapTable *)tatToQuestionMap;
-(void)setTatToQuestionMap:(NSMapTable *)arg1 ;
-(NSDictionary *)nodes;
-(void)setNodes:(NSDictionary *)arg1 ;
@end

