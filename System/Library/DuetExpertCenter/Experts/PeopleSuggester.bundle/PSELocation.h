/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTRoutineManager, NSUUID;

@interface PSELocation : NSObject {

	RTRoutineManager* _manager;

}

@property (nonatomic,readonly) NSUUID * currentLocationIdentifier; 
+(id)sharedInstance;
-(NSUUID *)currentLocationIdentifier;
-(id)init;
@end

