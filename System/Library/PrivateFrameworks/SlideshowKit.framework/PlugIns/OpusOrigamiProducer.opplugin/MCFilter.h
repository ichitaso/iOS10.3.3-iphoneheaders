/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSSet, NSDictionary;

@interface MCFilter : MCObject <MCAnimationPathSupport> {

	NSMutableDictionary* mAttributes;
	NSMutableSet* mAnimationPaths;
	unsigned mIndex;
	NSString* mFilterID;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned countOfAnimationPaths; 
@property (copy) NSString * filterID; 
@property (copy) NSDictionary * attributes; 
@property (assign,nonatomic) unsigned index; 
-(void)demolish;
-(void)removeAllAnimationPaths;
-(NSSet *)animationPaths;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(unsigned)countOfAnimationPaths;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(unsigned)index;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(void)setFilterID:(NSString *)arg1 ;
-(NSString *)filterID;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)imprint;
@end

