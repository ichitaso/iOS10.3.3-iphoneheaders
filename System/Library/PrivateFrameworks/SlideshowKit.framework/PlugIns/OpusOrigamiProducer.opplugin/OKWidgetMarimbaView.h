/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetEditable.h>
#import <OpusOrigamiProducer/MPAssetKeyDelegate.h>
#import <OpusOrigamiProducer/MRMarimbaViewInteractionDelegate.h>
#import <libobjc.A.dylib/OKPresentationLiveUpdateSupport.h>
#import <OpusOrigamiProducer/MRRenderingDelegate.h>

@protocol OS_dispatch_queue;
@class MRMarimbaView, MPDocument, NSMutableDictionary, NSAttributedString, NSString, NSDictionary, OKMediaFeeder, NSObject, OFUIButton, OKPresentationPage, OKPresentationViewController, MRMarimbaLayer;

@interface OKWidgetMarimbaView : OKWidgetView <OKWidgetEditable, MPAssetKeyDelegate, MRMarimbaViewInteractionDelegate, OKPresentationLiveUpdateSupport, MRRenderingDelegate> {

	MRMarimbaView* _marimbaView;
	MPDocument* _landscapeMarimbaDocument;
	MPDocument* _portraitMarimbaDocument;
	NSMutableDictionary* _marimbaOptions;
	NSAttributedString* _attributedTitle;
	NSString* _title;
	NSDictionary* _attributedSubtitles;
	NSDictionary* _subtitles;
	NSDictionary* _durations;
	char _autoplay;
	char _loop;
	char _gotoPosterFrame;
	OKMediaFeeder* _mediaFeeder;
	unsigned _currentFeederIndex;
	char _forceLive;
	NSObject*<OS_dispatch_queue> _serialQueue;
	char _needsBuildingDocument;
	OFUIButton* _videoPlayButton;
	double _slideshowTimeAtLastUnload;
	char _authoringIsOutsourced;
	char _isBouncing;
	char _shouldResumeAtBounceEnd;

}

@property (nonatomic,retain) OKPresentationPage * page; 
@property (nonatomic,readonly) OKPresentationViewController * presentationViewController; 
@property (assign,nonatomic) char isBouncing;                                                          //@synthesize isBouncing=_isBouncing - In the implementation block
@property (assign,nonatomic) char shouldResumeAtBounceEnd;                                             //@synthesize shouldResumeAtBounceEnd=_shouldResumeAtBounceEnd - In the implementation block
@property (readonly) MRMarimbaLayer * marimbaLayer; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hudIsOn; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(char)slideshowShouldWrap;
-(void)renderer:(id)arg1 renderingTimeLogMessage:(id)arg2 withTimestamp:(double)arg3 ;
-(MRMarimbaLayer *)marimbaLayer;
-(char)marimbaViewCanInteract:(id)arg1 ;
-(id)absolutePathForAssetKey:(id)arg1 ;
-(CGSize)resolutionForAssetKey:(id)arg1 ;
-(id)attributeForKey:(id)arg1 forAssetKey:(id)arg2 withOptions:(id)arg3 ;
-(id)detectRegionsOfInterestForAssetKey:(id)arg1 ;
-(id)absolutePathForAssetKey:(id)arg1 andSize:(CGSize)arg2 ;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 thumbnailIfPossible:(char)arg4 now:(char)arg5 ;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 ;
-(id)avAssetForAssetKey:(id)arg1 ;
-(void)slideshowDidEnd:(id)arg1 ;
-(void)playSlideshow:(id)arg1 ;
-(void)navigatorBounceStart:(id)arg1 ;
-(void)navigatorBounceEnd:(id)arg1 ;
-(id)_mediaPropertiesForMediaURL:(id)arg1 ;
-(void)_updateMarimbaDocument;
-(void)warmup:(char)arg1 ;
-(void)navigateToMediaWithIndex:(unsigned)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)navigateToTextWithIndex:(unsigned)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_restartSlideshowWithCompletion:(/*^block*/id)arg1 ;
-(id)attributesforAssetPath:(id)arg1 ;
-(id)attributedSubtitles;
-(void)setSettingAttributedSubtitles:(id)arg1 ;
-(void)setSettingSubtitles:(id)arg1 ;
-(char)settingGotoPosterFrame;
-(void)setSettingGotoPosterFrame:(char)arg1 ;
-(id)settingAttributedTitle;
-(void)setSettingAttributedTitle:(id)arg1 ;
-(void)setSettingTitle:(id)arg1 ;
-(id)subtitles;
-(id)settingMediaFeeder;
-(void)setSettingDurations:(id)arg1 ;
-(void)setSettingDocuments:(id)arg1 ;
-(void)setSettingForceLive:(char)arg1 ;
-(void)setSettingMediaFeeder:(id)arg1 ;
-(id)settingUrls;
-(id)settingTitle;
-(void)pauseSlideshow:(id)arg1 ;
-(char)isBouncing;
-(void)setIsBouncing:(char)arg1 ;
-(char)shouldResumeAtBounceEnd;
-(void)setShouldResumeAtBounceEnd:(char)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(char)prepareForDisplay:(char)arg1 ;
-(void)play;
-(void)instantPause;
-(id)durations;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setSettingUrls:(id)arg1 ;
-(char)settingAutoplay;
-(void)setSettingAutoplay:(char)arg1 ;
-(char)settingLoop;
-(void)setSettingLoop:(char)arg1 ;
-(id)settingStyle;
-(void)setSettingStyle:(id)arg1 ;
-(char)prepareForWarmup:(char)arg1 ;
-(char)prepareForUnload:(char)arg1 ;
-(void)instantResume;
-(void)presentationDidLiveUpdate;
-(char)supportsReadiness;
-(void)setSettingTransition:(id)arg1 ;
-(void)setSettingInteractiveTransitionSettings:(id)arg1 ;
-(void)setAntialiasing:(char)arg1 ;
-(double)remainingPlayDuration;
-(char)endAllEditing:(char)arg1 ;
-(void)setSettingSeed:(unsigned)arg1 ;
-(id)settingTransition;
-(id)initWithWidget:(id)arg1 ;
@end

