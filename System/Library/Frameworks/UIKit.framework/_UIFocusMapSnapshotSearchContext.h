/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIFocusRegionSearchContext.h>

@class UIScreen, _UIFocusMapSnapshotOptions, NSMutableArray, NSString;

@interface _UIFocusMapSnapshotSearchContext : NSObject <_UIFocusRegionSearchContext> {

	char _hasResultsContainer;
	char _isSearchingResultsContainer;
	_UIFocusMapSnapshotOptions* _options;
	NSMutableArray* _focusRegionContainers;
	NSMutableArray* _allFocusRegions;
	NSMutableArray* _resultFocusRegions;

}

@property (nonatomic,copy,readonly) _UIFocusMapSnapshotOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSMutableArray * focusRegionContainers;                 //@synthesize focusRegionContainers=_focusRegionContainers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allFocusRegions;                       //@synthesize allFocusRegions=_allFocusRegions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * resultFocusRegions;                    //@synthesize resultFocusRegions=_resultFocusRegions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIScreen * screen; 
@property (nonatomic,readonly) id<_UIFocusMapArea> searchArea; 
-(UIScreen *)screen;
-(id<_UIFocusMapArea>)searchArea;
-(void)addRegion:(id)arg1 ;
-(void)addRegionsInContainers:(id)arg1 ;
-(_UIFocusMapSnapshotOptions *)options;
-(void)addRegionsInContainer:(id)arg1 ;
-(void)addRegions:(id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)addRegionsInRootContainer;
-(NSMutableArray *)focusRegionContainers;
-(NSMutableArray *)allFocusRegions;
-(NSMutableArray *)resultFocusRegions;
@end

