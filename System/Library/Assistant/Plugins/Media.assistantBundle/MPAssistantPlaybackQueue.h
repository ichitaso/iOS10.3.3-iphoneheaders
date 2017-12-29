/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Media/Media-Structs.h>
@class NSString;

@interface MPAssistantPlaybackQueue : NSObject {

	char _shouldOverrideManuallyCuratedQueue;
	char _shouldImmediatelyStartPlayback;
	NSString* _contextID;

}

@property (nonatomic,readonly) NSString * contextID;                               //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) char shouldOverrideManuallyCuratedQueue;              //@synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue - In the implementation block
@property (assign,nonatomic) char shouldImmediatelyStartPlayback;                  //@synthesize shouldImmediatelyStartPlayback=_shouldImmediatelyStartPlayback - In the implementation block
-(char)shouldImmediatelyStartPlayback;
-(void)setShouldImmediatelyStartPlayback:(char)arg1 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(NSString *)contextID;
-(void)setShouldOverrideManuallyCuratedQueue:(char)arg1 ;
-(char)shouldOverrideManuallyCuratedQueue;
-(id)initWithContextID:(id)arg1 ;
@end

