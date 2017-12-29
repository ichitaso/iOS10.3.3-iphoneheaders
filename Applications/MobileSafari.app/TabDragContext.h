/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/DragContext.h>

@class BrowserController, TabDocument, TabBar, TabBarItem, TabOverviewItem, TabOverview;

@interface TabDragContext : DragContext {

	int _sourceType;
	BrowserController* _sourceBrowserController;
	TabDocument* _sourceTabDocument;
	TabBar* _sourceTabBar;
	TabBarItem* _sourceTabBarItem;
	TabOverviewItem* _sourceTabOverviewItem;
	TabOverview* _sourceTabOverview;
	int _initialTabBarDragType;

}

@property (nonatomic,readonly) int sourceType;                                           //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) BrowserController * sourceBrowserController;              //@synthesize sourceBrowserController=_sourceBrowserController - In the implementation block
@property (nonatomic,readonly) TabDocument * sourceTabDocument;                          //@synthesize sourceTabDocument=_sourceTabDocument - In the implementation block
@property (nonatomic,readonly) TabBar * sourceTabBar;                                    //@synthesize sourceTabBar=_sourceTabBar - In the implementation block
@property (nonatomic,readonly) TabBarItem * sourceTabBarItem;                            //@synthesize sourceTabBarItem=_sourceTabBarItem - In the implementation block
@property (nonatomic,readonly) TabOverviewItem * sourceTabOverviewItem;                  //@synthesize sourceTabOverviewItem=_sourceTabOverviewItem - In the implementation block
@property (nonatomic,readonly) TabOverview * sourceTabOverview;                          //@synthesize sourceTabOverview=_sourceTabOverview - In the implementation block
@property (nonatomic,readonly) int initialTabBarDragType;                                //@synthesize initialTabBarDragType=_initialTabBarDragType - In the implementation block
+(id)tabBarDragContextWithSourceView:(id)arg1 startPoint:(CGPoint)arg2 tabDocument:(id)arg3 tabBarItem:(id)arg4 initialDragType:(int)arg5 ;
+(id)tabOverviewDragContextWithSourceView:(id)arg1 startPoint:(CGPoint)arg2 anchorPoint:(CGPoint)arg3 zPosition:(float)arg4 tabDocument:(id)arg5 tabOverviewItem:(id)arg6 ;
-(Class)dragInteractionDriverClass;
-(TabBar *)sourceTabBar;
-(TabBarItem *)sourceTabBarItem;
-(TabOverviewItem *)sourceTabOverviewItem;
-(TabOverview *)sourceTabOverview;
-(TabDocument *)sourceTabDocument;
-(int)initialTabBarDragType;
-(BrowserController *)sourceBrowserController;
-(id)initWithSourceView:(id)arg1 startPoint:(CGPoint)arg2 anchorPoint:(CGPoint)arg3 zPosition:(float)arg4 tabDocument:(id)arg5 tabBarItem:(id)arg6 tabOverviewItem:(id)arg7 initialTabBarDragType:(int)arg8 ;
-(int)sourceType;
@end

