/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/MagicalMoments.bundle/MagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface DECMMLogger : NSObject {

	NSDictionary* _logChannels;

}

@property (nonatomic,retain) NSDictionary * logChannels;              //@synthesize logChannels=_logChannels - In the implementation block
+(id)sharedInstance;
+(id)logFacilities;
-(id)init;
-(NSDictionary *)logChannels;
-(void)setLogChannels:(NSDictionary *)arg1 ;
-(id)logChannelForFacility:(id)arg1 ;
@end
