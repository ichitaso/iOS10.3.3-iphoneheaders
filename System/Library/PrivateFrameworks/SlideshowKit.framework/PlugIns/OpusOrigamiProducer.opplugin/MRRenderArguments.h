/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRRenderer, NSOperationQueue, NSDictionary;

@interface MRRenderArguments : NSObject {

	MRRenderer* _renderer;
	NSOperationQueue* _preloadQueue;
	NSDictionary* _forcedState;
	double _unalteredTime;
	double _displayLinkTimestamp;
	float _morphingProgress;
	int _thumbnailPolicy;
	unsigned char _currentLayoutIndex;
	char _isPreloading;
	char _freezesSizeOfImageRequests;
	char _skipsAnimations;
	char _timeWasSet;

}

@property (retain) NSOperationQueue * preloadQueue;               //@synthesize preloadQueue=_preloadQueue - In the implementation block
@property (assign) double unalteredTime;                          //@synthesize unalteredTime=_unalteredTime - In the implementation block
@property (assign) double displayLinkTimestamp;                   //@synthesize displayLinkTimestamp=_displayLinkTimestamp - In the implementation block
@property (assign) float morphingProgress;                        //@synthesize morphingProgress=_morphingProgress - In the implementation block
@property (assign) int thumbnailPolicy;                           //@synthesize thumbnailPolicy=_thumbnailPolicy - In the implementation block
@property (assign) unsigned char currentLayoutIndex;              //@synthesize currentLayoutIndex=_currentLayoutIndex - In the implementation block
@property (assign) char freezesSizeOfImageRequests;               //@synthesize freezesSizeOfImageRequests=_freezesSizeOfImageRequests - In the implementation block
@property (assign) char timeWasSet;                               //@synthesize timeWasSet=_timeWasSet - In the implementation block
@property (retain,readonly) MRRenderer * renderer;                //@synthesize renderer=_renderer - In the implementation block
@property (retain) NSDictionary * forcedState;                    //@synthesize forcedState=_forcedState - In the implementation block
@property (readonly) char isPreloading;                           //@synthesize isPreloading=_isPreloading - In the implementation block
@property (assign,nonatomic) char skipsAnimations;                //@synthesize skipsAnimations=_skipsAnimations - In the implementation block
-(NSDictionary *)forcedState;
-(NSOperationQueue *)preloadQueue;
-(void)setThumbnailPolicy:(int)arg1 ;
-(void)setSkipsAnimations:(char)arg1 ;
-(void)setUnalteredTime:(double)arg1 ;
-(void)setMorphingProgress:(float)arg1 ;
-(void)setDisplayLinkTimestamp:(double)arg1 ;
-(int)thumbnailPolicy;
-(void)setForcedState:(NSDictionary *)arg1 ;
-(void)setTimeWasSet:(char)arg1 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(unsigned char)currentLayoutIndex;
-(void)setFreezesSizeOfImageRequests:(char)arg1 ;
-(char)timeWasSet;
-(char)skipsAnimations;
-(id)initWithRenderer:(id)arg1 ;
-(void)setPreloadQueue:(NSOperationQueue *)arg1 ;
-(id)copyForPreloading;
-(char)freezesSizeOfImageRequests;
-(double)displayLinkTimestamp;
-(char)isPreloading;
-(float)morphingProgress;
-(double)unalteredTime;
-(void)dealloc;
-(void)cleanup;
-(MRRenderer *)renderer;
@end
