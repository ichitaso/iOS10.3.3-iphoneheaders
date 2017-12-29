/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CALayerHost;

@interface _UILayerHostView : UIView

@property (assign,nonatomic) unsigned contextID; 
@property (assign,nonatomic) char inheritsSecurity; 
@property (nonatomic,retain,readonly) CALayerHost * layerHost; 
+(Class)layerClass;
-(void)dealloc;
-(CALayerHost *)layerHost;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(unsigned)contextID;
-(void)setInheritsSecurity:(char)arg1 ;
-(char)inheritsSecurity;
-(void)_compensateForGlobalMediaTimeAdjustmentsIfNecessary;
-(void)_snapshotAdjustedMediaTiming:(id)arg1 ;
-(void)setContextID:(unsigned)arg1 ;
@end

