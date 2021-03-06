/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPFrameManager : NSObject {

	NSMutableDictionary* mFrames;
	NSMutableDictionary* mCategories;

}
+(void)releaseSharedManager;
+(void)loadFrameManagerWithPaths:(id)arg1 ;
+(id)sharedManager;
-(id)descriptionForFrameID:(id)arg1 ;
-(id)attributesForFrameID:(id)arg1 andPresetID:(id)arg2 ;
-(id)constraintsForFramesMatchingList:(id)arg1 andCriteria:(id)arg2 ;
-(id)randomFrameFromList:(id)arg1 abidingWithConstraints:(id)arg2 ;
-(id)localizedFrameNameForFrameID:(id)arg1 ;
-(id)allFrameIDs;
-(id)categoryIDsForFrameID:(id)arg1 ;
-(id)framesForCategoryID:(id)arg1 ;
-(id)versionOfFrameID:(id)arg1 ;
-(id)allCategoryIDs;
-(id)localizedCategoryNameFromCategoryID:(id)arg1 ;
-(void)dealloc;
-(id)initWithPaths:(id)arg1 ;
@end

