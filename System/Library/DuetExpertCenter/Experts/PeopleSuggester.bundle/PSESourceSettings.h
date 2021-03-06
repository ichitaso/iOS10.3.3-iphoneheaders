/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSESourceSettings : NSObject {

	char _isEnabled;
	char _requirePriorOutgoingInteraction;
	char _push;
	Class _sourceClass;
	unsigned _rank;
	unsigned _maxNumberOfPeople;

}

@property (readonly) Class sourceClass;                                 //@synthesize sourceClass=_sourceClass - In the implementation block
@property (readonly) char isEnabled;                                    //@synthesize isEnabled=_isEnabled - In the implementation block
@property (readonly) unsigned rank;                                     //@synthesize rank=_rank - In the implementation block
@property (readonly) char requirePriorOutgoingInteraction;              //@synthesize requirePriorOutgoingInteraction=_requirePriorOutgoingInteraction - In the implementation block
@property (readonly) unsigned maxNumberOfPeople;                        //@synthesize maxNumberOfPeople=_maxNumberOfPeople - In the implementation block
@property (readonly) char push;                                         //@synthesize push=_push - In the implementation block
-(char)requirePriorOutgoingInteraction;
-(unsigned)maxNumberOfPeople;
-(Class)sourceClass;
-(id)init;
-(int)compare:(id)arg1 ;
-(char)isEnabled;
-(id)initWithSettings:(id)arg1 ;
-(unsigned)rank;
-(char)push;
@end

