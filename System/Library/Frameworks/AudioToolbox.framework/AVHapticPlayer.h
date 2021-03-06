/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HapticClient, NSArray;

@interface AVHapticPlayer : NSObject {

	HapticClient* _client;
	char _resourcesAllocated;
	NSArray* _channelArray;

}

@property (readonly) HapticClient * client;                     //@synthesize client=_client - In the implementation block
@property (readonly) char resourcesAllocated;                   //@synthesize resourcesAllocated=_resourcesAllocated - In the implementation block
@property (nonatomic,readonly) NSArray * channels; 
-(char)loadHapticPreset:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)loadHapticSequence:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)releaseChannels;
-(void)invalidateChannels;
-(char)prepareHapticSequence:(unsigned)arg1 error:(id*)arg2 ;
-(char)enableSequenceLooping:(unsigned)arg1 enable:(char)arg2 error:(id*)arg3 ;
-(char)stopHapticSequence:(unsigned)arg1 atTime:(double)arg2 ;
-(char)detachHapticSequence:(unsigned)arg1 atTime:(double)arg2 ;
-(char)playHapticSequence:(unsigned)arg1 atTime:(double)arg2 offset:(double)arg3 ;
-(char)resourcesAllocated;
-(void)dealloc;
-(id)initAndReturnError:(id*)arg1 ;
-(char)setNumberOfChannels:(unsigned)arg1 error:(id*)arg2 ;
-(void)allocateRenderResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopRunning;
-(void)startRunningWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deallocateRenderResources;
-(void)prewarmWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopPrewarm;
-(NSArray *)channels;
-(char)finishWithCompletionHandler:(/*^block*/id)arg1 ;
-(HapticClient *)client;
@end

