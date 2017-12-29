/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVCallbackCancellationAVKVOIntrospection;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVPropertyStorage, AVPixelBufferAttributeMediator, NSObject, AVAudioSessionMediaPlayerOnly, AVPlayerItem, NSMutableSet, NSArray, NSMutableDictionary, AVAudioSession, AVOutputContext, NSMutableArray, NSHashTable, NSError, NSString, NSDictionary;

@interface AVPlayerInternal : NSObject {

	AVWeakReference* weakReference;
	AVPropertyStorage* propertyStorage;
	AVPixelBufferAttributeMediator* pixelBufferAttributeMediator;
	NSObject*<OS_dispatch_queue> stateDispatchQueue;
	NSObject*<OS_dispatch_queue> figConfigurationQueue;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	NSObject*<OS_dispatch_queue> currentItemPropertyUpdateQueue;
	NSObject*<OS_dispatch_queue> layersQ;
	OpaqueCMTimebaseRef proxyTimebase;
	char logPerformanceData;
	AVAudioSessionMediaPlayerOnly* audioSessionMediaPlayerOnly;
	void* IAPDCallbackToken;
	OpaqueFigSimpleMutexRef prerollIDMutex;
	NSObject*<OS_dispatch_queue> configurationQueue;
	AVPlayerItem* currentItem;
	AVPlayerItem* lastItem;
	NSMutableSet* items;
	NSArray* queueModifications;
	NSMutableDictionary* pendingFigPlayerProperties;
	AVAudioSession* audioSession;
	AVOutputContext* outputContext;
	char IOwnTheFigPlayer;
	CFDictionaryRef videoLayers;
	NSMutableArray* subtitleLayers;
	NSMutableArray* closedCaptionLayers;
	NSHashTable* avPlayerLayers;
	int nextPrerollIDToGenerate;
	int pendingPrerollID;
	/*^block*/id prerollCompletionHandler;
	id<AVCallbackCancellation><AVKVOIntrospection> currentItemSuppressesVideoLayersCallbackInvoker;
	id<AVCallbackCancellation><AVKVOIntrospection> currentItemPreferredPixelBufferAttributesCallbackInvoker;
	OpaqueFigPlayerRef figPlayer;
	int status;
	NSError* error;
	OpaqueFigPlaybackItemRef figPlaybackItemToIdentifyNextCurrentItem;
	char needsToCreateFigPlayer;
	NSString* externalPlaybackVideoGravity;
	NSDictionary* cachedFigMediaSelectionCriteriaProperty;
	NSArray* itemsInFigPlayQueue;
	NSArray* expectedAssetTypes;
	char reevaluateBackgroundPlayback;
	char hostApplicationInForeground;
	char hadAssociatedOnscreenPlayerLayerWhenSuspended;
	NSDictionary* vibrationPattern;
	OpaqueCMClockRef figMasterClock;
	char autoSwitchStreamVariants;
	char preparesItemsForPlaybackAsynchronously;
	char allowsOutOfBandTextTrackRendering;
	char shouldReduceResourceUsage;
	NSString* multichannelAudioStrategy;
	char automaticallyWaitsToMinimizeStalling;
	char usesLegacyAutomaticWaitingBehavior;
	char usesDedicatedNotificationQueueForMediaServices;
	CGSize dimensionsOfReservedVideoMemory;
	NSArray* displaysUsedForPlayback;
	NSString* ancillaryPerformanceInformationForDisplay;

}
@end

