/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <mediaremoted/mediaremoted-Structs.h>
@class MRDAVRoutingDataSource;

@interface MRDVolumeController : NSObject {

	char _volumeWarningEnabled;
	MRDAVRoutingDataSource* _routingDataSource;
	float _currentVolume;
	float _volumeLimit;
	unsigned _warningState;

}

@property (nonatomic,readonly) MRDAVRoutingDataSource * routingDataSource;              //@synthesize routingDataSource=_routingDataSource - In the implementation block
@property (nonatomic,readonly) float currentVolume;                                     //@synthesize currentVolume=_currentVolume - In the implementation block
@property (nonatomic,readonly) char volumeWarningEnabled;                               //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) float volumeLimit;                                       //@synthesize volumeLimit=_volumeLimit - In the implementation block
@property (assign,nonatomic) unsigned warningState;                                     //@synthesize warningState=_warningState - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithRoutingDataSource:(id)arg1 ;
-(char)setVolume:(float)arg1 error:(id*)arg2 ;
-(char)adjustVolumeWithStepAmount:(float)arg1 error:(id*)arg2 ;
-(MRDAVRoutingDataSource *)routingDataSource;
-(float)currentVolume;
-(float)volumeLimit;
-(unsigned)warningState;
-(void)setWarningState:(unsigned)arg1 ;
-(void)dealloc;
-(char)volumeWarningEnabled;
@end
