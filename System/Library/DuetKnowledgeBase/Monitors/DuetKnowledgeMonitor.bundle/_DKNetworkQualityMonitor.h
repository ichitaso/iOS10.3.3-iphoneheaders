/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/NWNetworkOfInterestManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NWNetworkOfInterestManager, NWNetworkOfInterest, _CDContextualKeyPath;

@interface _DKNetworkQualityMonitor : _DKMonitor <NWNetworkOfInterestManagerDelegate> {

	char _initialized;
	char _enabled;
	NSArray* _noiKeyPaths;
	NSObject*<OS_dispatch_queue> _noiManagerQueue;
	NWNetworkOfInterestManager* _noiManager;
	NWNetworkOfInterest* _noi;
	int _previousQuality;
	int _interfaceType;
	_CDContextualKeyPath* _qualityKeyPath;
	_CDContextualKeyPath* _predictedQualityKeyPath;
	_CDContextualKeyPath* _discretionaryInvitedKeyPath;

}

@property (nonatomic,retain) NSArray * noiKeyPaths;                                           //@synthesize noiKeyPaths=_noiKeyPaths - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> noiManagerQueue;                    //@synthesize noiManagerQueue=_noiManagerQueue - In the implementation block
@property (nonatomic,retain) NWNetworkOfInterestManager * noiManager;                         //@synthesize noiManager=_noiManager - In the implementation block
@property (nonatomic,retain) NWNetworkOfInterest * noi;                                       //@synthesize noi=_noi - In the implementation block
@property (assign,nonatomic) int previousQuality;                                             //@synthesize previousQuality=_previousQuality - In the implementation block
@property (assign,nonatomic) int interfaceType;                                               //@synthesize interfaceType=_interfaceType - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * qualityKeyPath;                           //@synthesize qualityKeyPath=_qualityKeyPath - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * predictedQualityKeyPath;                  //@synthesize predictedQualityKeyPath=_predictedQualityKeyPath - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * discretionaryInvitedKeyPath;              //@synthesize discretionaryInvitedKeyPath=_discretionaryInvitedKeyPath - In the implementation block
@property (assign,nonatomic) char initialized;                                                //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) char enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
+(id)entitlements;
-(void)setNoiManager:(NWNetworkOfInterestManager *)arg1 ;
-(NWNetworkOfInterestManager *)noiManager;
-(void)setNoiKeyPaths:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)noiManagerQueue;
-(void)setPreviousQuality:(int)arg1 ;
-(NSArray *)noiKeyPaths;
-(_CDContextualKeyPath *)discretionaryInvitedKeyPath;
-(int)previousQuality;
-(void)setPredictedQualityKeyPath:(_CDContextualKeyPath *)arg1 ;
-(void)setDiscretionaryInvitedKeyPath:(_CDContextualKeyPath *)arg1 ;
-(id)predictionTimelineFromNOIPredictions:(id)arg1 ;
-(void)updateInstantQuality;
-(void)updatePredictionAsync;
-(void)setQualityKeyPath:(_CDContextualKeyPath *)arg1 ;
-(void)setNoi:(NWNetworkOfInterest *)arg1 ;
-(_CDContextualKeyPath *)predictedQualityKeyPath;
-(NWNetworkOfInterest *)noi;
-(id)initForInterfaceType:(int)arg1 qualityKeyPath:(id)arg2 predictedQualityKeyPath:(id)arg3 discretionaryInvitedPath:(id)arg4 ;
-(_CDContextualKeyPath *)qualityKeyPath;
-(void)setNoiManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)synchronouslyReflectCurrentValue;
-(id)loadState;
-(char)initialized;
-(void)setInterfaceType:(int)arg1 ;
-(int)interfaceType;
-(void)saveState;
-(void)setInitialized:(char)arg1 ;
-(void)didStopTrackingNOI:(id)arg1 ;
-(void)didStartTrackingNOI:(id)arg1 ;
-(void)didStopTrackingAllNOIs:(id)arg1 ;
@end

