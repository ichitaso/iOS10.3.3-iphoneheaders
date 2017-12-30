/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MRLiveSlideshowDelegate, MRAsynchronousOperationsDelegate;
#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRContext, NSObject, NSThread, NSConditionLock, MRRenderArguments, NSMutableArray, NSMutableDictionary, NSMutableSet, MRLayerEffect, NSString, MRImage, NSDictionary, MRLayerParallelizer, MRLayerNavigator, MRSlideFocusState, NSArray;

@interface MRRendererInternal : NSObject {

	MRContext* mContext;
	double mMasterStartTime;
	double mMasterDuration;
	int mMasterMode;
	NSObject*<OS_dispatch_queue> mRenderDispatchQueue;
	NSThread* mRenderThread;
	NSObject*<OS_dispatch_queue> mRenderDispatchQueueCopyForRenderThread;
	NSConditionLock* mFrameLock;
	double mTimeOffset;
	double mUnalteredTimeOffset;
	double mMasterClock;
	char mIsStalled;
	char mRenderingRequested;
	char mSlaveFrameMode;
	CGPoint mContextOffset;
	MRRenderArguments* mRenderArguments;
	CGImageRef mSnapshotAsCGImage;
	NSConditionLock* mSnapshotAsCGImageLock;
	int mPreviousMode;
	double mModeChangeTime;
	NSMutableArray* mSelectedLayers;
	NSMutableDictionary* mLayerTrackings;
	NSMutableSet* mLayersCurrentlyTrackedIn;
	NSMutableDictionary* mGestureRecognizers;
	MRLayerEffect* mLayerCurrentlyTextEditing;
	NSString* mCurrentlyEditedTextElement;
	char mShouldPauseWhenStill;
	char mNeedsToResize;
	char mNeedsToTemporaryResize;
	char mNeedsToResumeOrPauseLayers;
	char mNeedsToSynchronizeTimeInLayers;
	char mNeedsToSynchronizeTimeInAudioMovies;
	CGSize mTemporarySize;
	double mMorphingStartTime;
	double mMorphingDuration;
	double mMorphingProgress;
	float mMorphingRotationAngle;
	char mMorphingHandlesRotation;
	MRImage* mSnapshotForMorphing;
	NSMutableArray* mActions;
	NSDictionary* mDefaultActions;
	NSString* mTransitionLayerPlugObjectID;
	MRLayerParallelizer* mSlideFocusLayer;
	MRLayerNavigator* mSlideFocusNavigator;
	MRLayerEffect* mSlideFocuser[3];
	unsigned mCurrentSlideFocuserIndex;
	MRSlideFocusState* mSlideFocusState;
	NSMutableDictionary* mAudioPlayerBuckets;
	NSArray* mAudioPlayerSortedBuckets;
	id<MRLiveSlideshowDelegate> mLiveSlideshowDelegate;
	id<MRAsynchronousOperationsDelegate> mAsynchronousOperationsDelegate;
	char mScreenBurnTest;
	unsigned long long mScreenBurnTestCurrentPass;
	MRImage* mScreenBurnTestAccumulationImage1;
	MRImage* mScreenBurnTestAccumulationImage2;
	NSMutableArray* mNavigatorHistoryBack;
	NSMutableArray* mNavigatorHistoryForth;
	char mHideTextWhileEditing;
	double mFrameTime[64];
	unsigned long mFrameTimeIndex;
	_sFILE* mRenderingLogFile;
	char mRespondsToLogDelegateMethod;
	double mPreviousLogTime;
	double mLastSavedLogTime;
	NSString* mCurrentIDs;
	MRImage* mCurrentIDsImage;
	NSString* mPreviousCurrentIDs;
	double mOuterTime;
	int mTimeSyncRequestCount;
	int mIsPlayingSyncRequestCount;
	char mOuterIsPlaying;
	char mInnerIsPlaying;
	unsigned mCountOfPreloadingImages;
	NSMutableArray* mTouchesForVisualFeedback;
	NSMutableArray* mHitZonesForVisualFeedback;
	char mUsesExternalDisplayLink;

}
@end
