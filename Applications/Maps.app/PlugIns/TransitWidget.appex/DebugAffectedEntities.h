/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitIncidentEntity.h>

@class NSSet, NSString;

@interface DebugAffectedEntities : NSObject <GEOTransitIncidentEntity> {

	unsigned long long _muid;

}

@property (nonatomic,readonly) unsigned long long muid;              //@synthesize muid=_muid - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasNextStopIDs; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
-(id)initWithMuid:(unsigned long long)arg1 ;
-(unsigned long long)muid;
-(char)hasNextStopIDs;
-(NSSet *)nextStopIDs;
@end

