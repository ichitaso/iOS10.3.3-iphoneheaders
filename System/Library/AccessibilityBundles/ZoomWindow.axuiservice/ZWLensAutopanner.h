/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZWLensAutopannerDataSource, ZWLensAutopannerDelegate;
#import <ZoomWindow/ZoomWindow-Structs.h>
@class CADisplayLink;

@interface ZWLensAutopanner : NSObject {

	char _automovingLens;
	id<ZWLensAutopannerDataSource> _dataSource;
	id<ZWLensAutopannerDelegate> _delegate;
	CADisplayLink* _displayLinkTimer;

}

@property (nonatomic,retain) CADisplayLink * displayLinkTimer;                              //@synthesize displayLinkTimer=_displayLinkTimer - In the implementation block
@property (assign,getter=isAutomovingLens,nonatomic) char automovingLens;                   //@synthesize automovingLens=_automovingLens - In the implementation block
@property (assign,nonatomic,__weak) id<ZWLensAutopannerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<ZWLensAutopannerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)_beginAutomovingZoomLens;
-(void)_endAutomovingZoomLens;
-(char)isAutomovingLens;
-(void)setAutomovingLens:(char)arg1 ;
-(CADisplayLink *)displayLinkTimer;
-(void)_handleDisplayLinkTimerDidFire:(id)arg1 ;
-(void)setDisplayLinkTimer:(CADisplayLink *)arg1 ;
-(CGPoint)_lensMovementDeltaForOffset:(CGPoint)arg1 ;
-(void)setDataSource:(id<ZWLensAutopannerDataSource>)arg1 ;
-(void)setDelegate:(id<ZWLensAutopannerDelegate>)arg1 ;
-(id<ZWLensAutopannerDataSource>)dataSource;
-(id<ZWLensAutopannerDelegate>)delegate;
-(void)stop;
-(void)start;
@end

