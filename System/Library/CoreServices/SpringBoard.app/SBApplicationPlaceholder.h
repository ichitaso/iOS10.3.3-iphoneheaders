/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/FBApplicationPlaceholderObserver.h>
#import <SpringBoard/SBLeafIconDataSource.h>

@protocol SBApplicationPlaceholderDelegate;
@class FBApplicationPlaceholder, NSString, NSMutableDictionary, NSMutableSet;

@interface SBApplicationPlaceholder : NSObject <FBApplicationPlaceholderObserver, SBLeafIconDataSource> {

	FBApplicationPlaceholder* _placeholderProxy;
	id<SBApplicationPlaceholderDelegate> _delegate;
	NSString* _applicationBundleID;
	NSString* _applicationDisplayName;
	double _fractionProgress;
	char _installing;
	char _observingKVO;
	unsigned _installType;
	char _invalidated;
	NSMutableDictionary* _generatedIconImagesByKey;
	NSMutableSet* _formatsPendingGeneration;

}

@property (nonatomic,retain) FBApplicationPlaceholder * placeholderProxy;                       //@synthesize placeholderProxy=_placeholderProxy - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;                                      //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,copy) NSString * applicationDisplayName;                                   //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
@property (assign,nonatomic,__weak) id<SBApplicationPlaceholderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPrioritizable,nonatomic,readonly) char prioritizable; 
@property (getter=isPausable,nonatomic,readonly) char pausable; 
@property (getter=isCancelable,nonatomic,readonly) char cancelable; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundQueue;
-(id)icon:(id)arg1 imageWithFormat:(int)arg2 ;
-(unsigned)iconPriority:(id)arg1 ;
-(id)icon:(id)arg1 defaultImageWithFormat:(int)arg2 ;
-(char)iconCanEllipsizeLabel:(id)arg1 ;
-(char)iconCanTightenLabel:(id)arg1 ;
-(int)iconProgressState:(id)arg1 ;
-(float)iconProgressPercent:(id)arg1 ;
-(char)iconProgressIsPaused:(id)arg1 ;
-(id)iconBadgeNumberOrString:(id)arg1 ;
-(id)iconFormattedAccessoryString:(id)arg1 ;
-(int)iconAccessoryType:(id)arg1 ;
-(char)iconIsRecentlyUpdated:(id)arg1 ;
-(char)iconIsBeta:(id)arg1 ;
-(char)iconSupportsUninstall:(id)arg1 ;
-(char)iconCompleteUninstall:(id)arg1 ;
-(char)iconAllowsLaunch:(id)arg1 ;
-(char)icon:(id)arg1 launchFromLocation:(int)arg2 context:(id)arg3 ;
-(id)fetchIconImageWithFormat:(int)arg1 ;
-(void)setPlaceholderProxy:(FBApplicationPlaceholder *)arg1 ;
-(FBApplicationPlaceholder *)placeholderProxy;
-(void)setApplicationDisplayName:(NSString *)arg1 ;
-(void)_progressChanged;
-(void)_reloadThumbnailImage;
-(id)_getOrGenerateIconImageWithFormat:(int)arg1 ;
-(id)_iconImageKeyForBundleID:(id)arg1 format:(int)arg2 ;
-(void)_generateIconImageWithFormat:(int)arg1 ;
-(void)_generatePendingIconFormats;
-(char)_shouldDisplayAppName;
-(id)_downloadingLabel;
-(id)_defaultIconImageWithFormat:(int)arg1 ;
-(id)initWithPlaceholderProxy:(id)arg1 ;
-(void)iconChanged;
-(id)iconDisplayName:(id)arg1 forLocation:(int)arg2 ;
-(void)prioritize;
-(char)isPausable;
-(char)isPrioritizable;
-(unsigned)installType;
-(void)invalidate;
-(void)cancel;
-(void)setDelegate:(id<SBApplicationPlaceholderDelegate>)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id<SBApplicationPlaceholderDelegate>)delegate;
-(char)isActive;
-(void)resume;
-(void)pause;
-(NSString *)applicationBundleID;
-(char)isPaused;
-(char)isContentRestricted;
-(char)isCancelable;
-(void)placeholderPercentCompleteDidChange:(id)arg1 ;
-(void)placeholderPrioritizableDidChange:(id)arg1 ;
-(void)placeholderCancellabilityDidChange:(id)arg1 ;
-(void)placeholderPausabilityDidChange:(id)arg1 ;
-(void)placeholderInstallStateDidChange:(id)arg1 ;
-(void)placeholderInstallPhaseDidChange:(id)arg1 ;
-(void)placeholderDidChangeSignificantly:(id)arg1 ;
-(char)isDownloading;
-(char)isDone;
-(NSString *)applicationDisplayName;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(char)isFailed;
-(char)isInstalling;
@end

