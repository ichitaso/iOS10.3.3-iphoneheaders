/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAnimationPath.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>

@class NSSet, NSMutableSet, NSString;

@interface MCAnimationPathCombo : MCAnimationPath <MCAnimationPathSupport> {

	NSMutableSet* mAnimationPaths;
	NSString* mCombineOperation;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned countOfAnimationPaths; 
@property (copy) NSString * combineOperation; 
-(void)demolish;
-(void)removeAllAnimationPaths;
-(NSSet *)animationPaths;
-(id)animationPathForKey:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(unsigned)countOfAnimationPaths;
-(void)setCombineOperation:(NSString *)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(NSString *)combineOperation;
-(id)imprint;
@end

