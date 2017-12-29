/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ZoomWindow/ZoomWindow-Structs.h>
@class AXDispatchTimer;

@interface ZWCoalescedSettings : NSObject {

	CGRect _cachedZoomLensFrame;
	float _cachedZoomFactor;
	CGPoint _cachedZoomSlugPosition;
	CGPoint _cachedZoomPanOffset;
	AXDispatchTimer* _zoomLensFrameUpdateTimer;
	AXDispatchTimer* _zoomFactorUpdateTimer;
	AXDispatchTimer* _zoomPanOffsetUpdateTimer;
	AXDispatchTimer* _zoomSlugPositionUpdateTimer;

}

@property (nonatomic,retain) AXDispatchTimer * zoomLensFrameUpdateTimer;                 //@synthesize zoomLensFrameUpdateTimer=_zoomLensFrameUpdateTimer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * zoomFactorUpdateTimer;                    //@synthesize zoomFactorUpdateTimer=_zoomFactorUpdateTimer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * zoomPanOffsetUpdateTimer;                 //@synthesize zoomPanOffsetUpdateTimer=_zoomPanOffsetUpdateTimer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * zoomSlugPositionUpdateTimer;              //@synthesize zoomSlugPositionUpdateTimer=_zoomSlugPositionUpdateTimer - In the implementation block
@property (assign,nonatomic) CGRect zoomWindowFrame; 
@property (assign,nonatomic) float zoomFactor; 
@property (assign,nonatomic) CGPoint zoomPanOffset; 
@property (assign,nonatomic) CGPoint zoomSlugNormalizedPosition; 
@property (assign,nonatomic) char zoomInStandby; 
+(id)sharedInstance;
-(void)setZoomSlugPositionUpdateTimer:(AXDispatchTimer *)arg1 ;
-(AXDispatchTimer *)zoomLensFrameUpdateTimer;
-(void)setZoomLensFrameUpdateTimer:(AXDispatchTimer *)arg1 ;
-(AXDispatchTimer *)zoomFactorUpdateTimer;
-(void)setZoomFactorUpdateTimer:(AXDispatchTimer *)arg1 ;
-(AXDispatchTimer *)zoomPanOffsetUpdateTimer;
-(void)setZoomPanOffsetUpdateTimer:(AXDispatchTimer *)arg1 ;
-(AXDispatchTimer *)zoomSlugPositionUpdateTimer;
-(CGRect)zoomWindowFrame;
-(CGPoint)zoomPanOffset;
-(CGPoint)zoomSlugNormalizedPosition;
-(char)zoomInStandby;
-(void)setZoomInStandby:(char)arg1 ;
-(void)setZoomWindowFrame:(CGRect)arg1 ;
-(void)setZoomPanOffset:(CGPoint)arg1 ;
-(void)setZoomSlugNormalizedPosition:(CGPoint)arg1 ;
-(float)zoomFactor;
-(void)setZoomFactor:(float)arg1 ;
@end

