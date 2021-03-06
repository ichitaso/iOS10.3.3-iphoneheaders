/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class iAP2Connection, NSObject, NSMutableDictionary, NSDictionary, MPMediaLibrary, MPRadioLibrary, iAP2MediaLibraryInfo;

@interface iAP2MediaLibrary : NSObject {

	iAP2Connection* connection;
	NSObject*<OS_dispatch_queue> libraryInfoUpdateQ;
	NSMutableDictionary* libraryList;
	NSDictionary* _libraries;
	MPMediaLibrary* _deviceMediaLibrary;
	MPRadioLibrary* _mpRadioLibrary;
	BOOL _enableLibraryInfoUpdate;
	BOOL _isShuttingDown;
	BOOL _radioIsEnabled;
	BOOL _subscribedToAppleMusic;
	BOOL _isSubscribedToAppleMusic;
	iAP2MediaLibraryInfo* _deviceLibrary;
	iAP2MediaLibraryInfo* _radioLibrary;

}

@property (assign,nonatomic) BOOL isSubscribedToAppleMusic;                                  //@synthesize isSubscribedToAppleMusic=_isSubscribedToAppleMusic - In the implementation block
@property (nonatomic,readonly) iAP2Connection * connection; 
@property (nonatomic,readonly) BOOL isShuttingDown;                                          //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> libraryInfoUpdateQ; 
@property (nonatomic,readonly) NSMutableDictionary * libraryList; 
@property (nonatomic,readonly) iAP2MediaLibraryInfo * deviceLibrary;                         //@synthesize deviceLibrary=_deviceLibrary - In the implementation block
@property (nonatomic,readonly) iAP2MediaLibraryInfo * radioLibrary;                          //@synthesize radioLibrary=_radioLibrary - In the implementation block
@property (nonatomic,readonly) BOOL radioIsEnabled;                                          //@synthesize radioIsEnabled=_radioIsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL subscribedToAppleMusic;                                  //@synthesize subscribedToAppleMusic=_subscribedToAppleMusic - In the implementation block
+(id)__getMediaLibraryFromConnectionID:(unsigned)arg1 ;
+(BOOL)allowCachedTracksForAppleMusic;
+(BOOL)isMusicAppVisible;
-(void)shuttingDown;
-(void)startSendingMediaLibraryInfomationUpdates;
-(void)stopSendingMediaLibraryInfomationUpdates;
-(NSObject*<OS_dispatch_queue>)libraryInfoUpdateQ;
-(NSMutableDictionary *)libraryList;
-(BOOL)subscribedToAppleMusic;
-(char)isGeniusMixesSupported;
-(BOOL)radioIsEnabled;
-(iAP2MediaLibraryInfo *)radioLibrary;
-(BOOL)isSubscribedToAppleMusic;
-(void)setIsSubscribedToAppleMusic:(BOOL)arg1 ;
-(void)_mediaLibrariesAvailableChanged:(id)arg1 ;
-(void)_updateSubscribedToAppleMusicStatus:(BOOL)arg1 ;
-(void)_updateMediaLibraryInfomationUpdates:(BOOL)arg1 ;
-(void)_handleSubscribedToAppleMusicChanged:(id)arg1 ;
-(void)_handlMediaLibraryNeedFilterChange:(id)arg1 ;
-(void)_setupNewLibraries:(id)arg1 ;
-(BOOL)_checkForDifferentRadioLibrary;
-(BOOL)_checkForDifferentMediaLibraries;
-(void)_sendLibraryInfoList;
-(iAP2MediaLibraryInfo *)deviceLibrary;
-(void)dealloc;
-(id)description;
-(iAP2Connection *)connection;
-(BOOL)isShuttingDown;
-(id)initWithConnection:(id)arg1 ;
@end

