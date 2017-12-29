/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Applications/Applications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, AAPSyncPrimitiveAnchor, AAPSyncAnchor, NSSet, NSArray;

@interface AAPSyncState : NSObject <NSCopying, NSCoding> {

	NSString* _validity;
	int _version;
	AAPSyncPrimitiveAnchor* _keyAnchor;
	AAPSyncAnchor* _startAnchor;
	AAPSyncAnchor* _stopAnchor;
	NSSet* _apps;
	NSArray* _deletes;

}

@property (nonatomic,copy,readonly) NSString * validity;                             //@synthesize validity=_validity - In the implementation block
@property (nonatomic,readonly) int version;                                          //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) AAPSyncPrimitiveAnchor * keyAnchor;              //@synthesize keyAnchor=_keyAnchor - In the implementation block
@property (nonatomic,copy,readonly) AAPSyncAnchor * startAnchor;                     //@synthesize startAnchor=_startAnchor - In the implementation block
@property (nonatomic,copy,readonly) AAPSyncAnchor * stopAnchor;                      //@synthesize stopAnchor=_stopAnchor - In the implementation block
@property (nonatomic,copy,readonly) NSSet * apps;                                    //@synthesize apps=_apps - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletes;                               //@synthesize deletes=_deletes - In the implementation block
-(AAPSyncAnchor *)stopAnchor;
-(id)initWithValidity:(id)arg1 version:(int)arg2 keyAnchor:(id)arg3 startAnchor:(id)arg4 stopAnchor:(id)arg5 apps:(id)arg6 deletes:(id)arg7 ;
-(AAPSyncPrimitiveAnchor *)keyAnchor;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)version;
-(void)_validate;
-(NSArray *)deletes;
-(NSSet *)apps;
-(AAPSyncAnchor *)startAnchor;
-(NSString *)validity;
@end

