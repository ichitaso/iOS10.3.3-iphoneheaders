/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MPEffectSupport
@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming; 
@required
-(void)removeAllSlides;
-(id)effectAttributes;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(NSString *)effectID;
-(void)addSlides:(id)arg1;
-(void)removeSlidesAtIndices:(id)arg1;
-(void)removeTextsAtIndices:(id)arg1;
-(NSObject*<MZEffectTiming>)effectTiming;
-(void)setEffectID:(id)arg1;
-(void)insertSlides:(id)arg1 atIndex:(int)arg2;
-(void)insertSecondarySlides:(id)arg1 atIndex:(int)arg2;
-(void)removeSecondarySlidesAtIndices:(id)arg1;
-(void)insertTexts:(id)arg1 atIndex:(int)arg2;
-(void)setEffectAttributes:(id)arg1;
-(void)addSecondarySlides:(id)arg1;
-(void)addTexts:(id)arg1;
-(void)removeAllSecondarySlides;
-(void)removeAllTexts;
-(void)setPresetID:(id)arg1;
-(NSString *)presetID;
-(id)secondarySlides;
-(void)setRandomSeed:(int)arg1;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(int)arg2;
-(void)addSecondarySlide:(id)arg1;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(int)arg2;
-(double)mainDuration;
-(NSArray *)slides;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2;
-(id)effectAttributeForKey:(id)arg1;
-(NSArray *)texts;
-(int)randomSeed;
-(void)addText:(id)arg1;
-(void)addSlide:(id)arg1;

@end

