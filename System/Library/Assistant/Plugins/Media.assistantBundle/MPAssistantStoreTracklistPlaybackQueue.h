/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Media/Media-Structs.h>
#import <Media/MPAssistantPlaybackQueue.h>

@class NSArray;

@interface MPAssistantStoreTracklistPlaybackQueue : MPAssistantPlaybackQueue {

	NSArray* _storeItemIDs;
	int _shuffleType;

}

@property (nonatomic,readonly) NSArray * storeItemIDs;              //@synthesize storeItemIDs=_storeItemIDs - In the implementation block
@property (assign,nonatomic) int shuffleType;                       //@synthesize shuffleType=_shuffleType - In the implementation block
+(id)storeTracklistQueueWithContextID:(id)arg1 storeItemIDs:(id)arg2 ;
-(NSArray *)storeItemIDs;
-(id)initWithContextID:(id)arg1 storeItemIDs:(id)arg2 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(int)shuffleType;
-(void)setShuffleType:(int)arg1 ;
@end
