/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBReusableViewMap.h>
#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>
#import <SpringBoard/SBIconViewObserver.h>

@protocol SBIconViewMapDelegate, SBIconViewDelegate;
@class UIScreen, SBIconModel, NSMapTable, _UILegibilitySettings, NSString;

@interface SBIconViewMap : SBReusableViewMap <SBIconObserver, SBIconIndexNodeObserver, SBIconViewObserver> {

	UIScreen* _screen;
	SBIconModel* _model;
	NSMapTable* _iconViewsForIcons;
	id<SBIconViewMapDelegate> _delegate;
	id<SBIconViewDelegate> _viewDelegate;
	NSMapTable* _labelsForIcons;
	NSMapTable* _lightLegibilityImagesForIcons;
	NSMapTable* _darkLegibilityImagesForIcons;
	NSMapTable* _accessoryImagesForIcons;
	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,readonly) UIScreen * screen;                                     //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) SBIconModel * iconModel;                               //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)recycleViewForIcon:(id)arg1 ;
-(void)tryToReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)purgeIconFromMap:(id)arg1 ;
-(id)initWithIconModel:(id)arg1 screen:(id)arg2 delegate:(id)arg3 viewDelegate:(id)arg4 ;
-(id)extraIconViewForIcon:(id)arg1 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(SBIconModel *)iconModel;
-(void)iconViewDidChangeLocation:(id)arg1 ;
-(void)_modelWillRemoveIcon:(id)arg1 ;
-(void)_modelWillReloadIcons;
-(void)_modelWillLayoutIconState;
-(void)_modelDidLayoutIconState;
-(void)recycleAndPurgeAll;
-(id)_iconViewForIcon:(id)arg1 ;
-(void)_addIconView:(id)arg1 forIcon:(id)arg2 ;
-(void)_recycleIconView:(id)arg1 ;
-(void)_cacheImagesForIcon:(id)arg1 ;
-(void)_cacheLabelImagesForIcon:(id)arg1 location:(int)arg2 ;
-(void)_cacheAccessoryImagesForIcon:(id)arg1 location:(int*)arg2 ;
-(void)_observeIconAndCacheIfNecessary:(id)arg1 ;
-(id)newViewOfClass:(Class)arg1 ;
-(void)recycleIconView:(id)arg1 ;
-(void)purgeRecycledIconViewsForClass:(Class)arg1 ;
-(id)mappedIconViewForIcon:(id)arg1 ;
-(id)iconViewForIcon:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(UIScreen *)screen;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)allIcons;
@end

