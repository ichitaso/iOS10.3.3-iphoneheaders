/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface MPTransition : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _attributes;
	id _parent;
	NSString* _transitionID;
	NSString* _presetID;
	double _duration;
	char _isRandom;
	int _randomSeed;

}

@property (nonatomic,copy) NSString * transitionID;              //@synthesize transitionID=_transitionID - In the implementation block
@property (nonatomic,copy) NSString * presetID;                  //@synthesize presetID=_presetID - In the implementation block
@property (assign,nonatomic) double duration;                    //@synthesize duration=_duration - In the implementation block
+(id)transitionWithTransitionID:(id)arg1 ;
-(void)setTransitionAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)transitionAttributes;
-(void)setTransitionAttributes:(id)arg1 ;
-(void)setTransitionID:(NSString *)arg1 ;
-(id)initWithTransitionID:(id)arg1 ;
-(NSString *)transitionID;
-(void)copyVars:(id)arg1 ;
-(id)fullDebugLog;
-(void)applyFormattedAttributes;
-(id)formattedAttributes;
-(void)setPresetID:(NSString *)arg1 ;
-(NSString *)presetID;
-(void)setRandomSeed:(int)arg1 ;
-(id)transitionAttributeForKey:(id)arg1 ;
-(id)convertMPAttributeToMCAttribute:(id)arg1 withKey:(id)arg2 ;
-(id)transitionPresetID;
-(void)copyAttribures:(id)arg1 ;
-(void)setIsRandom:(char)arg1 ;
-(double)findMaxDuration;
-(char)isRandom;
-(id)_transitionAttributes;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parentContainer;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(int)randomSeed;
-(void)dump;
-(id)parentDocument;
@end

