/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CABackdropLayer : CALayer

@property (getter=isEnabled) char enabled; 
@property (copy) NSString * groupName; 
@property (assign) float scale; 
@property (assign) CGRect backdropRect; 
@property (assign) float marginWidth; 
@property (assign) char disablesOccludedBackdropBlurs; 
@property (assign) char captureOnly; 
@property (copy) NSString * statisticsType; 
@property (assign) double statisticsInterval; 
@property (__weak) id<CABackdropLayerDelegate><CALayerDelegate> delegate; 
+(id)defaultValueForKey:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)_hasRenderLayerSubclass;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(CGRect)backdropRect;
-(char)captureOnly;
-(void)setBackdropRect:(CGRect)arg1 ;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setDisablesOccludedBackdropBlurs:(char)arg1 ;
-(void)setCaptureOnly:(char)arg1 ;
-(void)setStatisticsInterval:(double)arg1 ;
-(double)statisticsInterval;
-(void)setStatisticsType:(NSString *)arg1 ;
-(id)statisticsValues;
-(char)disablesOccludedBackdropBlurs;
-(NSString *)statisticsType;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(float)marginWidth;
-(void)setMarginWidth:(float)arg1 ;
@end
