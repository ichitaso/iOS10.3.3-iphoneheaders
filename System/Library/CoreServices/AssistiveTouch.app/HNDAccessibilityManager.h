/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/AXElementFetcherDelegate.h>
#import <assistivetouchd/AXElementFetcherObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, AXDispatchTimer, AXElementFetcher, NSString, NSMutableArray, NSDate, AXElementGroup, AXElement, NSArray;

@interface HNDAccessibilityManager : NSObject <AXElementFetcherDelegate, AXElementFetcherObserver> {

	NSObject*<OS_dispatch_queue> _appTransitionQueue;
	NSObject*<OS_dispatch_queue> _ignoredTouchRegionsQueue;
	NSMutableDictionary* _pauseCountsByPid;
	char _isPausingScanning;
	AXObserverRef _observer;
	AXDispatchTimer* _elementFetchQueueTimer;
	AXElementFetcher* _elementFetcher;
	NSString* _springboardActionIdentifier;
	NSMutableArray* _accessibilityObservers;
	NSDate* _lastAppTransitionTime;
	AXElementGroup* _rootScannerGroup;
	AXElement* _axOrbPreviewWindow;
	NSArray* _currentApplications;
	NSArray* _ignoredTouchRegions;

}

@property (assign,nonatomic) AXObserverRef observer;                                //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) AXElementFetcher * elementFetcher;                     //@synthesize elementFetcher=_elementFetcher - In the implementation block
@property (nonatomic,retain) NSString * springboardActionIdentifier;                //@synthesize springboardActionIdentifier=_springboardActionIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessibilityObservers;               //@synthesize accessibilityObservers=_accessibilityObservers - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * elementFetchQueueTimer;              //@synthesize elementFetchQueueTimer=_elementFetchQueueTimer - In the implementation block
@property (nonatomic,readonly) char _isGroupingEnabled; 
@property (nonatomic,readonly) char _isScannerEnabled; 
@property (nonatomic,readonly) char _isSpeechEnabled; 
@property (nonatomic,retain) NSDate * lastAppTransitionTime;                        //@synthesize lastAppTransitionTime=_lastAppTransitionTime - In the implementation block
@property (assign,nonatomic) char isPausingScanning;                                //@synthesize isPausingScanning=_isPausingScanning - In the implementation block
@property (nonatomic,retain) AXElementGroup * rootScannerGroup;                     //@synthesize rootScannerGroup=_rootScannerGroup - In the implementation block
@property (nonatomic,retain) NSArray * currentApplications;                         //@synthesize currentApplications=_currentApplications - In the implementation block
@property (nonatomic,retain) NSArray * ignoredTouchRegions;                         //@synthesize ignoredTouchRegions=_ignoredTouchRegions - In the implementation block
@property (nonatomic,retain) AXElement * axOrbPreviewWindow;                        //@synthesize axOrbPreviewWindow=_axOrbPreviewWindow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(char)applicationIsRTL;
-(void)refreshElements;
-(id)orbPreviewWindow;
-(void)setAxOrbPreviewWindow:(AXElement *)arg1 ;
-(AXElement *)axOrbPreviewWindow;
-(AXElementFetcher *)elementFetcher;
-(void)setElementFetcher:(AXElementFetcher *)arg1 ;
-(void)setAccessibilityObservers:(NSMutableArray *)arg1 ;
-(void)setElementFetchQueueTimer:(AXDispatchTimer *)arg1 ;
-(void)setLastAppTransitionTime:(NSDate *)arg1 ;
-(void)setRootScannerGroup:(AXElementGroup *)arg1 ;
-(char)_isGroupingEnabled;
-(char)_isScannerEnabled;
-(char)_isSpeechEnabled;
-(char)_elementFetchingRequired;
-(char)_isElementInIgnoredTouchRegions:(id)arg1 ;
-(NSMutableArray *)accessibilityObservers;
-(void)_enableApplicationAccessibility:(char)arg1 ;
-(void)_handleRefreshEvent:(int)arg1 ;
-(void)setSpringboardActionIdentifier:(NSString *)arg1 ;
-(NSString *)springboardActionIdentifier;
-(void)_notifyObserversDidReceiveEvent:(int)arg1 ;
-(NSDate *)lastAppTransitionTime;
-(AXElementGroup *)rootScannerGroup;
-(void)setIsPausingScanning:(char)arg1 ;
-(id)_currentAppPids;
-(void)_requestPauseScanning;
-(void)_requestResumeScanning;
-(id)scrollViewsForAction:(int)arg1 elementsToScroll:(id*)arg2 ;
-(id)firstScannerGroupable;
-(id)lastScannerGroupable;
-(id)firstScannerElement;
-(id)lastScannerElement;
-(id)_itemForScanningWithElementCommunity:(id)arg1 useFirst:(char)arg2 ;
-(id)_itemForScanningFromItem:(id)arg1 inDirection:(char)arg2 didWrap:(char*)arg3 ;
-(int)_hndAccessibilityEventForFetchEvent:(unsigned)arg1 ;
-(void)setCurrentApplications:(NSArray *)arg1 ;
-(char)isPausingScanning;
-(CGRect)screenFrame:(id)arg1 ;
-(void)updateCachedOrbPreviewWindow:(id)arg1 ;
-(void)_handleFirstResponderChanged;
-(void)_handleSystemServerDied;
-(char)frontmostAppMayBeLoading;
-(char)hasZeroElements;
-(void)_handleLayoutChanged;
-(void)_handleAlertAppeared;
-(void)_handleOrientationChanged;
-(void)_handleScreenChanged;
-(void)_handleScreenLocked;
-(void)_handleScrolledByPage;
-(void)_handleKeyboardPopupAppeared;
-(id)_pauseReasonForPid:(int)arg1 ;
-(void)_handlePauseForPid:(int)arg1 ;
-(void)_handleResumeForPid:(int)arg1 ;
-(id)rootKeyboardGroup;
-(id)scrollViewsForAction:(int)arg1 ;
-(id)firstItemForScanningWithElementCommunity:(id)arg1 ;
-(id)lastItemForScanningWithElementCommunity:(id)arg1 ;
-(id)nextItemForScanningFromItem:(id)arg1 didWrap:(char*)arg2 ;
-(id)previousItemForScanningFromItem:(id)arg1 didWrap:(char*)arg2 ;
-(id)firstKeyboardItem;
-(id)scannerElementMatchingElement:(id)arg1 ;
-(void)groupingEnabledDidChange;
-(void)speechEnabledDidChange;
-(void)userDidPerformSwitchAction;
-(AXDispatchTimer *)elementFetchQueueTimer;
-(NSArray *)ignoredTouchRegions;
-(void)_initializeAccessibility;
-(void)setIgnoredTouchRegions:(NSArray *)arg1 ;
-(void)_observeNotifications:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(id)elements;
-(id)firstResponder;
-(void)removeObserver:(id)arg1 ;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(void)setObserver:(AXObserverRef)arg1 ;
-(AXObserverRef)observer;
-(NSArray *)currentApplications;
-(id)nativeFocusElement;
-(char)isFetchingElements;
-(void)fetcher:(id)arg1 willFetchElementsForEvent:(unsigned)arg2 fromApplications:(id)arg3 ;
-(void)fetcher:(id)arg1 nativeFocusElementDidChange:(id)arg2 ;
-(void)fetcher:(id)arg1 updateElementVisuals:(id)arg2 ;
-(void)fetcher:(id)arg1 applicationWasActivated:(id)arg2 ;
-(void)fetcher:(id)arg1 mediaDidBegin:(CFDataRef)arg2 ;
-(void)fetcher:(id)arg1 didFetchElementsForEvent:(unsigned)arg2 foundNewElements:(char)arg3 ;
-(void)fetcher:(id)arg1 didScheduleFetchEvent:(unsigned)arg2 ;
-(char)isSystemSleeping:(id)arg1 ;
-(void)_notifyObserversNativeFocusElementDidChange:(id)arg1 ;
-(void)_notifyObserversUpdateElementVisuals:(id)arg1 ;
-(void)_notifyObserversApplicationWasActivated:(id)arg1 ;
-(void)_notifyObserversMediaDidBegin:(CFDataRef)arg1 ;
-(void)_notifyObserversDidScheduleFetchEvent:(int)arg1 ;
-(void)_notifyObserversWillFetchElementsForEvent:(int)arg1 ;
-(void)_notifyObserversDidFetchElementsForEvent:(int)arg1 foundNewElements:(char)arg2 ;
-(id)findGroupableMatchingGroupable:(id)arg1 ;
-(char)willFetchElements;
@end

