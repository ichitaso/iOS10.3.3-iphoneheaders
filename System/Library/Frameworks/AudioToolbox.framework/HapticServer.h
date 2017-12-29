/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface HapticServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	ServerManager* _manager;
	map<int, std::__1::bitset<255>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::bitset<255> > > >* _processIndexMap;
	unsigned _initCount;
	unsigned _prewarmCount;
	unsigned _runningCount;
	unsigned _runningChannelIDCount;

}

@property (readonly) unsigned initCount;                            //@synthesize initCount=_initCount - In the implementation block
@property (readonly) ServerManager* manager;                        //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(shared_ptr<ClientEntry>*)entryWithID:(unsigned)arg1 ;
-(void)removeProcessEntry:(unsigned)arg1 ;
-(char)incrementInit:(id*)arg1 ;
-(unsigned)incrementPrewarmCount;
-(void)decrementPrewarmCount;
-(unsigned)incrementRunningCount;
-(void)decrementRunningCount:(/*^block*/id)arg1 ;
-(void)decrementInit;
-(unsigned)getChannelID;
-(long)startPrewarm;
-(long)playVibePattern:(CFDictionaryRef)arg1 gain:(float)arg2 synchronizer:(SSPlayerSynchronizerRef)arg3 flags:(unsigned long)arg4 atTime:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(long)cancelPatternWithOptions:(CFDictionaryRef)arg1 ;
-(long)loadSynthPreset;
-(unsigned)addProcessEntry:(int)arg1 ;
-(long)setupClient:(shared_ptr<ClientEntry>*)arg1 ;
-(unsigned)initCount;
-(id)init;
-(void)dealloc;
-(long)stopPrewarm;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(ServerManager*)manager;
@end

