/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIFocusMapArea;
@class UIScreen, _UIFocusedItemRegion, NSArray, _UIFocusMapSnapshotDebugInfo;

@interface _UIFocusMapSnapshot : NSObject <NSCopying> {

	UIScreen* _screen;
	id<_UIFocusMapArea> _searchArea;
	_UIFocusedItemRegion* _focusedRegion;
	NSArray* _regionContainers;
	NSArray* _rawFocusRegions;
	NSArray* _rawOccludedFocusRegions;
	NSArray* _focusRegions;

}

@property (getter=_debugInfo,nonatomic,readonly) _UIFocusMapSnapshotDebugInfo * debugInfo; 
@property (assign,nonatomic,__weak) UIScreen * screen;                                                  //@synthesize screen=_screen - In the implementation block
@property (nonatomic,retain) id<_UIFocusMapArea> searchArea;                                            //@synthesize searchArea=_searchArea - In the implementation block
@property (nonatomic,copy) _UIFocusedItemRegion * focusedRegion;                                        //@synthesize focusedRegion=_focusedRegion - In the implementation block
@property (nonatomic,copy) NSArray * regionContainers;                                                  //@synthesize regionContainers=_regionContainers - In the implementation block
@property (nonatomic,copy) NSArray * rawFocusRegions;                                                   //@synthesize rawFocusRegions=_rawFocusRegions - In the implementation block
@property (nonatomic,copy) NSArray * rawOccludedFocusRegions;                                           //@synthesize rawOccludedFocusRegions=_rawOccludedFocusRegions - In the implementation block
@property (nonatomic,copy) NSArray * focusRegions;                                                      //@synthesize focusRegions=_focusRegions - In the implementation block
-(UIScreen *)screen;
-(_UIFocusedItemRegion *)focusedRegion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)focusRegions;
-(id<_UIFocusMapArea>)searchArea;
-(id)_debugInfo;
-(id)debugQuickLookObject;
-(id)_debugInfoWithFocusMapSearchInfo:(id)arg1 ;
-(void)setScreen:(UIScreen *)arg1 ;
-(void)setFocusedRegion:(_UIFocusedItemRegion *)arg1 ;
-(id)_initWithSearchArea:(id)arg1 inScreen:(id)arg2 ;
-(NSArray *)regionContainers;
-(NSArray *)rawFocusRegions;
-(NSArray *)rawOccludedFocusRegions;
-(id)filteredFocusRegionsUsingBlock:(/*^block*/id)arg1 ;
-(void)setSearchArea:(id<_UIFocusMapArea>)arg1 ;
-(void)setRegionContainers:(NSArray *)arg1 ;
-(void)setRawFocusRegions:(NSArray *)arg1 ;
-(void)setRawOccludedFocusRegions:(NSArray *)arg1 ;
-(void)setFocusRegions:(NSArray *)arg1 ;
@end

