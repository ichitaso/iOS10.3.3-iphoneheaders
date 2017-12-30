/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:41:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ComponentControl.h>
#import <ThermalMonitor/tGraphDataSource.h>

@interface CpuCC : ComponentControl <tGraphDataSource> {

	unsigned long kDVD1Level;
	int listIDPos;
	unsigned host;
	host_cpu_load_info currCpu;
	host_cpu_load_info prevCpu;
	float powerScale;
	float timeActive;
	BOOL _useDirectMap;
	unsigned long _minReachableLoadIndex;
	float _directMapSlope;
	float _directMapIntercept;

}

@property (assign,nonatomic) BOOL useDirectMap;                                //@synthesize useDirectMap=_useDirectMap - In the implementation block
@property (assign,nonatomic) unsigned long minReachableLoadIndex;              //@synthesize minReachableLoadIndex=_minReachableLoadIndex - In the implementation block
@property (assign,nonatomic) float directMapSlope;                             //@synthesize directMapSlope=_directMapSlope - In the implementation block
@property (assign,nonatomic) float directMapIntercept;                         //@synthesize directMapIntercept=_directMapIntercept - In the implementation block
-(BOOL)useDirectMap;
-(float)directMapSlope;
-(int)numberOfFields;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(void)refreshCurrentLoadingIndex;
-(id)initWithParams:(CFDictionaryRef)arg1 powerScale:(float)arg2 listID:(int)arg3 ;
-(unsigned long)getUserUsage;
-(void)refreshCurrentLoadingIndexUsingPID;
-(BOOL)usesPID;
-(unsigned long)minReachableLoadIndex;
-(void)setDirectMapIntercept:(float)arg1 ;
-(void)setMinReachableLoadIndex:(unsigned long)arg1 ;
-(float)directMapIntercept;
-(void)setDirectMapSlope:(float)arg1 ;
-(void)setUseDirectMap:(BOOL)arg1 ;
-(void)defaultAction;
@end
