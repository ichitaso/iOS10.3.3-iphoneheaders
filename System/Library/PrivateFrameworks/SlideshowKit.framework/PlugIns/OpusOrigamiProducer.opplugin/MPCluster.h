/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSString, NSMutableDictionary;

@interface MPCluster : NSObject {

	NSMutableArray* mSlides;
	NSMutableSet* mPathsInCluster;
	NSString* mName;
	float mRating;
	NSMutableDictionary* mUsageCounterPerLayer;

}

@property (retain) NSMutableArray * items; 
@property (copy) NSString * name; 
@property (assign) float rating; 
@property (retain) NSMutableDictionary * usageCounterPerLayer; 
-(void)removeAllSlides;
-(void)resetAllUsageCounters;
-(char)clusterContainsSlideAtPath:(id)arg1 ;
-(id)allSlidesSortedChronologically;
-(id)usageCountDescription;
-(void)setUsageCounterPerLayer:(NSMutableDictionary *)arg1 ;
-(id)allSlides;
-(void)setUsageCountForLayer:(id)arg1 to:(float)arg2 ;
-(NSMutableDictionary *)usageCounterPerLayer;
-(id)allSlidesSortedByUser;
-(float)usageCountForLayer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)detailedDescription;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(void)addSlide:(id)arg1 ;
-(int)slideCount;
@end

