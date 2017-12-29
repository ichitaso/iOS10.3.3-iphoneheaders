/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/ServerInterface.h>

@class HapticServer;

@interface HapticServerInstance : NSObject <ServerInterface> {

	HapticServer* _master;
	unsigned _clientID;

}

@property (readonly) HapticServer * master;              //@synthesize master=_master - In the implementation block
@property (readonly) unsigned clientID;                  //@synthesize clientID=_clientID - In the implementation block
-(void)doStopPrewarm:(shared_ptr<ClientEntry>*)arg1 ;
-(void)doStopRunning:(shared_ptr<ClientEntry>*)arg1 ;
-(void)doReleaseClientResources:(shared_ptr<ClientEntry>*)arg1 ;
-(long)doPrewarm:(shared_ptr<ClientEntry>*)arg1 ;
-(long)doStartRunning:(shared_ptr<ClientEntry>*)arg1 ;
-(void)getClientID:(/*^block*/id)arg1 ;
-(void)allocateClientResources:(/*^block*/id)arg1 ;
-(void)releaseClientResources;
-(void)requestChannels:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)setChannelEventBehavior:(unsigned)arg1 behavior:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)loadHapticPreset:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)loadHapticSequence:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)prepareHapticSequence:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)prewarm:(/*^block*/id)arg1 ;
-(void)startRunning:(/*^block*/id)arg1 ;
-(void)setDoneReply:(/*^block*/id)arg1 ;
-(id)initWithMasterAndID:(id)arg1 id:(unsigned)arg2 outError:(id*)arg3 ;
-(void)handleConnectionError;
-(void)stopRunning;
-(void)stopPrewarm;
-(unsigned)clientID;
-(HapticServer *)master;
@end
